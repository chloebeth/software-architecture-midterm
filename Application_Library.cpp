#include "Application_Library.h"
void Application_Library::SetUserName(string name) {
	UserName = name;
}

void Application_Library::SetDogNumber(int number) {
	DogNumber = number;
}

string Application_Library::GetUserName() {
	return UserName;
}

int Application_Library::GetDogNumber() {
	return DogNumber;
}

void Application_Library::Search_For_A_Dog() {
	//Perform database quary.
}

void Application_Library::Add_To_Shopping_Cart() {

}

void Application_Library::Checkout() {

}