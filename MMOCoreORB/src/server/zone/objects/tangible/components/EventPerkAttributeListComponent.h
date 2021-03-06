/*
 * EventPerkAttributeListComponent.h
 *
 *  Created on: 9/20/2014
 *      Author: Klivian
 */

#ifndef EVENTPERKATTRIBUTELISTCOMPONENT_H_
#define EVENTPERKATTRIBUTELISTCOMPONENT_H_

#include "server/zone/objects/scene/components/AttributeListComponent.h"
#include "server/zone/objects/tangible/components/EventPerkDataComponent.h"
#include "server/zone/objects/tangible/deed/eventperk/EventPerkDeed.h"

class EventPerkAttributeListComponent: public AttributeListComponent {
public:

	/**
	 * Fills the Attributes
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillAttributeList(AttributeListMessage* alm, CreatureObject* player, SceneObject* sceneObject) const {

		if(player == nullptr || sceneObject == nullptr || !sceneObject->isTangibleObject())
			return;

		// Fill from parent
		AttributeListComponent::fillAttributeList(alm, player, sceneObject);

		EventPerkDataComponent* data = cast<EventPerkDataComponent*>(sceneObject->getDataObjectComponent()->get());

		if (data == nullptr) {
			player->sendSystemMessage("Error: no dataObjectComponent.");
			return;
		}

		EventPerkDeed* deed = data->getDeed();

		if (deed == nullptr) {
			player->sendSystemMessage("Error: deed is nullptr.");
			return;
		}

		ManagedReference<CreatureObject*> owner = deed->getOwner().get();
		if( owner != nullptr ){
			alm->insertAttribute("owner", owner->getFirstName() );
		}

	}

};

#endif /* EVENTPERKATTRIBUTELISTCOMPONENT_H_ */
