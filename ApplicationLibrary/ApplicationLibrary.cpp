#include "pch.h"
#include "ApplicationLibrary.h"
#include <string>
#include "ExtensionLibrary.h"

static std::string UserName;
static int DogNumber;

static ApplicationLibrary* theApplicationLibrary = nullptr;

ApplicationLibrary::ApplicationLibrary(){

}

void ApplicationLibrary::SetUserName(std::string name) {
	UserName = name;
}

void ApplicationLibrary::SetDogNumber(int number) {
	DogNumber = number;
}

std::string ApplicationLibrary::GetUserName() {
	return UserName;
}

int ApplicationLibrary::GetDogNumber() {
	return DogNumber;
}

void ApplicationLibrary::Search_For_A_Dog() {
	//Perform database quary.
}

void ApplicationLibrary::Add_To_Shopping_Cart() {

}

void ApplicationLibrary::Checkout() {

}

ApplicationLibrary* GetApplicationLibrary(){
	return theApplicationLibrary;
}