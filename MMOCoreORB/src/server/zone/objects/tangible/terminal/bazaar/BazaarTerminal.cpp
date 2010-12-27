/*
 *	server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/tangible/terminal/bazaar/AuctionItem.h"

#include "server/zone/Zone.h"

/*
 *	BazaarTerminalStub
 */

BazaarTerminal::BazaarTerminal() : Terminal(DummyConstructorParameter::instance()) {
	BazaarTerminalImplementation* _implementation = new BazaarTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BazaarTerminal::BazaarTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

BazaarTerminal::~BazaarTerminal() {
}


void BazaarTerminal::initializeTransientMembers() {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int BazaarTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void BazaarTerminal::addAuction(AuctionItem* item) {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->addAuction(item);
}

void BazaarTerminal::dropAuction(unsigned long long auctionItemID) {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedLongParameter(auctionItemID);

		method.executeWithVoidReturn();
	} else
		_implementation->dropAuction(auctionItemID);
}

VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* BazaarTerminal::getAuctions() {
	BazaarTerminalImplementation* _implementation = (BazaarTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getAuctions();
}

DistributedObjectServant* BazaarTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void BazaarTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	BazaarTerminalImplementation
 */

BazaarTerminalImplementation::BazaarTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


BazaarTerminalImplementation::~BazaarTerminalImplementation() {
}


void BazaarTerminalImplementation::finalize() {
}

void BazaarTerminalImplementation::_initializeImplementation() {
	_setClassHelper(BazaarTerminalHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void BazaarTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarTerminalImplementation::_getStub() {
	return _this;
}

BazaarTerminalImplementation::operator const BazaarTerminal*() {
	return _this;
}

void BazaarTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("BazaarTerminal");

}

void BazaarTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BazaarTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BazaarTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "auctions") {
		TypeInfo<VectorMap<unsigned long long, ManagedReference<AuctionItem* > > >::parseFromBinaryStream(&auctions, stream);
		return true;
	}


	return false;
}

void BazaarTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BazaarTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BazaarTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "auctions";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned long long, ManagedReference<AuctionItem* > > >::toBinaryStream(&auctions, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + TerminalImplementation::writeObjectMembers(stream);
}

BazaarTerminalImplementation::BazaarTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(62):  		auctions.setNullValue(null);
	(&auctions)->setNullValue(NULL);
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(63):  		auctions.setNoDuplicateInsertPlan();
	(&auctions)->setNoDuplicateInsertPlan();
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(65):  		Logger.setLoggingName("BazaarTerminal");
	Logger::setLoggingName("BazaarTerminal");
}

int BazaarTerminalImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(77):  		return 0;
	return 0;
}

void BazaarTerminalImplementation::addAuction(AuctionItem* item) {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(81):  		item.setBazaarTerminal(this);
	item->setBazaarTerminal(_this);
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(82):  		auctions.put(item.getAuctionedItemObjectID(), item);
	(&auctions)->put(item->getAuctionedItemObjectID(), item);
}

void BazaarTerminalImplementation::dropAuction(unsigned long long auctionItemID) {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(86):  		AuctionItem item = auctions.get(auctionItemID);
	AuctionItem* item = (&auctions)->get(auctionItemID);
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(88):  	}
	if (item != NULL){
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(89):  			item.setBazaarTerminal(null);
	item->setBazaarTerminal(NULL);
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(90):  			auctions.drop(auctionItemID);
	(&auctions)->drop(auctionItemID);
}
}

VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* BazaarTerminalImplementation::getAuctions() {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(96):  		return auctions;
	return (&auctions);
}

/*
 *	BazaarTerminalAdapter
 */

BazaarTerminalAdapter::BazaarTerminalAdapter(BazaarTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* BazaarTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		addAuction((AuctionItem*) inv->getObjectParameter());
		break;
	case 9:
		dropAuction(inv->getUnsignedLongParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BazaarTerminalAdapter::initializeTransientMembers() {
	((BazaarTerminalImplementation*) impl)->initializeTransientMembers();
}

int BazaarTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((BazaarTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void BazaarTerminalAdapter::addAuction(AuctionItem* item) {
	((BazaarTerminalImplementation*) impl)->addAuction(item);
}

void BazaarTerminalAdapter::dropAuction(unsigned long long auctionItemID) {
	((BazaarTerminalImplementation*) impl)->dropAuction(auctionItemID);
}

/*
 *	BazaarTerminalHelper
 */

BazaarTerminalHelper* BazaarTerminalHelper::staticInitializer = BazaarTerminalHelper::instance();

BazaarTerminalHelper::BazaarTerminalHelper() {
	className = "BazaarTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BazaarTerminalHelper::finalizeHelper() {
	BazaarTerminalHelper::finalize();
}

DistributedObject* BazaarTerminalHelper::instantiateObject() {
	return new BazaarTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarTerminalHelper::instantiateServant() {
	return new BazaarTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarTerminalAdapter((BazaarTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

