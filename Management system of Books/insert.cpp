#include "Main.h"

int insert(BOOK *listHead){

	//Get the data which will be inserted
	BOOK *book = new BOOK;
	cin >> book->ISBN >> book->category >> book->bookName >> book->authorName >> book->price;
	for (int i = 0; i <= 11; i++){//get latest 12 month sales volume
		cin >> book->monSalesVolume[i];
	}
	book->totalSalesVolume = 0;//Initialize TotalSalesVolume
	for (int i = 0; i <= 11; i++){//calculate TotalSalesVolume
		book->totalSalesVolume += book->monSalesVolume[i];
	}

	//insert the data
	BOOK *p=listHead;
	while (p != nullptr){//traverse the list
		if (p->ISBN == book->ISBN){

		}
	}
}