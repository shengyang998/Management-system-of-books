#ifndef MAIN
#define MAIN

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct BOOK{
	string ISBN;
	string bookName;//Book Name
	string authorName;//Author Name
	float price;//Price
	long totalSalesVolume;//latest year total sales volume
	long monSalesVolume[12];//latest 12 months sales volume
	string category;//Category
	BOOK *next;
};

static void prompt_wait(){
	cin.ignore(100, '\n');
	cout << "\nPress Enter or Return to continue...";
	cin.get();
}

#endif