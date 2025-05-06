#pragma once
#include<iostream>
#include<string>
#include "Members.h"
using namespace std;
class Coaches
{
	int id;
	string password;
	string name;
	//assigned classses
public:
	Coaches(string name, int id, string password);
	Coaches(string name, int id);
	void retrieve(int, unordered_map<int, Members>* members);
	string getPassword();
	void coachMenu();
	//schedule classes

};

