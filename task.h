#include "/public/read.h"
#include "/public/colors.h"
using namespace std;

auto [rows,cols] = get_terminal_size();

int centerX(string output){
	return(cols - output.size())/2; 

}

int ikeaBook(){
	clearscreen();
	int yStart = rows / 2;
	int chances = 2;

	show_cursor(false);
	string output = "Okay.... I guess I will build this stupid bookcase";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);

	while(true){//question 1
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
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
			show_cursor(true);
		int choice = read<int>(output);
			show_cursor(false);

			if (choice < 1 or choice > 3){
            output ="Please enter a valid choice!";
            movecursor(++inner_yStart,centerX(output));
            cout << output << endl;
            continue;
			}


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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
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
			show_cursor(true);
		int choice = read<int>(output);
			show_cursor(false);

			if (choice < 1 or choice > 3){
            output ="Please enter a valid choice!";
            movecursor(++inner_yStart,centerX(output));
            cout << output << endl;
            continue;
            }


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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
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
			show_cursor(true);
		int choice = read<int>(output);
			show_cursor(false);

			if (choice < 1 or choice > 3){
            output ="Please enter a valid choice!";
            movecursor(++inner_yStart,centerX(output));
            cout << output << endl;
            continue;
            }


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

int toiletClog(){//task 2
	clearscreen();
	int yStart = rows / 2;
	int chances = 2;

	show_cursor(false);
	string output = "Time to unclog the toilet.";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);

	while(true){//question 1
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
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

		output = "2. Grab the plunger?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Grab the snake?";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();

		output = "1. Use the plunger.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Use the snake.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Flush it a bunch of times, hope it unclogs itself.";
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
	output = "It's completed, how did I do?";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(1'500'000);

	while(true){//question 3
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();
		output = "1. It's unclogged, plunger worked.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. It's unclogged, but there is water on the floor and you act like you didn't see the water";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Just tell the wife it's unclogged, blame her next time it clogs.";
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

int mowLawn(){//task 3
	clearscreen();
	int yStart = rows / 2;
	int chances = 2;

	show_cursor(false);
	string output = "Hell yeah, something I like, lets mow the lawn!";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);

	while(true){//question 1
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}

		int inner_yStart = yStart;
		clearscreen();

		output = "How should I start the task.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. Grab two  Busch Lights, one for the hand, one for the riding lawn mower cup holder?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Check oil and gas on the mower?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Sharpen mower blades?";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();

		output = "1. Mow as fast as possible.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Mow perfect lines in cross hatch design";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Mow with no purpose, just hitting the tall patches.";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();
		output = "1. The neighbors will be jealous! My riding lawn mower for my tiny lawn was totally worth it.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. It's mowed but you didnt edge.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. It's a little patchy, but it will do.";
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
	output = "Well done Dad Bod, grab another beer and check that off the list";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(2'500'000);
	show_cursor(true);
	return 2;
}


int hornetNest(){//task 4
	clearscreen();
	int yStart = rows / 2;
	int chances = 2;

	show_cursor(false);
	string output = "Hornets will fear me when I am done with them.";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);

	while(true){//question 1
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
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

		output = "2. Call exterminator?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Get bug spray?";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();

		output = "1. Exterminator removed the nest and took my man card as payment.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Aeorsol can and lighter?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Bug spray is boring.";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();
		output = "1. Nest is gone with a few burn marks on the house siding.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. The neighbor saw the exterminator and now wont look me in the eyes.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Bug spray seemed to work... who knows.";
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
	output = "Well done Dad Bod, grab another beer and check that off the list";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(2'500'000);
	show_cursor(true);
	return 2;
}

int bbq(){//task 5
	clearscreen();
	int yStart = rows / 2;
	int chances = 2;

	show_cursor(false);
	string output = "BBQ is life!";
	movecursor(yStart,centerX(output));

	cout << output;
	cout.flush();
	//char x = read<char>();
	usleep(2'500'000);

	while(true){//question 1
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}

		int inner_yStart = yStart;
		clearscreen();

		output = "How should I start the task.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "1. Grab a cooler full of  Busch Light?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Prep the meat and veggies?";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Preheat BBQ?";
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
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();

		output = "1. Send text to wife to update her on how things are going.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Throw burgers on the grill";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Keep drinking Busch Light.";
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
	output = "It's completed, how did I do?";
	movecursor(yStart,centerX(output));
	cout << output << endl;
	usleep(1'500'000);

	while(true){//question 3
		if (chances <= 0){
			output = "Task failed, good luck next time...";
			movecursor(yStart,centerX(output));
			cout << output << endl;
			show_cursor(true);
			return 1;
		}
		int inner_yStart = yStart;
		clearscreen();
		output = "1. Perfect burgers with a side salad.";
		movecursor(inner_yStart,centerX(output));
		cout << output << endl;

		output = "2. Made veggie burgers because the wife doesn't like red meat.";
		movecursor(++inner_yStart,centerX(output));
		cout << output << endl;

		output = "3. Got too drunk, and used Grubhub and acted like it came off the BBQ.";
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
