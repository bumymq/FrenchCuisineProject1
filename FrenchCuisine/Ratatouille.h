#pragma once
#include "Dish.h"

class Ratatouille : public Dish {

public:
	Ratatouille(double _weight, double _price, double _calories, double _cookingTime);

	std::string Name();
	std::string Discription();
	std::string ServingSuggestion();
	std::string HowToEat();
};
