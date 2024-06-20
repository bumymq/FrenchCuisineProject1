#pragma once
#include "Dish.h"

class Souffle : public Dish {
public:
    Souffle(double _weight, double _price, double _calories, double _cookingTime);

    std::string Name();
    std::string Discription();
    std::string ServingSuggestion();  
    std::string HowToEat();
};
