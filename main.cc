//Fill out this comment with your names and which bullet points you did
//Partners: Sayre, Voss, Heins
//Bullet Points:
//Extra Credit:
//URL to cover art and music:

#include "/public/read.h"
#include "/public/colors.h"
#include <iostream>
#include <vector>
using namespace std;

const auto [ROWS, COLS] = get_terminal_size();
const double MAP_BORDER_X = 0.70;
const double MAP_BORDER_Y = 0.75;
const double TASK_BORDER_X = 1.00 - MAP_BORDER_X;
const double TASK_BORDER_Y =  MAP_BORDER_Y;
const double INVENTORY_BORDER_X = 1.00;
const double INVENTORY_BORDER_Y = 1.00 - MAP_BORDER_Y;


vector<string> world_map = {
/*
	"********************************************",
	"* r                                        *",
	"* r                                        *",
	"* r                                        *",
	"* r     x                 z                *",
	"* r                                        *",
	"* r                                        *",
	"* r     |               r                  *",
	"* r     |                                  *",
	"* r                      z                 *",
	"* r      TT                                *",
	"* r                          |             *",
	"* r                            |           *",
	"* r                            |           *",
	"* r                                        *",
	"* r                                        *",
	"********************************************
};

*/

"**************************************************************",
"*------------------------------------------------------------*",
"*  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==*",
"*------------------------------------------------------------*",
"*                                                            *",
"*                       (Front Yard)                         *",
"*                                                            *",
"*+---------+----[  ]-----------------+---+/////[      ]/////+*",
"*|(Kitchen)|              |(Bathroom)|[]                    |*",
"*|        /               |          |[]                    |*",
"*|       /                |T         |                      |*",
"*| r    ^     W           |          |                      |*",
"*|      v                 |          |                      |*",
"*|      |                 |        S |       (Garage)       |*",
"*|------+          -------+---[ ]----+-[ ]------------------+*",
"*|                                          (Hall way)      |*",
"*|            /----[ ]----+---[ ]----+-[ ]------------------+*",
"*|           /            |          |                      |*",
"*+--[ ]-----+   (not a)   |          |   (Master Bedroom)   |*",
"*|          |  (man cave) |          |                      |*",
"*|          |             | (Office) |                      |*",
"*|          +-------------+----------+------------------[ ]-+*",
"*|                                                          |*",
"*|                       (Back Yard)                        |*",
"*|                                                          |*",
"*+----------------------------------------------------------+*",
"**************************************************************"
};


vector<string> tasks = {"Task 1", "Task 2", "Task 3", "Task 4","Task 5"};
vector<bool> completedTask(5);
vector<string> inventory(0);

void print_inventory() {
	int inventory_literal_x = COLS * INVENTORY_BORDER_X;
	int x_start = 0;

	int inventory_literal_y = ROWS * INVENTORY_BORDER_Y;
	int y_start = ROWS - inventory_literal_y;

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
		if(completedTask.at(i)) cout << GREEN << toPrint << RESET;
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
//FIXME functions for Kerneys map
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

void print_world(size_t player_row, size_t player_col) {
	int map_border_x = COLS * MAP_BORDER_X;
	int map_border_y = ROWS * MAP_BORDER_Y;

	int x_start = (map_border_x - world_map.at(0).size()) / 2;
	int y_start = (map_border_y - world_map.size()) / 2;

	// clearscreen();
	for (size_t row = 0; row < world_map.size(); row++) {
		movecursor(y_start + row, x_start);
		for (size_t col = 0; col < world_map.at(row).size(); col++) {
			if (row == player_row and col == player_col) cout << BOLDCYAN << '@' << RESET;
			else if (world_map.at(row).at(col) == '*') cout << BLUE << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '=') cout << BOLDYELLOW << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == 'T') cout << BOLDRED << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '|') cout << GREEN << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == '[') cout << BOLDGREEN << world_map.at(row).at(col) << RESET;
			else if (world_map.at(row).at(col) == ']') cout << BOLDGREEN << world_map.at(row).at(col) << RESET;
			else
				cout << world_map.at(row).at(col);
		}
		cout << endl;
	}
/*	
	for (size_t i = 0; i < world_map.size(); i++) {
		movecursor(5 + i, 5);
		for (size_t j = 0; j < world_map.at(i).size(); j++) {
			if(world_map.at(i).at(j) == '@')cout << RED << world_map.at(i).at(j)<< RESET;
			else if (world_map.at(i).at(j) == '*') cout << BLUE << world_map.at(i).at(j) << RESET;
			else cout << world_map.at(i).at(j);
		}
		cout << endl;
	}
*/	
}

void addInventoryItem(string inv) {
	if (inv == "ranch") {
		inventory.push_back("ranch");
	} else if (inv == "bbq") {
		inventory.push_back("bbq");
	}

	return;
}

void checkLocation(auto row, auto col) {//FIXME add other task (NEED 3 more)
	char currLoc = world_map.at(row).at(col);
	if (currLoc == 'r') completedTask.at(0) = (completedTask.at(0) == true) ? false : true;
	else if (currLoc == 's') completedTask.at(1) = (completedTask.at(1) == true) ? false: true;
	print_task_list();
	return;
}

void dialog(string toPrint){
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

int main() {
	if (screenSizeBad()) tooSmall();

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
		if (c == 'Q') break;
		if (c == 'W' or c == UP_ARROW) current_row--;
		if (c == 'S' or c == DOWN_ARROW) current_row++;
		if (c == 'A' or c == LEFT_ARROW) current_col--;
		if (c == 'D' or c == RIGHT_ARROW) current_col++;
		if (c == '\n') checkLocation(current_row, current_col);
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

