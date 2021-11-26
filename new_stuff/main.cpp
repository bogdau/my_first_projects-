#include <iostream>
using namespace std;

class Calculator
{
private:
    float firstNum = 0;
    float secondNum = 0;

public:
    Calculator();

    void num();
    void choise();
    void concatenete();
    void subtraction();
    void multiplication();
    void division();
};

Calculator::Calculator()
{
    cout << "\nEnter first number: ";
    cin >> firstNum;

    cout << "\nEnter second number: ";
    cin >> secondNum;
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

void choise()
{
    bool stop = false;

    while (stop != true)
    {
        Calculator c;

        cout << "\nWhat u want:\n1. Concatenete\n2. Subtraction\n3. Multiplication\n4. Division\n5. Stop it\n";

        int choise;
        cin >> choise;

        switch (choise)
        {
        case 1:
            c.concatenete();
            break;
        case 2:
            c.subtraction();
            break;
        case 3:
            c.multiplication();
            break;
        case 4:
            c.division();
            break;
        case 5:
            stop = true;
            break;
        }
    }
}
int main()
{
    choise();
    return 0;
}
