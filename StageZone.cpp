#include "StageZone.h"

StageZone::StageZone(EventControl *subject): EventGroup(subject)
{
	this->lightColour = "white";
	this->majorStageEvent = false;
	//subject->attach(this);
}
StageZone::~StageZone(){

}
void StageZone::open(){

}
void StageZone::close(){

}
int StageZone::getCapacity(){
    return this->capacity;
}
void StageZone::reportStatus(){

}
void StageZone::majorStage_Event()
{

}

void StageZone::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open();
		break;
	case CLOSE:
		
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case CLEAN_REQUIRED:
		
		break;
	case MAX_CAPACITY:
		if(getCapacity() >= 50){
			cout << "no space \n";
		}else{
			cout << "some space\n";
		}
		break;
	}
	EventGroup::update(notification);
}