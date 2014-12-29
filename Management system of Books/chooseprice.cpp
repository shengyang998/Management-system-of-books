#include "Main.h"

int output(vector<BOOK> p);

int choosePrice(BOOK *listHead, int min, int max){
	
	vector<BOOK> book;

	for (BOOK *p = listHead; p != nullptr; p = p->next){
		if ((p->price<max) && ((p->price>min) || (p->price == min))){
			book.push_back(*p);
		}
	}
	int tempflag = output(book);
	if (tempflag == 0){
		cout << "Output complete.\n";
	}
	else if (tempflag == -1){
		cout << "Output failed.\n";
	}
	return 0;
}