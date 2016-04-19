#include "remove.hpp"

list<Book> remove_by_id(list<Book> lista)
{
	list<Book>::iterator iter;
	int search_id;
	
	cout << "Please enter the id to remove";
	cin >> search_id;
	cin.ignore();

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->id == search_id)
			lista.erase(iter);
	}
	
	return lista;
}

list<Book> remove_by_name(list<Book> lista)
{
	list<Book>::iterator iter;
	string search_name;

	cout << "Please enter name of the book to remove";
	getline(cin, search_name);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->name == search_name)
		{
			lista.erase(iter);
		}
	}

	return lista;
}

list<Book> remove_by_author(list<Book> lista)
{
	list<Book>::iterator iter;
	string search_author;

	cout << "Please enter name of author to remove";
	getline(cin, search_author);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->author == search_author)
		{
			lista.erase(iter);
		}
	}

	return lista;
}

list<Book> remove_by_genre(list<Book> lista)
{
	list<Book>::iterator iter;
	string search_genre;

	cout << "Please enter name of author to remove";
	getline(cin, search_genre);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->author == search_genre)
		{
			lista.erase(iter);
		}
	}

	return lista;
}