/*
 *	server/zone/ZoneClientSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneClientSession.h"

/*
 *	ZoneClientSessionStub
 */

ZoneClientSession::ZoneClientSession(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ZoneClientSessionImplementation(serv, sock, addr);
	_impl->_setStub(this);

	((ZoneClientSessionImplementation*) _impl)->_serializationHelperMethod();
}

ZoneClientSession::ZoneClientSession(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneClientSession::~ZoneClientSession() {
}

void ZoneClientSession::sendMessage(BasePacket* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::disconnect() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect();
}

void ZoneClientSession::disconnect(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect(doLock);
}

void ZoneClientSession::balancePacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->balancePacketCheckupTime();
}

void ZoneClientSession::resetPacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->resetPacketCheckupTime();
}

void ZoneClientSession::closeConnection(bool lockPlayer, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addBooleanParameter(lockPlayer);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->closeConnection(lockPlayer, doLock);
}

String ZoneClientSession::getAddress() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getAddress();
}

void ZoneClientSession::lock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->lock(doLock);
}

void ZoneClientSession::unlock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->unlock(doLock);
}

void ZoneClientSession::setPlayer(SceneObject* playerCreature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(playerCreature);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setPlayer(playerCreature);
}

void ZoneClientSession::setSessionKey(unsigned int key) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedIntParameter(key);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setSessionKey(key);
}

SceneObject* ZoneClientSession::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getPlayer();
}

unsigned int ZoneClientSession::getSessionKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getSessionKey();
}

/*
 *	ZoneClientSessionImplementation
 */

ZoneClientSessionImplementation::~ZoneClientSessionImplementation() {
}

void ZoneClientSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneClientSession*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneClientSessionImplementation::_getStub() {
	return _this;
}

ZoneClientSessionImplementation::operator const ZoneClientSession*() {
	return _this;
}

void ZoneClientSessionImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("player", player);
	addSerializableVariable("sessionKey", &sessionKey);
	addSerializableVariable("disconnecting", &disconnecting);
}

void ZoneClientSessionImplementation::balancePacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(70):  BaseClientProxy.balancePacketCheckupTime();
	BaseClientProxy::balancePacketCheckupTime();
}

void ZoneClientSessionImplementation::resetPacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(74):  BaseClientProxy.resetPacketCheckupTime();
	BaseClientProxy::resetPacketCheckupTime();
}

String ZoneClientSessionImplementation::getAddress() {
	// server/zone/ZoneClientSession.idl(80):  return BaseClientProxy.getAddress();
	return BaseClientProxy::getAddress();
}

void ZoneClientSessionImplementation::setPlayer(SceneObject* playerCreature) {
	// server/zone/ZoneClientSession.idl(88):  player = playerCreature;
	player = playerCreature;
}

void ZoneClientSessionImplementation::setSessionKey(unsigned int key) {
	// server/zone/ZoneClientSession.idl(92):  sessionKey = key;
	sessionKey = key;
}

SceneObject* ZoneClientSessionImplementation::getPlayer() {
	// server/zone/ZoneClientSession.idl(96):  return player;
	return player;
}

unsigned int ZoneClientSessionImplementation::getSessionKey() {
	// server/zone/ZoneClientSession.idl(100):  return sessionKey;
	return sessionKey;
}

/*
 *	ZoneClientSessionAdapter
 */

ZoneClientSessionAdapter::ZoneClientSessionAdapter(ZoneClientSessionImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneClientSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendMessage((BasePacket*) inv->getObjectParameter());
		break;
	case 7:
		disconnect();
		break;
	case 8:
		disconnect(inv->getBooleanParameter());
		break;
	case 9:
		balancePacketCheckupTime();
		break;
	case 10:
		resetPacketCheckupTime();
		break;
	case 11:
		closeConnection(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 12:
		resp->insertAscii(getAddress());
		break;
	case 13:
		lock(inv->getBooleanParameter());
		break;
	case 14:
		unlock(inv->getBooleanParameter());
		break;
	case 15:
		setPlayer((SceneObject*) inv->getObjectParameter());
		break;
	case 16:
		setSessionKey(inv->getUnsignedIntParameter());
		break;
	case 17:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 18:
		resp->insertInt(getSessionKey());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientSessionAdapter::sendMessage(BasePacket* msg) {
	return ((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::disconnect() {
	return ((ZoneClientSessionImplementation*) impl)->disconnect();
}

void ZoneClientSessionAdapter::disconnect(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->disconnect(doLock);
}

void ZoneClientSessionAdapter::balancePacketCheckupTime() {
	return ((ZoneClientSessionImplementation*) impl)->balancePacketCheckupTime();
}

void ZoneClientSessionAdapter::resetPacketCheckupTime() {
	return ((ZoneClientSessionImplementation*) impl)->resetPacketCheckupTime();
}

void ZoneClientSessionAdapter::closeConnection(bool lockPlayer, bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->closeConnection(lockPlayer, doLock);
}

String ZoneClientSessionAdapter::getAddress() {
	return ((ZoneClientSessionImplementation*) impl)->getAddress();
}

void ZoneClientSessionAdapter::lock(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->lock(doLock);
}

void ZoneClientSessionAdapter::unlock(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->unlock(doLock);
}

void ZoneClientSessionAdapter::setPlayer(SceneObject* playerCreature) {
	return ((ZoneClientSessionImplementation*) impl)->setPlayer(playerCreature);
}

void ZoneClientSessionAdapter::setSessionKey(unsigned int key) {
	return ((ZoneClientSessionImplementation*) impl)->setSessionKey(key);
}

SceneObject* ZoneClientSessionAdapter::getPlayer() {
	return ((ZoneClientSessionImplementation*) impl)->getPlayer();
}

unsigned int ZoneClientSessionAdapter::getSessionKey() {
	return ((ZoneClientSessionImplementation*) impl)->getSessionKey();
}

/*
 *	ZoneClientSessionHelper
 */

ZoneClientSessionHelper* ZoneClientSessionHelper::staticInitializer = ZoneClientSessionHelper::instance();

ZoneClientSessionHelper::ZoneClientSessionHelper() {
	className = "ZoneClientSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneClientSessionHelper::finalizeHelper() {
	ZoneClientSessionHelper::finalize();
}

DistributedObject* ZoneClientSessionHelper::instantiateObject() {
	return new ZoneClientSession(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneClientSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneClientSessionAdapter((ZoneClientSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

