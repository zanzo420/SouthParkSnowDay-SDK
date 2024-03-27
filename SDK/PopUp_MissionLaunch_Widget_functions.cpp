#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C
// (None)

class UClass* UPopUp_MissionLaunch_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopUp_MissionLaunch_Widget_C");

	return Clss;
}


// PopUp_MissionLaunch_Widget_C PopUp_MissionLaunch_Widget.Default__PopUp_MissionLaunch_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopUp_MissionLaunch_Widget_C* UPopUp_MissionLaunch_Widget_C::GetDefaultObj()
{
	static class UPopUp_MissionLaunch_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopUp_MissionLaunch_Widget_C*>(UPopUp_MissionLaunch_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.ResetWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPopUp_MissionLaunch_Widget_C::ResetWidget(bool CallFunc_K2_TimerExistsHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "ResetWidget");

	Params::UPopUp_MissionLaunch_Widget_C_ResetWidget_Params Parms{};

	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.RefreshLaunchDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Chapter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnDifficulty          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UPopUp_MissionLaunch_Widget_C::RefreshLaunchDetails(int32 Chapter, enum class EQtnDifficulty Difficulty, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EQtnDifficulty Temp_byte_Variable_1, class FText Temp_text_Variable, enum class ESlateVisibility Temp_byte_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Array_Get_Item, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "RefreshLaunchDetails");

	Params::UPopUp_MissionLaunch_Widget_C_RefreshLaunchDetails_Params Parms{};

	Parms.Chapter = Chapter;
	Parms.Difficulty = Difficulty;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.Finished_67B6BF0248E9E5F46D33789D5C5376F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopUp_MissionLaunch_Widget_C::Finished_67B6BF0248E9E5F46D33789D5C5376F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "Finished_67B6BF0248E9E5F46D33789D5C5376F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.LaunchStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyForLaunch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Chapter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopUp_MissionLaunch_Widget_C::LaunchStarted(bool ReadyForLaunch, int32 Chapter, enum class EQtnDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "LaunchStarted");

	Params::UPopUp_MissionLaunch_Widget_C_LaunchStarted_Params Parms{};

	Parms.ReadyForLaunch = ReadyForLaunch;
	Parms.Chapter = Chapter;
	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.RemovePopUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopUp_MissionLaunch_Widget_C::RemovePopUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "RemovePopUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopUp_MissionLaunch_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopUp_MissionLaunch_Widget.PopUp_MissionLaunch_Widget_C.ExecuteUbergraph_PopUp_MissionLaunch_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ReadyForLaunch                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Chapter                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          K2Node_CustomEvent_difficulty                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopUp_MissionLaunch_Widget_C::ExecuteUbergraph_PopUp_MissionLaunch_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool K2Node_CustomEvent_ReadyForLaunch, int32 K2Node_CustomEvent_Chapter, enum class EQtnDifficulty K2Node_CustomEvent_difficulty, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopUp_MissionLaunch_Widget_C", "ExecuteUbergraph_PopUp_MissionLaunch_Widget");

	Params::UPopUp_MissionLaunch_Widget_C_ExecuteUbergraph_PopUp_MissionLaunch_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.K2Node_CustomEvent_ReadyForLaunch = K2Node_CustomEvent_ReadyForLaunch;
	Parms.K2Node_CustomEvent_Chapter = K2Node_CustomEvent_Chapter;
	Parms.K2Node_CustomEvent_difficulty = K2Node_CustomEvent_difficulty;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


