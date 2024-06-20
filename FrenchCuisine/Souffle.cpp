#include "Souffle.h"

Souffle::Souffle(double _weight, double _price, double _calories, double _cookingTime) :
	Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Souffle::Type() {
	return "Souffle";
}
std::string Souffle::Discription() {
	return "a baked egg dish originating in France in the early 18th century.";
}