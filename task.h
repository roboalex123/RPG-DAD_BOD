#include "/public/read.h"
#include "/public/colors.h"
using namespace std;

auto [rows,cols] = get_terminal_size();

int centerX(string output){
	return(cols - output.size())/2; 

}
//-Replace flickering light in kitchen
int ikeaBook(){
	clearscreen();
	int yStart = rows / 2;
	int chances = 3;

	show_cursor(false);
	string output = "Okay.... I guess I will build this stupid bookcase";
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

		output = "How should I start the task.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. Grab another Busch Light?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Organize tools and parts?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Watch a DIY YouTube Video?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		int choice = read<int>(output);

		if (choice == 1){
			output =  "Now that's thinking like a Dad Bod.";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			break;
		}
		else{
			output = "That is an option, but is it the best Dad Bod option?";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			chances--;
			continue;
		}
	}
	clearscreen();
	output = "What's next?";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(1'500'000);


	while(true){//question 2
		if (chances <= 0){
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();

		output = "1. Read instruction.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Throw away instructions, Dad Bods don't need those.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Call the neighbor for help.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		int choice = read<int>(output);

		if (choice == 2){
			output =  "Now that's thinking like a Dad Bod.";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			break;
		}
		else{
			output = "That is an option, but is it the best Dad Bod option?";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			chances--;
			continue;
		}
	}
	clearscreen();
	output = "It's completed, how did I do?";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(1'500'000);

	while(true){//question 3
		if (chances <= 0){
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();
		output = "1. Perfectlly level and no extra parts.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Mostly level and the proper amount of extra parts.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Extra parts and not level is completely normal.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "Enter choice number: ";
		movecursor(++inner_yStart,centerX(output));
		int choice = read<int>(output);

		if (choice == 3){
			output =  "Now that's thinking like a Dad Bod.";
			movecursor(++inner_yStart,centerX(output));

			cout << output << endl;
			usleep(2'000'000);
			break;
		}
		else{
			output = "That is an option, but is it the best Dad Bod option?";
			movecursor(++inner_yStart,centerX(output));
			cout << output << endl;
			usleep(2'000'000);
			chances--;
			continue;
		}
	}
	clearscreen();
	output = "Well done Dad Bod, grab another beer and check that off the list";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(2'500'000);
	show_cursor(true);
	return 2;
}


//-Unclog toilet
//-Mow the front lawn
//-Get rid of hornet’s nest in back yard
//-BBQ burgers for dinner
