#include "EventControl.h"

EventControl::EventControl() {

}
EventControl::~EventControl() {

}

void EventControl::notify(Notice notif, string message) {
	cout<< "NOTIFICATION: -- " << message << "\n";
    for (auto observer : observerList) {
        observer->update(notif);
    }
}

bool EventControl::getBooleanState(string key) {
	return boolMap.at(key);
}

void EventControl::setBooleanState(string key, bool value) {
	boolMap[key] = value;
}

string EventControl::getStringValue(string key) {
	return stringMap.at(key);
}

void EventControl::setStringState(string key, string value) {
	stringMap[key] = value;
}
