#include<iostream>
#include<list>
#include<string>

using namespace std;

struct Book
{
	unsigned int id;
	string name;
	string author;
	string genre;
	int in_stock;
};

int main()
{
	list<Book> lista;
	Book ksiazka;
	char buffor;

	for (int i = 0; i < 2; i++)
	{
		cout << "id: ";
		cin >> ksiazka.id;
		cin.ignore();
		
		cout << "stock: ";
		cin >> ksiazka.in_stock;
		cin.ignore();

		cout << "name: ";
		getline(cin, ksiazka.name);

		cout << "author: ";
		getline(cin, ksiazka.author);

		cout << "genre: ";
		getline(cin, ksiazka.genre);

		lista.push_back(ksiazka);
	}

	list<Book>::iterator iter;

	for (iter = lista.begin(); iter != lista.end(); iter++) 
	{
		cout << iter->id << "  '" << iter->name << "' " << iter->author << " " << iter->genre << " " << iter->in_stock << endl;
	}

	getchar();
	return 0;
}
