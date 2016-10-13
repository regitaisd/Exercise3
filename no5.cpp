//programming challenge no.5
#include <iostream>
using namespace std;

int main(){
	float weight, height;
	
	cout << "please enter your height" << endl;
	cin >> height;
	cout << "please enter your weight" << endl;
	cin >> weight;
	
	float bmi = weight * 730 / height * height;
	
	if(18.5 < bmi < 25){
		cout << "your weight is optimal to your height" << endl;
	} else if(bmi < 18.5){
		cout << "your weight is not optimal to your height, you are underweight" << endl;
	} else{
		cout << "your weight is not optimal to your height, you are overweight" << endl;
	}
	return 0;
}
