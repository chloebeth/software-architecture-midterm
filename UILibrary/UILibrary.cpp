#include "pch.h"
#include "UILibrary.h"

static UILibrary* theUILibrary = nullptr;

UILibrary::UILibrary() {

}

void UILibrary::CreateForm() {

}

UILibrary* GetUILibrary() 
{
	return theUILibrary;
}