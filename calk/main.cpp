#include <iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main(int argc, const char * argv[]){
    
    int num1;
    int num2;
    int result;
    string oper;
    string sum = "sum";
    string subt = "subt";
    string multi = "multi";
    string divis = "divis";

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите число" <<endl;
    cin >> num1;
    cout << "Введите оператор: sum для суммы, divis для деления, subt для разности или multi для умножения" <<endl;
    cin >> oper;
    cout << "Введите второе число" <<endl;
    cin >> num2;

    if(oper == sum) {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = "<< result <<endl;
    }
    else if (oper == subt) {
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result <<endl;
    }
    else if(oper == multi) {
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result <<endl;
    }
    else if(oper == divis) {
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result <<endl;
    }
    else{
        cout << "Result is unknown" <<endl;
    }

    system("pause");
    return 0;
}