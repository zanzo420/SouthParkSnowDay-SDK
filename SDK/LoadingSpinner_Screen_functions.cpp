#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadingSpinner_Screen.LoadingSpinner_Screen_C
// (None)

class UClass* ULoadingSpinner_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingSpinner_Screen_C");

	return Clss;
}


// LoadingSpinner_Screen_C LoadingSpinner_Screen.Default__LoadingSpinner_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingSpinner_Screen_C* ULoadingSpinner_Screen_C::GetDefaultObj()
{
	static class ULoadingSpinner_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingSpinner_Screen_C*>(ULoadingSpinner_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.Event Setup Spinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableCancel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LoadingDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoadingSpinner_Screen_C::Event_Setup_Spinner(bool DisableCancel, class FText LoadingDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Screen_C", "Event Setup Spinner");

	Params::ULoadingSpinner_Screen_C_Event_Setup_Spinner_Params Parms{};

	Parms.DisableCancel = DisableCancel;
	Parms.LoadingDescription = LoadingDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.Call Cancel Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Screen_C::Call_Cancel_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Screen_C", "Call Cancel Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.Spinner Cancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Screen_C::Spinner_Cancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Screen_C", "Spinner Cancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.ExecuteUbergraph_LoadingSpinner_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_DisableCancel                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_LoadingDescription                            (None)
// class ULoadingSpinner_Widget_C*    CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSpinner_Screen_C::ExecuteUbergraph_LoadingSpinner_Screen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_DisableCancel, class FText K2Node_CustomEvent_LoadingDescription, class ULoadingSpinner_Widget_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Screen_C", "ExecuteUbergraph_LoadingSpinner_Screen");

	Params::ULoadingSpinner_Screen_C_ExecuteUbergraph_LoadingSpinner_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_DisableCancel = K2Node_CustomEvent_DisableCancel;
	Parms.K2Node_CustomEvent_LoadingDescription = K2Node_CustomEvent_LoadingDescription;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.Cancel Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Screen_C::Cancel_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Screen_C", "Cancel Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


