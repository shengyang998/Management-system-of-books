#include "Main.h"

BOOK *input(){
	int n = 0;
	BOOK *book = new BOOK;
	BOOK *listHead = nullptr;
	BOOK *tptr = nullptr;
	string line;
	ifstream dataInput;
	dataInput.open("./inData.txt");//Open input file
	if (dataInput.is_open()){//opened succeed
		while (!dataInput.eof()){//Load data from file until to the end of the end
			n++;
			getline(dataInput, line);
			istringstream rec(line);
			//get ISBN Category BookName AuthorName Price
			rec >> book->ISBN >> book->category >> book->bookName >> book->authorName >> book->price;
			for (int i = 0; i <= 11; i++){//get latest 12 month sales volume
				rec >> book->monSalesVolume[i];
			}
			book->totalSalesVolume = 0;//Initialize TotalSalesVolume
			for (int i = 0; i <= 11; i++){//calc TotalSalesVolume
				book->totalSalesVolume += book->monSalesVolume[i];
			}
			rec.ignore(100, '\n');
			if (n == 1){
				listHead = book;
			}
			tptr = book;
			book->next = new BOOK;//new the next one
			book = book->next;//point to the next one
		}
		delete book;
		if (tptr != nullptr){
			tptr->next = nullptr;
		}
		book = nullptr;
		dataInput.close();
	}
	else{//open failed
		//cout << "An error occured when reading the file.";
		return listHead;
	}
	return listHead;
}