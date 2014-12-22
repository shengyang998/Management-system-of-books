#include "main.h"

int main();

int menu(){
	int choice;
	cout << "What do you want to do? Input 0 to exit.\n"
		<< "********************************************************************************\n"
		<< "*     1.Get the books' info form a file.     2.Output the info to a file       *\n"
		<< "********************************************************************************\n";
	while (!(cin >> choice) || choice != 1 && choice != 2 && choice != 0){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error when you choose what to do. Please try again: ";
	}
	//1.Load data from file
	//2.Output to file
	return choice;
}

int submenu(){
	int choice;
	do{
		cout << "\nPlease choose what you want to output to the file.\n"
			<< "********************************************************************************\n"
			<< "*    1.Search and output          2.Insert and output                          *\n"
			<< "*    3.Delete and output          4.Sort and output                            *\n"
			<< "*    5.Output books from a selected category                                   *\n"
			<< "*    6.Output from a selected price interval                                   *\n"
			<< "*    7.Output top 150             0.EXIT                                       *\n"
			<< "********************************************************************************\n";
		while (!(cin >> choice) || (choice > 7 || choice < 0)){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error when you choose what to do. Please try again: ";
		}
		switch (choice){
		case 0:{
			break;			
		}
		case 1:{
			string keyword;
			cout << "Input the key word that you want to search";
			getline(cin, keyword);
			//search();
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
	} while (choice != 0);
	return 0;
}