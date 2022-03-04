#include <iostream>
#include "CoreLibrary.h"


int main(){
	GetCoreLibrary()->InitializingApplication();
	std::cout << "hello world" << std::endl;
	return 0;
}
