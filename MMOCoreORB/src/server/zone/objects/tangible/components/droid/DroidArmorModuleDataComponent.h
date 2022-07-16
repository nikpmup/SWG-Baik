/*
 * 				Copyright <SWGEmu>
		See file COPYING for copying conditions. */

#ifndef DROIDARMORMODULEDATACOMPONENT_H_
#define DROIDARMORMODULEDATACOMPONENT_H_

#include "BaseDroidModuleComponent.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidArmorModuleDataComponent : public BaseDroidModuleComponent {
protected:
	int armorModule;

public:
	DroidArmorModuleDataComponent();

	~DroidArmorModuleDataComponent();

	String getModuleName() const;

	void initializeTransientMembers();

	void initialize(DroidObject* droid);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* droid);

	int getBatteryDrain();

	String toString() const;

	bool isStackable() {
		return true;
	}

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void addToStack(BaseDroidModuleComponent* other);

	void copy(BaseDroidModuleComponent* other);
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server
using namespace server::zone::objects::tangible::components::droid;

#endif /* DROIDARMORMODULEDATACOMPONENT_H_ */
