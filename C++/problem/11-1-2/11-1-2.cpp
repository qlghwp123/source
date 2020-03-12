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

    Book(const Book &ref) : price(ref.price)
    {
        if(ref.title != NULL)
        {
            int len = strlen(ref.title) + 1;
            title = new char[len];
            strcpy(title, ref.title);
        }
        else
            title = NULL;
            
        if(ref.isbn != NULL)
        {
            int len = strlen(ref.isbn) + 1;
            isbn = new char[len];
            strcpy(isbn, ref.isbn);
        }
        else
            isbn = NULL;
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

    Book& operator=(const Book &ref)
    {
        if(title != NULL)
        {
            delete[] title;
            int lens = strlen(ref.title) + 1;
            title = new char[lens];
            strcpy(title, ref.title);
        }
        else
            title = NULL;
    
        if(isbn != NULL)
        {
            delete[] isbn;
            int lens = strlen(ref.isbn) + 1;
            isbn = new char[lens];
            strcpy(isbn, ref.isbn);
        }
        else
            isbn = NULL;

        price = ref.price;

        return *this;
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

    EBook(const EBook &ref) : Book(ref)
    {
        int lens = strlen(ref.DRMKey) + 1;
        DRMKey = new char[lens];
        strcpy(DRMKey, ref.DRMKey);
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

    EBook& operator=(const EBook& ref)
    {
        Book::operator=(ref);
        if(ref.DRMKey != NULL)
        {
            delete[] DRMKey;
            int lens = strlen(ref.DRMKey) + 1;
            DRMKey = new char[lens];
            strcpy(DRMKey, ref.DRMKey);
        }
        else
            DRMKey = NULL;

        return *this;
    }
};

int main(void)
{
    Book book1("좋은 C++", "555-12345-890-0", 20000);
    book1.ShowBookInfo();
    cout << endl;

    Book book2("좋은 C#", "123-45678-000-0", 30000);
    book2.ShowBookInfo();
    cout << endl;

    EBook ebook1("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook1.ShowEBookInfo();
    cout << endl;

    EBook ebook2("좋은 C# ebook", "123-45678-000-1", 15000, "ksdjdfj");
    ebook2.ShowEBookInfo();
    cout << endl << endl;

    Book test_book = book1;
    test_book.ShowBookInfo();
    cout << endl;
    test_book = book2;
    test_book.ShowBookInfo();
    cout << endl;

    EBook test_ebook = ebook1;
    test_ebook.ShowEBookInfo();
    cout << endl;
    test_ebook = ebook2;
    test_ebook.ShowEBookInfo();
    cout << endl;

    return 0;
}