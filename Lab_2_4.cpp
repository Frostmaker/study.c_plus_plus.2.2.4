#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	Array a;  // Конструктор по умолчанию
	cout << "a = " << a << "\n";


	Array b(10, 5);  // Конструктор
	cout << "b = " << b << '\n';


	Array c(b);  // Конструктор копирования
	cout << "c = " << c << '/n';


	Array d;
	d = b;  // Перегрузка "="
	cout << "d = " << d << '/n';


	return EXIT_SUCCESS;
}