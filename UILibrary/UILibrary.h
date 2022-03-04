#pragma once
#include<string>

#ifdef UILIBRARY_EXPORTS
#define UILIBRARY_API __declspec(dllexport)
#else
#define UILIBRARY_API __declspec(dllimport)
#endif

class UILIBRARY_API UILibrary {
public:
	UILibrary();
	void CreateForm();
};

extern UILIBRARY_API UILibrary* GetUILibrary();