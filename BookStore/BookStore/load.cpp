#include "load.hpp"


list <Book> load(string path)
{
	list<Book> tList;
	fstream database;
	Book tBook;
	string text="";

	database.open(path.c_str(), ios::in | ios::out);

	if (database.good() == true)
	{
		cout << "DB found!" << endl;
		
		while (!database.eof())
		{
			//database >> tBook.title >> tBook.id >> tBook.author >> tBook.in_stock >> tBook.genre;
			database >> tBook.id;
			if (database.eof())
				break;

			database >> text;
			database >> text;
			while (text != "|")
			{
				tBook.title += text + " ";
				database >> text;
			}
			database >> text;
			while (text != "|")
			{
				tBook.author += text + " ";
				database >> text;
			}
			database >> tBook.in_stock;
			database >> text;
			database >> tBook.genre;

			tList.push_back(tBook);

			tBook.title = "";
			tBook.author = "";
		}
		
		database.close();
		return tList;
	}
	else
	{
		cout << "Could not load DB file, please check if it exists" << endl;
		getchar();
		return tList;
	}

}