#include "Main.h"

BOOK *sortbyprice(BOOK *listHead){

	BOOK *p0 = listHead;//iterator
	//BOOK *p1 = listHead;//compare with p0
	BOOK *tptr = listHead;//compare with p0 and p1

	//p*f is the former node of p*
	BOOK *pm = nullptr;
	BOOK *p0f = nullptr;
	//BOOK *p1f = nullptr;
	BOOK *tptrf = nullptr;
	BOOK *pmf = nullptr;
	int i = 0;

	while (p0 != nullptr){
		i++;
		//p1 = p0;
		tptr = pm = p0;
		if (i == 1){//The first one
			while (tptr != nullptr){//traverse the list to find the min price
				if (tptr->price < pm->price){
					pm = tptr;//the min is pm
					pmf = tptrf;
				}

				if (tptr->next != nullptr){
					tptrf = tptr;
					tptr = tptr->next;
				}
				else{
					break;
				}
			}
			if (pm->price < p0->price){//if the min is smaller than p0, put the min to the front of p0 and change the listHead
				pmf->next = pm->next;
				pm->next = p0;
				listHead = pm;
			}
		}
		else{//others

			while (tptr != nullptr){
				if (tptr->price < pm->price){
					pm = tptr;//the min is pm
					pmf = tptrf;
				}

				if (tptr->next != nullptr){
					tptrf = tptr;
					tptr = tptr->next;
				}
				else{
					break;
				}
			}
			if (pm->price < p0->price){//if the min is smaller than p0, put the min to the front of p0
				p0f = pm;
				pmf = pm->next;
				pm->next = p0;
			}
		}

		if (p0->next != nullptr){
			p0f = p0;
			p0 = p0->next;
		}
		else{
			break;
		}
	}
	return listHead;
}