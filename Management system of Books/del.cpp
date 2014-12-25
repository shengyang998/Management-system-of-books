#include "Main.h"

int del(BOOK *listHead, string delstr){
	BOOK *p1 = listHead;
	BOOK *p2 = nullptr;
	BOOK *p3 = nullptr;
	int i = 0;
	while (listHead != nullptr){//list is not empty
		if (i != 1){
			p2 = p1;
			p1 = p1->next;
		}
		i++;
		if ((p1->ISBN == delstr) || (p1->authorName == delstr) || (p1->bookName == delstr) || (p1->category == delstr)){//hitted
			if ((i == 1) && (p1->next != nullptr)){//p1 pointed to the head of the list
				listHead = p1->next;//move the head
				delete p1;//delete the old head
			}
			else if ((i != 1) && (p1->next == nullptr)){//p1 pointed to the end of the list
				p2->next = nullptr;
				delete p1;
			}
			else if (listHead->next == nullptr){//the list has only one node
				delete listHead;
				listHead = nullptr;
			}
			else {//p1 pointed to the normal node
				p2->next = p1->next;
				delete p1;
			}
		}
	}
	if (listHead == nullptr){//list is empty
		cout << "The list is empty, please import data!" << endl;
		return -1;
	}
	return 0;
}