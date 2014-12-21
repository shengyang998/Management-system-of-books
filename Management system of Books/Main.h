#ifndef MAIN
#define MAIN

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::swap;
using std::vector;
using std::getline;
using std::setw;
using std::setiosflags;
using std::ios;
using std::setfill;

struct BOOK{
	string ISBN;
	string bookName;
	string authorName;
	vector<float> price;//价钱
	long totalSalesVolume;//总销量
	int monthlySalesVolume;//月销量
	string category;//类别
};

static void prompt_wait(){
	cin.ignore(100, '\n');
	cout << "Press Enter or Return to continue...";
	cin.get();
}

int input();

#endif