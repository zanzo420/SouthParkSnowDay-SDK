#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TutorialNonblocking_Widget.TutorialNonblocking_Widget_C
// (None)

class UClass* UTutorialNonblocking_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialNonblocking_Widget_C");

	return Clss;
}


// TutorialNonblocking_Widget_C TutorialNonblocking_Widget.Default__TutorialNonblocking_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorialNonblocking_Widget_C* UTutorialNonblocking_Widget_C::GetDefaultObj()
{
	static class UTutorialNonblocking_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialNonblocking_Widget_C*>(UTutorialNonblocking_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.Finished_A016599045998BD99FB04081157714C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialNonblocking_Widget_C::Finished_A016599045998BD99FB04081157714C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "Finished_A016599045998BD99FB04081157714C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.Completed_8F17F3684A421FB3434656A4F07EE6A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialNonblocking_Widget_C::Completed_8F17F3684A421FB3434656A4F07EE6A9(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "Completed_8F17F3684A421FB3434656A4F07EE6A9");

	Params::UTutorialNonblocking_Widget_C_Completed_8F17F3684A421FB3434656A4F07EE6A9_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.Tick_8F17F3684A421FB3434656A4F07EE6A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialNonblocking_Widget_C::Tick_8F17F3684A421FB3434656A4F07EE6A9(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "Tick_8F17F3684A421FB3434656A4F07EE6A9");

	Params::UTutorialNonblocking_Widget_C_Tick_8F17F3684A421FB3434656A4F07EE6A9_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.SetupFromTutorialInstanceData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    InstanceData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialNonblocking_Widget_C::SetupFromTutorialInstanceData(const struct FQtnTutorialInstanceData& InstanceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "SetupFromTutorialInstanceData");

	Params::UTutorialNonblocking_Widget_C_SetupFromTutorialInstanceData_Params Parms{};

	Parms.InstanceData = InstanceData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.OnTutorialStateChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    InstanceData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialNonblocking_Widget_C::OnTutorialStateChangeEvent(const struct FQtnTutorialInstanceData& InstanceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "OnTutorialStateChangeEvent");

	Params::UTutorialNonblocking_Widget_C_OnTutorialStateChangeEvent_Params Parms{};

	Parms.InstanceData = InstanceData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.OnTutorialSubGoalChangeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    InstanceData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialNonblocking_Widget_C::OnTutorialSubGoalChangeEvent(const struct FQtnTutorialInstanceData& InstanceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "OnTutorialSubGoalChangeEvent");

	Params::UTutorialNonblocking_Widget_C_OnTutorialSubGoalChangeEvent_Params Parms{};

	Parms.InstanceData = InstanceData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.AddSubGoalWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    TutorialInst                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnTutorialSubAction       SubGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialNonblocking_Widget_C::AddSubGoalWidget(const struct FQtnTutorialInstanceData& TutorialInst, const struct FQtnTutorialSubAction& SubGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "AddSubGoalWidget");

	Params::UTutorialNonblocking_Widget_C_AddSubGoalWidget_Params Parms{};

	Parms.TutorialInst = TutorialInst;
	Parms.SubGoal = SubGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.RefreshWidgetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialNonblocking_Widget_C::RefreshWidgetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "RefreshWidgetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.ExecuteUbergraph_TutorialNonblocking_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnTutorial*                CallFunc_GetQtnTutorialObject_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetTutorialGoalText_OutTitle                            (None)
// class FText                        CallFunc_GetTutorialGoalText_OutMessage                          (None)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_InstanceData_2                                (None)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_InstanceData_1                                (None)
// TArray<struct FQtnTutorialSubAction>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTutorialSubAction       CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnTutorial*                CallFunc_GetQtnTutorialObject_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTutorialGoalText_OutTitle_1                          (None)
// class FText                        CallFunc_GetTutorialGoalText_OutMessage_1                        (None)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_InstanceData                                  (None)
// TArray<struct FQtnTutorialSubAction>CallFunc_Map_Values_Values_1                                     (ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTutorialLine_Widget_C*      CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_TutorialInst                                  (None)
// struct FQtnTutorialSubAction       K2Node_CustomEvent_SubGoal                                       (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTutorialSubGoalText_OutTitle                         (None)
// class FText                        CallFunc_GetTutorialSubGoalText_OutMessage                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialLine_Widget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDelegateHandleBlueprint    Temp_struct_Variable                                             (NoDestructor)
// class UTutorialLine_Widget_C*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTutorialNonblocking_Widget_C::ExecuteUbergraph_TutorialNonblocking_Widget(int32 EntryPoint, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetTutorialGoalText_OutTitle, class FText CallFunc_GetTutorialGoalText_OutMessage, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData_2, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData_1, TArray<struct FQtnTutorialSubAction>& CallFunc_Map_Values_Values, int32 CallFunc_Map_Length_ReturnValue, const struct FQtnTutorialSubAction& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue_1, class FText CallFunc_GetTutorialGoalText_OutTitle_1, class FText CallFunc_GetTutorialGoalText_OutMessage_1, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData, TArray<struct FQtnTutorialSubAction>& CallFunc_Map_Values_Values_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UTutorialLine_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInst, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoal, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_GetTutorialSubGoalText_OutTitle, class FText CallFunc_GetTutorialSubGoalText_OutMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTutorialLine_Widget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FDelegateHandleBlueprint& Temp_struct_Variable, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item_2, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "ExecuteUbergraph_TutorialNonblocking_Widget");

	Params::UTutorialNonblocking_Widget_C_ExecuteUbergraph_TutorialNonblocking_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnTutorialObject_ReturnValue = CallFunc_GetQtnTutorialObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTutorialGoalText_OutTitle = CallFunc_GetTutorialGoalText_OutTitle;
	Parms.CallFunc_GetTutorialGoalText_OutMessage = CallFunc_GetTutorialGoalText_OutMessage;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_InstanceData_2 = K2Node_CustomEvent_InstanceData_2;
	Parms.K2Node_CustomEvent_InstanceData_1 = K2Node_CustomEvent_InstanceData_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnTutorialObject_ReturnValue_1 = CallFunc_GetQtnTutorialObject_ReturnValue_1;
	Parms.CallFunc_GetTutorialGoalText_OutTitle_1 = CallFunc_GetTutorialGoalText_OutTitle_1;
	Parms.CallFunc_GetTutorialGoalText_OutMessage_1 = CallFunc_GetTutorialGoalText_OutMessage_1;
	Parms.K2Node_CustomEvent_InstanceData = K2Node_CustomEvent_InstanceData;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CustomEvent_TutorialInst = K2Node_CustomEvent_TutorialInst;
	Parms.K2Node_CustomEvent_SubGoal = K2Node_CustomEvent_SubGoal;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetTutorialSubGoalText_OutTitle = CallFunc_GetTutorialSubGoalText_OutTitle;
	Parms.CallFunc_GetTutorialSubGoalText_OutMessage = CallFunc_GetTutorialSubGoalText_OutMessage;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue = CallFunc_AsyncInterpolateValueRealtime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.RequestClosure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialNonblocking_Widget_C*SelfReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialNonblocking_Widget_C::RequestClosure__DelegateSignature(class UTutorialNonblocking_Widget_C* SelfReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "RequestClosure__DelegateSignature");

	Params::UTutorialNonblocking_Widget_C_RequestClosure__DelegateSignature_Params Parms{};

	Parms.SelfReference = SelfReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.CloseTutorial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialNonblocking_Widget_C::CloseTutorial__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialNonblocking_Widget_C", "CloseTutorial__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


