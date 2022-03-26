#include <iostream>
using namespace std;
#include "Car.h"

int main()
{

	// initialize car object

	Car car(2012, "Honda");

	// call the accelerate method 5 times
	
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();

	// Display the speed of the car

	cout << car.GetSpeed() << "\n";

	// call the break method 5 times

	car.Break();
	car.Break();
	car.Break();
	car.Break();
	car.Break();

	// Display the speed of the car

	cout << car.GetSpeed();


	return 0;
}