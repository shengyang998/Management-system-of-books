#include "Main.h"

int insert(BOOK *listHead, bool flag);
BOOK *sortbyprice(BOOK *listHead);
int search(BOOK *listHead, string keyword);
int output(vector<BOOK> p);
int output(BOOK *listHead);
int del(BOOK *listHead, string delstr);
int iflistempty(BOOK *listHead);

int menu(){
	int choice;
	cout << "What do you want to do? Input 0 to exit.\n"
		<< "*******************************************************************************\n"
		<< "*     1.Get the books' info form a file.     2.Output the info to a file      *\n"
		<< "*******************************************************************************\n";
	while (!(cin >> choice) || (choice != 1 && choice != 2 && choice != 0)){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Error when you choose what to do. Please try again: ";
	}
	//1.Load data from file
	//2.Output to file
	return choice;
}

int submenu(BOOK *listHead){
	int choice;
	bool sortFlag = 0;
	do{
		cout << "\nPlease choose what you want to output to the file.\n"
			<< "*******************************************************************************\n"
			<< "*    1.Search and output          2.Insert and output                         *\n"
			<< "*    3.Remove and output          4.Sort by Price and output                  *\n"
			<< "*    5.Output from a selected price interval                                  *\n"
			<< "*    6.Output top 150             0.Return to main menu                       *\n"
			<< "*******************************************************************************\n";
		while (!(cin >> choice) || (choice > 6 || choice < 0)){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error when you choose what to do. Please try again: ";
		}
		cin.ignore();
		if (iflistempty(listHead) == 0){//if the list is not empty
			switch (choice){
			case 0:{//EXIT
				return 0;
				break;
			}
			case 1:{//Search and output
				string keyword;
				cout << "Input the keyword that you want to search: \n";
				getline(cin, keyword);
				search(listHead, keyword);
				break;
			}
			case 2:{
				insert(listHead, sortFlag);
				break;
			}
			case 3:{
				string delstr;
				int flag = 0;
				cout << "Input what you want to delete, including ISBN Category BookName or AutherName: \n";
				getline(cin, delstr);
				if (flag = del(listHead, delstr) == 0){
					cout << "\nDelete succeed!\nThe data has been output to ./outData.txt\n";
				}
				else if (flag == 1){
					cout << "\nThe book has not been deleted!\n";
				}
				else if (flag == -1){
					cout << "\nDelete failed!\n";
				}
				break;
			}
			case 4:{
				if (listHead = sortbyprice(listHead)){
					sortFlag = 1;
				}
				if (output(listHead) == 0){
					cout << "Output succeed.\n";
				}
				else{
					cout << "Output failed.\n";
				}
				break;
			}
			case 5:{
				break;
			}
			case 6:{
				break;
			}
			default:{
				cout << "\nError when you choose the number.";
				break;
			}
			}
		}
	} while (choice != 0);
	return 0;
}