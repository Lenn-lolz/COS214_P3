#ifndef DEMOZONE_H
#define DEMOZONE_H
#include <string>
using namespace std;

class DemoZone{
	private:
		int maxCapacity;
		int capacity;
		string name;
	public:
		DemoZone(int maxCapacity);
		~DemoZone();
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