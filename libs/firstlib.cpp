/*
* g++ -c firstlib.cpp -o firstlib.o
* ar rcs libFirstLib.a firstlib.o
* g++ main.cpp -L. -lFirstLib -o main
* ./main
*/
#include <iostream>
#include "firstlib.h"
using namespace std;
void printGreeting()
{
cout << "Welcome to C++ Library Programming" << endl;
}
void weatherForecast(int ndays){
  std::cout << "weather forecast for the next " << ndays << " days";
  for (int i = 0;i < ndays;i++){
      std::cout << "Day 1 details"<<endl;
      std::cout << "High:"<< ndays *14<<" Low:" << ndays -15 <<endl;
  }

}
