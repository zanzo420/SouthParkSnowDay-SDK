#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C
// (Actor)

class UClass* AStandaloneJoker_UpgradeStation_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandaloneJoker_UpgradeStation_BP_C");

	return Clss;
}


// StandaloneJoker_UpgradeStation_BP_C StandaloneJoker_UpgradeStation_BP.Default__StandaloneJoker_UpgradeStation_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStandaloneJoker_UpgradeStation_BP_C* AStandaloneJoker_UpgradeStation_BP_C::GetDefaultObj()
{
	static class AStandaloneJoker_UpgradeStation_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStandaloneJoker_UpgradeStation_BP_C*>(AStandaloneJoker_UpgradeStation_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C.UpdateExistence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStandaloneJoker_UpgradeStation_BP_C::UpdateExistence(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandaloneJoker_UpgradeStation_BP_C", "UpdateExistence");

	Params::AStandaloneJoker_UpgradeStation_BP_C_UpdateExistence_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C.OnRep_Exists
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStandaloneJoker_UpgradeStation_BP_C::OnRep_Exists()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandaloneJoker_UpgradeStation_BP_C", "OnRep_Exists");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C.Toggle Joker Upgrade Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShrine_Parent_BP_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStandaloneJoker_UpgradeStation_BP_C::Toggle_Joker_Upgrade_Station(bool WantOn, class AShrine_Parent_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandaloneJoker_UpgradeStation_BP_C", "Toggle Joker Upgrade Station");

	Params::AStandaloneJoker_UpgradeStation_BP_C_Toggle_Joker_Upgrade_Station_Params Parms{};

	Parms.WantOn = WantOn;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStandaloneJoker_UpgradeStation_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandaloneJoker_UpgradeStation_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C.ExecuteUbergraph_StandaloneJoker_UpgradeStation_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStandaloneJoker_UpgradeStation_BP_C::ExecuteUbergraph_StandaloneJoker_UpgradeStation_BP(int32 EntryPoint, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StandaloneJoker_UpgradeStation_BP_C", "ExecuteUbergraph_StandaloneJoker_UpgradeStation_BP");

	Params::AStandaloneJoker_UpgradeStation_BP_C_ExecuteUbergraph_StandaloneJoker_UpgradeStation_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


