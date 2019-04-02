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
	char publisher[50];
	int year;
	int pages;
public:
	//constructors
	Book();//default
	Book(const char* author, const char *name, const char*publisher, int year, int pages);//with parameters;
	//может и не понадобиться для каждой задачи

	const char*get_author();
	const char*get_name();
	const char*get_publisher();
	int get_year();
	int get_pages();

	void set_author(const char*str);
	void set_name(const char*str);
	void set_publisher(const char*str);
	void set_year(int y);
	void set_pages(int p);
	void print();

	bool by_author(const char*str);
	bool by_publisher(const char*str);
	bool by_year(int y);

};
