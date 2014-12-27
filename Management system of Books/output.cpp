#include "Main.h"

int output(BOOK *listHead){//0:succeed 1:cannot open the file
	string line;
	ofstream dataOutput;
	dataOutput.open("./outData.txt");//open the file and clear it
	if (dataOutput.is_open()){
		dataOutput << "The books are:\n"
			<< "ISBN|category|BookName|AuthorName|Price|TotalSalesVolume\n";
	//}
	//dataOutput.close();//close the file
	//dataOutput.open("./outData.txt", ofstream::app);//open the file
	//if (dataOutput.is_open()){
		for (BOOK *p = listHead; p != 0; p = p->next){//do until at the end of the list
			//Output to the file
			dataOutput << p->ISBN << '|' << p->category << '|' << p->bookName << '|' << p->authorName
				<< '|' << p->price << '|' << p->totalSalesVolume << endl;
		}
		dataOutput.close();
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
			<< "ISBN|category|BookName|AuthorName|Price|TotalSalesVolume\n";
	//}
	//dataOutput.close();//close the file
	//dataOutput.open("./outData.txt", ofstream::app);//open the file
	//if (dataOutput.is_open()){
		for (auto it = p.begin(); it < p.end(); it++){//iterator it
			dataOutput << it->ISBN << '|' << it->category << '|' << it->bookName << '|' << it->authorName
				<< '|' << it->price << '|' << it->totalSalesVolume << endl;
		}
	}
	else{
		cout << "ERROR opening outData.txt";
		return -1;
	}
	dataOutput.close();//close the file
	return 0;
}