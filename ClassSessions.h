#pragma once
#include<iostream>
#include<string>
#include<unordered_set>
#include<queue>
#include<string>
#include "Coaches.h"
#include"Members.h"
using namespace std;

class ClassSessions
{
	const int capacity = 30;
	int classID;
	string className;
	queue<int> waitlist;
	unordered_set<int> joined;
	Coaches* assignedCoach;

public:
	ClassSessions(int classID, Coaches* assignedCoach, string className);
	bool isFull(); //waitlist
	void cancel(int);
	void joinClass(int);
};