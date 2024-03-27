#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingSpinner_Widget.LoadingSpinner_Widget_C
// (None)

class UClass* ULoadingSpinner_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingSpinner_Widget_C");

	return Clss;
}


// LoadingSpinner_Widget_C LoadingSpinner_Widget.Default__LoadingSpinner_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingSpinner_Widget_C* ULoadingSpinner_Widget_C::GetDefaultObj()
{
	static class ULoadingSpinner_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingSpinner_Widget_C*>(ULoadingSpinner_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.Setup Spinner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableCancel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LoadingDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSpinner_Widget_C::Setup_Spinner(bool DisableCancel, class FText LoadingDescription, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "Setup Spinner");

	Params::ULoadingSpinner_Widget_C_Setup_Spinner_Params Parms{};

	Parms.DisableCancel = DisableCancel;
	Parms.LoadingDescription = LoadingDescription;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingSpinner_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "PreConstruct");

	Params::ULoadingSpinner_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSpinner_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "OnQtnWidgetResumed");

	Params::ULoadingSpinner_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingSpinner_Widget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "OnInputUsageChange");

	Params::ULoadingSpinner_Widget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.BndEvt__LoadingSpinner_Widget_BP_CapsuleBtn_Widget_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::BndEvt__LoadingSpinner_Widget_BP_CapsuleBtn_Widget_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "BndEvt__LoadingSpinner_Widget_BP_CapsuleBtn_Widget_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.Spinner Cancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::Spinner_Cancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "Spinner Cancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.BlockedInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::BlockedInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "BlockedInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.ExecuteUbergraph_LoadingSpinner_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadingSpinner_Screen_C*    K2Node_DynamicCast_AsLoading_Spinner_Screen                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingSpinner_Widget_C::ExecuteUbergraph_LoadingSpinner_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnScreen* K2Node_Event_previousScreen, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_Event_isUsingMouseAndKeyboard, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class ULoadingSpinner_Screen_C* K2Node_DynamicCast_AsLoading_Spinner_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "ExecuteUbergraph_LoadingSpinner_Widget");

	Params::ULoadingSpinner_Widget_C_ExecuteUbergraph_LoadingSpinner_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoading_Spinner_Screen = K2Node_DynamicCast_AsLoading_Spinner_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSpinner_Widget.LoadingSpinner_Widget_C.CancelPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingSpinner_Widget_C::CancelPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSpinner_Widget_C", "CancelPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


