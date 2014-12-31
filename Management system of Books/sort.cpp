#include "Main.h"

BOOK *sortbyprice(BOOK *listHead){

	BOOK *p = listHead;

	BOOK *pm = p, *tp = nullptr;

	for (int i = 0; p != nullptr; p = p->next, i++){
		tp = p->next;
		pm = p;

		//find the min price from p to end
		for (int n = 0; tp != 0; tp = tp->next, n++){
			if (tp->price < pm->price){
				pm = tp;
			}
		}
		swap(p->authorName, pm->authorName);
		swap(p->bookName, pm->bookName);
		swap(p->category, pm->category);
		swap(p->ISBN, pm->ISBN);
		for (int i = 0; i < 12; i++){
			swap(p->monSalesVolume[i], pm->monSalesVolume[i]);
		}
		swap(p->price, pm->price);
		swap(p->totalSalesVolume, pm->totalSalesVolume);

	}
	return listHead;
}

BOOK *sortbySV(BOOK *listHead){

	BOOK *p = listHead;

	BOOK *pm = p, *tp = nullptr;

	for (int i = 0; p != nullptr; p = p->next, i++){
		tp = p->next;
		pm = p;

		//find the max Sales Volume from p to end
		for (int n = 0; tp != 0; tp = tp->next, n++){
			if (tp->totalSalesVolume > pm->totalSalesVolume){
				pm = tp;
			}
		}
		swap(p->authorName, pm->authorName);
		swap(p->bookName, pm->bookName);
		swap(p->category, pm->category);
		swap(p->ISBN, pm->ISBN);
		for (int i = 0; i < 12; i++){
			swap(p->monSalesVolume[i], pm->monSalesVolume[i]);
		}
		swap(p->price, pm->price);
		swap(p->totalSalesVolume, pm->totalSalesVolume);

	}
	return listHead;
}
