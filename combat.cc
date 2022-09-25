#include <iostream>
#include <cmath>
#include <ctime>
#include "/public/read.h"
#include "/public/colors.h"
#include "combat.h"
using namespace std;

int attack(int enemyHealth){

	//time_t time;
	srand(20);
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

int dadHealth = 100;
int wifeHealth = 100;

round1(dadHealth, wifeHealth);
round2(dadHealth, wifeHealth);
round3(dadHealth, wifeHealth);

}
