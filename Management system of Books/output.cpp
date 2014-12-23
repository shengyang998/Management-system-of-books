#include "Main.h"

int output(BOOK *listHead){

	string line;
	
	ofstream dataOutput;
	dataOutput.open("./outData.txt",ofstream::app);//open output file
	if (dataOutput.is_open()){
		//*p=listHead,
		for (BOOK *p = listHead; p->next != 0;p=p->next){//do until at the end of the list
			//Output to the file
			dataOutput << p->ISBN << ' ' << p->category << ' ' << p->bookName << ' ' << p->authorName
				<< ' ' << p->price << ' ' << p->totalSalesVolume;

		}
		return 0;
	}
	else{
		cout << "ERROR opening outData.txt";
		return -1;
	}

}

int output(vector<BOOK> p){

	

	string line;
	ofstream dataOutput;
	dataOutput.open("./outData.txt", ofstream::app);//open output file
	if (dataOutput.is_open()){
		
		for (int i : *p){//i:int ,p:BOOK
			dataOutput << (p)[i].ISBN << ' ' << (p)[0].category << ' ';
		}
		return 0;
	}
	else{
		cout << "ERROR opening outData.txt";
		return -1;
	}
}