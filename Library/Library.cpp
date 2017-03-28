#include "Library.h"


Library::Library()
{
}

bool Library::addBook(Book* volume) {
    if (numberOfBookers >= LIBRARY_SIZE)
        return false;
    shelf[numberOfBooks] = volume;
    nunberOfBooks++;
}
bool Library::addBook(string title, string author, int pages) {
    if (numberOfBookers >= LIBRARY_SIZE)
        return false;
    Book* volume = new Book(title, author);
    Book actualBook("Goodnight Moon", "??");
    actualBook.setNumberOfPages(15);
    volume->setNumberofPages(pages);
    (*volume).setNumberOfPages(16);
    shelf[numberOfBooks] = volume;
    numberOfBooks++;
    shelf[numberofBooks] = &actualBook;
    numberOfBooks++;
}

