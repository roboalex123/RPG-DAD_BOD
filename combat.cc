#include <iostream>
#include <cmath>
#include <ctime>
#include "/public/read.h"
#include "/public/colors.h"
using namespace std;

int attack(int enemyHealth){

	//time_t time;
	srand(10);
	char attackKey = 'e';
	char userInput;
	int playerAttack = 0;

	cout << "Press attack key:\n";
	cin >> userInput;

	if (userInput == attackKey){

		playerAttack = rand() % 3 + 1;

		enemyHealth -= playerAttack;

	}

	return(enemyHealth);

}

int main(){

	char enableCombat;
	int enemyHealth = 10;

	cout << "Would you like to start combat: y or n\n";
	cin >> enableCombat;

	if (enableCombat == 'y'){
	
		while (enemyHealth > 0){

			cout << attack(enemyHealth) << endl;
			enemyHealth = attack(enemyHealth);

			if (enemyHealth <= 0){

				exit(1);

			}

		}

	}

	else{

		exit(1);

	}

}
