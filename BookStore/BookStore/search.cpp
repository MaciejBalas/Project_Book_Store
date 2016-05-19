#include "search.hpp"
#include<iostream>
#include<list>
#include<string>


list<Book>::iterator search_by_id(list<Book> lista)
{
	list<Book>::iterator iter;
	int search_id;
	
	cout << "Please enter the id of book you are searching for : ";
	cin >> search_id;
	cin.ignore();

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->id == search_id)
		{
			cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
			return iter;
		}
	}

	cout << "Couldn't find this id" << endl;

	iter = NULL;
	return iter;
}

void search_by_stock(list<Book> lista)	//stock is not unique, therefore returning a pointer is meaningless
{
	list<Book>::iterator iter;
	int stock;
	bool found = false;

	cout << "Enter the number to check if we have at least that many copies of any book"<<endl;
	cin >> stock;
	cin.ignore();

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->in_stock >= stock)
		{
			cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
			found = true;
		}
	}

	if (found == false)
		cout << "Couldn't find that many books" << endl;
}

list<Book>::iterator search_by_name(list<Book> lista)
{
	list<Book>::iterator iter;
	string search_name;

	cout << "Please enter name of book you are searching for : ";
	getline(cin, search_name);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (strcmp(iter->name,search_name)==0)
		{
			cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
			return iter;
		}
	}

	if (found == false)
		cout << "Couldn't find this name" << endl;

		iter = NULL;
	return iter;
}

list<Book>::iterator search_by_author(list<Book> lista)
{
	list<Book>::iterator iter;
	string search_author;

	cout << "Please enter name of author you are searching for : ";
	getline(cin, search_author);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (strcmp(iter->name, search_author) == 0)
		{
			cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
			return iter;
		}
	}

	if (found == false)
		cout << "Couldn't find this name" << endl;

	iter = NULL;
	return iter;
}

list<Book>::iterator search_by_genre(list<Book> lista)
{

}