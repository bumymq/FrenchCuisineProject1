#include "Croissant.h"

Croissant::Croissant(double _weight, double _price, double _calories, double _cookingTime):
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Croissant::Name() {
	return "Croissant";
}
std::string Croissant::Discription() {
	return "a buttery, crescent-shaped French pastry.";
}
std::string Croissant::ServingSuggestion()  {
	return "Serve with butter and jam.";
}
std::string Croissant::HowToEat() {
	return "Eat by tearing off a piece at a time and savoring the buttery layers.";
}