#include "Main.h"

void select(){
	string choice;
	cout << "What do you want to do:\n"
		<< setfill('*') << setw(71) << '*' << endl << setfill(' ')
		<< setiosflags(ios::left) << setw(37) << "1.Get the books' info form a file."
		<< "6.Output the info to a file\n"
		<< setfill('*') << setw(71) << '*' << endl;
	getline(cin, choice);
	//1.Load data from file
	//2.Search and output
	//3.Insert and output
	//4.Del and output
	//5.Sort and output
	//6.Output to file

	switch (choice[0]){
	case '1':{//Load data from file
		if (input() == 0){
			break;
		}
		else{
			cout << "ERROR reading from file.";
			break;
		}
	}
	case '2':{
		break;
	}
	case '3':{
		break;
	}
	case '4':{
		break;
	}
	case '5':{
		break;
	}
	case '6':{
		break;
	}
	default:
		main();
		break;
	}
}