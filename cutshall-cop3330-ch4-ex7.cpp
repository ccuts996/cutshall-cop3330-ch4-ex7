/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Chase Cutshall
 */

#include <iostream>
#include <vector>
using namespace std;

string userinput1;
string userinput2;

vector<string> numbers {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

vector<string> digit{"0","1", "2", "3", "4", "5", "6", "7", "8", "9"};


int get_digits(string value){
    for(int i = 0; i < 10; ++i){
        if( value == numbers[i] || value == digit[i])
            return i;
    }
    throw runtime_error("Incorrect input value");
}

  

int main() {
    string oper;
    double operand1;
    double operand2;
    cout<<"Please enter two single-digit numbers followed by the operator (+ ,- ,* , / )";

    while (cin>>userinput1>>userinput2>>oper) {
        operand1 = get_digits(userinput1);
        operand2 = get_digits(userinput2);

        if (oper == "+")
            cout<< "The sum of " <<operand1<< " and " << operand2 << " is " <<operand1+operand2 <<endl;
        else if(oper == "-")
            cout<< "The difference between " <<operand1<< " and " << operand2 << " is " <<operand1-operand2 <<endl; 
        else if (oper == "*")
            cout<< "The product of " <<operand1<< " and " << operand2 << " is " <<operand1*operand2 <<endl;
        else if (oper =="/") 
            {
            if(operand2==0)
            {
                cout<<"Error! You cannot divide by zero.";
                continue;
            }
            else{
                cout<< "The quotient of " <<operand1<< " and " << operand2 << " is " <<operand1/operand2 <<endl;
            }

        }
    }
return 0;
}