#include "client.h"

Client::Client(std::string _Name, std::string _Surname, double _amountmoney) :
    Name(_Name),
    Surname(_Surname),
    amountmoney(_amountmoney)
{}

std::string Client::GetName() const {
    return Name;
}

std::string Client::GetSurname() const {
    return Surname;
}

double Client::GetAmountMoney() const {
    return amountmoney;
}

void Client::SetName(std::string _Name) {
    Name = _Name;
}

void Client::setSurname(std::string _Surname) {
    Surname = _Surname;
}

void Client::setAmountMoney(double _amountmoney) {
    amountmoney = _amountmoney;
}

Client::Client(const Client& other) :
    Name(other.Name),
    Surname(other.Surname),
    amountmoney(other.amountmoney)
{}
