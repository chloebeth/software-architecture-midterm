#pragma once
#include<string>
#define UILIBRARY_EXPORTS 1
#ifdef UILIBRARY_EXPORTS
#define UILIBRARY_EXPORTS _declspec(dllexport)
#else
#define UILIBRARY_EXPORTS _declspec(dllimport)
#endif

extern UILIBRARY_EXPORTS void CreateForm();