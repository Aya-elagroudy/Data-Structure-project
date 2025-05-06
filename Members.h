#pragma once
#include<iostream>
#include<string>
#include"Account.h"
#include"Subscription.h"
using namespace std;
class Members
{
	int ID;
	string password, name, dateOfBirth;
	Subscription membersSubscription;
	//class sesssions

public:
	Members(int , string, string, string, Subscription);
	Members(string name, int id, string password, string dateOfBirth);
	string getPassword();
	int getID();
	string getName();
	string getDOB();
	Subscription getRenewalDate();
	void setSubscription(Subscription);
	void memberMenu();
};

