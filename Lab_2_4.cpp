#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	Array a;
	Array b(10, 5);
	cout << "a = " << a << "\n" << "b = " << b << '\n';
	return EXIT_SUCCESS;
}