#include "Main.h"

BOOK *sortbyprice(BOOK *listHead){

	BOOK *p = listHead, *pf = nullptr;

	BOOK *pm = p, *tp = nullptr, *tpf = nullptr, *pmf = nullptr;

	for (int i = 0; p != nullptr; pf = p, p = p->next, i++){
		tp = p->next;
		pm = p;

		//find the min form p to end
		for (int n = 0; tp != 0; tpf = tp, tp = tp->next, n++){
			if (tp->price < pm->price){
				pmf = tpf;
				pm = tp;
			}
		}

		//
		if (i == 0){//the listHead should be changed if the first one is hitted
			if (pmf->next != nullptr){
				pmf->next = pm->next;
			}
			pm->next = p;
			listHead = pm;
			p = pm;
		}

		else{//not the first one
			
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
	}

	return listHead;
}