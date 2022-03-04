#include "pch.h"
#include "ControllerLibrary.h"

static ControllerLibrary* theControllerLibrary = nullptr;

ControllerLibrary::ControllerLibrary() {

}

void ControllerLibrary::Rent_A_Dog(int value) {

}

ControllerLibrary* GetControllerLibrary() {
	return theControllerLibrary;
}