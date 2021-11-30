/*
 * Copyright 2021 Baik
 * See file COPYING for copying conditions.
 *
 * Author: Nikpmup
 *
 * Credit:
 * 	RaiRai [SunrunnerII]
 *		Example drawn from their commit
 *		https://gitlab.com/sunrunner-live/sunrunner-live/-/commit/bd2656693f0d02330c707a84498939feb91e658d
 */
#pragma once

#include <type_traits>

#include "system/lang/ref/Reference.h"
#include "system/lang/Object.h"
#include "system/lang/String.h"
#include "system/platform.h"

#include "server/zone/managers/player/PlayerManager.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/ZoneProcessServer.h"
#include "server/zone/ZoneServer.h"

namespace baik {
namespace object_utils {

/**
 * Attempts to get object from objectID, otherwise uses player name instead
 *
 * @param server	zone server
 * @param objectID	object ID of the player
 * @param name		name of the player
 * @return			object reference of the player
 */
template<typename TObject>
Reference<TObject*> getPlayer(ZoneProcessServer& server, const uint64 objectID, const String& name) {
	static_assert(std::is_base_of<Object, TObject>::value, "TObject is not a base of Object");
	// Attempt to get via ObjectID first
	Reference<SceneObject*> obj{server.getZoneServer()->getObject(objectID)};
	if (obj != nullptr) {
		return obj.castTo<TObject*>();
	}

	// Attempt to get player's first name
	StringTokenizer nameTokenizer{name};
	if (!nameTokenizer.hasMoreTokens()) {
		return nullptr;
	}

	// Attempt to get via player's first name
	Reference<CreatureObject*> creatureObj{server.getPlayerManager()->getPlayer(nameTokenizer.getStringToken())};
	if (creatureObj != nullptr) {
		return creatureObj.castTo<TObject*>();
	}

	return nullptr;
}

} // namespace object_utils
} // namespace baik
