#include "pch.h"
#include "ConverterLibrary.h"

static ConverterLibrary* theConverterLibrary = nullptr;

std::string ConverterLibrary::UTCToLocal(std::string value) {
	return value;
}

std::string ConverterLibrary::StringToSecondsConverter(std::string value) {
	return value;
}

bool ConverterLibrary::IntNotLargerThanOne(int value) {
	return false;
}

ConverterLibrary* GetConverterLibrary() {
	return theConverterLibrary;
}
