//programming challenge no.7
#include <iostream>
using namespace std;

int main(){
	float seconds;
	
	cout << "enter a number of seconds" << endl;
	cin >> seconds;
	
	float minute = seconds / 60;
	float hour = seconds / 3600;
	float day = seconds / 86400;
	
	if(seconds >= 60 && seconds < 3600){
		cout << "the time is " << minute << " minutes" << endl;
	} else if(seconds >= 3600 && seconds < 86400){
		cout << "the time is " << hour << " hours" << endl;
	} else if(seconds >= 86400){
		cout << "the time is " << day << " days" << endl;
	} else {
		cout << "the time is " << seconds << " seconds" << endl;
	}
	return 0;
}
