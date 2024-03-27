#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RulebookNotification_Widget.RulebookNotification_Widget_C
// (None)

class UClass* URulebookNotification_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RulebookNotification_Widget_C");

	return Clss;
}


// RulebookNotification_Widget_C RulebookNotification_Widget.Default__RulebookNotification_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebookNotification_Widget_C* URulebookNotification_Widget_C::GetDefaultObj()
{
	static class URulebookNotification_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebookNotification_Widget_C*>(URulebookNotification_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.SequenceEvent__ENTRYPOINTRulebookNotification_Widget_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::SequenceEvent__ENTRYPOINTRulebookNotification_Widget_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "SequenceEvent__ENTRYPOINTRulebookNotification_Widget_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.SequenceEvent__ENTRYPOINTRulebookNotification_Widget_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::SequenceEvent__ENTRYPOINTRulebookNotification_Widget_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "SequenceEvent__ENTRYPOINTRulebookNotification_Widget_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.SequenceEvent__ENTRYPOINTRulebookNotification_Widget_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::SequenceEvent__ENTRYPOINTRulebookNotification_Widget_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "SequenceEvent__ENTRYPOINTRulebookNotification_Widget_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.SequenceEvent__ENTRYPOINTRulebookNotification_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::SequenceEvent__ENTRYPOINTRulebookNotification_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "SequenceEvent__ENTRYPOINTRulebookNotification_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.SetupRulebookAnnouncement
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Target_Array                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URulebookNotification_Widget_C::SetupRulebookAnnouncement(TArray<class UClass*>& Target_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "SetupRulebookAnnouncement");

	Params::URulebookNotification_Widget_C_SetupRulebookAnnouncement_Params Parms{};

	Parms.Target_Array = Target_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookNotification_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "PreConstruct");

	Params::URulebookNotification_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.Anim_AnnounceRulebook
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::Anim_AnnounceRulebook()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "Anim_AnnounceRulebook");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.AnimSeq_RemoveCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayForward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookNotification_Widget_C::AnimSeq_RemoveCard(bool PlayForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "AnimSeq_RemoveCard");

	Params::URulebookNotification_Widget_C_AnimSeq_RemoveCard_Params Parms{};

	Parms.PlayForward = PlayForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.RepeaterRemoveCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::RepeaterRemoveCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "RepeaterRemoveCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.CollapseRulebookUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookNotification_Widget_C::CollapseRulebookUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "CollapseRulebookUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookNotification_Widget.RulebookNotification_Widget_C.ExecuteUbergraph_RulebookNotification_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_CustomEvent_Target_Array                                  (ReferenceParm)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlayForward                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URulebookNotificationCard_Widget_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class URulebookNotificationCard_Widget_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookNotification_Widget_C::ExecuteUbergraph_RulebookNotification_Widget(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FAnchors& K2Node_MakeStruct_Anchors, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<class UClass*>& K2Node_CustomEvent_Target_Array, float CallFunc_Lerp_ReturnValue_2, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_PlayForward, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class URulebookNotificationCard_Widget_C*>& K2Node_MakeArray_Array, class URulebookNotificationCard_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UClass* CallFunc_Array_Get_Item_1, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotification_Widget_C", "ExecuteUbergraph_RulebookNotification_Widget");

	Params::URulebookNotification_Widget_C_ExecuteUbergraph_RulebookNotification_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_Target_Array = K2Node_CustomEvent_Target_Array;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_PlayForward = K2Node_CustomEvent_PlayForward;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


