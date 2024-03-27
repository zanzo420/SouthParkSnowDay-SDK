#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C
// (None)

class UClass* UPlayerPopUpMessageScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPopUpMessageScreen_C");

	return Clss;
}


// PlayerPopUpMessageScreen_C PlayerPopUpMessageScreen.Default__PlayerPopUpMessageScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerPopUpMessageScreen_C* UPlayerPopUpMessageScreen_C::GetDefaultObj()
{
	static class UPlayerPopUpMessageScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerPopUpMessageScreen_C*>(UPlayerPopUpMessageScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C.OnScreenTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPopUpMessageScreen_C::OnScreenTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPopUpMessageScreen_C", "OnScreenTicked");

	Params::UPlayerPopUpMessageScreen_C_OnScreenTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C.PopUpScreenText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ScreenText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              PopUpTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsQueued                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPopUpMessageScreen_C::PopUpScreenText(class FText& ScreenText, float PopUpTime, bool IsQueued)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPopUpMessageScreen_C", "PopUpScreenText");

	Params::UPlayerPopUpMessageScreen_C_PopUpScreenText_Params Parms{};

	Parms.ScreenText = ScreenText;
	Parms.PopUpTime = PopUpTime;
	Parms.IsQueued = IsQueued;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C.ShowNextPopupInQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPopUpMessageScreen_C::ShowNextPopupInQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPopUpMessageScreen_C", "ShowNextPopupInQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C.ExecuteUbergraph_PlayerPopUpMessageScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPopUpMessageWidget_C*       CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopUpMessageWidget_C*       CallFunc_GetUserWidget_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopUpMessageWidget_C*       K2Node_DynamicCast_AsPop_Up_Message_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPopUpMessageWidget_C*       K2Node_DynamicCast_AsPop_Up_Message_Widget_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_screenText                                          (ConstParm)
// float                              K2Node_Event_popUpTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isQueued                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopUpMessageStruct         K2Node_MakeStruct_PopUpMessageStruct                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopUpMessageWidget_C*       CallFunc_GetUserWidget_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopUpMessageWidget_C*       K2Node_DynamicCast_AsPop_Up_Message_Widget_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopUpMessageStruct         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_StaticFormatText_ReturnValue                            (None)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPopUpMessageScreen_C::ExecuteUbergraph_PlayerPopUpMessageScreen(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue_1, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget, bool K2Node_DynamicCast_bSuccess, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_screenText, float K2Node_Event_popUpTime, bool K2Node_Event_isQueued, bool CallFunc_BooleanOR_ReturnValue, const struct FPopUpMessageStruct& K2Node_MakeStruct_PopUpMessageStruct, int32 CallFunc_Array_Add_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue_2, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget_2, bool K2Node_DynamicCast_bSuccess_2, const struct FPopUpMessageStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_StaticFormatText_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPopUpMessageScreen_C", "ExecuteUbergraph_PlayerPopUpMessageScreen");

	Params::UPlayerPopUpMessageScreen_C_ExecuteUbergraph_PlayerPopUpMessageScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue_1 = CallFunc_GetUserWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPop_Up_Message_Widget = K2Node_DynamicCast_AsPop_Up_Message_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPop_Up_Message_Widget_1 = K2Node_DynamicCast_AsPop_Up_Message_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_screenText = K2Node_Event_screenText;
	Parms.K2Node_Event_popUpTime = K2Node_Event_popUpTime;
	Parms.K2Node_Event_isQueued = K2Node_Event_isQueued;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_PopUpMessageStruct = K2Node_MakeStruct_PopUpMessageStruct;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue_2 = CallFunc_GetUserWidget_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPop_Up_Message_Widget_2 = K2Node_DynamicCast_AsPop_Up_Message_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_StaticFormatText_ReturnValue = CallFunc_StaticFormatText_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


