#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
	rectangle* rectangle1 = rectangle::instance(7, 4);
	rectangle* rectangle2 = rectangle::instance(19, 15);
	cout << "*rec1: " << *rectangle1 << endl;
	cout << "*rec2: " << *rectangle2 << endl;
}