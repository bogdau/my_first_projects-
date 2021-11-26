/* Login and Registration system */

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void Register()
{
    string username;
    string password;

    cout << "Enter username: ";

    cin.get();
    getline(cin, username);

    cout << "Enter password: ";
    cin >> password;

    ofstream file("data_" + username + ".txt");
    file << username << endl << password << endl;
    file.close();
}

void Login()
{
    string username;
    string password;

    string un;
    string ps;

    cout << "Enter username: ";
    cin.get();
    getline(cin, username);

    cout << "Enter password: ";
    cin >> password;

    ifstream data("data_" + username + ".txt");
    getline(data, un);
    getline(data, ps);

    if (username == un && password == ps) {
        cout << "Congratuletions u enter to your account!" << endl;
    }
    else {
        cout << "U did't eneter to account" << endl;
    }
}

int Operation()
{
    char choise;
    while (true) {
        cout << "\"1\" - Register \t\"2\" - Login\n ";
        cin >> choise;
        if (choise == '1') {
            Register();
        }
        else if (choise == '2') {
            Login();
        }
        else {
            return 0;
        }
    }
}

int main() { Operation(); }
