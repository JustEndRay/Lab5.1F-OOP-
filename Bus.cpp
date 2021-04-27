#include <string>
#include "Bus.h"
#include "Exception.h"
using namespace std;

int  Bus::GetNumber_of_passenger_seats() const { return Number_of_passenger_seats; }
void Bus::SetNumber_of_passenger_seats(int  value) { Number_of_passenger_seats = value; }

void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}
void  Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}
void Bus::Re()
{
	car.Re_assignment_Brand();
	car.Re_assignment_Power();
	Re_assignment_Number_of_passenger_seats();

}
void Bus::Change()
{
	car.Change_Brand();
	car.Change_Power();
	Change_Number_of_passenger_seats();
}
ostream& operator << (ostream& out, const Bus& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Bus& A)
{
	in >> A.car;
	cout << "Enter a Number of passenger seats "; in >> A.Number_of_passenger_seats;
	return in;
}
Bus::operator string() const
{
	stringstream ss;
	ss << car << endl;
	ss << "Number of passenger seats= " << Number_of_passenger_seats << endl;
	return ss.str();
}
