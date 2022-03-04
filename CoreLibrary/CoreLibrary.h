#pragma once
#include<string>

#ifdef CORELIBRARY_EXPORTS
#define CORELIBRARY_API __declspec(dllexport)
#else
#define CORELIBRARY_API __declspec(dllimport)
#endif

class CORELIBRARY_API CoreLibrary {
public:
	CoreLibrary();
	void NetworkingConnection();
	void InitializingApplication();

};

extern CORELIBRARY_API CoreLibrary* GetCoreLibrary();

