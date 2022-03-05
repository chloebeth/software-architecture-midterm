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
	gen.add_messages_path("C:\\Users\\Chloe\\Documents\\Soft Arch\\software-architecture-midterm\\Project1");
	gen.add_messages_domain("hello");

	locale::global(gen("de_DE.UTF - 8")); 
	//locale::global(gen(""));
	cout.imbue(locale());

	cout << boost::locale::translate("hello world") << endl;

	cout << boost::locale::translate("file", "open") << endl;
	cout << boost::locale::translate("file", "close") << endl;

	return 0;
}
