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

    wcout << "Insert the number." <<endl;
    cin >> num1;
    wcout << "Enter operator: sum for sum, divis for division, differ for difference or multi for multiplication." <<endl;
    cin >> oper;
    wcout << "Insert second number." <<endl;
    cin >> num2;

    if(oper == sum) {
        result = num1 + num2;
        wcout << num1 << " + " << num2 << " = "<< result <<endl;
    }
    else if (oper == differ) {
        result = num1 - num2;
        wcout << num1 << " - " << num2 << " = " << result <<endl;
    }
    else if(oper == multi) {
        result = num1 * num2;
        wcout << num1 << " * " << num2 << " = " << result <<endl;
    }
    else if(oper == divis) {
        try{
            if(num2 == 0)
            throw 123;
            result = num1 / num2;
            wcout << num1 << " / " << num2 << " = " << result <<endl;
        } catch (int i){
            wcout << "Error #" << i << " divide by 0!" << endl;
        }
    }
    else{
        wcout << "Result is unknown" <<endl;
    }

    system("pause");
    return 0;
}