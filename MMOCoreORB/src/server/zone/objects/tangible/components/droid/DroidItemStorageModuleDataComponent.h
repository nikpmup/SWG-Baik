/*
 * 				Copyright <SWGEmu>
		See file COPYING for copying conditions. */

#ifndef DROIDITEMSTORAGEMODULEDATACOMPONENT_H_
#define DROIDITEMSTORAGEMODULEDATACOMPONENT_H_

#include "BaseDroidModuleComponent.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidItemStorageModuleDataComponent : public BaseDroidModuleComponent {
protected:
	int rating;

public:
	DroidItemStorageModuleDataComponent();

	~DroidItemStorageModuleDataComponent();

	String getModuleName() const;

	void initializeTransientMembers();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* droid);

	int getBatteryDrain() {
		return 0;
	}

	String toString() const;

	void onCall();

	void onStore();

	bool isStackable() {
		return true;
	}

	void copy(BaseDroidModuleComponent* other);

	void addToStack(BaseDroidModuleComponent* other);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int getStorageRating();

	void fillObjectMenuResponse(SceneObject* droidObject, ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID, PetControlDevice* controller);

	void initialize(DroidObject* droid);
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server
using namespace server::zone::objects::tangible::components::droid;

#endif /* DROIDITEMSTORAGEMODULEDATACOMPONENT_H_ */
