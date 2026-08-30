#ifndef ARTS_H
#define ARTS_H

class Arts : public EventGroup {

private:
	EventClass* subject;
	boolean open;
	boolean clean;
	string lightColour;
	vector<string> decorations;

public:
	Arts(EventClass* subject);

	void ~Arts();

	vector<string> getDecorations();

	void addDecoration(string decoration);

	void Sale();
};

#endif
