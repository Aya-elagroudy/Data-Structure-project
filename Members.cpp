#include "Members.h"

Members::Members(int id, string password, string name, string dob, Subscription memS)
{
    this->ID = id;
    this->password = password;
    this->name = name;
    this->dateOfBirth = dob;
    this->membersSubscription = memS;    
}

Members::Members(string name, int id, string password, string dob)
{
    this->ID = id;
    this->password = password;
    this->name = name;
    this->dateOfBirth = dob;
}

string Members::getPassword()
{
    return password;
}

int Members::getID()
{
    return ID;
}

string Members::getName()
{
    return name;
}

string Members::getDOB()
{
    return dateOfBirth;
}

Subscription Members::getRenewalDate()
{
    return Subscription();
}

void Members::setSubscription(Subscription memS)
{
    membersSubscription = memS;
}

void Members::memberMenu()
{
    cout << "1- Subscribe to training programs.\n2- Book Padel courts.\n3- Track workout histories.\"n";
}
