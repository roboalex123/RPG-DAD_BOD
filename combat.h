#include "/public/read.h"
#include <cmath>
#include <cctype>
#include <iostream>
using namespace std;

// NOTE: This is just a skeleton of what this might look like 
//       Please change anything that could be made better or
//       that's need to make it work in main

auto [rows,cols] = get_terminal_size();

int centerX(string output){
	return(cols - output.size())/2; 

}
int round1(){
	clearscreen();
	int yStart = rows / 2;
	int chances = 3;

	show_cursor(false);
	string output = "ROUND 1";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);
	
	while(true){//question 1
		if (chances <= 0){
			show_cursor(true);
			return 1;
		}

		int inner_yStart = yStart;
		clearscreen();

		output = "What the hell did you do to that book case!?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. [RECEIPT] Why did you spend $200 dollars on it? I thought you said it was only $100?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. [LIE] What? I followed the instructions!";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. ";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		int choice = read<int>(output);

		if (choice == 1){
			output =  "SUPER EFFECTIVE";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			break;
		}
		else{
			output = "Is that really the best response?";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			chances--;
			continue;
		}
	}
	clearscreen();
	output = "ROUND 2";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(1'500'000);



