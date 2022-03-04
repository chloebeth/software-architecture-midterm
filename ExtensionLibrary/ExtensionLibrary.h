#pragma once
#include<string>

#ifdef EXTENSIONLIBRARY_EXPORTS
#define EXTENSIONLIBRARY_API __declspec(dllexport)
#else
#define EXTENSIONLIBRARY_API __declspec(dllimport)
#endif

class EXTENSIONLIBRARY_API ExtensionLibrary {
public:
	ExtensionLibrary();
	bool BooleanResult(bool value);
	bool IsRomanLetter(char c);
};

extern EXTENSIONLIBRARY_API ExtensionLibrary* GetExtensionLibrary();