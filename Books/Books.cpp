#include"Books.h"

void Book::set_author(const char * str)
{
	strcpy_s(this->author, str);
}

void Book::set_name(const char * str)
{
	strcpy_s(this->name, str);
}

void Book::set_publish(const char * str)
{
	strcpy_s(this->publish, str);
}

void Book::set_year(int y)
{
	this->year = y;
}

void Book::set_pages(int p)
{
	this->pages = p;
}

void Book::print()
{
	cout << author << ". " << name << endl;
	cout << publish << ": " << year << "г., " << pages << "с." << endl;
}

const char * Book::get_author()
{
	return author;
}

const char * Book::get_name()
{
	return name;
}

const char * Book::get_publish()
{
	return publish;
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

bool Book::by_publish(const char * str)
{
	if (strcmp(publish, str) == 0)
		return true;
	else
		return false;
}

bool Book::by_year(int y)
{
	return (year > y);
}
