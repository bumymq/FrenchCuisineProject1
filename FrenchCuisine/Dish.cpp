#include "Dish.h"

Dish::Dish(double _weight, double _price, double _calories, double _cookingTime):
	weight(_weight),
	price(_price),
	calories(_calories),
	cookingTime(_cookingTime)
{}

double Dish::GetWeight() const {
	return weight;
}

double Dish::GetPrice() const {
	return price;
}

double Dish::GetCalories() const {
	return calories;
}

double Dish::GetCookingTime() const {
	return cookingTime;
}

void Dish::SetWeight(double _weight) {
	weight = _weight;
}

void Dish::SetPrice(double _price) {
	price = _price;
}

void Dish::SetCalories(double _calories) {
	calories = _calories;
}

void Dish::SetCookingTime(double _cookingTime) {
	cookingTime = _cookingTime;
}

Dish::Dish(const Dish& other) :
	weight(other.weight),
	price(other.price),
	calories(other.calories),
	cookingTime(other.cookingTime)
{}