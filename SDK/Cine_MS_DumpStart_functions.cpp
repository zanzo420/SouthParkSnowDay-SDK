#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_MS_DumpStart.Cine_MS_DumpStart_C
// (Actor)

class UClass* ACine_MS_DumpStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_MS_DumpStart_C");

	return Clss;
}


// Cine_MS_DumpStart_C Cine_MS_DumpStart.Default__Cine_MS_DumpStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_MS_DumpStart_C* ACine_MS_DumpStart_C::GetDefaultObj()
{
	static class ACine_MS_DumpStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_MS_DumpStart_C*>(ACine_MS_DumpStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.ShowVisToday
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::ShowVisToday()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "ShowVisToday");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.LOCAL_UpdateToggleVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::LOCAL_UpdateToggleVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "LOCAL_UpdateToggleVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.determineFrobIntentions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Frobbing_player                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_FoundGas                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_foundKeys                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      LOCAL_HeldItem                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class ABP_GoalPickup_C*>    LOCAL_CopyOfCarriedItemList                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               LOCAL_ADeliveryGoalIsActive                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_MS_DumpStart_C::DetermineFrobIntentions(class ABodyPawnPlayer_C* Frobbing_player, bool LOCAL_FoundGas, bool LOCAL_foundKeys, const class FString& LOCAL_HeldItem, const TArray<class ABP_GoalPickup_C*>& LOCAL_CopyOfCarriedItemList, bool LOCAL_ADeliveryGoalIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "determineFrobIntentions");

	Params::ACine_MS_DumpStart_C_DetermineFrobIntentions_Params Parms{};

	Parms.Frobbing_player = Frobbing_player;
	Parms.LOCAL_FoundGas = LOCAL_FoundGas;
	Parms.LOCAL_foundKeys = LOCAL_foundKeys;
	Parms.LOCAL_HeldItem = LOCAL_HeldItem;
	Parms.LOCAL_CopyOfCarriedItemList = LOCAL_CopyOfCarriedItemList;
	Parms.LOCAL_ADeliveryGoalIsActive = LOCAL_ADeliveryGoalIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.GoalEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      GoalClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EventNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASubGoalManager_Archetype_C* Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACine_MS_DumpStart_C::GoalEvent(class UClass* GoalClass, int32 EventNum, class ASubGoalManager_Archetype_C* Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "GoalEvent");

	Params::ACine_MS_DumpStart_C_GoalEvent_Params Parms{};

	Parms.GoalClass = GoalClass;
	Parms.EventNum = EventNum;
	Parms.Manager = Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.PostSceneWork_SERVER
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::PostSceneWork_SERVER()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "PostSceneWork_SERVER");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_MS_DumpStart_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_MS_DumpStart_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "ToggleEvent");

	Params::ACine_MS_DumpStart_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cine_MS_DumpStart.Cine_MS_DumpStart_C.ExecuteUbergraph_Cine_MS_DumpStart
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_goalClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_EventNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASubGoalManager_Archetype_C* K2Node_CustomEvent_manager                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       K2Node_DynamicCast_AsCutscene_HUD_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WantOn                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_MS_DumpStart_C::ExecuteUbergraph_Cine_MS_DumpStart(int32 EntryPoint, class UClass* K2Node_CustomEvent_goalClass, int32 K2Node_CustomEvent_EventNum, class ASubGoalManager_Archetype_C* K2Node_CustomEvent_manager, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_MakeLiteralInt_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_2, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool K2Node_Event_WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_MS_DumpStart_C", "ExecuteUbergraph_Cine_MS_DumpStart");

	Params::ACine_MS_DumpStart_C_ExecuteUbergraph_Cine_MS_DumpStart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_goalClass = K2Node_CustomEvent_goalClass;
	Parms.K2Node_CustomEvent_EventNum = K2Node_CustomEvent_EventNum;
	Parms.K2Node_CustomEvent_manager = K2Node_CustomEvent_manager;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCutscene_HUD_Widget = K2Node_DynamicCast_AsCutscene_HUD_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_2 = CallFunc_MakeLiteralInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.K2Node_Event_WantOn = K2Node_Event_WantOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


