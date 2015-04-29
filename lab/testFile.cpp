/*
* g++ -c firstlib.cpp -o firstlib.o
* ar rcs libFirstLib.a firstlib.o
* g++ main.cpp -L. -lFirstLib -o main
* ./main
*/
#include <iostream>
#include <string>
#include "testFile.h"
using namespace std;
void printGreeting()
{
cout << "Welcome to C++ Library Programming" << endl;
}
void weatherForecast(int ndays){
	if(ndays < 1 || ndays > 3){
		cout << "INVALID ENTRY";	
	}
	else{
	cout << "Weather for next " << ndays << " days is" << endl;
	int days[3] = {1,2,3};
	double highs[3] = {30.3,29.8,28.0};
	double lows[3] = {-30.3,-29.8,-28.0};
	double rains[3] = {4,20,28.0};
	double winds[3] = {400,100,2000};
	string dirs[3] = {"WEST","EAST","North"};
	for(int i = 0;i < ndays;i++){
		cout << "Weather For DAY: "<<days[i]<< endl;
		cout << "High Temp="<<highs[i] <<"C"<< endl;
		cout << "Low Temp="<<lows[i] <<"C" << endl;
		cout << "Predicted Rainfall:"<<rains[i] <<"mm"<< endl;
		cout << "Windspeed: "<<winds[i]<<" km/h" << endl;
		cout << "Wind-Direction: "<<dirs[i] << endl;	
	}
}
};
