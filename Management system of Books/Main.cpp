#include "Main.h"

int menu();
int submenu();
BOOK input();
void prompt_wait();

int main(){
	int choice = menu();
	while (choice != 0){
		switch (choice){//start of menu
		case 1:{//Load data from file
			//BOOK head = input();
			break;
		}
		case 2:{
			submenu();
			break;
		}
		default:{
			cout << "Error when you choose the number.";
			break;
		}
		}
	}
//end of menu
	prompt_wait();
return 0;
}

void prompt_wait() {
	cin.ignore(100, '\n');
	cout << "\nPress Enter or Return to continue...";
	cin.get();
}