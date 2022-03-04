#pragma once
#include<string>
#define CONTROLLERLIBRARY_EXPORTS 1
#ifdef CONTROLLERLIBRARY_EXPORTS
#define CONTROLLERLIBRARY_EXPORTS _declspec(dllexport)
#else
#define CONTROLLERLIBRARY_EXPORTS _declspec(dllimport)
#endif

extern CONTROLLERLIBRARY_EXPORTS void Rent_A_Dog(int value);