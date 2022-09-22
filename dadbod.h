#include "/public/read.h"
#include <iostream>
#include <cctype>
//dadbod dialog

using namespace std;

bool ikeaBook(bool task1){

	int playerChoice = 0;

	cout << "Okay.... I guess I will build this stupid bookcase" << endl;
	cout << "How should I start the task: " << endl;
	cout << "1. Grab another Busch Light?" << endl;
	cout << "2. Organize tools and parts?" << endl;
	cout << "3. Watch a DIY YouTube video?" << endl;
	cin >> playerChoice;
	//playerChoice = read(cin,"Please select 1, 2, 3:");
	

	if (playerChoice == 1){
		cout << "What's next?" << endl;
		cout <<"1. Read instructions."<< endl;
		cout << "2. Throw away instructions, dad bods don't need those." << endl;
		cout <<"3. Call the neighbor ask for help"<< endl;
		cin >> playerChoice;
		if(playerChoice == 2){
			cout << "Its completed, how did I do?" << endl;
			cout <<"1. Pefectly level and no extra parts. "<< endl;
			cout << "2. Mostly level and the proper amount of extra parts " << endl;
       		cout <<"3. Extra parts and not level is normal. "<< endl;
       		cin >> playerChoice;
			if (playerChoice == 3){
				cout <<"Passed"<< endl;
       			task1 = true;
				return task1;
			}
			else{
				exit (1);
			}
		}
		else{
			exit (1);
		}
	}
	else{
		cout << "That is an option, but is it the best Dad Bod option?" << endl;// how to return player to start of if statement?
		exit (1);
	}
	}

bool tolietClog(bool task2){

    int playerChoice = 0;

    cout << "Time to unclog the toilet. " << endl;
    cout << "How should I start the task: " << endl;
    cout << "1. Grab another Busch Light?" << endl;
    cout << "2. Grab the plunger." << endl;
    cout << "3. Grab the snake." << endl;
    cin >> playerChoice;
    //playerChoice = read(cin,"Please select 1, 2, 3:");


    if (playerChoice == 1){
		cout << "What's next?" << endl;
        cout <<"1. Use the plunger."<< endl;
        cout << "2. Flush it a bunch of times, hope it unclogs itself" << endl;
        cout <<"3. Use the snake."<< endl;
        cin >> playerChoice;
        if(playerChoice == 2){
			cout << "Its completed, how did I do?" << endl;
            cout <<"1. Its unclogged, plunger worked."<< endl;
            cout << "2. Its unclogged, but there is water on the floor and you act like you didn't see it." << endl;
            cout <<"3. Just tell the wife its unclogged, blame her next time it clogs"<< endl;
            cin >> playerChoice;
            if (playerChoice == 3){
                cout <<"Passed"<< endl;
                task2 = true;
                return task2;
            }
            else{
                exit (1);
            }
        }
        else{
            exit (1);
        }
    }
    else{
        cout << "That is an option, but is it the best Dad Bod option?" << endl;// how to return player to start of if statement?
        exit (1);
    }
    }

bool mowLawn(bool task3){

    int playerChoice = 0;

    cout << "Hell yeah! Something I like, lets mow the lawn!" << endl;
    cout << "How should I start the task: " << endl;
    cout << "1. Grab 2 Busch Lights, one for the hand one for the riding lawn mower cup holder?" << endl;
    cout << "2. Check oil and gas on mower?" << endl;
    cout << "3. Sharpen mower blades?" << endl;
    cin >> playerChoice;
    //playerChoice = read(cin,"Please select 1, 2, 3:");


    if (playerChoice == 1){
		cout << "What's next?" << endl;
        cout <<"1. Mow at fastest speed possible."<< endl;
        cout << "2. Mow perect lines in a cross hatch design." << endl;
        cout <<"3. Mow with no purpose, just hitting the tall patches."<< endl;
        cin >> playerChoice;
        if(playerChoice == 2){
			cout << "Its completed, how did I do?" << endl;
            cout <<"1. Its mowed but you didnt edge."<< endl;
            cout << "2. Its a little patchy, but it will do." << endl;
            cout <<"3. The neighbors will be jealous! My riding lawn mower for my tiny lawn was worth it."<< endl;
            cin >> playerChoice;
            if (playerChoice == 3){
                cout <<"Passed"<< endl;
                task3 = true;
                return task3;
            }
            else{
                exit (1);
            }
        }
        else{
            exit (1);
        }
    }
    else{
        cout << "That is an option, but is it the best Dad Bod option?" << endl;// how to return player to start of if statement?
        exit (1);
    }
    }

bool honrnetNest(bool task4){

    int playerChoice = 0;

    cout << "Hornet's will fear me when I am done with them" << endl;
    cout << "How should I start the task: " << endl;
    cout << "1. Grab another Busch Light?" << endl;
    cout << "2. Call exterminator?" << endl;
    cout << "3. Get bug spray?" << endl;
    cin >> playerChoice;
    //playerChoice = read(cin,"Please select 1, 2, 3:");


    if (playerChoice == 1){
		cout << "What's next?" << endl;
        cout <<"1. Exterminator removed the next and took man card as payment"<< endl;
        cout << "2. Aeorsol can and lighter?" << endl;
        cout <<"3. Bug spray is boring."<< endl;
        cin >> playerChoice;
        if(playerChoice == 2){
			cout << "Its completed, How did I do?" << endl;
            cout <<"1. The neighbor saw the exterminator and now wont look me in the eyes."<< endl;
            cout << "2. Bug spray seemed to work... who knows" << endl;
            cout <<"3. Nest is gone with a few burn marks on the house siding."<< endl;
            cin >> playerChoice;
            if (playerChoice == 3){
                cout <<"Passed"<< endl;
                task4 = true;
                return task4;
            }
            else{
                exit (1);
            }
        }
        else{
            exit (1);
        }
    }
    else{
        cout << "That is an option, but is it the best Dad Bod option?" << endl;// how to return player to start of if statement?
        exit (1);
    }
    }

bool bbq(bool task5){

    int playerChoice = 0;

    cout << "BBQ is life!" << endl;
    cout << "How should I start the task: " << endl;
    cout << "1. Grab the cooler full of Busch Light?" << endl;
    cout << "2. Prep meat and veggies?" << endl;
    cout << "3. Preheat BBQ?" << endl;
    cin >> playerChoice;
    //playerChoice = read(cin,"Please select 1, 2, 3:");


    if (playerChoice == 1){
		cout << "What's next?" << endl;
        cout <<"1. Throw burgers on grill"<< endl;
        cout << "2. Keep drinking Busch Light" << endl;
        cout <<"3. Send text to wife to update her on how things are going."<< endl;
        cin >> playerChoice;
        if(playerChoice == 2){
			cout << "Its completed, how did I do?" << endl;
            cout <<"1. Perfect burgers with a side salad."<< endl;
            cout << "2. Made veggie burgers because the wife doesnt like red meat." << endl;
            cout <<"Got too drunk, and used Grubhub and acted like it came off the BBQ"<< endl;
            cin >> playerChoice;
            if (playerChoice == 3){
                cout <<"Passed"<< endl;
                task5 = true;
                return task5;
            }
            else{
                exit (1);
            }
        }
        else{
            exit (1);
        }
    }
    else{
        cout << "That is an option, but is it the best Dad Bod option?" << endl;// how to return player to start of if statement?
        exit (1);
    }
    }

