#pragma once
#include <iostream>
#include "Networking_Library.h"
#include "EDog.h"
using namespace std;

//This class is for storing information of dogs

class MUser {
private:
	string UserName;
	string UserPassword;
public:
	void SetUserName(string);
	void SetPassword(string);
	string GetUserName();
	string GetPassword();


};