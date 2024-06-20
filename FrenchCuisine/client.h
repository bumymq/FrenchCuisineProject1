#pragma once
#include <string>
class Client {
public:
	std::string Name;
	std::string Surname;
	double amountmoney;
	explicit Client(std::string _Name, std::string _Surname, double _amountmoney);

	std::string GetName() const;
	std::string GetSurname() const;
	double GetAmountMoney() const;

	void SetName(std::string _Name);
	void setSurname(std::string _Surname);
	void setAmountMoney(double _amountmoney);

	Client(const Client& other);
	Client& operator=(const Client&) = delete;
};