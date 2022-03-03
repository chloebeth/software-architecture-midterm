#include "Networking_Library.h"

Networking_Library::Networking_Library(string address,int number) {
	ServicePortNumber = number;
	IPAddress = address;
	//Load SSL certification from file.
}

void Networking_Library::InitializeServer() {
	//TODO:Intializing the server
}

void Networking_Library::Listener() {
	//TODO: Listern to command.
}