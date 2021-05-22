#ifndef SHOPS_H
#define SHOPS_H
#include <iostream>
#include <string>
class People {
private:
    int money = 200;
    int food = 0;
    int cloth = 0;
    int amusent = 0;

public:
    void print();
    void change(int, int, int, int);
};

void People::print()
{
    std::cout << "\nMoney: " << money << "\nFood: " << food << "\nCloth: " << cloth
              << "\nAmusent: " << amusent;
}

void People::change(int m, int f, int c, int a)
{
    if (m >= money) {
        std::cout << "Sorry u d idn't have cash(" << std::endl;
    }
    else {
        money -= m;
        food += f;
        cloth += c;
        amusent += a;
    }
}

struct FoodClothAmusent {
    std::string foodlist[3] = {"Nuts", "Tomato", "Potato"};
    std::string clothlist[4] = {"Shoes", "T-shirt", "Socks", "Backpack"};
    std::string amusentlist[2] = {"Firedragon", "Candy"};
    int priceOfFood[sizeof(foodlist)] = {1, 10, 7};
    int priceOfCloth[sizeof(clothlist)] = {100, 50, 15, 65};
    int priceOfAmusent[sizeof(amusentlist)] = {199, 10};
    void foodprint();
    void clothprint();
    void amusentprint();
};

void FoodClothAmusent::foodprint()
{
    std::cout << "\tFood" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << foodlist[i] << "\tPrice: " << priceOfFood[i] << std::endl;
    }
}

void FoodClothAmusent::clothprint()
{
    std::cout << "\tCloth" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << clothlist[i] << "\tPrice: " << priceOfCloth[i] << std::endl;
    }
}

void FoodClothAmusent::amusentprint()
{
    std::cout << "\tAmusent" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << amusentlist[i] << "\tPrice: " << priceOfAmusent[i] << std::endl;
    }
}

struct Buying {
    void foodbuy(People& people, FoodClothAmusent staff);
    void clotbuy(People& people, FoodClothAmusent staff);
    void amusetbuy(People& people, FoodClothAmusent staff);
};  //(People& people)

void Buying::foodbuy(People& people, FoodClothAmusent staff)
{
    int choise = 0;
    int amount = 0;

    std::cout << "What you want to buy?: ";
    std::cin >> choise;

    std::cout << "How much: ";
    std::cin >> amount;

    if (choise == 1) {
        people.change(staff.priceOfFood[0] * amount, amount, 0, 0);
    }
    else if (choise == 2) {
        people.change(staff.priceOfFood[1] * amount, amount, 0, 0);
    }
    else if (choise == 3) {
        people.change(staff.priceOfFood[2] * amount, amount, 0, 0);
    }
}

void Buying::clotbuy(People& people, FoodClothAmusent staff)
{
    int choise = 0;
    int amount = 0;

    std::cout << "What you want to buy?: ";
    std::cin >> choise;
    std::cout << "How much: ";
    std::cin >> amount;

    if (choise == 1) {
        people.change(staff.priceOfFood[0] * amount, 0, amount, 0);
    }
    else if (choise == 2) {
        people.change(staff.priceOfCloth[1] * amount, 0, amount, 0);
    }
    else if (choise == 3) {
        people.change(staff.priceOfCloth[2] * amount, 0, amount, 0);
    }
    else if (choise == 4) {
        people.change(staff.priceOfCloth[3] * amount, 0, amount, 0);
    }
}

void Buying::amusetbuy(People& people, FoodClothAmusent staff)
{
    int choise = 0;
    int amount = 0;

    std::cout << "What you want to buy?: ";
    std::cin >> choise;
    std::cout << "How much: ";
    std::cin >> amount;

    if (choise == 1) {
        people.change(staff.priceOfAmusent[0] * amount, 0, 0, amount);
    }
    else if (choise == 2) {
        people.change(staff.priceOfAmusent[1] * amount, 0, 0, amount);
    }
}

#endif  // SHOPS_H
