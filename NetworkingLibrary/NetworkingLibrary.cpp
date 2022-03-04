#include "pch.h"
#include "NetworkingLibrary.h"
#include <string>

static int ServicePortNumber;
static std::string IPAddress;

static NetworkingLibrary* theNetworkingLibrary = nullptr;

NetworkingLibrary::NetworkingLibrary(std::string address, int number) {
	ServicePortNumber = number;
	IPAddress = address;
}

void NetworkingLibrary::Listener() {

}

void NetworkingLibrary::InitializeServer() {

}

NetworkingLibrary* GetNetworkingLibrary() {
	return theNetworkingLibrary;
}