#ifndef MEETANDGREET_H
#define MEETANDGREET_H
#include <string>
using namespace std;

class MeetAndGreet{
	private:
		int maxCapacity;
		int capacity;
		string name;
	public:
		MeetAndGreet(int maxCapacity);
		~MeetAndGreet();
		void update();
		int getCapacity();
		void setCapacity(int capacity);
		void update();
		string getName();
		void setName(string name);
		int getMaxCapacity();
		void setMaxCapacity(int capacity);
};

#endif