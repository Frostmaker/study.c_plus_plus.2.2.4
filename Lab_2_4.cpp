#include <iostream>
#include "array.h"

using namespace std;

int main()
{
	Array a;  // Конструктор по умолчанию
	cout << "a = " << a << "\n";


	Array b(1, 5);  // Конструктор
	cout << "b = " << b << '\n';


	Array c(b);  // Конструктор копирования
	cout << "c = " << c << '\n';


	Array d;
	d = b;  // Перегрузка "="
	cout << "d = " << d << '\n';


	b.extend(4);
	cout << "b = " << b << "\n";

	a.add(2);
	cout << "a = " << a << "\n";

	cout << "4 in b - " << b.find(4) << '\n';

	b.insert(4, 0);
	cout << "b = " << b << "\n";

	cout << "4 in b - " << b.find(4) << '\n';

	b.remove(0);
	cout << "b = " << b << "\n";

	return EXIT_SUCCESS;
}