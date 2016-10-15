//programming challenge no.23
#include <iostream>
using namespace std;

int main(){
	int choice;
	
	cout << "Geometry Calculator" << endl;
	cout << "1. Calculate the area of a circle\n"
	        "2. Calculate the area of a rectangle\n"
	        "3. Calculate the area of a triangle\n"
	        "4. Quit\n";
	cin >> choice;
	cout << endl;
	
	float radius, length, width, base, height;
	const float pi = 3.14159;
	switch(choice){
		case 1:
			cout << "please enter the radius of your circle" << endl;
			cin >> radius;
			if(radius < 0){
				cout << "error: negative numbers are not accepted";
			} else {
				float areaCircle = pi * radius * radius;
				cout << "the area of your circle is: " << areaCircle;
			}
			break;
		case 2:
			cout << "please enter the length and the width of your rectangle" << endl;
			cin >> length >> width;
			if(length < 0 || width < 0){
				cout << "error: negative numbers are not accepted";
			} else {
				double areaRec = length * width;
				cout << "the area of your rectangle is: " << areaRec;
			}
			break;
		case 3:
		    cout << "please enter the base and height of your triangle" << endl;
			cin >> base >> height;
			if(base < 0 || height < 0){
				cout << "error: negative numbers are not accepted";
			} else {
				double areaTri = base * height * 0.5;
				cout << "the area of your triangle is: " << areaTri;
			}
			break;
		case 4:
			break;
		default:
		    cout << "program error: option not available, please choose from option 1-4";
			break;	
	}
	return 0;
}
