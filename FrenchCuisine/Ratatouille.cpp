#include "Ratatouille.h"

Ratatouille::Ratatouille(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Ratatouille::Type() {
	return "Ratatouille";
}
std::string Ratatouille::Discription() {
	return "a French Provencal dish of stewed vegetables that originated in Nice and is sometimes referred to as ratatouille nicoise.";
}