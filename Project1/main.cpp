#include <iostream>
#include "ApplicationLibrary.h"
#include "ControllerLibrary.h"
#include "ConverterLibrary.h"
#include "CoreLibrary.h"
#include "ExtensionLibrary.h"
#include "UILibrary.h"
#include "NetworkingLibrary.h"

int main(){
	SetUserName("Altair");
	Rent_A_Dog(300);
	UTCToLocal("10:52 p.m.");
	NetworkingConnection();
	IsRomanLetter(10);
	Networking_Library("192.168.1.1", 443);
	CreateForm();
	return 0;
}
