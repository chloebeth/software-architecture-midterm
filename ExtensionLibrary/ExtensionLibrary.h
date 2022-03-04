#pragma once
#include<string>
#define EXTENSIONLIBRARY_EXPORTS 1
#ifdef EXTENSIONLIBRARY_EXPORTS
#define EXTENSIONLIBRARY_EXPORTS _declspec(dllexport)
#else
#define EXTENSIONLIBRARY_EXPORTS _declspec(dllimport)
#endif

extern EXTENSIONLIBRARY_EXPORTS bool BooleanResult(bool value);
extern EXTENSIONLIBRARY_EXPORTS bool IsRomanLetter(char c);