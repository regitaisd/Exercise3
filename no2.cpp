//programming challenge no.2
#include <iostream>
using namespace std;

int main(){
	int x;
	
	cout << "Hello, please enter a number from 1 to 10" << endl;
	cin >> x;
	
	switch (x){
		case 1:
			cout << "your roman numeral is: I";
			break;
		case 2:
			cout << "your roman numeral is: II";
			break;
		case 3:
			cout << "your roman numeral is: III";
			break;
		case 4:
			cout << "your roman numeral is: IV";
			break;
		case 5:
			cout << "your roman numeral is: V";
			break;
		case 6:
			cout << "your roman numeral is: VI";
			break;
		case 7:
		    cout << "your roman numeral is: VII";
			break;
		case 8:
		    cout << "your roman numeral is: VIII";
			break;
		case 9:
		    cout << "your roman numeral is: IX";
			break;
		case 10:
		    cout << "your roman numeral is: X";
			break;
		default:
		    cout << "Number invalid, please enter a number from 1 to 10" << endl;
			break;		
	}
	return 0;
}
