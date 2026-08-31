#include "EventGroup.h"
EventGroup::EventGroup(EventControl *subject){
	this->subject = subject;
	//subject->attach(this);
}
EventGroup::~EventGroup(){
    subject->detach(this);
}
void EventGroup::update(Notice notification) {
    
    //comp stuff
    for (vector<EventComponent*>::iterator i = children.begin();i != children.end();++i){
        (*i)->update(notification);
    }
} 

void EventGroup::addChild(EventComponent* eComponent) {
    cout << "+ Adding to Area \n";
	children.push_back(eComponent);
}

void EventGroup::removeChild(EventComponent* eComponent) {
    vector<EventComponent*>::iterator it = find(children.begin(), children.end(), eComponent);
    if (it != children.end()){children.erase(it);}
}
void EventGroup::transferChild(EventComponent* child,EventGroup* newGroup){
    removeChild(child);
    newGroup->addChild(child);
}

void EventGroup::open(){}
void EventGroup::close(){}
int EventGroup::getCapacity(){return this->capacity;}
void EventGroup::reportStatus(){}
void EventGroup::clean(){
    cleanliness = 100;
    cout << name << " is back to full cleanliness! \n";
}


