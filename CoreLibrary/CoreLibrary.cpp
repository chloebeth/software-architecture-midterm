#include "pch.h"
#include "CoreLibrary.h"
#include <string>
#include <iostream>
#include "ApplicationLibrary.h"
#include "NetworkingLibrary.h"
#include "UILibrary.h"

static CoreLibrary* theCoreLibrary = nullptr;

CoreLibrary::CoreLibrary() {
	
}


void CoreLibrary::NetworkingConnection() {

}

void CoreLibrary::InitializingApplication() {
	GetApplicationLibrary();
	GetNetworkingLibrary()->InitializeServer();
}

CoreLibrary* GetCoreLibrary() {
	return theCoreLibrary;
}