#include "pch.h"
#include "ControllerLibrary.h"
#include "UILibrary.h"

static ControllerLibrary* theControllerLibrary = nullptr;

ControllerLibrary::ControllerLibrary() {

}

void ControllerLibrary::Rent_A_Dog(int value) {
	GetUILibrary()->CreateForm();
}

ControllerLibrary* GetControllerLibrary() {
	return theControllerLibrary;
}