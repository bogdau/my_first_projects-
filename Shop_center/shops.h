#ifndef SHOPS_H
#define SHOPS_H
#include <iostream>
class People {
private:
    int money = 200;
    int food = 0;
    int cloth = 0;
    int amusent = 0;

public:
    int* bufferm = &money;
    int* bufferf = &food;
    int* bufferc = &cloth;
    int* buffera = &amusent;

    void change(int, int, int, int);
    void print();
};

void People::change(int m, int f, int c, int a)
{
    *bufferm = money - m;
    *bufferf = food + f;
    *bufferc = cloth + c;
    *buffera = amusent + a;
}

void People::print()
{
    std::cout << "\n\tINVENTORY: "
              << "\nMoney: " << *bufferm << "\nFood: " << *bufferf << "\nCloth: " << *bufferc
              << "\nAmusent: " << *buffera << std::endl;
}

struct Shops {
    void listOfShops();
    void groseryShops(People& people);
};

void Shops::listOfShops()
{
    const int groseryStore = 2;
    char nameFirstGroseryStore[50] = "Billa";   // first grosery store
    char nameSecondGroseryStore[50] = "Silpo";  // second grosry store
    std::cout << "\nWe have " << groseryStore << " grosery store\n1. " << nameFirstGroseryStore
              << "\n2. " << nameSecondGroseryStore << std::endl;

    const int closingStore = 3;
    char nameFirstClosingStore[50] = "Puma";
    char nameSecondClosingStore[50] = "Adidas";
    char nameThirdClosingStore[50] = "Nike";
    std::cout << "\nWe have " << closingStore << " closing store\n1. " << nameFirstClosingStore
              << "\n2. " << nameSecondClosingStore << "\n3. " << nameThirdClosingStore << std::endl;

    const int amusentStore = 1;
    char nameFirstAmusentStore[50] = "Waba-lab-dab";
    std::cout << "\nWe have " << amusentStore << " amusent store\n1. " << nameFirstAmusentStore
              << std::endl;
}

void Shops::groseryShops(People& people)
{
    std::cout << "Billa(0) or Silpo(1), EXIT(2): ";
    char choise = 0;
    char choiseOfBuy = 0;
    std::cin >> choise;

    if (choise == '0') {
        std::cout << "In Billa we have: " << std::endl;
        int potato = 10;
        int tomato = 20;
        int onion = 7;
        std::cout << "1. Potato( 1 potato = 10 money): " << potato
                  << "\n2. Tomato( 1 tomato = 8 money): " << tomato
                  << "\n3. Onion( 1 onion = 3 money): " << onion << std::endl;
        std::cout << "\nWant to buy something?(1)(2)(3):  ";
        std::cin >> choiseOfBuy;

        if (choiseOfBuy == '1') {
            std::cout << "How a lot of popato you want to buy? (1-10)";
            int* buypotato = &potato;
            int potatoBuy = 0;
            int usingmoney = 0;
            std::cin >> potatoBuy;
            usingmoney = potatoBuy * 10;
            people.change(usingmoney, potatoBuy, 0, 0);
            int result = *buypotato - potatoBuy;
            std::cout << "U buy: " << potatoBuy << "\nLeft in store: " << result << std::endl;
            people.print();
            potato -= potatoBuy;
        }

        else if (choiseOfBuy == '2') {
            std::cout << "How a lot of tomato you want to buy? (1-20)";
            int* buytomato = &tomato;
            int tomatoBuy = 0;
            int usingmoney = 0;
            std::cin >> tomatoBuy;
            usingmoney = tomatoBuy * 8;
            people.change(usingmoney, tomatoBuy, 0, 0);
            int result = *buytomato - tomatoBuy;
            std::cout << "U buy: " << tomatoBuy << "\nLeft in store: " << result << std::endl;
            people.print();
            tomato -= tomatoBuy;
        }
        else if (choiseOfBuy == '3') {
            std::cout << "How a lot of onion you want to buy? (1-7)";
            int* buyonion = &onion;
            int onionBuy = 0;
            int usingmoney = 0;
            std::cin >> onionBuy;
            usingmoney = onionBuy * 3;
            people.change(usingmoney, onionBuy, 0, 0);
            int result = *buyonion - onionBuy;
            std::cout << "U buy: " << onionBuy << "\nLeft in store: " << result << std::endl;
            people.print();
            onion -= onionBuy;
        }
        else {
            std::cout << "\nWrong choise " << std::endl;
        }
    }
    else if (choise == '1') {
        std::cout << "In Silpo we have: " << std::endl;
        int nuts = 100;
        int chips = 20;
        int cocaCola = 7;
        std::cout << "1. Nuts( 1 nut = 1 money): " << nuts
                  << "\n2. Chips( 1 chips = 20 money): " << chips
                  << "\n3. Coca-Cola( 1 Coca-Cola = 12 money): " << cocaCola << std::endl;
        std::cout << "\nWant to buy something?(1)(2)(3):  ";
        std::cin >> choiseOfBuy;

        if (choiseOfBuy == '1') {
            std::cout << "How a lot of nut you want to buy?(1 - 100): ";
            int* buynut = &nuts;
            int nutsBuy = 0;
            int usingmoney;
            std::cin >> nutsBuy;
            usingmoney = nutsBuy * 1;
            people.change(usingmoney, nutsBuy, 0, 0);
            int result = *buynut - nutsBuy;
            std::cout << "U buy: " << nutsBuy << "\nleft in store: " << result << std::endl;
            people.print();
            nuts -= nutsBuy;
        }
        else if (choiseOfBuy == '2') {
            std::cout << "How a lot of chips you want to buy?(1 - 20): ";
            int* buychips = &chips;
            int chipsBuy = 0;
            int usingmoney;
            std::cin >> chipsBuy;
            usingmoney = chipsBuy * 20;
            people.change(usingmoney, chipsBuy, 0, 0);
            int result = *buychips - chipsBuy;
            std::cout << "U buy: " << chipsBuy << "\nleft in store: " << result << std::endl;
            people.print();
            chips -= chipsBuy;
        }
        else if (choiseOfBuy == '3') {
            std::cout << "How a lot of Coca-Cola you want to buy?(1 - 7): ";
            int* buycocaCola = &cocaCola;
            int cocaColaBuy = 0;
            int usingmoney;
            std::cin >> cocaColaBuy;
            usingmoney = cocaColaBuy * 12;
            people.change(usingmoney, cocaColaBuy, 0, 0);
            int result = *buycocaCola - cocaColaBuy;
            std::cout << "U buy: " << cocaColaBuy << "\nleft in store: " << result << std::endl;
            people.print();
            cocaCola -= cocaColaBuy;
        }
        else {
            std::cout << "\nWrong choise" << std::endl;
        }
    }
    else if (choise == '2') {
        std::cout << "\nOkay!" << std::endl;
    }
    else {
        std::cout << "\nWrong choise" << std::endl;
        groseryShops(people);
    }
}

#endif  // SHOPS_H
