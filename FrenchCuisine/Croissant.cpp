#include "Croissant.h"

Croissant::Croissant(double _weight, double _price, double _calories, double _cookingTime):
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Croissant::Type() {
	return "Croissant";
}
std::string Croissant::Discription() {
	return "a buttery, crescent-shaped French pastry.";
}