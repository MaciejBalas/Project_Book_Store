#ifndef edit_hpp
#define edit_hpp

using namespace std;

#include<iostream>
#include<list>
#include<string>
#include "book.hpp"

list<Book> edit_menu(list<Book> lista);
list<Book> edit_by_id(list<Book> lista);
list<Book> edit_by_name(list<Book> lista);

#endif // !edit_hpp

