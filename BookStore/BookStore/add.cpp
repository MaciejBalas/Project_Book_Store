#include "add.hpp"

list<Book> add_book(list<Book> lista, Book ksiazka)
{
	cout << "enter book id: ";
	cin >> ksiazka.id;
	cin.ignore();

	cout << "enter in stock: ";
	cin >> ksiazka.in_stock;
	cin.ignore();

	cout << "enter name: ";
	getline(cin, ksiazka.name);

	cout << "enter author: ";
	getline(cin, ksiazka.author);

	cout << "enter genre: ";
	getline(cin, ksiazka.genre);

	lista.push_back(ksiazka);

	return lista;
}