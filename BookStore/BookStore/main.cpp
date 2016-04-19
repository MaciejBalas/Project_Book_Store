#include<iostream>
#include<list>
#include<string>
#include "search.hpp"

using namespace std;

struct Book
{
	unsigned int id;
	string name;
	string author;
	string genre;
	int in_stock;
};

void show(list<Book> lista)
{
	list<Book>::iterator iter;
	
	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
	}
}

int main()
{
	list<Book> lista;
	Book ksiazka;


	getchar();
	return 0;
}
