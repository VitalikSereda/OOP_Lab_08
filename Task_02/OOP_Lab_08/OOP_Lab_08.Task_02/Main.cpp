#include <iostream>
#include "Drive.h"
#include "Price.h"
#include "Taxi.h"
#include "Bus.h"
#include "TaxiPrice.h"
#include "BusPrice.h"

int main()
{
	Price* taxi = new TaxiPrice();
	Price* bus = new BusPrice();
	Drive* drive1 = new Taxi(1414, "driver1", taxi, 14, 14, 14);
	Drive* drive2 = new Bus(1265, "driver2", bus, 14, 14, 14);
	cout << *drive1 << " " << drive1->PriceOfDrive() << endl;
	cout << *drive2 << " " << drive2->PriceOfDrive() << endl;
}