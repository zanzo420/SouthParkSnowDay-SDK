#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C
// (None)

class UClass* UUI_FTUX_TrainingMoment_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FTUX_TrainingMoment_Screen_C");

	return Clss;
}


// UI_FTUX_TrainingMoment_Screen_C UI_FTUX_TrainingMoment_Screen.Default__UI_FTUX_TrainingMoment_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FTUX_TrainingMoment_Screen_C* UUI_FTUX_TrainingMoment_Screen_C::GetDefaultObj()
{
	static class UUI_FTUX_TrainingMoment_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FTUX_TrainingMoment_Screen_C*>(UUI_FTUX_TrainingMoment_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.Change Tutorial Viewport Position
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDefaultAndIgnoreOtherInputs                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              AnchorMinY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AnchorMaxY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerticalAlignment      VerticalAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_TrainingMoment_Screen_C::Change_Tutorial_Viewport_Position(bool UseDefaultAndIgnoreOtherInputs, float AnchorMinY, float AnchorMaxY, enum class EVerticalAlignment VerticalAlignment, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "Change Tutorial Viewport Position");

	Params::UUI_FTUX_TrainingMoment_Screen_C_Change_Tutorial_Viewport_Position_Params Parms{};

	Parms.UseDefaultAndIgnoreOtherInputs = UseDefaultAndIgnoreOtherInputs;
	Parms.AnchorMinY = AnchorMinY;
	Parms.AnchorMaxY = AnchorMaxY;
	Parms.VerticalAlignment = VerticalAlignment;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.RefreshTutorialWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTutorialLine_Widget_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_TrainingMoment_Screen_C::RefreshTutorialWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "RefreshTutorialWidgets");

	Params::UUI_FTUX_TrainingMoment_Screen_C_RefreshTutorialWidgets_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.GetMyBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_TrainingMoment_Screen_C::GetMyBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "GetMyBody");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.DEPRECATED_TrainingCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Prompt_string_to_remove                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_FTUX_TrainingMoment_Screen_C::DEPRECATED_TrainingCompleted(TArray<class FString>& Prompt_string_to_remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "DEPRECATED_TrainingCompleted");

	Params::UUI_FTUX_TrainingMoment_Screen_C_DEPRECATED_TrainingCompleted_Params Parms{};

	Parms.Prompt_string_to_remove = Prompt_string_to_remove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnScreenStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_FTUX_TrainingMoment_Screen_C::OnScreenStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "OnScreenStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnScreenResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_TrainingMoment_Screen_C::OnScreenResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "OnScreenResumed");

	Params::UUI_FTUX_TrainingMoment_Screen_C_OnScreenResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.AddTrainingPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Heading                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Identity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_TrainingMoment_Screen_C::AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "AddTrainingPrompt");

	Params::UUI_FTUX_TrainingMoment_Screen_C_AddTrainingPrompt_Params Parms{};

	Parms.Prompt = Prompt;
	Parms.Heading = Heading;
	Parms.Identity = Identity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.ForceTutorialReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_TrainingMoment_Screen_C::ForceTutorialReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "ForceTutorialReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.ShutScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FTUX_TrainingMoment_Screen_C::ShutScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "ShutScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.CloseScreenOnTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FTUX_TrainingMoment_Screen_C::CloseScreenOnTimer(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "CloseScreenOnTimer");

	Params::UUI_FTUX_TrainingMoment_Screen_C_CloseScreenOnTimer_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_TrainingMoment_Screen_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "OnInputUsageChange");

	Params::UUI_FTUX_TrainingMoment_Screen_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnScreenStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_FTUX_TrainingMoment_Screen_C::OnScreenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "OnScreenStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScreenActive_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_Event_Prompt                                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Heading                                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Identity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_prompt_string_to_remove                       (ConstParm, ReferenceParm)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FTUX_TrainingMoment_Screen_C::ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen(int32 EntryPoint, bool CallFunc_IsScreenActive_ReturnValue, float K2Node_CustomEvent_Time, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_Prompt, const class FString& K2Node_Event_Heading, class FName K2Node_Event_Identity, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, TArray<class FString>& K2Node_CustomEvent_prompt_string_to_remove, bool K2Node_Event_isUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FTUX_TrainingMoment_Screen_C", "ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen");

	Params::UUI_FTUX_TrainingMoment_Screen_C_ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsScreenActive_ReturnValue = CallFunc_IsScreenActive_ReturnValue;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Prompt = K2Node_Event_Prompt;
	Parms.K2Node_Event_Heading = K2Node_Event_Heading;
	Parms.K2Node_Event_Identity = K2Node_Event_Identity;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CustomEvent_prompt_string_to_remove = K2Node_CustomEvent_prompt_string_to_remove;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}

}


