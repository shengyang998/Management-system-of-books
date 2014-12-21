#include "Main.h"

void select();

int main(){
	string choice;
	select();
	getline(cin, choice);
	switch (choice[0]){
	case '1':{
		if (input() == 0){
			break;
		}
		else{
			cout << "ERROR reading from file.";
			break;
		}
	}
	case '2':{
		break;
	}
	case '3':{
		break;
	}
	case '4':{
		break;
	}
	case '5':{
		break;
	}
	case '6':{
		break;
	}
	default:
		main();
		break;
	}
prompt_wait();
return 0;
}