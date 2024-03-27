#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C
// (None)

class UClass* UQtnGoal_SP_Day1_StartTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_StartTruck_C");

	return Clss;
}


// QtnGoal_SP_Day1_StartTruck_C QtnGoal_SP_Day1_StartTruck.Default__QtnGoal_SP_Day1_StartTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_StartTruck_C* UQtnGoal_SP_Day1_StartTruck_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_StartTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_StartTruck_C*>(UQtnGoal_SP_Day1_StartTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.VO Stop Second Hub Return Conversation Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::VO_Stop_Second_Hub_Return_Conversation_Server_Only(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "VO Stop Second Hub Return Conversation Server Only");

	Params::UQtnGoal_SP_Day1_StartTruck_C_VO_Stop_Second_Hub_Return_Conversation_Server_Only_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.Get VOVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetLocationVolume_C*     K2Node_DynamicCast_AsTarget_Location_Volume                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::Get_VOVolume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "Get VOVolume");

	Params::UQtnGoal_SP_Day1_StartTruck_C_Get_VOVolume_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTarget_Location_Volume = K2Node_DynamicCast_AsTarget_Location_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.DEBUGONLY_EndGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::DEBUGONLY_EndGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "DEBUGONLY_EndGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.GetCinematicActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACinematicSceneArchetype_BP_C*K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "GetCinematicActor");

	Params::UQtnGoal_SP_Day1_StartTruck_C_GetCinematicActor_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP = K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.setKeyGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_SP_Day1_DeliverKeysParent_C*Key_goal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::SetKeyGoal(class UQtnGoal_SP_Day1_DeliverKeysParent_C* Key_goal, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "setKeyGoal");

	Params::UQtnGoal_SP_Day1_StartTruck_C_SetKeyGoal_Params Parms{};

	Parms.Key_goal = Key_goal;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.setGasGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_SP_Day1_DeliverGasParent_C*Gas_goal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::SetGasGoal(class UQtnGoal_SP_Day1_DeliverGasParent_C* Gas_goal, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "setGasGoal");

	Params::UQtnGoal_SP_Day1_StartTruck_C_SetGasGoal_Params Parms{};

	Parms.Gas_goal = Gas_goal;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.getTruck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_1            (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASP_TruckCrash_CinematicBP_C*K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::GetTruck(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ASP_TruckCrash_CinematicBP_C* K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "getTruck");

	Params::UQtnGoal_SP_Day1_StartTruck_C_GetTruck_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_1 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP = K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.End Previous Goals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::End_Previous_Goals(bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "End Previous Goals");

	Params::UQtnGoal_SP_Day1_StartTruck_C_End_Previous_Goals_Params Parms{};

	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGoalStatus_ReturnValue_1 = CallFunc_GetGoalStatus_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.checkForGoalStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::CheckForGoalStart(bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "checkForGoalStart");

	Params::UQtnGoal_SP_Day1_StartTruck_C_CheckForGoalStart_Params Parms{};

	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.UpdateGasItemStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoalPickup_C*            Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Delivered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Picked_up                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::UpdateGasItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "UpdateGasItemStatus");

	Params::UQtnGoal_SP_Day1_StartTruck_C_UpdateGasItemStatus_Params Parms{};

	Parms.Item = Item;
	Parms.Delivered = Delivered;
	Parms.Picked_up = Picked_up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "OnGoalStart");

	Params::UQtnGoal_SP_Day1_StartTruck_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.TruckStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::TruckStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "TruckStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.bindGasEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::bindGasEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "bindGasEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.bindKeyEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::bindKeyEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "bindKeyEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.UpdateKeyItemStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoalPickup_C*            Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Delivered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Picked_up                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::UpdateKeyItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "UpdateKeyItemStatus");

	Params::UQtnGoal_SP_Day1_StartTruck_C_UpdateKeyItemStatus_Params Parms{};

	Parms.Item = Item;
	Parms.Delivered = Delivered;
	Parms.Picked_up = Picked_up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.unbindGasEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::UnbindGasEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "unbindGasEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.unbindKeyEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::UnbindKeyEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "unbindKeyEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.CutsceneEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Goal_class                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cutscene_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_StartTruck_C::CutsceneEnded(class UClass* Goal_class, int32 Cutscene_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "CutsceneEnded");

	Params::UQtnGoal_SP_Day1_StartTruck_C_CutsceneEnded_Params Parms{};

	Parms.Goal_class = Goal_class;
	Parms.Cutscene_ID = Cutscene_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.unbindCutsceneEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::UnbindCutsceneEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "unbindCutsceneEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.endGoalSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::EndGoalSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "endGoalSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.setupCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::SetupCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "setupCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.multicast_updateTruckFrobPrompt
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::Multicast_updateTruckFrobPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "multicast_updateTruckFrobPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.TeleportLateJoiner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::TeleportLateJoiner(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "TeleportLateJoiner");

	Params::UQtnGoal_SP_Day1_StartTruck_C_TeleportLateJoiner_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.bindVOEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::bindVOEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "bindVOEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.PlayerEnteredVOVOlume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::PlayerEnteredVOVOlume(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "PlayerEnteredVOVOlume");

	Params::UQtnGoal_SP_Day1_StartTruck_C_PlayerEnteredVOVOlume_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.unbindVOEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::UnbindVOEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "unbindVOEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.DoTruckStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_StartTruck_C::DoTruckStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "DoTruckStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.DoSetGasGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    GasGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_StartTruck_C::DoSetGasGoal(class UQtnGoal* GasGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "DoSetGasGoal");

	Params::UQtnGoal_SP_Day1_StartTruck_C_DoSetGasGoal_Params Parms{};

	Parms.GasGoal = GasGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.DoSetKeyGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    KeyGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_StartTruck_C::DoSetKeyGoal(class UQtnGoal* KeyGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "DoSetKeyGoal");

	Params::UQtnGoal_SP_Day1_StartTruck_C_DoSetKeyGoal_Params Parms{};

	Parms.KeyGoal = KeyGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C.ExecuteUbergraph_QtnGoal_SP_Day1_StartTruck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_GoalPickup_C*            K2Node_CustomEvent_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_delivered_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_picked_up_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StarksPondGas_C*         K2Node_DynamicCast_AsBP_Starks_Pond_Gas                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_DeliveryParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_DeliveryParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GoalPickup_C*            K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_delivered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_picked_up                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StarksPondKeys_C*        K2Node_DynamicCast_AsBP_Starks_Pond_Keys                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_DeliveryParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_2         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_DeliveryParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_3         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_goal_class                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cutscene_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_Event_playerPawnSoul                                      (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isLocalPlayer                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    K2Node_Event_gasGoal                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    K2Node_Event_keyGoal                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_SP_Day1_DeliverGasParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_DeliverKeysParent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Keys_Parent       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_StartTruck_C::ExecuteUbergraph_QtnGoal_SP_Day1_StartTruck(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GoalPickup_C* K2Node_CustomEvent_Item_1, bool K2Node_CustomEvent_delivered_1, bool K2Node_CustomEvent_picked_up_1, bool CallFunc_IsOnServer_ReturnValue, class ABP_StarksPondGas_C* K2Node_DynamicCast_AsBP_Starks_Pond_Gas, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOnServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_GoalPickup_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_delivered, bool K2Node_CustomEvent_picked_up, bool CallFunc_IsOnServer_ReturnValue_5, class ABP_StarksPondKeys_C* K2Node_DynamicCast_AsBP_Starks_Pond_Keys, bool K2Node_DynamicCast_bSuccess_3, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_2, bool K2Node_DynamicCast_bSuccess_4, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_6, bool CallFunc_IsOnServer_ReturnValue_7, class UClass* CallFunc_GetObjectClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class AQtnPlayerPawn* K2Node_Event_playerPawnSoul, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_isLocalPlayer, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_6, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnGoal* K2Node_Event_gasGoal, class UQtnGoal* K2Node_Event_keyGoal, class UQtnGoal_SP_Day1_DeliverGasParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent, bool K2Node_DynamicCast_bSuccess_7, class UQtnGoal_SP_Day1_DeliverKeysParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Keys_Parent, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_StartTruck_C", "ExecuteUbergraph_QtnGoal_SP_Day1_StartTruck");

	Params::UQtnGoal_SP_Day1_StartTruck_C_ExecuteUbergraph_QtnGoal_SP_Day1_StartTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_delivered_1 = K2Node_CustomEvent_delivered_1;
	Parms.K2Node_CustomEvent_picked_up_1 = K2Node_CustomEvent_picked_up_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Starks_Pond_Gas = K2Node_DynamicCast_AsBP_Starks_Pond_Gas;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue_2 = CallFunc_IsOnServer_ReturnValue_2;
	Parms.CallFunc_IsOnServer_ReturnValue_3 = CallFunc_IsOnServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsOnServer_ReturnValue_4 = CallFunc_IsOnServer_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1 = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_delivered = K2Node_CustomEvent_delivered;
	Parms.K2Node_CustomEvent_picked_up = K2Node_CustomEvent_picked_up;
	Parms.CallFunc_IsOnServer_ReturnValue_5 = CallFunc_IsOnServer_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Starks_Pond_Keys = K2Node_DynamicCast_AsBP_Starks_Pond_Keys;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_2 = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_3 = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_goal_class = K2Node_CustomEvent_goal_class;
	Parms.K2Node_CustomEvent_Cutscene_ID = K2Node_CustomEvent_Cutscene_ID;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue_6 = CallFunc_IsOnServer_ReturnValue_6;
	Parms.CallFunc_IsOnServer_ReturnValue_7 = CallFunc_IsOnServer_ReturnValue_7;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_Event_playerPawnSoul = K2Node_Event_playerPawnSoul;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_isLocalPlayer = K2Node_Event_isLocalPlayer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_playerWhoEntered = K2Node_CustomEvent_playerWhoEntered;
	Parms.K2Node_CustomEvent_onExit = K2Node_CustomEvent_onExit;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGoalStatus_ReturnValue_1 = CallFunc_GetGoalStatus_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_gasGoal = K2Node_Event_gasGoal;
	Parms.K2Node_Event_keyGoal = K2Node_Event_keyGoal;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Keys_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Keys_Parent;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetGoalStatus_ReturnValue_2 = CallFunc_GetGoalStatus_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


