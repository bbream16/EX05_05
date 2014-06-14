#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Account{

	int id;
	double balance;
	static double annualInterestRate;
	string name;
	double monthlyInterestRate;


	Account(string name, int id, double balance, static double annualInterestRate){}
	Account(){
	string name = "Bob";
	int id = 0;
	double balance = 0;
	static double annualInterestRate = 0;
	}
	
	int getId();
	void setId(int newId);
	double getBalance();
	void setBalance(double newBalance);
	static double getAnnualInterestRate();
	void setAnnualInterestRate(static double newAnnualInterestRate);
	double getMonthlyInterestRate();
	double withdraw(double amount);
	double deposit(double amount);
	
};

class Date{
	int day;
	int month;
	int year;
	Date(int day, int month, int year){}
	void setDay(int newDay);
	int getDay();
	void setMonth(int newMonth);
	int getMonth();
	void setYear(int newYear);
	int getYear();

};

class Transaction{
	vector <Transaction>(char type, double amount, double balance, string description);
	int transactions;
};






int Account::getId(){
	return id;
}
void Account::setId(int newId){
	id = newId;
}
double Account::getBalance(){
	return balance;
}
void Account::setBalance(double newBalance){
	balance = newBalance;
}
double Account::getAnnualInterestRate(){
	return annualInterestRate;
}
void Account::setAnnualInterestRate(static double newAnnualInterestRate){
	annualInterestRate = newAnnualInterestRate;
}
double Account::getMonthlyInterestRate(){
	return monthlyInterestRate;
}
double Account::withdraw(double amount){
	transactions++;
	int newBalance=balance - amount;
	return newBalance;
}
double Account::deposit(double amount){
	transactions++;
	int newBalance = balance + amount;
	return newBalance;
}

void Date::setDay(int newDay){
	newDay = day;
}
int Date::getDay(){
	return day;
}
void Date::setMonth(int newMonth){
	newMonth = month;
}
int Date::getMonth(){
	return month;
}
void Date::setYear(int newYear){
	newYear = year;
}
int Date::getYear(){
	return year;
}


int main(){
	Account myAccount(){
		name = George;
		id = 1122;
		balance = 1000;
		annualInterestRate = 1.5;
	}
	myAccount.deposit(30);
	myAccount.deposit(40);
	myAccount.deposit(50);
	myAccount.withdraw(5);
	myAccount.withdraw(4);
	myAccount.withdraw(2);

	return 0;
}