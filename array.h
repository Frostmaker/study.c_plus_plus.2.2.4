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

    Array operator+ (const Array& arr);
    Array operator+= (const Array& arr);
    Array operator+ (const int x);
    Array& operator= (const Array& arr);
    int& operator[] (int i);
    int operator[] (int i) const;  // TODO: Что даёт const на конце оператора? Будет ли оно работать для not const Array? А наоборот?

    // Методы
    // TODO: Чем <Array> отличается от <Array&>? Что лучше использовать?
    int length() const;
    bool find(int x);    // Найти элемент в массиве
    Array& extend(int _n); // Расширить массив
    Array& add(int x);    // Добавление элемента в конец массива
    Array& insert(int x, int pos); // Вставка элемента в заданное место
    Array& remove(int pos); // Удаление элемента с заданным индексом

    // Дружественные функции
    friend std::ostream& operator<< (std::ostream& out, const Array& arr);
    friend std::istream& operator>> (std::istream& in, Array& arr);
};