#include "pch.h"
#include "CoreLibrary.h"


static CoreLibrary* theCoreLibrary = nullptr;

void CoreLibrary::NetworkingConnection() {

}

void CoreLibrary::InitializingApplication() {

}

CoreLibrary* GetCoreLibrary() {
	return theCoreLibrary;
}