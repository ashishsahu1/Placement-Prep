#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    int price;
    bool is_issued;

public:
    Book(string name, int price, bool is_issued)
    {
        this->name = name;
        this->price = price;
        this->is_issued = is_issued;
    }

    void about()
    {
        cout << this->name << " " << this->price << " " << this->is_issued << endl;
    }
};

int main()
{
    Book b1("SCHAND", 100, true);
    b1.about();
    Book b2("HellaHow",200,false);
    b2.about();
    Book *b3 = new Book("hell",230,true);
    cout<<b3<<endl;
    b3->about();
}