#pragma once
#include<string>
#define CONVERTERLIBRARY_EXPORTS 1
#ifdef CONVERTERLIBRARY_EXPORTS
#define CONVERTERLIBRARY_EXPORTS _declspec(dllexport)
#else
#define CONVERTERLIBRARY_EXPORTS _declspec(dllimport)
#endif

extern CONVERTERLIBRARY_EXPORTS std::string UTCToLocal(std::string value);
extern CONVERTERLIBRARY_EXPORTS std::string StringToSecondsConverter(std::string value);
extern CONVERTERLIBRARY_EXPORTS bool IntNotLargerThanOne(int Number);


