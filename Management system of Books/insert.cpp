#include "Main.h"

int sort(BOOK *listHead);
int output(BOOK *listHead);

int insert(BOOK *listHead, bool flag){
	char a;
	switch (flag){
	case 0:{//if has not been sorted
		cout << "The list has not been sorted, do you want to sort it before inserting?[Y/N]\n";
		while (!(cin >> a) || ((a != 'y') && (a != 'Y') && (a != 'n') && (a != 'N'))){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Error when you choose what to do. Please try again: ";
		}
		if (a == 'y' || a == 'Y'){//sort and keep on
			sort(listHead);
			flag = 1;
		}
		else if (a == 'n' || a == 'N'){

			//insert without sorted
			//Get the data which will be inserted
			BOOK *book = new BOOK;
			cout << "Input what you want to insert in this format:\n"
				<< "ISBN category BookName AuthorName Price MonthlySalesVolume*12\n";
			cin >> book->ISBN >> book->category >> book->bookName >> book->authorName >> book->price;
			for (int i = 0; i <= 11; i++){//get latest 12 month sales volume
				cin >> book->monSalesVolume[i];
			}
			book->totalSalesVolume = 0;//Initialize TotalSalesVolume
			for (int i = 0; i <= 11; i++){//calculate TotalSalesVolume
				book->totalSalesVolume += book->monSalesVolume[i];
			}

			//insert to the head
			book->next = listHead;
			listHead = book;
			//////////////////Output////////////////////
			cout << "Warning: The books have not been sorted. But they will be output.\n";
			int tempflag = output(listHead);
			if (tempflag == 0){
				cout << "Output complete.\n";
			}
			else if (tempflag == -1){
				cout << "Output failed.\n";
			}
			//////////////////Output////////////////////
			return 1;//stop the function running
		}
	}

	case 1:{//already sorted
		//Get the data which will be inserted
		BOOK *book = new BOOK;
		cout << "Input what you want to insert in this format:\n"
			<< "ISBN category BookName AuthorName Price MonthlySalesVolume*12\n";
		cin >> book->ISBN >> book->category >> book->bookName >> book->authorName >> book->price;
		for (int i = 0; i <= 11; i++){//get latest 12 month sales volume
			cin >> book->monSalesVolume[i];
		}
		book->totalSalesVolume = 0;//Initialize TotalSalesVolume
		for (int i = 0; i <= 11; i++){//calculate TotalSalesVolume
			book->totalSalesVolume += book->monSalesVolume[i];
		}

		//insert the data
		BOOK *p = listHead;
		BOOK *tptr = nullptr;
		while (p != nullptr){//traverse the list
			if ((p->ISBN == book->ISBN) || (p->authorName == book->authorName) || (p->bookName == book->bookName) 
				|| (p->category == book->category)){//hitted
				cout << "There is already a same book, please chack your input" << endl;
				return -1;//Find the same book and stop the function running
			}
			else if (p->next != nullptr){//didn't hit and p has not yet pointed to the end
				if (p->next->price > book->price){//using ">" because the list is sorted from min to max
					//inserting
					tptr = p->next;
					p->next = book;
					book->next = tptr;
					break;//break the while
				}
			}
			else{//p pointed to the end
				//insert to the end of the list
				p->next = book;
				book->next = nullptr;
				break;//break the while
			}
			p = p->next;
		}
		break;//break the switch
	}
	}
	//////////////////Output////////////////////
	cout << "Insert complete, the data is being output.\n";
	int tempflag = output(listHead);
	if (tempflag == 0){
		cout << "Output complete.\n";
	}
	else if (tempflag == -1){
		cout << "Output failed.\n";
	}
	//////////////////Output////////////////////
	return 0;
}