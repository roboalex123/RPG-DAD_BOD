#include <cmath>
#include <cctype>
#include <ctime>
using namespace std;

int dadh = 100, wifeh  = 100l;
int gameRand = 0;
int dadRand = 0;
int wifeRand = 0;
int baseDamage = 10;
int lowBuff = -3;
int medBuff = 3;
int bigBuff = 6;
int maxDamage = 40;
string output;

int round1(){
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
		show_cursor(true);
		int choice = read<int>(output);
		show_cursor(false);
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
			return 2;

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

			return 2;
		}
	}
}
int round2(){
	srand(time(0));
	clearscreen();
	int yStart = rows / 2;


	while(true){//question 1

		int inner_yStart = yStart;
		clearscreen();


		output = "Why is there water all over this bathroom!?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. [Tampon] Why are you the one clogging the toilet?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. [Lie] It was fine earlier!";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3.[Honest] It's only a little bit.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		show_cursor(true);
		int choice = read<int>(output);
		show_cursor(false);
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
			return 2;

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

			return 2;
		}
	}
}
int round3(){
	srand(time(0));
	clearscreen();
	int yStart = rows / 2;


	while(true){//question 1

		int inner_yStart = yStart;
		clearscreen();


		output = "These burgers are really good! Are you really the one who cook them!?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. [Frozen Patties] Well I would have if you had thawed these out!";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. [Lie] Of course I did!";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3.[Honest] No, they are from Hooters.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		show_cursor(true);
		int choice = read<int>(output);
		show_cursor(false);
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
			if (wifeh <= 0) return 1;
			if (dadh <= 0) return 0;
			return 2;

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

			if (wifeh <= 0) return 1;
			if (dadh <= 0) return 0;
			return 2;
		}
	}
}

int finalRound(){
	clearscreen();
	int yStart = rows / 2;
	int inner_yStart = yStart;

	gameRand = (rand() % 100) + 1;
	wifeRand = (rand() % 100) + 1;

	while(true){
		clearscreen();
		output = "Oh wow, you are the first Dad bod to make it this far.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter a number between 1-100 for the final battle: ";
		movecursor(++inner_yStart,centerX(output));
		show_cursor(true);
		int choice = read<int>(output);
		show_cursor(false);

		if (choice < 1 or choice > 100){
			output ="Please enter a valid choice!";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(3'000'000);
			continue;
		}
		if (abs(gameRand - wifeRand) >= abs(gameRand - choice)){
			clearscreen();
			output = "Dad Bod says: \"You are acting just like your mother\" (FATALITY)";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			return 1;
		}

		else{
			clearscreen();
			output = "Wife says: \"You peaked in highschool.\" (FATALITY)";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			return 0;
		}
	}

}
//you are acting just like your mother (Walks away)
// You peaked in high school (Walks away)
