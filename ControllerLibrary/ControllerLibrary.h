#pragma once
#include<string>

#ifdef CONTROLLERLIBRARY_EXPORTS
#define CONTROLLERLIBRARY_API __declspec(dllexport)
#else
#define CONTROLLERLIBRARY_API __declspec(dllimport)
#endif

class CONTROLLERLIBRARY_API ControllerLibrary
{
public:
	ControllerLibrary();
	void Rent_A_Dog(int value);
};

extern CONTROLLERLIBRARY_API ControllerLibrary* GetControllerLibrary();