#ifndef remove_hpp
#define remove_hpp

using namespace std;

#include<iostream>
#include<list>
#include<string>
#include "book.hpp"

//list<Book> remove_menu(list<Book> lista);

void remove_by_id(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock);
void remove_by_name(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock);
void remove_by_author(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock);
void remove_by_genre(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock);
void remove_by_stock(list<Book> &list_id, list<Book> &list_title, list<Book> &list_author, list<Book> &list_genre, list<Book> &list_stock);

#endif
