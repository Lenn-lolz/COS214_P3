#ifndef ESPORTS_H
#define ESPORTS_H
#include <string>
using namespace std;

class ESports{
	private:
		int maxCapacity;
		int capacity;
		string name;
	public:
		ESports(int maxCapacity);
		~ESports();
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