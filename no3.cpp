//programming challenge no.3
#include <iostream>
using namespace std;

int main(){
	int date, month, year;
	
	cout << "enter a date, month and year(in two digits)" << endl;
	cin >> date >> month >> year;
	
	if(date * month == year){
		cout << "this date is a magic date!" << endl;
	} else{
		cout << "this date is not a magic date!" << endl;
	}
	return 0;
}
