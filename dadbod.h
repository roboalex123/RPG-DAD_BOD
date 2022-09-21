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
		cout <<"Passed"<< endl;
		cout << "step 2" << endl;
		cout <<"1,2,3"<< endl;
		cin >> playerChoice;
		if(playerChoice == 2){
			cout <<"Passed"<< endl;
			cout << "step 3" << endl;
       		cout <<"1,2,3"<< endl;
       		cin >> playerChoice;
			if (playerChoice == 3){
				cout <<"Passed"<< endl;
       			task1 = true;
				return task1;
			}
		}
	}
	else{
		exit (1);
	}
	}


