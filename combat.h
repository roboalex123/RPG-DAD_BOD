#include <cmath>
#include <cctype>
#include "task.h"
#include "time.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

// NOTE: This is just a skeleton of what this might look like 
//       Please change anything that could be made better or
//       that's need to make it work in main

 
int dadh = 100, wifeh  = 100l;
int goalRand = 0;
int dadRand = 0;
int wifeRand = 0;
int baseDamage = 10;
int lowBuff = -3;
int medBuff = 3;
int bigBuff = 6;
int maxDamage = 40;

int round1(int& dadh, int& wifeh){
srand(time(0));
	clearscreen();
	int yStart = rows / 2;

	show_cursor(false);
	string output = "Angry wife appears out of no where. You can tell by the look on her face she wants to fight.";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);


	while(true){//question 1

		int inner_yStart = yStart;
		clearscreen();

		if (dadh <= 0){
			output = "Fail";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
		}

		output = "What the hell did you do to that book case!?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. [RECEIPT] Why did you spend $200 dollars on it? I thought you said it was only $100?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. [LIE] What? I followed the instructions!";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3.[HONEST] I gave it my best shot okay...";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		int choice = read<int>(output);
		if (choice < 1 or choice > 3){
			output ="Please enter a valid choice!";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl; 
			continue;
		}
		
		dadRand  = (rand() % 100) + 1;
		wifeRand = (rand() % 100) + 1;

		if (dadRand >= wifeRand){
			if (choice == 1){
			output =  "SUPER EFFECTIVE TO WIFE";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			wifeh -= baseDamage + bigBuff + (rand() % maxDamage - (baseDamage + bigBuff) + 1);
			}
			
			if (choice == 3){
			output =  "EFFECTIVE TO WIFE";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			wifeh -= baseDamage + medBuff + (rand() % maxDamage - (baseDamage + medBuff) + 1);
			}

			if (choice == 2){
			output =  "NOT VERY EFFECTIVE TO WIFE";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			wifeh -= baseDamage + lowBuff + (rand() % maxDamage - (baseDamage + lowBuff) + 1);
			}
			usleep(2'000'000);
			return wifeh;

			break;
		}
		else{
			if (choice == 1){
			output =  "NOT VERY EFFECTIVE TO DAD BOD";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			dadh -= baseDamage + lowBuff + (rand() % maxDamage - (baseDamage + lowBuff) + 1);
			}
			
			if (choice == 3){
			output =  "EFFECTIVE TO DAD BOD";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			dadh -= baseDamage + medBuff + (rand() % maxDamage - (baseDamage + medBuff) + 1);
			}

			if (choice == 2){
			output =  "SUPER EFFECTIVE DAD BOD";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;

			dadh -= baseDamage + bigBuff + (rand() % maxDamage - (baseDamage + bigBuff) + 1);
			}
			usleep(2'000'000);
			
			return dadh;
			break;
		}
	}
}
//you are acting just like your mother (Walks away)
// You peaked in high school (Walks away)
