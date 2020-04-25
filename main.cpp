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
	String s2("привет",6);
	String s3("сегодня/хорошая/погода",22);
	String s4(s2);
	String s5("хорошая", 7);
	cout << "Проверим работу конструкторов по умолчанию и инициализатора:" << endl << "s1=" << s1 << endl << "s4=" << s4 << endl;
	cout << "Проверим работу конструктора копирования:" << endl << "s4=" << s4 << endl;
	cout << "Получим элемент из s3= " << s3.GetArr(4) << endl;
	cout << "Найдем подслово из s3= " << s3.FindString(s5) << endl;
	cout << "Найдем символ из s2= " << s2.FindSimvol('е') << endl;
	cout << "Получим размер s3= " << s3.GetSize() << endl;
	cout << "Разобьем строку s3: " << endl;
	s3.Razbienie("/");
	s4 = s5;
	cout << "Проверим работу оператора присваивания:" << endl << "s4=" << s4 << endl;
	s1 = s2 + s5;
	cout << "Проверим работу оператора сложения:" << endl << "s1=" << s1 << endl;
	f = s2<s3;
	cout << "Проверим работу оператора меньше:" << endl << "f=" << f << endl;
	f = s2>s3;
	cout << "Проверим работу оператора больше:" << endl << "f=" << f << endl;
	f = s2 == s3;
	cout << "Проверим работу оператора равенства:" << endl << "f=" << f << endl;
	
	

}
