#ifndef BOOK_H
#define BOOK_H

#include <string.h>
#include "Author.h"
#include <fstream>
#include "Patron.h"

class Book
{
public:
    Book(char *name);

    bool operator==(const Book &bk) const
    {
        return (
            strcmp(name, bk.name) == 0 &&
            author == bk.author);
    }

private:
    char *name;
    Author *author;
    Patron &patron;
    ostream &printBook(ostream &out) const;
};

#endif
