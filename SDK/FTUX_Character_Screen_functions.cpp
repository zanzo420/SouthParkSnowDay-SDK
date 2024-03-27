#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Character_Screen.FTUX_Character_Screen_C
// (None)

class UClass* UFTUX_Character_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Character_Screen_C");

	return Clss;
}


// FTUX_Character_Screen_C FTUX_Character_Screen.Default__FTUX_Character_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Character_Screen_C* UFTUX_Character_Screen_C::GetDefaultObj()
{
	static class UFTUX_Character_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Character_Screen_C*>(UFTUX_Character_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Character_Screen.FTUX_Character_Screen_C.OnScreenStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFTUX_Character_Screen_C::OnScreenStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Character_Screen_C", "OnScreenStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Character_Screen.FTUX_Character_Screen_C.OnScreenResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_Character_Screen_C::OnScreenResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Character_Screen_C", "OnScreenResumed");

	Params::UFTUX_Character_Screen_C_OnScreenResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Character_Screen.FTUX_Character_Screen_C.ExecuteUbergraph_FTUX_Character_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuCharacter_Widget_C*     K2Node_DynamicCast_AsMenu_Character_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_Character_Screen_C::ExecuteUbergraph_FTUX_Character_Screen(int32 EntryPoint, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuCharacter_Widget_C* K2Node_DynamicCast_AsMenu_Character_Widget, bool K2Node_DynamicCast_bSuccess, class UQtnScreen* K2Node_Event_previousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Character_Screen_C", "ExecuteUbergraph_FTUX_Character_Screen");

	Params::UFTUX_Character_Screen_C_ExecuteUbergraph_FTUX_Character_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMenu_Character_Widget = K2Node_DynamicCast_AsMenu_Character_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Character_Screen.FTUX_Character_Screen_C.FTUXCharacterScreenClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_Character_Screen_C::FTUXCharacterScreenClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Character_Screen_C", "FTUXCharacterScreenClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


