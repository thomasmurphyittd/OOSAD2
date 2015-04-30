#include "Num.h"
#include <iostream>
using namespace std;
Num::Num(int n){
	num = n;
}
void disp(Num a){
	cout <<  a.num << endl;
}
int Num::getNum()
{
return num;
}
