//programming challenge no. 1
#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Hello, please enter two numbers" << endl;
	cin >> a >> b;
	
	if(a < b){
		cout << "The larger number is: " << b << endl;
		cout << "The smaller number is: " << a << endl;
	} else{
		cout << "The larger number is: " << a << endl;
		cout << "The smaller number is: " << b << endl;
	}
	return 0;
}
