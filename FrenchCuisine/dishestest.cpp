#include "dishestest.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void testType(Dish* dish) {
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << dish->Type() << " it is ";
}

void testDiscription(Dish* dish) {
    std::cout << dish->Discription() << std::endl;
}

void testGetparam(Dish* dish) {
    std::cout << "Parameters of " << dish->Type() << " is:\n";
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Weight: " << dish->GetWeight() << " grams" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Price: " << dish->GetPrice() << " euros" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Calories: " << dish->GetCalories() << " kcal" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Cooking Time: " << dish->GetCookingTime() << " minutes" << std::endl;
}

void testDishes(Dish* dish) {
    testType(dish);
    testDiscription(dish);
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    testGetparam(dish);
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << std::endl;
}
