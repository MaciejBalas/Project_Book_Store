#ifndef add_hpp
#define add_hpp

using namespace std;

#include<iostream>
#include<list>
#include<string>

struct Book
{
	unsigned int id;
	string name;
	string author;
	string genre;
	int in_stock;
};

list<Book> add_book(list<Book> lista, Book ksiazka);

#endif // !add_hpp

