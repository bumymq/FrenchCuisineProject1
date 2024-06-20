#include <iostream>
#include <string>
#include <thread>
#include <chrono> 
#include <Windows.h>
#include <cstdlib> 
#include <ctime> 
#include "Dish.h"
#include "Croissant.h"
#include "dishestest.h"
#include "Ratatouille.h"
#include "Bouillabaisse.h"
#include "Souffle.h"
#include "Steak tartare.h"
#include "client.h"
#include "clienttest.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int money = 1 + rand() % 50;


    SMALL_RECT rect;
    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = 50;
    rect.Right = 100;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleWindowInfo(hConsole, TRUE, &rect);

    cout << "Hello, welcome to our French-cuisine restaurant, check out the menu\n";
    this_thread::sleep_for(chrono::milliseconds(300));

    cout << "\t\t\t\t      ----------MENU----------" << endl;
    this_thread::sleep_for(chrono::milliseconds(300));

    //------------------------------------------------------------
    cout << "----------Main Dishes----------\n";
    this_thread::sleep_for(chrono::milliseconds(300));

    //------------------------------------------------------------
    cout << "\t==Ratatouille==\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Ratatouille Ratatouille_(300, 20, 216, 40);
    testDishes(&Ratatouille_);
    //------------------------------------------------------------
    cout << "\t==Bouillabaisse==\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Bouillabaisse Bouillabaisse_(400, 25, 380, 50);
    testDishes(&Bouillabaisse_);
    //------------------------------------------------------------
    cout << "\t==Steak tartare==\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Steaktartare Steaktartare_(200, 30, 250, 15);
    testDishes(&Steaktartare_);
    //------------------------------------------------------------
    cout << "----------Deserts----------\n";
    cout << "\t==Croissant==\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Croissant Croissant_(80, 5, 250, 15);
    testDishes(&Croissant_);
    //------------------------------------------------------------
    cout << "\t==Souffle==\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    Souffle Souffle_(150, 15, 300, 25);
    testDishes(&Souffle_);
    //------------------------------------------------------Client
    cout << "- What would you like to order?" << endl;
    Client client("John", "Doe", money);

    Testname(&client);
    testbuy(&client, &Ratatouille_);
    
    cout << "------------------------------" << endl;
    cout << "Next day:" << endl;
    this_thread::sleep_for(chrono::milliseconds(900));
    Testname(&client);
    testbuy(&client, &Bouillabaisse_);
   
    cout << "------------------------------" << endl;
    cout << "Next day:" << endl;
    this_thread::sleep_for(chrono::milliseconds(900));
    
    Testname(&client);
    testbuy(&client, &Steaktartare_);
    
    cout << "------------------------------" << endl;
    cout << "Next day:" << endl;
    this_thread::sleep_for(chrono::milliseconds(900));
   
    Testname(&client);
    testbuy(&client, &Croissant_);
   
    cout << "------------------------------" << endl;
    cout << "Next day:" << endl;
    this_thread::sleep_for(chrono::milliseconds(900));
 
    Testname(&client);
    testbuy(&client, &Souffle_);


    return 0;
}
