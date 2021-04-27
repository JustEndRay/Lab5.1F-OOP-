#pragma once
#include "Exception.h"
#include "Car.h"
class Bus
{
	double Number_of_passenger_seats;
	Car car;
public:
	Car GetCar() { return car; };
	int GetNumber_of_passenger_seats() const;

	void SetNumber_of_passenger_seats(int value);
	void SetCar(Car car) { this->car = car; };

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();
	void  Re();
	void  Change();

	friend ostream& operator << (ostream&, const Bus&);
	friend istream& operator >> (istream&, Bus&);
	operator string() const;
};
