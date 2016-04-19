#include<iostream>
#include<list>
#include<string>
#include "add.hpp"
#include "remove.hpp"
#include "edit.hpp"
#include "book.hpp"

using namespace std;

void show(list<Book> lista)
{
	list<Book>::iterator iter;
	
	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		cout << iter->id << "  '" << iter->name << " " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
	}
}

int main()
{
	list<Book> lista;
	int choice;

	while (choice!=0)
	{
		cout << string(50, '\n');

		cout << "Main Menu : \n [1]: View base\n [2]: Add new book\n [3]: Remove some books from base\n [4]: Edit existing books\n [0]: Exit from program" << endl;
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1:
			show(lista); break;
		case 2:
			lista=add_book(lista); break;
		case 3:
			lista = edit_menu(lista); break;
		}

	}
	

	getchar();
	return 0;
}
