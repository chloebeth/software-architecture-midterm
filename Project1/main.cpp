#include <iostream>
#include "..\CoreLibrary\CoreLibrary.h"
#include <iostream>
#include <iterator>
#include <algorithm>
#include <boost/locale.hpp>


using namespace std;

int main(){
	GetCoreLibrary()->InitializingApplication();

	boost::locale::generator gen;
	gen.add_messages_path(".");
	gen.add_messages_domain("messages");

	locale::global(gen("de_DE.UTF-8")); 
	//locale::global(gen(""));
	cout.imbue(locale());

	cout << boost::locale::translate("hello world") << endl;

	return 0;
}
