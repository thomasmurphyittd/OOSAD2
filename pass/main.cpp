#include "weather.h"
using namespace std;

int main(){

	day one = new day();
	one.high = 10;
	one.low = 1;
	getTemps(day one);
	return 0;
}
