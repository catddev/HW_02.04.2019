#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;

//Book: Автор, Название, Издательство, Год, Количество страниц.
//Создать массив объектов.
//Вывести :
	//a) список книг заданного автора;
	//b) список книг, выпущенных заданным издательством;
	//c) список книг, выпущенных после заданного года.

class Book {
private:
	char author[50];
	char name[100];
	char publish[30];
	int year;
	int pages;
public:
	void set_author(const char*str);
	void set_name(const char*str);
	void set_publish(const char*str);
	void set_year(int y);
	void set_pages(int p);
	void print();

	const char*get_author();
	const char*get_name();
	const char*get_publish();
	int get_year();
	int get_pages();

	bool by_author(const char*str);
	bool by_publish(const char*str);
	bool by_year(int y);

};
