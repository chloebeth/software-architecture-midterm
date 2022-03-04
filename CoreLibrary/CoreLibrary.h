#pragma once
#include<string>
#define CORELIBRARY_EXPORTS 1
#ifdef CORELIBRARY_EXPORTS
#define CORELIBRARY_EXPORTS _declspec(dllexport)
#else
#define CORELIBRARY_EXPORTS _declspec(dllimport)
#endif

extern CORELIBRARY_EXPORTS void NetworkingConnection();

extern CORELIBRARY_EXPORTS void InitializingApplication();

