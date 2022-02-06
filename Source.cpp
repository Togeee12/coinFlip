#include <iostream>
#include <ctime>
#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>
using namespace std;
int coinFlip(void) { //creating a coinFlip function which generates random number 
	int random = 1 + rand() % 2;
	return random;
}
int main() {
	int timesH = 1; //setting up a numeber of flips
	int random = 0;	
	string headTail = " ";
	system("cls");
	srand((time(0)));

	if (timesH == 1) { // you can also use while(true) to create infinity loop
		random = coinFlip();
		if (random == 1) {
			system("Color 4"); //you can also use SetConsoleTextAttribute() ;>
			headTail = "HEAD";
		}
		else{
			system("Color 0");
			headTail = "TAIl";
			
		}
		cout << '\n' << headTail << endl;
	}
	else { //backup if something failed
		cout << "Something went wrong. " << endl;
		return 0;
	}
}
