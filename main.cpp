#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <string.h>
#include<iostream>
#include <locale>

int  main()
{
	setlocale(LC_ALL, "Russian");
	bool f;
	String s1;
	String s2("������",6);
	String s3("�������/�������/������",22);
	String s4(s2);
	String s5("�������", 7);
	cout << "�������� ������ ������������� �� ��������� � ��������������:" << endl << "s1=" << s1 << endl << "s4=" << s4 << endl;
	cout << "�������� ������ ������������ �����������:" << endl << "s4=" << s4 << endl;
	cout << "������� ������� �� s3= " << s3.GetArr(4) << endl;
	cout << "������ �������� �� s3= " << s3.FindString(s5) << endl;
	cout << "������ ������ �� s2= " << s2.FindSimvol('�') << endl;
	cout << "������� ������ s3= " << s3.GetSize() << endl;
	cout << "�������� ������ s3: " << endl;
	s3.Razbienie("/");
	s4 = s5;
	cout << "�������� ������ ��������� ������������:" << endl << "s4=" << s4 << endl;
	s1 = s2 + s5;
	cout << "�������� ������ ��������� ��������:" << endl << "s1=" << s1 << endl;
	f = s2<s3;
	cout << "�������� ������ ��������� ������:" << endl << "f=" << f << endl;
	f = s2>s3;
	cout << "�������� ������ ��������� ������:" << endl << "f=" << f << endl;
	f = s2 == s3;
	cout << "�������� ������ ��������� ���������:" << endl << "f=" << f << endl;
	
	

}
