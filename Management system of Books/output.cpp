#include "Main.h"

int output(BOOK *listHead){//0:succeed 1:cannot open the file
	string line;
	ofstream dataOutput;
	dataOutput.open("./outData.txt");//open the file and clear it
	if (dataOutput.is_open()){
		dataOutput << "The books are:\n"
			<< "ISBN|category|BookName|AuthorName|Price|TotalSalesVolume\n\n";
		for (BOOK *p = listHead; p != 0; p = p->next){//do until at the end of the list
			//Output to the file
			dataOutput << p->ISBN << '|' << p->category << '|' << p->bookName << '|' << p->authorName
				<< '|' << p->price << '|' << p->totalSalesVolume << endl << endl;
		}
		dataOutput << "This is the end.";
		dataOutput.close();//close the file
	}
	else{
		cout << "ERROR opening outData.txt";
		return -1;
	}
	return 0;
}

int output(vector<BOOK> p){
	string line;
	ofstream dataOutput;
	dataOutput.open("./outData.txt");//open the file and clear it
	if (dataOutput.is_open()){
		dataOutput << "The books are:\n"
			<< "ISBN|category|BookName|AuthorName|Price|TotalSalesVolume\n\n";
		for (auto it = p.begin(); it < p.end(); it++){//iterator it
			dataOutput << it->ISBN << '|' << it->category << '|' << it->bookName << '|' << it->authorName
				<< '|' << it->price << '|' << it->totalSalesVolume << endl << endl;
		}
		dataOutput << "This is the end.";
		dataOutput.close();//close the file
	}
	else{
		cout << "ERROR opening outData.txt";
		return -1;
	}
	return 0;
}