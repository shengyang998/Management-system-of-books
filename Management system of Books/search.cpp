#include "Main.h"

BOOK search(BOOK *listHead, string keyword){//get listHead and keyword
	BOOK *p1, *p2;
	p1 = listHead;
	if ((p1->authorName == keyword) || (p1->bookName == keyword) || (p1->category == keyword) || (p1->ISBN == keyword)){
		return *p1;
	}
	else {

	}
}