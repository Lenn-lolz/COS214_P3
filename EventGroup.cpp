#include "EventGroup.h"
EventGroup::~EventGroup()
{
}
void EventGroup::update(Notice notification) {
	
    for (vector<EventComponent*>::iterator i = children.begin();i != children.end();++i){
        (*i)->update(notification);
    }
}

void EventGroup::addChild(EventComponent* eComponent) {
	children.push_back(eComponent);
}

void EventGroup::removeChild(EventComponent* eComponent) {
    vector<EventComponent*>::iterator it = find(children.begin(), children.end(), eComponent);
    if (it != children.end()){children.erase(it);}
}


