#include "Main.h"

int menu();
int submenu();
BOOK input();
void prompt_wait();

int main(){
	int choice;
	do{
		choice = menu();
		switch (choice){//start of menu
		case 1:{//Load data from file
			//BOOK head = input();
			break;
		}
		case 2:{
			choice = submenu();
			break;
		}
		default:{
			cout << "Error when you choose the number.";
			break;
		}
		}
	} while (choice != 0);
//end of menu
	prompt_wait();
return 0;
}

void prompt_wait() {
	cin.ignore(100, '\n');
	cout << "\nPress Enter or Return to continue...";
	cin.get();
}