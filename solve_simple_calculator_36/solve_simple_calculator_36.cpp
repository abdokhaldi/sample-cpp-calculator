// solve_simple_calculator_36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enOperator { plus='+', mines='-', multiplication='*', divided='/' , power='^' };

void readNumbers(int& num1, int& num2, char& oper) {
   
    cout << "enter number 1 : \n";
    cin >> num1;
    cout << "enter number 2 : \n";
    cin >> num2;
    cout << "operator : \n";
    cin >> oper;
    
    
}

void processOperator(int num1,int num2,char  oper) {
    enOperator Operator;
    Operator = (enOperator)oper;
    
    switch (Operator)
    {
    case enOperator::plus:
        cout << "the result is : " << num1 + num2;
        break;
        case enOperator::mines :
            cout << num1 - num2;
            break;
        case enOperator::multiplication:
            cout << "the result is : " << num1 * num2;
            break;
        case enOperator::divided:
            cout << "the result is : " << num1 / num2;
            break;
        case enOperator::power:
            cout << "the result is : " << pow(num1, num2);
            break;
    default:
        cout << 0;
        break;
    }
    
}
int main()
{
    int num1, num2 ;
    char oper;
    readNumbers(num1, num2, oper);
    processOperator(num1, num2, oper);

    // simple calculator using switch statement .

    
    


}

