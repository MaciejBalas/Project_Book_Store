#ifndef book_hpp
#define book_hpp
#include<string>

struct Book
{
	unsigned int id;
	std::string name;
	std::string author;
	std::string genre;
	int in_stock;
};

#endif // !book_hpp

