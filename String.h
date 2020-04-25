#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>

using namespace std;
enum TStringExeption { arrINDOUTOFRANGE };
class String
{
protected:
	
	char* arr;
	int size;
public:
	String();//конструктор по умолчанию
	String(const char* mas, int n);//конструктор индексации
	String(const String& s);//конструктор копирования
	~String();//деструктор
	friend String operator+(const String& s1, const String& s2);//оператор суммы
	String& operator=(const String& other);//оператор присваивания
	bool operator < (const String& other) const;//оператор меньше
	bool operator > (const String& other) const;//оператор больше
	bool operator == (const String& other) const;//оператор равно
	const char& operator[](int index) const; // операция индексации
    friend ostream& operator<<(ostream& vyvod, const String& other);//оператор потокового вывода
	friend istream& operator>>(istream& vvod,String& other);//оператор потокового ввода
	char& GetArr(int i);//получение элемента массива
	int GetSize();//получение размера
	void Razbienie(const char* elem);//разбиение строки на подслова
	int FindSimvol(char simvol);//нахождение символа
	int FindString(String& slovo);//нахождение подслова
	void Print();//вывод на экран
	void Sum(const String& s1, const String& s2);//нахождение суммы
};