#include <iostream>
#include "ApplicationLibrary.h"
#include "ControllerLibrary.h"
#include "ConverterLibrary.h"
#include "CoreLibrary.h"
#include "ExtensionLibrary.h"
#include "UILibrary.h"
#include "NetworkingLibrary.h"

int main(){
	GetApplicationLibrary()->SetUserName("Altair");
	GetControllerLibrary()->Rent_A_Dog(300);
	GetConverterLibrary()->UTCToLocal("10:52 p.m.");
	GetCoreLibrary()->InitializingApplication();
	GetExtensionLibrary()->IsRomanLetter(10);
	GetNetworkingLibrary()->InitializeServer();
	GetUILibrary()->CreateForm();
	return 0;
}
