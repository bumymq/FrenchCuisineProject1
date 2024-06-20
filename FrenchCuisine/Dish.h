#pragma once
#include<iostream>
#include<string>

class Dish {
protected:
	double weight;
	double price;
	double calories;
	double cookingTime;
	

	explicit Dish(double _weight, double _price, double _calories, double _cookingTime);

public:
	virtual std::string Type() = 0;
	virtual std::string Discription() = 0;

	double GetWeight() const;
	double GetPrice() const;
	double GetCalories() const;
	double GetCookingTime() const;

	void SetWeight(double _weight);
	void SetPrice(double _price);
	void SetCalories(double _calories);
	void SetCookingTime(double _cookingTime);


	Dish(const Dish& other);
	Dish& operator=(const Dish&) = delete;
};