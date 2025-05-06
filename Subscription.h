#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Members.h"
#include"Members.h"

using namespace std;
class Subscription
{
	string subscriptionPeriod;
	vector<Members> M;

public:
	bool isActive();

};

