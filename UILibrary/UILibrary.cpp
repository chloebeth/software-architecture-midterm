#include "pch.h"
#include "UILibrary.h"
#include "ConverterLibrary.h"
static UILibrary* theUILibrary = nullptr;

UILibrary::UILibrary() {

}

void UILibrary::CreateForm() {
	GetConverterLibrary()->UTCToLocal("A TIME");
}

UILibrary* GetUILibrary() 
{
	return theUILibrary;
}