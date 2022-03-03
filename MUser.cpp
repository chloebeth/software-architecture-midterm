#include "MUser.h"

void MUser::SetUserName(string name) {
	UserName = name;
}

void MUser::SetPassword(string password) {
	UserPassword = password;
}

string MUser::GetUserName() {
	return UserName;
}

string MUser::GetPassword() {
	return UserPassword;
}
