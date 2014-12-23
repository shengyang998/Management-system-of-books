#include "Main.h"

int output(vector<BOOK> p);

int search(BOOK *listHead, string keyword){//get listHead and keyword
	vector<BOOK> p;
	BOOK *p1 = listHead;
	for (; p1->next != nullptr; p1 = p1->next){
		//find returns subscript or npos
		if ((p1->authorName.find(keyword)) || (p1->bookName.find(keyword)) || (p1->category.find(keyword)) || (p1->ISBN.find(keyword))){
			p.push_back(*p1);
		}
	}
	output(p);
	return 0;
}