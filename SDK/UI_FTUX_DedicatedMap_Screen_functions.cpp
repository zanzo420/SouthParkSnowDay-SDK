#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C
// (None)

class UClass* UUI_FTUX_DedicatedMap_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FTUX_DedicatedMap_Screen_C");

	return Clss;
}


// UI_FTUX_DedicatedMap_Screen_C UI_FTUX_DedicatedMap_Screen.Default__UI_FTUX_DedicatedMap_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FTUX_DedicatedMap_Screen_C* UUI_FTUX_DedicatedMap_Screen_C::GetDefaultObj()
{
	static class UUI_FTUX_DedicatedMap_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FTUX_DedicatedMap_Screen_C*>(UUI_FTUX_DedicatedMap_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "OnDebugDisplay");

	Params::UUI_FTUX_DedicatedMap_Screen_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.GetMyBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::GetMyBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "GetMyBody");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.ForceTutorialReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::ForceTutorialReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "ForceTutorialReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.OnScreenStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::OnScreenStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "OnScreenStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.BindVerbEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::BindVerbEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "BindVerbEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.TrainingCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     AssociatedObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::TrainingCompleted(class UObject* AssociatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "TrainingCompleted");

	Params::UUI_FTUX_DedicatedMap_Screen_C_TrainingCompleted_Params Parms{};

	Parms.AssociatedObject = AssociatedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.InputUsageChangeEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_DedicatedMap_Screen_C::InputUsageChangeEvent_Event_0(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "InputUsageChangeEvent_Event_0");

	Params::UUI_FTUX_DedicatedMap_Screen_C_InputUsageChangeEvent_Event_0_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.AddTrainingPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Heading                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Identity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "AddTrainingPrompt");

	Params::UUI_FTUX_DedicatedMap_Screen_C_AddTrainingPrompt_Params Parms{};

	Parms.Prompt = Prompt;
	Parms.Heading = Heading;
	Parms.Identity = Identity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.ShutScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::ShutScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "ShutScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.OnScreenResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::OnScreenResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "OnScreenResumed");

	Params::UUI_FTUX_DedicatedMap_Screen_C_OnScreenResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.CloseScreenOnTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::CloseScreenOnTimer(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "CloseScreenOnTimer");

	Params::UUI_FTUX_DedicatedMap_Screen_C_CloseScreenOnTimer_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.VerbStopEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb*                    Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_DedicatedMap_Screen_C::VerbStopEvent_Event_0(class UQtnVerb* Verb, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "VerbStopEvent_Event_0");

	Params::UUI_FTUX_DedicatedMap_Screen_C_VerbStopEvent_Event_0_Params Parms{};

	Parms.Verb = Verb;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.OnScreenStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_FTUX_DedicatedMap_Screen_C::OnScreenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "OnScreenStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.ExecuteUbergraph_UI_FTUX_DedicatedMap_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_AssociatedObject                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Prompt                                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Heading                                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Identity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerUIReadyBP_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialLine_Widget_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    K2Node_CustomEvent_verb                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UUI_FTUX_DedicatedMap_Screen_C::ExecuteUbergraph_UI_FTUX_DedicatedMap_Screen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_AssociatedObject, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, int32 Temp_int_Array_Index_Variable, const class FString& K2Node_Event_Prompt, const class FString& K2Node_Event_Heading, class FName K2Node_Event_Identity, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, float K2Node_CustomEvent_Time, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnVerb* K2Node_CustomEvent_verb, bool K2Node_CustomEvent_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "ExecuteUbergraph_UI_FTUX_DedicatedMap_Screen");

	Params::UUI_FTUX_DedicatedMap_Screen_C_ExecuteUbergraph_UI_FTUX_DedicatedMap_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_AssociatedObject = K2Node_CustomEvent_AssociatedObject;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Prompt = K2Node_Event_Prompt;
	Parms.K2Node_Event_Heading = K2Node_Event_Heading;
	Parms.K2Node_Event_Identity = K2Node_Event_Identity;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocalPlayerUIReadyBP_ReturnValue = CallFunc_IsLocalPlayerUIReadyBP_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_CustomEvent_verb = K2Node_CustomEvent_verb;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_DedicatedMap_Screen.UI_FTUX_DedicatedMap_Screen_C.TrainingCheckCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     AssociatedObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_DedicatedMap_Screen_C::TrainingCheckCompleted__DelegateSignature(class UObject* AssociatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_DedicatedMap_Screen_C", "TrainingCheckCompleted__DelegateSignature");

	Params::UUI_FTUX_DedicatedMap_Screen_C_TrainingCheckCompleted__DelegateSignature_Params Parms{};

	Parms.AssociatedObject = AssociatedObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


