//Fill out this comment with your names and which bullet points you did
//Partners: Sayre, Voss
//Bullet Points: 
//Extra Credit: 
//URL to cover art and music: 

#include "/public/read.h"
#include "/public/colors.h"
#include <iostream>
#include <vector>
using namespace std;

const auto [ROWS, COLS] = get_terminal_size();
const int MAP_BORDER_X = 70;
const int MAP_BORDER_Y = 80;
const int TASK_BORDER_X = 100 - MAP_BORDER_X;
const int TASK_BORDER_Y =  MAP_BORDER_Y;
const int INVENTORY_BORDER_X = 100;
const int INVENTORY_BORDER_Y = 100 - MAP_BORDER_Y;


void print_inventory(){
	cout <<"inventory" << endl;
}
void print_task_list(){
	cout <<"Task List" << endl;
}
void print_map(){
	int map_literal_x = COLS / MAP_BORDER_X;
	int map_literal_y = ROWS / MAP_BORDER_Y;
	vector<vector<char>> border(map_literal_x, vector<char>(map_literal_y));
	for (int i = 0; i < border.size(); i++){
	cout <<"|";
	}

	cout <<"Hello" << endl;
}
void print_screen(){
	print_map();
	print_task_list();
	print_inventory();

}

int main() {
		print_screen();

	return 0;
}
