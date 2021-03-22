#pragma once
#include <istream>

class Array {
private:
    int n;
    int* values;
public:
    Array();    // Конструктор по умолчанию
    Array(int _n, int x = 0);   // Конструктор с параметрами
    Array(const Array& other);  // Конструктор копии
    ~Array();   // Деструктор

    Array operator + (const Array& arr);
    Array operator += (const Array& arr);
    Array operator + (const int x);
    Array& operator = (const Array& arr);
    int& operator [] (int i);
    int operator [] (int i) const;

    // Методы
    int length() const;
    bool find();    // Найти элемент в массиве
    Array extend(); // Расширить массив
    Array add();    // Добавление элемента в конец массива
    Array insert(); // Вставка элемента в заданное место
    Array remove(); // Удаление элемента с заданным индексом

    // Дружественные функции
    friend std::ostream& operator<< (std::ostream& out, const Array& arr);
    friend std::istream& operator>> (std::istream& in, Array& arr);
};