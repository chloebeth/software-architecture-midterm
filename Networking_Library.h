#pragma once
#include <iostream>
using namespace std;
class Networking_Library
{
private:
	int ServicePortNumber;
	string IPAddress;
public:
	Networking_Library(string,int);
	void Listener();
	void InitializeServer();
};

