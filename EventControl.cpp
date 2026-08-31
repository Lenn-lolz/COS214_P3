#include "EventControl.h"

EventControl::EventControl() {

}
EventControl::~EventControl() {

}
void EventControl::setCleaningTarget(EventComponent* target){
    cleaningTarget = target;
}

EventComponent* EventControl::getCleaningTarget(){
    return cleaningTarget;
}

void EventControl::notify(Notice notif, string message) {
	cout<< "NOTIFICATION: -- " << message << "\n";
    for (auto observer : observerList) {
        observer->update(notif);
    }
}


