#include <iostream>
#include <cstring>

using namespace std;

class Book
{
private:
    char *title;
    char *isbn;
    int price;

public:
    Book(char *mytitle, char *myisbn, int myprice) : price(myprice)
    {
        title = new char[strlen(mytitle) + 1];
        isbn = new char[strlen(myisbn) + 1];

        strcpy(title, mytitle);
        strcpy(isbn, myisbn);
    }
    ~Book()
    {
        delete[] title;
        delete[] isbn;
    }
    void ShowBookInfo() const
    {
        cout << "제목: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "가격: " << price << endl;
    }
};

class EBook : public Book
{
private:
    char *DRMKey;

public:
    EBook(char *mytitle, char *myisbn, int myprice, char *myDRMKey) : Book(mytitle, myisbn, myprice)
    {
        DRMKey = new char[strlen(myDRMKey) + 1];

        strcpy(DRMKey, myDRMKey);
    }
    ~EBook()
    {
        delete[] DRMKey;
    }
    void ShowEBookInfo() const
    {
        ShowBookInfo();
        cout << "인증키: " << DRMKey << endl;
    }
};

int main(void)
{
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;

    EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();

    return 0;
}