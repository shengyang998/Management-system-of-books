#include "Main.h"

void select(){
	int choice;
	cout << "What do you want to do?\n"
		<< "********************************************************************************\n"
		<< "*     1.Get the books' info form a file.     2.Output the info to a file       *\n"
		<< "********************************************************************************\n";
	while(!(cin>>choice)){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error when you choose what to do. Please try again: ";
	}
	//1.Load data from file
	//2.Output to file

	switch (choice){
	case 1:{//Load data from file
		/*if (input() == 0){
			break;
		}
		else{
			cout << "ERROR reading from file.";
			break;
		}*/
	}
	case 2:{
		cout << "\nPlease choose what you want to output to the file.\n"
			<< "********************************************************************************\n"
			<< "*    1.Search and output          2.Insert and output                          *\n"
			<< "*    3.Delete and output          4.Sort and output                            *\n"
			<< "*    5.Output books from a selected category                                   *\n"
			<< "*    6.Output from a selected price interval                                   *\n"
			<< "*    7.Output top 150                                                          *\n"
			<< "********************************************************************************\n";
		while (!(cin >> choice)){
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
		default:{
			break;
		}
		}
		break;
	}
	default:
		select();
		break;
	}
}