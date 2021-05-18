
#include <iostream>
#include <unistd.h>  //using for sleep

#include "shops.h"

void choiseShopMenu(Shops& shops, People& people) {
    std::cout << "\n1. Grosery store\n2. Cloth store\n3. Amusent store " << std::endl;
    char choiseShop = 0;
    std::cin >> choiseShop;
    switch (choiseShop) {
    case '1':
        shops.groseryShops(people);
        break;
    case '2':
        break;
    case '3':
        break;
    }
}

int main()
{
    Shops shops;
    People people;

    bool stop = false;
    while (stop != true) {
        std::cout << "\tMAIN MENU" << std::endl;
        std::cout << "1. List of shops\n2. Inventory\n3. Go to shop?\n4. Exit" << std::endl;
        std::cout << "What you want: _\b_\b";
        char choise;
        std::cin >> choise;

        switch (choise) {
        case '1':
            shops.listOfShops();
            break;
        case '2':
            people.print();
            break;
        case '3':
            choiseShopMenu(shops, people);
            break;
        case '4':
            stop = true;
            break;
        default:
            std::cout << "\nEnter what u want!";
        }
    }
    std::cout << "Bye" << std::endl;
}
