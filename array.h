#pragma once
#include <istream>

class Array {
private:
    int n;
    int* values;
public:
    Array();    //конструктор по умолчанию
    Array(int _n, int x = 0);   //конструктор с параметрами
    Array(const Array& other);  //конструктор копии
    ~Array();   // деструктор

    Array operator + (const Array& arr);
    Array operator += (const Array& arr);
    Array operator + (const int x);
    Array& operator = (const Array& arr);
    int& operator [] (int i);
    int operator [] (int i) const;

    // методы
    int length() const;

    // дружественные функции
    friend std::ostream& operator<< (std::ostream& out, const Array& arr);
    friend std::istream& operator>> (std::istream& in, Array& arr);
};