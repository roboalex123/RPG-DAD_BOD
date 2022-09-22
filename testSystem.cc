#include "/public/read.h"
#include <string>
using namespace std;

int main() {
	string test = "hello";

	system(("echo " + test + " | lolcat").c_str());

	return 0;
}
