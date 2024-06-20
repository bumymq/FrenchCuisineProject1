#include "Ratatouille.h"

Ratatouille::Ratatouille(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Ratatouille::Name() {
	return "Ratatouille";
}
std::string Ratatouille::Discription() {
	return "a French Provencal dish of stewed vegetables that originated in Nice and is sometimes referred to as ratatouille nicoise.";
}

std::string  Ratatouille::ServingSuggestion()  {
	return "Serve with a slice of fresh baguette.";
}
std::string Ratatouille::HowToEat() {
	return "Enjoy this dish by savoring each bite of the tender stewed vegetables.";
}