#include "main.h"

void submenu(){
	int choice;
	cout << "\nPlease choose what you want to output to the file.\n"
		<< "********************************************************************************\n"
		<< "*    1.Search and output          2.Insert and output                          *\n"
		<< "*    3.Delete and output          4.Sort and output                            *\n"
		<< "*    5.Output books from a selected category                                   *\n"
		<< "*    6.Output from a selected price interval                                   *\n"
		<< "*    7.Output top 150                                                          *\n"
		<< "********************************************************************************\n";
	while (!(cin >> choice) || (choice > 7 || choice < 1)){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error when you choose what to do. Please try again: ";
	}
	switch (choice){
	case 1:{
		break;
	}
	case 2:{
		break;
	}
	case 3:{
		break;
	}
	case 4:{
		break;
	}
	case 5:{
		break;
	}
	case 6:{
		break;
	}
	case 7:{
		break;
	}
	default:{
		cout << "\nError when you choose the number.";
		break;
	}
	}
}