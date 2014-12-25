#include "Main.h"

int output(BOOK *listHead);

int del(BOOK *listHead, string delstr){
	BOOK *p1 = listHead;
	BOOK *p2 = nullptr;
	BOOK *p3 = nullptr;
	char a = 'n';
	int i = 0;
	while (listHead != nullptr){//list is not empty
		if (i > 1){//introduce p2 to point to the former node of p1 when i>1
			p2 = p1;
			p1 = p1->next;
		}
		i++;
		if ((p1->ISBN == delstr) || (p1->authorName == delstr) || (p1->bookName == delstr) || (p1->category == delstr)){//hitted
			cout << "Find the book, do you really want to remove it?[Y/N]";
			while (!(cin >> a) || (a != 'y') || (a != 'Y') || (a != 'n') || (a != 'N')){
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Error when you choose what to do. Please try again: ";
			}
			if (a == 'y' || a == 'Y'){
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
			else {
				if (p1->next != nullptr){
					p1 = p1->next;
				}
				else continue;
			}
		}
	}
	output(listHead);
	return 0;
}