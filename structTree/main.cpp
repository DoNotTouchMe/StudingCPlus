#include <iostream>
#include <String>
using namespace std;

struct Tree {
    string name;
    int height;
    int whidth;
    int year;
};

int main(int argc, const char * argv[]){
    Tree oak;
    oak.name = "oak";
    oak.height = 45;
    oak.whidth = 15;
    oak.year = 100;

    Tree fir;
    fir.name = "fir";
    fir.height = 20;
    fir.whidth = 3;
    fir.year = 50;

    Tree aspen;
    aspen.name = "aspen";
    aspen.height = 12;
    aspen.whidth = 2;
    aspen.year = 15;

    Tree dipa;
    dipa.name = "dipa";
    dipa.height = 16;
    dipa.whidth = 2;
    dipa.year = 23;

    cout << "Name of tree - " << oak.name << "\n" 
    << "Height of tree - " << oak.height << " inch \n"
    << "Whidth of tree - " << oak.whidth << " inch \n"
    << "Age of tree - " << oak.year << " year \n" << endl;

    cout << "Name of tree - " << fir.name << "\n" 
    << "Height of tree - " << fir.height << " inch \n"
    << "Whidth of tree - " << fir.whidth << " inch \n"
    << "Age of tree - " << fir.year << " year \n" << endl;

    cout << "Name of tree - " << aspen.name << "\n" 
    << "Height of tree - " << aspen.height << " inch \n"
    << "Whidth of tree - " << aspen.whidth << " inch \n"
    << "Age of tree - " << aspen.year << " year \n" << endl;

    cout << "Name of tree - " << dipa.name << "\n" 
    << "Height of tree - " << dipa.height << " inch \n"
    << "Whidth of tree - " << dipa.whidth << " inch \n"
    << "Age of tree - " << dipa.year << " year \n" << endl;

    system ("pause");
}