#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SystemMenuScreen.SystemMenuScreen_C
// (None)

class UClass* USystemMenuScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SystemMenuScreen_C");

	return Clss;
}


// SystemMenuScreen_C SystemMenuScreen.Default__SystemMenuScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USystemMenuScreen_C* USystemMenuScreen_C::GetDefaultObj()
{
	static class USystemMenuScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USystemMenuScreen_C*>(USystemMenuScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SystemMenuScreen.SystemMenuScreen_C.OnScreenResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuScreen_C::OnScreenResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuScreen_C", "OnScreenResumed");

	Params::USystemMenuScreen_C_OnScreenResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuScreen.SystemMenuScreen_C.ExecuteUbergraph_SystemMenuScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USystemMenuWidget_C*         CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuScreen_C::ExecuteUbergraph_SystemMenuScreen(int32 EntryPoint, class USystemMenuWidget_C* CallFunc_GetUserWidget_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuScreen_C", "ExecuteUbergraph_SystemMenuScreen");

	Params::USystemMenuScreen_C_ExecuteUbergraph_SystemMenuScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;

	UObject::ProcessEvent(Func, &Parms);

}

}


