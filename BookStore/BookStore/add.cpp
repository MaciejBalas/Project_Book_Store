#include "add.hpp"

list<Book> add_book(list<Book> lista)
{
	Book ksiazka;
	list<Book>::iterator iter;

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
	
	for (iter = lista.begin; iter != lista.end(); iter++)	//id should be unique
	{
		if (iter->id == ksiazka.id)
		{
			cout << "there already exists book with this id i will not add it"<<endl;
			return lista;
		}
	}

	for (iter = lista.begin; iter != lista.end(); iter++)	//name is unique
	{
		if (iter->name == ksiazka.name)
		{
			cout << "there already exist a book with this name, i will not add it" << endl;
			return lista;
		}
	}

	lista.push_back(ksiazka);

	return lista;
}