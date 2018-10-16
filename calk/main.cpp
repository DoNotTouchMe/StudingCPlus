#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]){
    
    int num1;
    int num2;
    int result;
    string oper;
    string sum = "sum";
    string differ = "differ";
    string multi = "multi";
    string divis = "divis";

    cout << "Insert the number." <<endl;
    cin >> num1;
    cout << "Enter operator: sum for sum, divis for division, differ for difference or multi for multiplication." <<endl;
    cin >> oper;
    cout << "Insert second number." <<endl;
    cin >> num2;

    if(oper == sum) {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = "<< result <<endl;
    }
    else if (oper == differ) {
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