/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions. */

/**
 * \file ImageDesignTimeoutEvent.h
 * \author Polonel
 * \date 02.07.2011
 */

#ifndef IMAGEDESIGNTIMEOUTEVENT_H_
#define IMAGEDESIGNTIMEOUTEVENT_H_

#include "engine/engine.h"
#include "server/zone/objects/player/sessions/ImageDesignSession.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace events {

class ImageDesignTimeoutEvent : public Task {
	ManagedWeakReference<ImageDesignSession*> idSession;

public:
	ImageDesignTimeoutEvent(ImageDesignSession* session) {
		idSession = session;
	}

	void run() {
		ManagedReference<ImageDesignSession*> session = idSession.get();

		if (session == nullptr)
			return;

		session->sessionTimeout();
	}
};

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

#endif /* IMAGEDESIGNTIMEOUTEVENT_H_ */
