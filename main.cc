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
const double MAP_BORDER_Y = 0.80;
const double TASK_BORDER_X = 1.00 - MAP_BORDER_X;
const double TASK_BORDER_Y =  MAP_BORDER_Y;
const double INVENTORY_BORDER_X = 1.00;
const double INVENTORY_BORDER_Y = 1.00 - MAP_BORDER_Y;


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
		cout << endl;
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
	for (int i = 0; i < task_literal_y; i++) {
		for (int j = 0; j < task_literal_x; j++) {
			cout << border.at(i).at(j);
		}
		movecursor(i, x_start);
	}
}
void print_map() {
	int map_literal_x = COLS * MAP_BORDER_X;
	int map_literal_y = ROWS * MAP_BORDER_Y;

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
		cout << endl;
	}
}
void print_screen() {
	movecursor(0, 0);
	clearscreen();
	//print_map();
	print_task_list();
	print_inventory();

}

int main() {
	print_screen();

	return 0;
}
