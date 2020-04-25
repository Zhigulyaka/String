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
	String();//����������� �� ���������
	String(const char* mas, int n);//����������� ����������
	String(const String& s);//����������� �����������
	~String();//����������
	friend String operator+(const String& s1, const String& s2);//�������� �����
	String& operator=(const String& other);//�������� ������������
	bool operator < (const String& other) const;//�������� ������
	bool operator > (const String& other) const;//�������� ������
	bool operator == (const String& other) const;//�������� �����
	const char& operator[](int index) const; // �������� ����������
    friend ostream& operator<<(ostream& vyvod, const String& other);//�������� ���������� ������
	friend istream& operator>>(istream& vvod,String& other);//�������� ���������� �����
	char& GetArr(int i);//��������� �������� �������
	int GetSize();//��������� �������
	void Razbienie(const char* elem);//��������� ������ �� ��������
	int FindSimvol(char simvol);//���������� �������
	int FindString(String& slovo);//���������� ��������
	void Print();//����� �� �����
	void Sum(const String& s1, const String& s2);//���������� �����
};