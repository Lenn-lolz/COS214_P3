#include "EventUnit.h"

void EventUnit::updateBoolean(string notice, bool notification)
{
	onUpdateBoolean(notice, notification);
}
void EventUnit::updateString(string notice, string notification)
{
	onUpdateString(notice, notification);
}
