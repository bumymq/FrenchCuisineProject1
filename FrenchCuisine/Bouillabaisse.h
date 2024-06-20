#pragma once
#include "Dish.h"

class Bouillabaisse : public Dish {

public:
	Bouillabaisse(double _weight, double _price, double _calories, double _cookingTime);

	std::string Name();
	std::string Discription();
	std::string ServingSuggestion();
	std::string HowToEat();
};
