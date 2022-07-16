/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef WEATHERCHANGEEVENT_H_
#define WEATHERCHANGEEVENT_H_

#include "server/zone/managers/weather/WeatherManager.h"

namespace server {
namespace zone {
namespace managers {
namespace weather {
namespace events {

class WeatherChangeEvent : public Task {
	ManagedWeakReference<WeatherManager*> weatherManager;

public:
	WeatherChangeEvent(WeatherManager* weatherManager) : Task() {
		this->weatherManager = weatherManager;
	}

	void run() {
		ManagedReference<WeatherManager*> wm = weatherManager.get();

		if (wm != nullptr) {
			wm->createNewWeatherPattern();
		}
	}
};

} // namespace events
} // namespace weather
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::weather::events;

#endif /* WEATHERCHANGEEVENT_H_ */
