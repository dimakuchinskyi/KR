//№1
/*#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name;
    cout << "Введіть ваше ім'я: ";
    cin >> name;
    cout << "Привіт " << name << endl;
    return 0;
}*/

//№2
/*#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int age;
    cout << "Введіть свій вік: ";
    cin >> age;
    if (age >= 18) {
        cout << "Ви повнолітній\n";
    }
    else {
        cout << "Ви не повнолітній\n";
    }
    return 0;
}*/

//№3
/*#include <iostream>
#include <string>
#include <WIndows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input_string;
    cout << "Введіть рядок: ";
    getline(std::cin, input_string);
    cout << "Рядок у зворотному порядку: ";
    for (int i = input_string.length() - 1; i >= 0; --i) {
        cout << input_string[i];
    }
    cout << endl;
    return 0;
}*/

//№4
/*#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }
    void setLength(double len) {
        length = len;
    }
    void setWidth(double wid) {
        width = wid;
    }
    double calculateArea() {
        return length * width;
    }
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rectangle(5.0, 3.0);
    cout << "Plosha pryamokutnyka: " << rectangle.calculateArea() << endl;
    cout << "Perimetr oryamokutnyka: " << rectangle.calculatePerimeter() << endl;
    return 0;
}*/

//№5
/*#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;
    double engineVolume;
public:
    Car(string brand, string model, int year, double engineVolume) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->engineVolume = engineVolume;
    }
    void printInfo() {
        cout << "Марка: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Рік випуску: " << year << endl;
        cout << "Об'єм двигуна: " << engineVolume << " л" << endl;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Car car("Toyota", "Camry", 2020, 2.5);
    car.printInfo();
    return 0;
}
*/
//№6
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book(const string& t, const string& a, int y) : title(t), author(a), year(y) {}

    void display() const {
        cout << title << " za " << author << " (" << year << ")" << endl;
    }

    bool operator==(const Book& other) const {
        return title == other.title && author == other.author && year == other.year;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Knuga'" << book.title << "' dodana do biblioteki." << endl;
    }

    void removeBook(const Book& book) {
        auto it = find(books.begin(), books.end(), book);
        if (it != books.end()) {
            books.erase(it);
            cout << "Knuga '" << book.title << "' vidalena z biblioteki." << endl;
        }
        else {
            cout << "Knuga ne znaydena v biblioteci." << endl;
        }
    }

    void searchByAuthor(const string& author) const {
        bool found = false;
        for (const auto& book : books) {
            if (book.author == author) {
                book.display();
                found = true;
            }
        }
        if (!found) {
            cout << "Ne znaydeno takux knug za " << author << "." << endl;
        }
    }

    void displayAllBooks() const {
        if (books.empty()) {
            cout << "Biblioteka porozhnya." << endl;
        }
        else {
            cout << "Knugi v biblioteci:" << endl;
            for (const auto& book : books) {
                book.display();
            }
        }
    }
};

int main() {
    Library library;

    Book book1("Ukrainskyi nacionalizm. Osnovy ideologii", "Mykola Mikhnovsky", 2000);
    Book book2("Hitler. Nevyvchenyi urok istorii", "Alexander Borisenko", 2010);
    Book book3("Samostiyna Ukraina", "Mykola Mikhnovsky", 1900);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    library.displayAllBooks();

    cout << endl << "Books by Mykola Mikhnovsky:" << endl;
    library.searchByAuthor("Mykola Mikhnovsky");

    cout << endl << "Removing Ukrainskyi nacionalizm. Osnovy ideologii..." << endl;
    library.removeBook(book1);

    library.displayAllBooks();

    return 0;
}
*/