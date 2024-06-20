#include <iostream>
#include "clienttest.h"
#include "Dish.h"
#include <chrono>
#include <thread>
using namespace std;

void Testname(Client* x) {
    cout << x->GetName() << " ";
    cout << x->GetSurname() << " ";
    cout << x->GetAmountMoney() << " euro" << endl;
}

void testbuy(Client* x, Dish* y) {
    cout << "- Hi, I'd like to buy " << y->Name() << ". How much will it cost?" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    cout << "- Sure, it'll cost you " << y->GetPrice() <<" euro "<<"Card or cash ? " << endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    cout << "Card" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    if (x->GetAmountMoney() < y->GetPrice())
    {
        cout << "Payment declined, you don't have enough money" << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "- Sorry, I'll come a little bit later" << endl;
    }
    else {
        cout << "Payment accepted" << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "- Thank you, have a nice day!" << endl;
    }
}
