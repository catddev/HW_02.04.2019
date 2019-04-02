#include"Books.h"
//setters
void Book::set_author(const char * str)
{
	strcpy_s(this->author, str);
}

void Book::set_name(const char * str)
{
	strcpy_s(this->name, str);
}

void Book::set_publisher(const char * str)
{
	strcpy_s(this->publisher, str);
}

void Book::set_year(int y)
{
	this->year = y;
}

void Book::set_pages(int p)
{
	this->pages = p;
}

Book::Book()
{
	strcpy_s(author, "");
	strcpy_s(name, "");
	strcpy_s(publisher, "");
	year = 0;
	pages = 0;
}

Book::Book(const char * author, const char * name, const char * publisher, int year, int pages)
{
	strcpy_s(this->author, author);
	strcpy_s(this->name, name);
	strcpy_s(this->publisher, publisher);
	this->year = year;
	this->pages = pages;
}

//getters
const char * Book::get_author()
{
	return author;
}

const char * Book::get_name()
{
	return name;
}

const char * Book::get_publisher()
{
	return publisher;
}

int Book::get_year()
{
	return year;
}

int Book::get_pages()
{
	return pages;
}

bool Book::by_author(const char * str)
{
	if (strcmp(author, str) == 0)
		return true;
	else
		return false;
}

bool Book::by_publisher(const char * str)
{
	if (strcmp(publisher, str) == 0)
		return true;
	else
		return false;
}

bool Book::by_year(int y)
{
	return (year > y);
}
void Book::print()
{
	cout << author << ". " << name << endl;
	cout << publisher << ": " << year << "г., " << pages << "с." << endl;
}
