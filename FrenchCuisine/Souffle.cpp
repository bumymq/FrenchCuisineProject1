#include "Souffle.h"

Souffle::Souffle(double _weight, double _price, double _calories, double _cookingTime) :
    Dish(_weight, _price, _calories, _cookingTime)
{}

std::string Souffle::Name() {
    return "Souffle";
}

std::string Souffle::Discription() {
    return "a baked egg dish originating in France in the early 18th century.";
}

std::string Souffle::ServingSuggestion() {
    return "Serve warm with a dusting of powdered sugar and a dollop of whipped cream.";
}
std::string Souffle::HowToEat() {
    return "Enjoy the souffle immediately after it comes out of the oven, savoring its light texture and delicate flavor.";
}