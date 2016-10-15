//programming challenge no.12
#include <iostream>
using namespace std;

int main(){
	const int package = 99;
	int quantity;
	
	cout << "how many units are sold?" << endl;
	cin >> quantity;
	cout << endl;
	
	float cost = quantity * package;
	float disc1 = cost * 0.2;
	float disc2 = cost * 0.3;
	float disc3 = cost * 0.4;
	float disc4 = cost * 0.5;
	
	if(quantity < 0){
		cout << "sorry, invalid number. please restart the program";
	} else {
		if(10 <= quantity < 20){
			float totalcost1 = cost - disc1;
			cout << "the total cost of the purchase is: $" << totalcost1;
		} else if (20 <= quantity < 50){
			float totalcost2 = cost - disc2;
			cout << "the total cost of the purchase is: $" << totalcost2;
		} else if(50 <= quantity < 100){
			float totalcost3 = cost - disc3;
			cout << "the total cost of the purchase is: $" << totalcost3;
		} else{
			float totalcost4 = cost - disc4;
			cout << "the total cost of the purchase is: $" << totalcost4;
		}
	}
	return 0;
}
