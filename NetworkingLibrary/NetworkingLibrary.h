#pragma once
#include<string>
#define NETWORKINGLIBRARY_EXPORTS 1
#ifdef NETWORKINGLIBRARY_EXPORTS
#define NETWORKINGLIBRARY_EXPORTS _declspec(dllexport)
#else
#define NETWORKINGLIBRARY_EXPORTS _declspec(dllimport)
#endif

static int ServicePortNumber;
static std::string IPAddress;

extern NETWORKINGLIBRARY_EXPORTS void Networking_Library(std::string, int);
extern NETWORKINGLIBRARY_EXPORTS void Listener();
extern NETWORKINGLIBRARY_EXPORTS void InitializeServer();