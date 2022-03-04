#pragma once
#include<string>
#define APPLICATIONLIBRARY_EXPORTS_B 1

#ifdef APPLICATIONLIBRARY_EXPORTS_B
#define APPLICATIONLIBRARY_EXPORTS _declspec(dllexport)
#else
#define APPLICATIONLIBRARY_EXPORTS _declspec(dllimport)
#endif

static  std::string UserName;
static  int DogNumber;

extern APPLICATIONLIBRARY_EXPORTS void SetUserName(std::string name);

extern APPLICATIONLIBRARY_EXPORTS void SetDogNumber(int number);

extern APPLICATIONLIBRARY_EXPORTS std::string GetUserName();

extern APPLICATIONLIBRARY_EXPORTS int GetDogNumber();


extern APPLICATIONLIBRARY_EXPORTS void Search_For_A_Dog();

extern APPLICATIONLIBRARY_EXPORTS void Add_To_Shopping_Cart();

extern APPLICATIONLIBRARY_EXPORTS void Checkout();