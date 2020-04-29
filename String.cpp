#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "String.h"
#include <math.h>
#include <string.h>
using namespace std;

String::String()
{
	arr = new char[1];
	arr[0] = 0;
	size = 1;
}

String::String(const char* mas, int n)
{
	n = strlen(mas) + 1;
	arr = new char[n];
	for (int i = 0; i < n - 1; i++)
		arr[i] = mas[i];
	arr[n - 1] = 0;
	size = n;
}

String::String(const String& other)
{

	size = other.size;
	arr = new char[size];
	arr[size] = 0;
	for (int i = 0; i < size; i++)
		arr[i] = other.arr[i];
}

String::~String()
{
	if (arr != 0)
		delete[]arr;
	
	size = 0;
}

String operator+(const String& s1, const String& s2)
{
	String sum(s1);
	sum.Sum(s1, s2);
	return sum;

}

bool String :: operator < (const String& other) const
{
	if (strcmp(arr, other.arr) < 0) return true;
	else return false;
}

bool String::operator > (const String& other) const
{
	if (strcmp(arr, other.arr) > 0) return true;
	else return false;
}

bool String::operator==(const String& other) const
{

	if (strcmp(arr, other.arr) == 0) return true;
	else return false;

}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		if ((size < other.size)&& (size > other.size))
		{
			delete[] arr;
			size = other.size;
			arr = new char[size];
			arr[size] = 0;
		}
		for (int i = 0; i < size; i++)
			arr[i] = other[i];
	}
	return (*this);
}

const char& String::operator[](int index) const 
{
	if (index < 0 || index >= (size-1)) 
	{
		TStringExeption expt = arrINDOUTOFRANGE;
		throw expt;
	}
	return arr[index];
}

ostream& operator<<(ostream& vyvod, const String& other)
{
	vyvod << other.arr << endl;
	return vyvod;
}

istream& operator>>(istream& vvod, String& other)
{
	char ss[255];
	String a(ss,255);
	vvod.getline(ss, 255);
	other = a;
	return vvod;
}

char& String::GetArr(int i)
{
	if ((i >= 0) && (i < size))
		return arr[i];
	else return arr[0];
}

int String::GetSize()
{
	return (size-1);
}

void String::Sum(const String& s1, const String& s2)
{
	arr = new char[s1.size + s2.size - 1];
	this->size = s1.size + s2.size - 1;
	for (int i = 0; i < s1.size - 1; i++)
		arr[i] = s1.arr[i];
	for (int i = 0; i < s2.size; i++)
		arr[i + s1.size - 1] = s2.arr[i];
}

int String::FindSimvol(char simvol)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == simvol)
			return i;
	return -1;
}

int String::FindString(String& slovo)
{
	bool f = false;
	for (int i = 0; i < size; i++)
	{
		f = false;
		for (int j = 0; j < slovo.size - 1; j++)
			if (arr[i + j] != slovo.arr[j])
			{
				f = true;
				break;
			}
			else 
				return i;
	}
	return -1;
}

void String::Print()
{
	std::cout << arr << std::endl;
}

String* String::Razbienie(const char* elem)
{
	int k = 0;
	for (int i = 1; i < size-2; i++)
		if (elem)
			k++;
	String* mas_strok = new String[k];
	char*other = strtok(arr, elem);
	k = 0;
	while (other)
	{
		mas_strok[k] = other;
		k++;
		other =strtok (NULL, elem); // здесь параметр NULL указывает, что мы ПРОДОЛЖАЕМ обрабатывать str
	}
	return mas_strok;
}






