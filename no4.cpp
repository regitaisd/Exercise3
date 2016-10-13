//programming challenge no.4
#include <iostream>
using namespace std;

int main(){
	int lengthA, lengthB, widthA, widthB;
	
	cout << "enter the length and width for rectangle 1" << endl;
	cin >> lengthA >> widthA;
	
	cout << "enter the length and width for rectangle 2" << endl;
	cin >> lengthB >> widthB;
	
	int rectangleA = lengthA * widthA;
	int rectangleB = lengthB * widthB;
	
	if(rectangleA = rectangleB){
		cout << "the area of rectangle 1 and rectangle 2 is the same" << endl;
	} else if(rectangleA > rectangleB){
		cout << "the area of rectangle 1 is greater than rectangle 2" << endl;
	} else{
		cout << "the area of rectangle 2 is greater than rectangle 1" << endl;
	}
	return 0;
}
