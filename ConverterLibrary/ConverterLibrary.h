#pragma once
#include<string>

#ifdef CONVERTERLIBRARY_EXPORTS
#define CONVERTERLIBRARY_API __declspec(dllexport)
#else
#define CONVERTERLIBRARY_API __declspec(dllimport)
#endif

class CONVERTERLIBRARY_API ConverterLibrary {
public:
	ConverterLibrary();
	std::string UTCToLocal(std::string value);
	std::string StringToSecondsConverter(std::string value);
	bool IntNotLargerThanOne(int Number);
};


extern CONVERTERLIBRARY_API ConverterLibrary* GetConverterLibrary();

