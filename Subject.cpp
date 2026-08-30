#include "Subject.h"
Subject::~Subject()
{
}
void Subject::attach(Observer *observer)
{
	// add observer to vector. also checks for multiple
	if (std::find(observerList.begin(), observerList.end(), observer) == observerList.end())
	{
		observerList.push_back(observer);
	}
}

void Subject::detach(Observer *observer)
{
	// remove specified observer from vector
	observerList.erase(std::remove(observerList.begin(), observerList.end(), observer), observerList.end());
}