#include <iostream>
#include <string>

using namespace std;

class book {
private:
    string title;
    double price;
    int pages;

public: 
    book() : title(""), price(0.0), pages(0) {
        cout << "Default constructor called" << title << endl;
    }
    
    book(string t, double p) : title(t), price(p), pages(0) {
        cout << "Parameterized (2arg)" << title << endl;
    }
    book(string t, double p, int pg) : title(t), price(p), pages(pg) {
        cout << "Parameterized (3arg)" << title << endl;
    }
void display() {
        cout << "Title: " << title << ", Price: " << price << ", Pages: " << pages << endl;
    }
};

int main () {
    cout << "parameterized constructor" << endl;
    book b1; // Default constructor
    book b2 ("object oriented", 29.99);
    book b3 ("data structures", 39.99, 500);
    b1.display();
    b2.display();
    b3.display();
    
    return 0;
}