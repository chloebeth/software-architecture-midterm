#pragma once
#include<string>

#ifdef NETWORKINGLIBRARY_EXPORTS
#define NETWORKINGLIBRARY_API __declspec(dllexport)
#else
#define NETWORKINGLIBRARY_API __declspec(dllimport)
#endif

class NETWORKINGLIBRARY_API NetworkingLibrary {
public:
	NetworkingLibrary(std::string, int);
	void Listener();
	void InitializeServer();
};



extern NETWORKINGLIBRARY_API NetworkingLibrary* GetNetworkingLibrary();