#include "shops.h"
#include <iostream>
#include <unistd.h>  //using for sleep

int main()
{
    Shops shops;
    People people;
    std::cout << "\tMAIN MENU" << std::endl;
    std::cout << "1. List of shops\n2. Inventory\n3. Go to shop?\n4. Exit" << std::endl;
    std::cout << "What you want: _\b_\b";
    char choise;
    char choiseShop = 0;
    std::cin >> choise;
    switch (choise) {
    case '1':
        shops.listOfShops();
        main();
        break;
    case '2':
        people.print();
        main();
        break;
    case '3':
        std::cout << "\n1. Grosery store\n2. Cloth store\n3. Amusent store " << std::endl;
        std::cin >> choiseShop;
        switch (choiseShop) {
        case '1':
            shops.groseryShops();
            main();
            break;
        case '2':

            break;
        case '3':
            break;
        }
        break;
    case '4':
        return 0;
        break;
    default:
        std::cout << "\nEnter what u want!";
        main();
    }
}
