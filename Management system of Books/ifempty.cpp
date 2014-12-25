#include "Main.h"

int iflistempty(BOOK *listHead){
	if (listHead == nullptr){
		cout << "The list is empty, please import data!" << endl;
		return -1;//empty
	}
	else {
		return 0;//is not empty
	}
}