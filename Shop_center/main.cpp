#include <iostream>
#include <unistd.h>  //using for sleep

#include "shops.h"

void choiseShopMenu(Buying& buying, People& people)
{
    FoodClothAmusent allList;
    std::cout << "\n1. Grosery store\n2. Cloth store\n3. Amusent store " << std::endl;
    char choiseShop = 0;
    std::cin >> choiseShop;
    switch (choiseShop) {
    case '1':
        allList.foodprint();
        buying.foodbuy(people, allList);
        break;
    case '2':
        allList.clothprint();
        buying.clotbuy(people, allList);
        break;
    case '3':
        allList.amusentprint();
        buying.amusetbuy(people, allList);
        break;
    }
}

int main()
{
    Buying buying;
    People people;

    bool stop = false;
    while (stop != true) {
        std::cout << "\tMAIN MENU" << std::endl;
        std::cout << "\n1. Inventory\n2. Go to shop?\n3. Exit" << std::endl;
        std::cout << "What you want: _\b_\b";
        char choise;
        std::cin >> choise;

        switch (choise) {
        case '1':
            people.print();
            break;
        case '2':
            choiseShopMenu(buying, people);
            break;
        case '3':
            stop = true;
            break;
        default:
            std::cout << "\nEnter what u want!";
        }
    }
    std::cout << "Bye" << std::endl;
}
