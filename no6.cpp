//programming challenge no.6
#include <iostream>
using namespace std;

int main(){
	int mass;
	
	cout << "please enter the mass of the object you want to weigh" << endl;
	cin >> mass;
	
	float weight = mass * 9.8;
	
	cout << "the weight of your object is " << weight << " N" << endl;
	
	if(weight > 1000){
		cout << "your object is too heavy!" << endl;
	} else if(weight < 10){
		cout << "your object is too light!" << endl;
	} else {
		cout << "your object weighs just right" << endl;
	}
	return 0;
}
