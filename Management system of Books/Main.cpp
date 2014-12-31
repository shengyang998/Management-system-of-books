#include "Main.h"

int menu();
int submenu(BOOK *listHead);
BOOK *input();
//void prompt_wait();

int main(){
	int choice0, choice1;
	BOOK *head = nullptr;
	do{
		choice0 = menu();
		switch (choice0){//start of menu
		case 0:{
			break;
		}
		case 1:{//Load data from file
			head = input();//input() returns the head of the list
			break;
		}
		case 2:{
			choice1 = submenu(head);//choice1 is to get the return of submenu
			break;
		}
		default:{
			cout << "Error when you choose the number.";
			break;
		}
		}
	} while (choice0 != 0);
	//end of menu
	//prompt_wait();
return 0;
}

//void prompt_wait() {
//	cin.ignore(100, '\n');
//	cout << "\nPress Enter or Return to continue...";
//	cin.get();
//}