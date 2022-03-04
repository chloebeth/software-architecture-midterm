#include "pch.h"
#include "ExtensionLibrary.h"

static ExtensionLibrary* theExtensionLibrary = nullptr;


bool ExtensionLibrary::BooleanResult(bool value) {
	return true;
}

bool ExtensionLibrary::IsRomanLetter(char c) {
	return false;
}

ExtensionLibrary* GetExtensionLibrary(){
	return theExtensionLibrary;
}