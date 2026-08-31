#include "Cleaners.h"

Cleaners::Cleaners(EventControl *subject, bool active)
{
	this->subject = subject;
	this->active = active;
	subject->attach(this);
}
Cleaners::~Cleaners(){
    subject->detach(this);
}
bool Cleaners::getActive(){
	return this->active;
}

void Cleaners::setActive(bool active){
	this->active = active;
}

void Cleaners::cleaningUp(string name)
{
    if (active){cout<<"The clean team are on the roll: " << "Cleaning -- " << name <<"\n";}
    else{cout<<"The clean team are on their lunch break!!: " << " can't clean -- " << name <<"\n";}
	
}
void Cleaners::setSubject(EventControl* subject){
    this->subject = subject;
}

void Cleaners::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
        setActive(true);
		break;
	case CLOSE:
        setActive(false);
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:

        break;
    case CLEAN_REQUIRED:
        EventComponent* zone =subject->getCleaningTarget();
        if (zone != NULL){
            cleaningUp(zone->getName());
            if (active){
                zone->clean();
            }
        }
		break;
	case MAX_CAPACITY:
		break;
	}
}