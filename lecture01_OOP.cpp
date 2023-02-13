#include <iostream>
#include <cstring>

using namespace std;

class book {
public:
  book(string, string, int);
  void show_book(void);
private:
  string title;
  string author;
  int pages;
};

book::book(string title, string author, int pages) {
  book::title.clear();
  book::title += title;
  book::author.clear();
  book::author += author;
  book::pages = pages;
}

void book::show_book(void) {
  cout << "The title of the book: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "Pages: " << pages << endl;
}

class library_card : public book {
public:
  library_card(string, string, int, string, int);
  void show_card(void) ;
private:
  string catalog;
  int checked_out;
};

library_card::library_card(string title, string author,
    int pages, string catalog, int checked_out) : book(title, author, pages) {
  library_card::catalog.clear();
  library_card::catalog += catalog;
  library_card::checked_out = checked_out;
}

void library_card::show_card(void) {
  show_book();
  cout << "List: " << catalog << endl << "Status: ";
  if (checked_out) cout << "checked" << endl;
  else cout << "available" << endl;
}

int main(void) {
  library_card card(string("C++ programming"), string("HScool"), 569, string("C++"), 1);
  card.show_card();
  return 0;
}
