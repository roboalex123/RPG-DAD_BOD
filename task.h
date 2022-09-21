#include "/public/read.h"
#include "/public/colors.h"
using namespace std;


void setupScreen(string output){
	auto [rows,cols] = get_terminal_size();
	clearscreen();
	movecursor(rows/2,(cols - output.size())/2); 

}
//-Replace flickering light in kitchen
bool replaceLight(){
	string output ="Honey please build this book Shelf";
	setupScreen(output);
	cout << output << endl;
	return true;
}


//-Unclog toilet
//-Mow the front lawn
//-Get rid of hornet’s nest in back yard
//-BBQ burgers for dinner
