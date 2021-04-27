#include <iostream>
#pragma pack(1)
#include "Bus.h"
#include "Exception.h"
int main()
{
	Bus b;
	bool init;
	do
	{
		try
		{
			init = true;
			std::cout << "Bus" << endl;
			std::cin >> b;
		}
		catch (Exception& e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what() << endl;
		}
	} while (!init);
	cout << "\nRe_assignment: " << endl;
	b.Re();
	cout << b;
	cout << "\nChange: " << endl;
	b.Change();
	cout << b;
	return 0;
}