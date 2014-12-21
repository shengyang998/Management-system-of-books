#include "Main.h"

void select(){
	cout << "What do you want to do:\n"
		<< setfill('*') << setw(69) << '*' << endl << setfill(' ')
		<< setiosflags(ios::left) << setw(35) << "1.Get the books' info form file."
		<< "2.Search\n"
		<< setw(35) << "3.Insert"
		<< "4.Delete\n"
		<< setw(35) << "5.Sort"
		<< "6.Output info to file\n"
		<< setfill('*') << setw(69) << '*' << endl;
}