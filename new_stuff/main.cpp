#include <iostream>
using namespace std;

class Calculator
{
private:
    float firstNum = 0;
    float secondNum = 0;

public:
    void num();
    void choise();
    void concatenete();
    void subtraction();
    void multiplication();
    void division();
};

void Calculator::num()
{
    cout << "\nEnter first number: ";
    cin >> firstNum;
    cout << "\nEnter second number: ";
    cin >> secondNum;
}

void choise()
{
    Calculator c;
    bool stop = false;
    while (stop != true)
    {
        cout << "\nWhat u want:\n1. Concatenete\n2. Subtraction\n3. Multiplication\n4. Division\n5. Stop it\n";
        int choise;
        cin >> choise;
        switch (choise)
        {
        case 1:
            c.num();
            c.concatenete();
            break;
        case 2:
            c.num();
            c.subtraction();
            break;
        case 3:
            c.num();
            c.multiplication();
            break;
        case 4:
            c.num();
            c.division();
            break;
        case 5:
            stop = true;
            break;
        }
    }
}

void Calculator::concatenete()
{
    float sum;
    sum = firstNum + secondNum;
    cout << "\nAnswer: " << sum;
}

void Calculator::subtraction()
{
    float sub;
    sub = firstNum - secondNum;
    cout << "\nAnswer: " << sub;
}

void Calculator::multiplication()
{
    float multi;
    multi = firstNum * secondNum;
    cout << "\nAnswer: " << multi;
}

void Calculator::division()
{
    float div;
    div = firstNum / secondNum;
    cout << "\nAnswer: " << div;
}

int main()
{
    choise();
    return 0;
}
