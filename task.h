#include "/public/read.h"
#include "/public/colors.h"
using namespace std;

auto [rows,cols] = get_terminal_size();

int centerX(string output){
	return(cols - output.size())/2; 

}
//-Replace flickering light in kitchen
bool replaceLight (){
	int yStart = rows / 2;
	
	string output = "Honey please build this book Shelf";
	movecursor(yStart,centerX(output));
	cout << output;
	
	output = "Pick the right step!";
	movecursor(++yStart,centerX(output));
	cout << output;
	
	output = "1. Grab another Busch Light?";
	movecursor(++yStart,centerX(output));
	cout << output;
	
	output = "2. Organize yools and parts?";
	movecursor(++yStart,centerX(output));
	cout << output;

	output = "3. Watch a DIY YouTube Video";
	movecursor(++yStart,centerX(output));
	cout << output;
	
	while(true){
		int choice = read<int>("Please pick a choice");
		if (choice == 1){
			cout <<"This is option 1 working";
		}
		else if (choice)


	}
	
	

	
	return true;
}


//-Unclog toilet
//-Mow the front lawn
//-Get rid of hornet’s nest in back yard
//-BBQ burgers for dinner
