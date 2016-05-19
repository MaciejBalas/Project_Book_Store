#include "remove.hpp"

void remove_by_id(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	list<Book>::iterator iter;
	int search_id;
	
	cout << "Please enter the id to remove";
	cin >> search_id;
	cin.ignore();

	for (iter = list_id.begin(); iter != list_id.end(); iter++)
	{
		if (iter->id == search_id)
			iter = list_id.erase(iter);
	}

	for (iter = list_title.begin(); iter != list_title.end(); iter++)
	{
		if (iter->id == search_id)
			iter = list_title.erase(iter);
	}

	for (iter = list_author.begin(); iter != list_author.end(); iter++)
	{
		if (iter->id == search_id)
			iter = list_author.erase(iter);
	}

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)
	{
		if (iter->id == search_id)
			iter = list_genre.erase(iter);
	}

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)
	{
		if (iter->id == search_id)
			iter = list_stock.erase(iter);
	}
}

void remove_by_name(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	list<Book>::iterator iter;
	string search_title;

	cout << "Please enter name of the book to remove";
	getline(cin, search_title);

	for (iter = list_id.begin(); iter != list_id.end(); iter++)
	{
		if (iter->title == search_title)
			iter = list_id.erase(iter);
	}

	for (iter = list_title.begin(); iter != list_title.end(); iter++)
	{
		if (iter->title == search_title)
			iter = list_title.erase(iter);
	}

	for (iter = list_author.begin(); iter != list_author.end(); iter++)
	{
		if (iter->title == search_title)
			iter = list_author.erase(iter);
	}

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)
	{
		if (iter->title == search_title)
			iter = list_genre.erase(iter);
	}

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)
	{
		if (iter->title == search_title)
			iter = list_stock.erase(iter);
	}

}

void remove_by_author(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	list<Book>::iterator iter;
	string search_author;

	cout << "Please enter name of author to remove";
	getline(cin, search_author);

	for (iter = list_id.begin(); iter != list_id.end(); iter++)
	{
		if (iter->author == search_author)
			iter = list_id.erase(iter);
	}

	for (iter = list_title.begin(); iter != list_title.end(); iter++)
	{
		if (iter->author == search_author)
			iter = list_title.erase(iter);
	}

	for (iter = list_author.begin(); iter != list_author.end(); iter++)
	{
		if (iter->author == search_author)
			iter = list_author.erase(iter);
	}

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)
	{
		if (iter->author == search_author)
			iter = list_genre.erase(iter);
	}

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)
	{
		if (iter->author == search_author)
			iter = list_stock.erase(iter);
	}
}

void remove_by_genre(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	list<Book>::iterator iter;
	string search_genre;

	cout << "Please enter name of author to remove";
	getline(cin, search_genre);

	for (iter = list_id.begin(); iter != list_id.end(); iter++)
	{
		if (iter->genre == search_genre)
			iter = list_id.erase(iter);
	}

	for (iter = list_title.begin(); iter != list_title.end(); iter++)
	{
		if (iter->genre == search_genre)
			iter = list_title.erase(iter);
	}

	for (iter = list_author.begin(); iter != list_author.end(); iter++)
	{
		if (iter->genre == search_genre)
			iter = list_author.erase(iter);
	}

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)
	{
		if (iter->genre == search_genre)
			iter = list_genre.erase(iter);
	}

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)
	{
		if (iter->genre == search_genre)
			iter = list_stock.erase(iter);
	}
}

void remove_by_stock(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock)
{
	list<Book>::iterator iter;
	int search_stock;

	cout << "Please enter the id to remove";
	cin >> search_stock;
	cin.ignore();

	for (iter = list_id.begin(); iter != list_id.end(); iter++)
	{
		if (iter->in_stock == search_stock)
			iter = list_id.erase(iter);
	}

	for (iter = list_title.begin(); iter != list_title.end(); iter++)
	{
		if (iter->in_stock == search_stock)
			iter = list_title.erase(iter);
	}

	for (iter = list_author.begin(); iter != list_author.end(); iter++)
	{
		if (iter->in_stock == search_stock)
			iter = list_author.erase(iter);
	}

	for (iter = list_genre.begin(); iter != list_genre.end(); iter++)
	{
		if (iter->in_stock == search_stock)
			iter = list_genre.erase(iter);
	}

	for (iter = list_stock.begin(); iter != list_stock.end(); iter++)
	{
		if (iter->in_stock == search_stock)
			iter = list_stock.erase(iter);
	}
}