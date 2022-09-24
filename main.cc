//Partners: Voss, Sayre, Heins, Henson
//Bullet Points:
//Extra Credit:
//URL to cover art and music:

/* Includes */
#include "task.h"
#include <vector>
using namespace std;

/* Global Declarations */
const auto [ROWS, COLS] = get_terminal_size();
const double MAP_BORDER_X = 0.70;
const double MAP_BORDER_Y = 0.75;
const double TASK_BORDER_X = 1.00 - MAP_BORDER_X;
const double TASK_BORDER_Y =  MAP_BORDER_Y;
const double INVENTORY_BORDER_X = 1.00;
const double INVENTORY_BORDER_Y = 1.00 - MAP_BORDER_Y;
const int LOSE_CONDITION = 3;
int tasksLost = 0;

/* Declare Map */
vector<string> world_map = {
	"**************************************************************",
	"*------------------------------------------------------------*",
	"*  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==*",
	"*------------------------------------------------------------*",
	"*                                                            *",
	"*        ?              (Front Yard)                         *",
	"*                                                            *",
	"*+---------+----[  ]-----------------+---+/////[      ]/////+*",
	"*|(Kitchen)|              |(Bathroom)|[]                    |*",
	"*|        /               |          |[]                    |*",
	"*|       /                | #        |                      |*",
	"*|      ^                 |          |                      |*",
	"*|      v                 |          |                      |*",
	"*|      |                 |          |       (Garage)       |*",
	"*|------+          -------+---[ ]----+-[ ]------------------+*",
	"*|                                          (Hall way)      |*",
	"*|            /----[ ]----+---[ ]----+-[ ]------------------+*",
	"*|           /            |          |                      |*",
	"*+--[ ]-----+   (not a)   |       %  |   (Master Bedroom)   |*",
	"*|          |  (man cave) |          |                      |*",
	"*|          |             | (Office) |                      |*",
	"*|          +-------------+----------+------------------[ ]-+*",
	"*|   &                                                      |*",
	"*|                       (Back Yard)                        |*",
	"*|                                               $          |*",
	"*+----------------------------------------------------------+*",
	"**************************************************************"
};

/* Declare Task & Inventory Related Vectors */
vector<string> tasks = {"(%) Build Ikea Bookshelf", "(#) Unclog toilet", "(?) Mow Lawn", "(&) Get rid of hornet nest","($) BBQ burgers for dinner"};
vector<int> completedTask(5);
vector<string> inventory(0);

int failedAttempts = 0;

/* Bottom File Function Declarations */
void dialog(string toPrint); 
void preExit(); 
void print_screen(); 
void tooSmall();
bool screenSizeBad(); 

//Map
void checkLocation(auto row, auto col) ;
char get_world_location(size_t current_row, size_t current_col); 
void set_world_location(size_t current_row, size_t current_col, char c); 

void print_status(int max_x, int max_y, int start_y) {
	movecursor(start_y, max_x - 45);
	cout << "Task Status:" << endl;
	movecursor(++start_y, max_x - 45);
	cout << MAGENTA << "You have failed " << tasksLost << " / " << LOSE_CONDITION << " max before you lose." << RESET << endl;
}

void print_inventory() {
	int inventory_literal_x = COLS * INVENTORY_BORDER_X;
	int x_start = 0;

	int inventory_literal_y = ROWS * INVENTORY_BORDER_Y;
	int y_start = ROWS - inventory_literal_y;

	int OGcontentStartX = x_start + 3;
	int OGcontentStartY = y_start + 2;

	movecursor(0, 0);
	movecursor(y_start, x_start);
	vector<vector<char>> border(inventory_literal_y, vector<char>(inventory_literal_x));


	for (int i = 0; i < inventory_literal_y; i++) {
		for (int j = 0; j < inventory_literal_x; j++) {
			if (i == 0 or i == inventory_literal_y - 1) {
				border.at(i).at(j) = '-';
			} else if (j == 0 or j == inventory_literal_x - 1) {
				border.at(i).at(j) = '|';
			} else {
				border.at(i).at(j) = ' ';
			}
		}
	}


	for (int i = 0; i < inventory_literal_y; i++) {
		for (int j = 0; j < inventory_literal_x; j++) {
			cout << border.at(i).at(j);
		}
		y_start++;
		movecursor(y_start, x_start);
	}


	string toPrint = "- ";
	int contentStartX = OGcontentStartX, contentStartY = OGcontentStartY;
	movecursor(contentStartY, contentStartX);
	cout << "Inventory:";
	cout.flush();
	contentStartY += 1;
	movecursor(contentStartY, contentStartX);

	for (size_t i = 0; i < inventory.size(); i++) {
		if (contentStartY >= ROWS - 3) {
			contentStartY = OGcontentStartY;
			contentStartX += 30;
		}
		toPrint += inventory.at(i); 
		cout << GREEN << toPrint << RESET;
		cout.flush();
		toPrint = "- ";
		contentStartY += 1;
		movecursor(contentStartY, contentStartX);
	}
	print_status(inventory_literal_x, inventory_literal_y, OGcontentStartY);
}


void print_task_list() {
	int task_literal_x = COLS * TASK_BORDER_X;
	int x_start = COLS - task_literal_x;

	int task_literal_y = ROWS * TASK_BORDER_Y;
	int y_start = 0;
	movecursor(0, 0);
	movecursor(y_start, x_start);

	vector<vector<char>> border(task_literal_y, vector<char>(task_literal_x));

	for (int i = 0; i < task_literal_y; i++) {
		for (int j = 0; j < task_literal_x; j++) {
			if (i == 0 or i == task_literal_y - 1) {
				border.at(i).at(j) = '-';
			} else if (j == 0 or j == task_literal_x - 1) {
				border.at(i).at(j) = '|';
			} else {
				border.at(i).at(j) = ' ';
			}
		}
	}

	int borderStartX = x_start;
	int borderStartY = y_start;
	for (int i = 0; i < task_literal_y; i++) {
		for (int j = 0; j < task_literal_x; j++) {
			cout << border.at(i).at(j);
		}
		if (i == 0) {
			borderStartY += 2;
			movecursor(borderStartY, borderStartX);
		} else {
			borderStartY++;
			movecursor(borderStartY, borderStartX);
		}
	}

	string toPrint = "- ";
	int contentStartX = x_start + 3;
	int contentStartY = y_start + 2;

	movecursor(contentStartY, contentStartX);
	cout << "Task List:";
	contentStartY += 1;
	movecursor(contentStartY, contentStartX);

	for (size_t i = 0; i < tasks.size(); i++) {
		toPrint += tasks.at(i); 
		if(completedTask.at(i) == 0) cout << WHITE << toPrint << RESET;
		else if(completedTask.at(i) == 2) cout << GREEN << toPrint << RESET;
		else cout << RED << toPrint << RESET;
		toPrint = "- ";
		contentStartY += 1;
		movecursor(contentStartY, contentStartX);
	}
}

void print_map_border() {
	int map_literal_x = COLS * MAP_BORDER_X;
	int x_start = 0;

	int map_literal_y = ROWS * MAP_BORDER_Y;
	int y_start = 0;

	vector<vector<char>> border(map_literal_y, vector<char>(map_literal_x));


	for (int i = 0; i < map_literal_y; i++) {
		for (int j = 0; j < map_literal_x; j++) {
			if (i == 0 or i == map_literal_y - 1) {
				border.at(i).at(j) = '-';
			} else if (j == 0 or j == map_literal_x - 1) {
				border.at(i).at(j) = '|';
			} else {
				border.at(i).at(j) = ' ';
			}
		}
	}

	for (int i = 0; i < map_literal_y; i++) {
		for (int j = 0; j < map_literal_x; j++) {
			cout << border.at(i).at(j);
		}
		if (i == 0) {
			y_start += 2;
			movecursor(y_start, x_start);
		} else {
			y_start++;
			movecursor(y_start, x_start);
		}
	}

}



void print_world(size_t player_row, size_t player_col) {
	int map_border_x = COLS * MAP_BORDER_X;
	int map_border_y = ROWS * MAP_BORDER_Y;

	int x_start = (map_border_x - world_map.at(0).size()) / 2;
	int y_start = (map_border_y - world_map.size()) / 2;

	for (size_t row = 0; row < world_map.size(); row++) {
		movecursor(y_start + row, x_start);
		for (size_t col = 0; col < world_map.at(row).size(); col++) {
			if (row == player_row and col == player_col) cout << BOLDCYAN << '@' << RESET;
			else if (world_map.at(row).at(col) == '*') cout << BLUE << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '=') cout << BOLDYELLOW << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '%') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '#') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '?') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '&') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '$') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '[') cout << BOLDGREEN << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == ']') cout << BOLDGREEN << world_map.at(row).at(col) << RESET;
			else cout << world_map.at(row).at(col);
		}
		cout << endl;
	}
}

void addInventoryItem(string inv) {
	inventory.push_back(inv);

	return;
}


void Intro() {
	show_cursor(false);
	clearscreen();
	dialog("Welcome to Dad Bod");
	usleep(3'000'000);
	return;
}

int main() {
	if (screenSizeBad()) tooSmall();

	Intro();

	print_screen();
	const int MAP_ROW = world_map.size();
	const int MAP_COL = world_map.at(0).size(); //ROWS > MAP_ROW
	const int FPS = 60;
	int current_row = MAP_ROW/2, current_col = MAP_COL/2;//row to current_row
	int last_row = -1, last_col = -1;
	set_raw_mode(true);
	show_cursor(false);
	while (true) {
		int c = toupper(quick_read());
		if (completedTask.at(0) == 2 and completedTask.at(1) == 2 and completedTask.at(2) == 2 and completedTask.at(3) == 2 and completedTask.at(4) == 2) {
			//Add combat this is filler
			clearscreen();
			dialog("You win! Congratulations!");
			usleep(2'000'000);
			break;
		}
		if (tasksLost >= LOSE_CONDITION) {
			clearscreen();
			dialog("Sorry, but I guess you just are not Dad Bod enough. Better luck next time!");
			usleep(2'500'000);
			break;
		}
		if (c == 'Q') break;
		if (c == 'W' or c == UP_ARROW) current_row--;
		if (c == 'S' or c == DOWN_ARROW) current_row++;
		if (c == 'A' or c == LEFT_ARROW) current_col--;
		if (c == 'D' or c == RIGHT_ARROW) current_col++;
		if (c == '\n') {
			checkLocation(current_row, current_col);
			current_col++;
			print_world(current_row,current_col);
		}
		current_col = clamp(current_col, 1, MAP_COL - 2);
		current_row = clamp(current_row, 1, MAP_ROW - 2);
		if (!(current_row == last_row and current_col == last_col)) {
			print_world(current_row,current_col);
			last_row = current_row;
			last_col = current_col;
		}	
		usleep(1'000'000/FPS);
	}
	preExit();
}

void dialog(string toPrint) {
	movecursor(ROWS/2, (COLS - toPrint.size()) /2);
	system(("echo " + toPrint + " | lolcat").c_str());

}

void print_screen() {
	movecursor(0,0);
	clearscreen();
	print_map_border();
	print_task_list();
	print_inventory();
}

bool screenSizeBad() {
	int mapSizeY = world_map.size(), mapSizeX = world_map.at(0).size();
	int mapBorderSizeY = ROWS * MAP_BORDER_Y, mapBorderSizeX = COLS * MAP_BORDER_X;

	if (mapSizeY > mapBorderSizeY or mapSizeX > mapBorderSizeX) return true;
	else return false;
}

void preExit() {
	clearscreen();
	set_raw_mode(false);
	show_cursor(true);
	movecursor(0,0);
	cout << RESET;
	exit(0);

}

void tooSmall() {
	clearscreen();
	dialog("Please make your terminal window bigger and try again.");
	usleep(2'500'000);
	preExit();
}

char get_world_location(size_t current_row, size_t current_col) {
	if (current_row >= world_map.size()) return ' ';
	if (current_col >= world_map.at(current_row).size()) return ' ';
	return world_map.at(current_row).at(current_col);
}

void set_world_location(size_t current_row, size_t current_col, char c) {
	if (current_row >= world_map.size()) return;
	if (current_col >= world_map.at(current_row).size()) return;
	world_map.at(current_row).at(current_col) = c;
}

void raw_mode_off(){
	set_raw_mode(false);
	show_cursor(true);
	cout << RESET;
}
void raw_mode_on(int taskNum, int row, int col){
	if(completedTask.at(taskNum) == 2) world_map.at(row).at(col) = ' ';
	set_raw_mode(true);
	show_cursor(false);
	print_screen();
}

void checkLocation(auto row, auto col) {
	char currLoc = world_map.at(row).at(col);
	if (currLoc == '%') {
		completedTask.at(0);
		raw_mode_off();	
		completedTask.at(0) = ikeaBook();
		if (completedTask.at(0) == 1) tasksLost++;
		else if (completedTask.at(0) == 2) addInventoryItem("This is item 1.");
		raw_mode_on(0, row, col);
		return;
	}
	else if (currLoc == '#'){ 
		completedTask.at(1);
		raw_mode_off();	
		completedTask.at(1) = toiletClog();
		if (completedTask.at(1) == 1) tasksLost++;
		else if (completedTask.at(1) == 2) addInventoryItem("This is item 2.");
		raw_mode_on(1, row, col);
		return;
	}
	else if (currLoc == '?') {
		completedTask.at(2);
		raw_mode_off();	
		completedTask.at(2) = mowLawn();
		if (completedTask.at(2) == 1) tasksLost++;
		else if (completedTask.at(2) == 2) addInventoryItem("This is item 3.");
		raw_mode_on(2, row, col);
		return;
	}
	else if (currLoc == '&') {
		completedTask.at(3);
		raw_mode_off();	
		completedTask.at(3) = hornetNest();
		if (completedTask.at(3) == 1) tasksLost++;
		else if (completedTask.at(3) == 2) addInventoryItem("This is item 4.");
		raw_mode_on(3, row, col);
		return;
	}
	else if (currLoc == '$') {
		completedTask.at(4);
		raw_mode_off();	
		completedTask.at(4) = bbq();
		if (completedTask.at(4) == 1) tasksLost++;
		else if (completedTask.at(4) == 2) addInventoryItem("This is item 5.");
		raw_mode_on(4, row, col);
		return;
	}
	print_task_list();
	return;
}
