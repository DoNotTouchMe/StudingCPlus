#include <iostream>
#include <String>
using namespace std;

class Stoke {
    private:
    string name;
    int article;
    int amt;
    public:
    Stoke () {
        name = "Null";
        article = 0;
        amt = 0;
    }
    Stoke (string name) {
        this->name = name;
        this->article = 0;
        this->amt = 0;
    }
    void set (string name, int article, int amt) {
        this->name = name;
        this->article = article;
        this->amt = amt;
    }
    void get () {
        cout << "Name - " << name << " Article - " << article << " Amt - " << amt << "pc" << endl;
    }

    ~Stoke () {
        cout << "End working" << endl;
    }

};

int main(int argc, const char * argv[]) {
    Stoke nail("Nail");
    nail.get();
    Stoke pin;
    pin.get();
    Stoke skrew;
    skrew.set("Skrew", 3456, 10);
    skrew.get();
cin.get();
} 