#include "add.hpp"

void add_book(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	bool check=false;
	Book ksiazka;
	list<Book>::iterator iter;

	cout << "enter book id: ";
	cin >> ksiazka.id;
	cin.ignore();

	cout << "enter in stock: ";
	cin >> ksiazka.in_stock;
	cin.ignore();

	cout << "enter name: ";
	getline(cin, ksiazka.title);

	cout << "enter author: ";
	getline(cin, ksiazka.author);

	cout << "enter genre: ";
	getline(cin, ksiazka.genre);
	
	for (iter = list_id.begin(); iter != list_id.end(); iter++)	//id should be unique
	{
		if (iter->id == ksiazka.id)
		{
			cout << "there already exists book with this id i will not add it"<<endl;
			return;
		}
	}

	for (iter = list_id.begin(); iter != list_id.end(); iter++)	//name should be unique
	{
		if (iter->title == ksiazka.title)
		{
			cout << "there already exist a book with this name, i will not add it" << endl;
			return;
		}
	}

	for (iter = list_id.begin(); iter != list_id.end(); iter++)	//adding to id list
	{
		if (iter->id > ksiazka.id)
		{
			list_id.insert(iter, ksiazka);
			check = true;
			break;
		}
	}

	if (iter == list_id.end() && check == false)
	{
		list_id.push_back(ksiazka);
	}

	check = false;

	for (iter = list_title.begin(); iter != list_title.end(); iter++)	//adding to title list
	{
		if (iter->title.compare(ksiazka.title)>0)
		{
			list_title.insert(iter, ksiazka);
			check = true;
			break;
		}
	}

	if (iter == list_title.end() && check == false)
	{
		list_title.push_back(ksiazka);
	}

	check = false;

	for (iter = list_author.begin(); iter != list_author.end(); iter++)	//adding to author list
	{
		if (iter->author.compare(ksiazka.author)>0)
		{
			list_author.insert(iter, ksiazka);
			check = true;
			break;
		}
	}

	if (iter == list_author.end() && check == false)
	{
		list_author.push_back(ksiazka);
	}

	check = false;

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)	//adding to title list
	{
		if (iter->genre.compare(ksiazka.genre)>0)
		{
			list_genre.insert(iter, ksiazka);
			check = true;
			break;
		}
	}

	if (iter == list_genre.end() && check == false)
	{
		list_genre.push_back(ksiazka);
	}

	check = false;

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)	//adding to id list
	{
		if (iter->in_stock > ksiazka.in_stock)
		{
			list_stock.insert(iter, ksiazka);
			check = true;
			break;
		}
	}

	if (iter == list_stock.end() && check == false)
	{
		list_stock.push_back(ksiazka);
	}

	check = false;

}