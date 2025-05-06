#include "Coaches.h"
Coaches::Coaches(string name, int id, string password)
{
	this->id = id;
	this->name = name;
	this->password = password;
}

Coaches::Coaches(string name, int id)
{
	this->name = name;
	this->id = id;
}

void Coaches::retrieve(int id, unordered_map<int, Members>* members)
{
	for (auto it = members->begin(); it != members->end(); it++)
	{
		if (it->first == id)
		{
			cout << "Name: " << it->second.getName();
			cout << "Date of birth: " << it->second.getDOB();
			cout << "Renewal date: ";
			cout << "Joined classes: ";
			break;
		}
	}
}
string Coaches::getPassword()
{
    return password;
}
