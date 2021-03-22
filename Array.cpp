#include "array.h"

int& Array::operator[](int i) { return values[i]; }

int Array::operator[](int i) const { return values[i]; }

int Array::length() const { return n; }

Array::Array()
{
	n = 1;
	values = new int[n] { 0 };
}

Array::Array(int _n, int x)
{
	n = _n;
	values = new int[n];
	for (int i{ 0 }; i < n; ++i) {
		values[i] = x;
	}
}

Array::Array(const Array& other)
{
	n = other.n;
	values = new int[n];
	for (int i{ 0 }; i < n; ++i) {
		values[i] = other.values[i];
	}
}

Array::~Array()
{
	delete[] values;
}

Array Array::operator+(const Array& arr)
{
	if (n != arr.n)
		throw (1);
	else {
		Array new_one(n);
		for (int i{ 0 }; i < n; ++i) {
			new_one.values[i] = this->values[i] + arr.values[i];
		}

		return new_one;
	}
}

Array Array::operator += (const Array& arr)
{
	for (int i = 0; i < n; ++i)
		values[i] = values[i] + arr[i];
	return *this;
}

Array Array::operator+(const int x)
{
	Array new_one(n);
	for (int i{ 0 }; i < n; ++i)
		new_one[i] = (*this)[i] + x;

	// TODO: Можно ли не создавать новый объект а возвращать <*this>, как в операции "+="?
	return new_one;
}

Array& Array::operator=(const Array& arr)
{
	if (this != &arr) {
		delete[] values;
		n = arr.n;
		values = new int[n];
		for (int i{ 0 }; i < n; ++i)
			(*this)[i] = arr[i];
	}

	// TODO: Почему возвращается сам объект, а не ссылка на него?
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Array& arr)
{
	out << "[";
	for (int i{ 0 }; i < (arr.n - 1); ++i)
		out << arr[i] << ", ";
	out << arr[arr.n - 1] << "]";
	return out;
}

std::istream& operator>>(std::istream& in, Array& arr)
{
	in >> arr.n;
	for (int i{ 0 }; i < arr.n; ++i)
		in >> arr[i];

	return in;
}
