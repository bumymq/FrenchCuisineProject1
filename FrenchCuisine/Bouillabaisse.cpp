#include "Bouillabaisse.h"

Bouillabaisse::Bouillabaisse(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Bouillabaisse::Type() {
	return "Bouillabaisse";
}
std::string Bouillabaisse::Discription() {
	return "a traditional Provencal fish soup originating in the port city of Marseille.";
}