#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MessagingHUDScreen.MessagingHUDScreen_C
// (None)

class UClass* UMessagingHUDScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MessagingHUDScreen_C");

	return Clss;
}


// MessagingHUDScreen_C MessagingHUDScreen.Default__MessagingHUDScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMessagingHUDScreen_C* UMessagingHUDScreen_C::GetDefaultObj()
{
	static class UMessagingHUDScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMessagingHUDScreen_C*>(UMessagingHUDScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MessagingHUDScreen.MessagingHUDScreen_C.UpdateHintText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMessagingHUDScreen_C::UpdateHintText(class FText HintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessagingHUDScreen_C", "UpdateHintText");

	Params::UMessagingHUDScreen_C_UpdateHintText_Params Parms{};

	Parms.HintText = HintText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessagingHUDScreen.MessagingHUDScreen_C.ShowHint
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              Duration                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessagingHUDScreen_C::ShowHint(class FText& HintText, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessagingHUDScreen_C", "ShowHint");

	Params::UMessagingHUDScreen_C_ShowHint_Params Parms{};

	Parms.HintText = HintText;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MessagingHUDScreen.MessagingHUDScreen_C.HideHint
// (Event, Public, BlueprintEvent)
// Parameters:

void UMessagingHUDScreen_C::HideHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessagingHUDScreen_C", "HideHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MessagingHUDScreen.MessagingHUDScreen_C.OnScreenInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMessagingHUDScreen_C::OnScreenInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessagingHUDScreen_C", "OnScreenInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MessagingHUDScreen.MessagingHUDScreen_C.ExecuteUbergraph_MessagingHUDScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_hintText                                            (ConstParm)
// float                              K2Node_Event_duration                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessagingHUDScreen_C::ExecuteUbergraph_MessagingHUDScreen(int32 EntryPoint, class FText K2Node_Event_hintText, float K2Node_Event_duration, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessagingHUDScreen_C", "ExecuteUbergraph_MessagingHUDScreen");

	Params::UMessagingHUDScreen_C_ExecuteUbergraph_MessagingHUDScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_hintText = K2Node_Event_hintText;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


