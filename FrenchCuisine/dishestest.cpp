#include "dishestest.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void testName(Dish* dish) {
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << dish->Name() << " it is ";
}

void testDiscription(Dish* dish) {
    std::cout << dish->Discription() << std::endl;
}

void testGetparam(Dish* dish) {
    std::cout << "Parameters of " << dish->Name() << " is:\n";
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Weight: " << dish->GetWeight() << " grams" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Price: " << dish->GetPrice() << " euros" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Calories: " << dish->GetCalories() << " kcal" << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << "Cooking Time: " << dish->GetCookingTime() << " minutes" << std::endl;
}

void testServingSuggestion(Dish* dish) {
   
        std::cout << "Serving suggestion: " << dish->ServingSuggestion() << std::endl;
    
}

void testHowToEat(Dish* dish) {
    std::cout << "How to eat " << dish->Name() << ":" << std::endl;
    std::cout << dish->HowToEat() << std::endl;
}
void testDishes(Dish* dish) {
    testName(dish);
    testDiscription(dish);
    this_thread::sleep_for(chrono::milliseconds(100));
    std::cout << std::endl;
    this_thread::sleep_for(chrono::milliseconds(100));
    testGetparam(dish);
    this_thread::sleep_for(chrono::milliseconds(100));
    testServingSuggestion(dish);  
    this_thread::sleep_for(chrono::milliseconds(100));
    testHowToEat(dish);
}
