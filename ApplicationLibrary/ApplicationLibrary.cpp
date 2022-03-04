#include "pch.h"
#include "ApplicationLibrary.h"
#include <string>


APPLICATIONLIBRARY_EXPORTS void SetUserName(std::string name) {
	UserName = name;
}

void SetDogNumber(int number) {
	DogNumber = number;
}

std::string GetUserName() {
	return UserName;
}

int GetDogNumber() {
	return DogNumber;
}

void Search_For_A_Dog() {
	//Perform database quary.
}

void Add_To_Shopping_Cart() {

}

void Checkout() {
}
