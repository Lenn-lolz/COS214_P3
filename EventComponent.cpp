#include "EventComponent.h"

EventComponent::~EventComponent(){}

int EventComponent::getCleaness(){
    return cleanliness;
}
string EventComponent::getName(){
    return name;
}
