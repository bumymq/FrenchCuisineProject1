#include "Steak tartare.h"

Steaktartare::Steaktartare(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Steaktartare::Name() {
	return "Steak tartare";
}
std::string Steaktartare::Discription() {
	return "French dish of raw ground beef. It is usually served with onions, capers, parsley or chive, salt, pepper, Worcestershire sauce.";
}
std::string Steaktartare::ServingSuggestion()  {
	return "Serve with capers and a raw egg yolk.";
}
std::string Steaktartare::HowToEat() {
	return "Enjoy the steak tartare by spreading it on toasted bread or eating it with a fork, appreciating its bold flavors.";
}