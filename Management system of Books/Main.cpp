#include "Main.h"

void submenu();

int main(){
//start of menu
	int choice;
	cout << "What do you want to do?\n"
		<< "********************************************************************************\n"
		<< "*     1.Get the books' info form a file.     2.Output the info to a file       *\n"
		<< "********************************************************************************\n";
	while (!(cin >> choice) || choice != 1 && choice != 2){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error when you choose what to do. Please try again: ";
	}
	//1.Load data from file
	//2.Output to file

	switch (choice){
	case 1:{//Load data from file
		if (input() == 0){//Input right
		break;
		}
		else{
		cout << "ERROR reading from file.";
		break;
		}
	}
	case 2:{
		submenu();
	}
	default:{
		cout<<"Error when you choose the number.";
		break;
	}
	}
//end of menu
prompt_wait();
return 0;
}