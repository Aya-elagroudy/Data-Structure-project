#include "Manager.h"

int Manager::getID()
{
    return ID;
}

string Manager::getPassword()
{
    return password;
}

void Manager::retrieve(int id, unordered_map<int, Members>* members)
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

void Manager::store(unordered_map<int, Members>* members)
{
	string name;
	string password;
	string dob;
	Subscription sub;
	int ID;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter a password: ";
	cin >> password;
	cout << "Enter your date of birth: ";
	cin >> dob;
	cout << "Enter subscription period: ";
	//cin >> sub;
	ID = (*members).size() + 1;
	cout << "Your ID is " << ID;
	Members newMember(name, ID, password, dob); //sub aala ma tofrag
	(*members).insert(make_pair(ID, newMember));
}
