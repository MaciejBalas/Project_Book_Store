#include "edit.hpp"

list<Book> edit_menu(list<Book> lista)
{
	int choice;
	cout << "Please choose method of finding your book\n [1]: By id\n [2]: By title\n" << endl;
	cin >> choice;
	cin.ignore();

	switch (choice)
	{
	case 1:
		lista=edit_by_id(lista); break;
	case 2:
		lista=edit_by_name(lista); break;
	default:
		break;
	}

	return lista;
}

list<Book> edit_by_id(list<Book> lista)
{
	list<Book>::iterator iter;
	int search_id, choice = 0;

	cout << "Please enter the id of book to edit : ";
	cin >> search_id;
	cin.ignore();



	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->id == search_id)
		{
			
			cout << "Book Found! do you want to [1]: Edit stock [2]: Edit name [3]: Edit author [4]: Edit genre [5]: Edit all? :  ";
			cin >> choice;
			cin.ignore();

			switch (choice)
			{
				case 1: 
				{ 
					cout << "enter in stock: ";
					cin >> iter->in_stock;
					cin.ignore(); 
					break;
				}

				case 2: 
				{ 
					cout << "enter name: ";
					getline(cin, iter->title); 
					break;
				}
				case 3:
				{
					cout << "enter author: ";
					getline(cin, iter->author);
					break;
				}
				case 4:
				{
					cout << "enter genre: ";
					getline(cin, iter->genre);
					break;
				}
				case 5:
				{
					cout << "enter in stock: ";
					cin >> iter->in_stock;
					cin.ignore();

					cout << "enter name: ";
					getline(cin, iter->title);

					cout << "enter author: ";
					getline(cin, iter->author);

					cout << "enter genre: ";
					getline(cin, iter->genre);
					break;
				}
				default:
					cout << "I don't know what to do, returning to menu";
			}
		}
	}

	if (choice == 0)
	{
		cout << "oops! book not found" << endl;
	}

	return lista;
}

list<Book> edit_by_name(list<Book> lista)
{
	list<Book>::iterator iter;
	int choice=0;
	string search_name;

	cout << "Please enter the name of book to edit : ";
	getline(cin, search_name);

	for (iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (iter->title == search_name)
		{

			cout << "Book Found! do you want to [1]: Edit stock [2]: Edit name [3]: Edit author [4]: Edit genre [5]: Edit all? :  ";
			cin >> choice;
			cin.ignore();

			switch (choice)
			{
			case 1:
			{
				cout << "enter in stock: ";
				cin >> iter->in_stock;
				cin.ignore();
			}

			case 2:
			{
				cout << "enter name: ";
				getline(cin, iter->title);
			}
			case 3:
			{
				cout << "enter author: ";
				getline(cin, iter->author);
			}
			case 4:
			{
				cout << "enter genre: ";
				getline(cin, iter->genre);
			}
			case 5:
			{
				cout << "enter in stock: ";
				cin >> iter->in_stock;
				cin.ignore();

				cout << "enter name: ";
				getline(cin, iter->title);

				cout << "enter author: ";
				getline(cin, iter->author);

				cout << "enter genre: ";
				getline(cin, iter->genre);
			}
			default:
				cout << "I don't know what to do, returning to menu";
			}
		}
	}

	if (choice == 0)
	{
		cout << "oops! book not found"<<endl;
	}

	return lista;
}