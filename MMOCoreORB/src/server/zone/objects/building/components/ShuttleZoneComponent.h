/*
 * ShuttleZoneComponent.h
 *
 *  Created on: Aug 19, 2011
 *      Author: crush
 */

#ifndef SHUTTLEZONECOMPONENT_H_
#define SHUTTLEZONECOMPONENT_H_

#include "engine/engine.h"

#include "server/zone/objects/scene/components/ZoneComponent.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {
class SceneObject;
}

namespace building {
class BuildingObject;
}
} // namespace objects

class Zone;
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;
using namespace server::zone::objects::building;
using namespace server::zone;

class ShuttleZoneComponent : public ZoneComponent {
public:
	void notifyInsertToZone(SceneObject* sceneObject, Zone* zone) const;
	void notifyRemoveFromZone(SceneObject* sceneObject) const;
};

#endif /* SHUTTLEZONECOMPONENT_H_ */
