#ifndef STAGEZONE_H
#define STAGEZONE_H

class StageZone : public EventGroup {

private:
	EventClass* subject;
	boolean open;
	string lightColour;
	boolean majorStageEvent;

public:
	StageZone(EventClass* subject, boolean open, string lightColour);

	void ~StageZone();

	void majorStage_Event();
};

#endif
