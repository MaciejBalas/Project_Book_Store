#ifndef remove_hpp
#define remove_hpp

using namespace std;

#include<iostream>
#include<list>
#include<string>
#include "book.hpp"

list<Book> remove_menu(list<Book> lista);

list<Book> remove_by_id(list<Book> lista);
list<Book> remove_by_name(list<Book> lista);
list<Book> remove_by_author(list<Book> lista);
list<Book> remove_by_genre(list<Book> lista);
list<Book> remove_by_stock(list<Book> lista);

#endif
