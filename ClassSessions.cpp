#include "ClassSessions.h"


ClassSessions::ClassSessions(int classID, Coaches* assignedCoach, string className)
{
	this->classID = classID;
	this->assignedCoach = assignedCoach;
	this->className = className;
}

bool ClassSessions::isFull()
{
	return capacity == joined.size();
}

void ClassSessions::cancel(int id)
{
	for (auto it = joined.begin(); it != joined.end(); it++)
	{
		if (id == *it)
		{
			joined.erase(id);
			if (!waitlist.empty())
			{
				joined.insert(id);
				waitlist.pop();
			}
			break;
		}
		else
		{
			cout << "This member isn't joined in this class\n";
		}
	}
}

void ClassSessions::joinClass(int id)
{
	if (!isFull())
		joined.insert(id);
	else
		waitlist.push(id);
}
