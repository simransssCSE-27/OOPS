#include <iostream>
#include <string>

using namespace std;

class book {
private:
    string title;
    double price;
    int pages;

public:
    book() {
        title = "untitled";
        price = 0.0;
        pages = 0;
        cout << "default constructor called" << endl;
    }

    void display() {
        cout << title << " " << price << " " << pages << endl;
    }
};
int main() {  
    cout << " Default constructor" << endl;
    cout << "creating b1 : ";  
    book b1;
      b1.display();
    cout << "creating b2 : ";
    book b2;
    b2.display();
    return 0;
}
