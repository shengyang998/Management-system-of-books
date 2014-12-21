#include "Main.h"

int input(){
	BOOK *book = new BOOK;
	string line;
	ifstream dataInput;
	dataInput.open("./inData.txt");//Open input file
	if (dataInput.is_open()){//opened succeed
		for (; !dataInput.eof();){//Load data from file until to the end of the end
			getline(dataInput, line);
			istringstream rec(line);
			//get ISBN Category BookName AuthorName Price
			rec >> book->ISBN >> book->category >> book->bookName >> book->authorName >> book->price;
			for (int i = 0; i < 12;i++){//get latest 12 month sales volume
				rec >> book->monSalesVolume[i];
			}
			rec.ignore(100, '\n');
		}
		dataInput.close();
	}
	else{//open failed
		cout << "An error occured when reading the file.";
		return -1;
	}
	return 0;
}