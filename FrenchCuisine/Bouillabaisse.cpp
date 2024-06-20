#include "Bouillabaisse.h"

Bouillabaisse::Bouillabaisse(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Bouillabaisse::Name() {
	return "Bouillabaisse";
}
std::string Bouillabaisse::Discription() {
	return "a traditional Provencal fish soup originating in the port city of Marseille.";
}
std::string Bouillabaisse::ServingSuggestion()  {
	return "Serve with a side of rouille sauce.";
}
std::string Bouillabaisse::HowToEat() {
	return "Savor each spoonful of this hearty stew, dipping fresh crusty bread into the rich broth.";
}