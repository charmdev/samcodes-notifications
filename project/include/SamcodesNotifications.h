#ifndef SAMCODESNOTIFICATIONSEXT_H
#define SAMCODESNOTIFICATIONSEXT_H

namespace samcodesnotifications
{
	void scheduleLocalNotification(int slot, float triggerAfterMillis, const char* title, const char* message, const char* action, bool incrementBadgeCount);
	void cancelLocalNotification(int slot);
	void cancelLocalNotifications();
	int getApplicationIconBadgeNumber();
	bool setApplicationIconBadgeNumber(int number);
}

#endif