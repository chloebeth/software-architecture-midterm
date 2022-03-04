#pragma once
#include<string>

#ifdef APPLICATIONLIBRARY_EXPORTS
#define APPLICATIONLIBRARY_API __declspec(dllexport)
#else
#define APPLICATIONLIBRARY_API __declspec(dllimport)
#endif

class APPLICATIONLIBRARY_API ApplicationLibrary {
public:
    ApplicationLibrary();
    void SetUserName(std::string name);
    void SetDogNumber(int number);
    std::string GetUserName();
    int GetDogNumber();
    void Search_For_A_Dog();
    void Add_To_Shopping_Cart();
    void Checkout();
};

extern APPLICATIONLIBRARY_API ApplicationLibrary* GetApplicationLibrary();