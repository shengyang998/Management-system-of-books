#ifndef MAIN
#define MAIN

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

struct BOOK{
	string ISBN;
	string bookName;//Book Name
	string authorName;//Author Name
	double price;//Price
	long totalSalesVolume;//latest year total sales volume
	long monSalesVolume[12];//latest 12 months sales volume
	string category;//Category
	BOOK *next;
};

#endif