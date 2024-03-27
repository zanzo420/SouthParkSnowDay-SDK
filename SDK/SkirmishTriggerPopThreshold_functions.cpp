#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C
// (None)

class UClass* USkirmishTriggerPopThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerPopThreshold_C");

	return Clss;
}


// SkirmishTriggerPopThreshold_C SkirmishTriggerPopThreshold.Default__SkirmishTriggerPopThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerPopThreshold_C* USkirmishTriggerPopThreshold_C::GetDefaultObj()
{
	static class USkirmishTriggerPopThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerPopThreshold_C*>(USkirmishTriggerPopThreshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C.OnAIDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    SkirmishPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerPopThreshold_C::OnAIDeath(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerPopThreshold_C", "OnAIDeath");

	Params::USkirmishTriggerPopThreshold_C_OnAIDeath_Params Parms{};

	Parms.Skirmish = Skirmish;
	Parms.SkirmishPawn = SkirmishPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerPopThreshold_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerPopThreshold_C", "OnSkirmishInit");

	Params::USkirmishTriggerPopThreshold_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C.SkirmishSpawnCancelEvent_ServerOnly_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SpawnGroupName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerPopThreshold_C::SkirmishSpawnCancelEvent_ServerOnly_Event_0(class AQtnSkirmish* Skirmish, class FName SpawnGroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerPopThreshold_C", "SkirmishSpawnCancelEvent_ServerOnly_Event_0");

	Params::USkirmishTriggerPopThreshold_C_SkirmishSpawnCancelEvent_ServerOnly_Event_0_Params Parms{};

	Parms.Skirmish = Skirmish;
	Parms.SpawnGroupName = SpawnGroupName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C.ExecuteUbergraph_SkirmishTriggerPopThreshold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                K2Node_CustomEvent_Skirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_spawnGroupName                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                K2Node_CustomEvent_Skirmish_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_skirmishPawn                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSkirmish*                CallFunc_GetOwningSkirmish_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetTotalPopulationInfo_ServerOnly_numPending            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPopulationInfo_ServerOnly_numTelegraphing       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPopulationInfo_ServerOnly_numLiving             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPopulationInfo_ServerOnly_numDead               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalPopulationInfo_ServerOnly_numDestroyed          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                CallFunc_GetOwningSkirmish_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns>CallFunc_GetTrackedPawns_ServerOnly_ReturnValue                  (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnTrackedSkirmishPawns    CallFunc_Map_Find_Value                                          (ContainsInstancedReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, struct FQtnTrackedSkirmishPawns>CallFunc_GetTrackedSpawnGroups_ServerOnly_ReturnValue            (ConstParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTrackedSkirmishPawns    CallFunc_Map_Find_Value_1                                        (ContainsInstancedReference)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnGroupInfo_ServerOnly_numPending                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnGroupInfo_ServerOnly_numTelegraphing            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnGroupInfo_ServerOnly_numLiving                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnGroupInfo_ServerOnly_numDead                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnGroupInfo_ServerOnly_numDestroyed               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void USkirmishTriggerPopThreshold_C::ExecuteUbergraph_SkirmishTriggerPopThreshold(int32 EntryPoint, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class FName K2Node_CustomEvent_spawnGroupName, class AQtnSkirmish* K2Node_CustomEvent_Skirmish_1, class AQtnPawn* K2Node_CustomEvent_skirmishPawn, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, bool CallFunc_IsValidClass_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numPending, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numTelegraphing, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numLiving, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numDead, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numDestroyed, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TMap<class FName, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedSpawnGroups_ServerOnly_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numPending, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numTelegraphing, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numLiving, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numDead, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numDestroyed, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerPopThreshold_C", "ExecuteUbergraph_SkirmishTriggerPopThreshold");

	Params::USkirmishTriggerPopThreshold_C_ExecuteUbergraph_SkirmishTriggerPopThreshold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Skirmish = K2Node_CustomEvent_Skirmish;
	Parms.K2Node_CustomEvent_spawnGroupName = K2Node_CustomEvent_spawnGroupName;
	Parms.K2Node_CustomEvent_Skirmish_1 = K2Node_CustomEvent_Skirmish_1;
	Parms.K2Node_CustomEvent_skirmishPawn = K2Node_CustomEvent_skirmishPawn;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningSkirmish_ReturnValue = CallFunc_GetOwningSkirmish_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetTotalPopulationInfo_ServerOnly_numPending = CallFunc_GetTotalPopulationInfo_ServerOnly_numPending;
	Parms.CallFunc_GetTotalPopulationInfo_ServerOnly_numTelegraphing = CallFunc_GetTotalPopulationInfo_ServerOnly_numTelegraphing;
	Parms.CallFunc_GetTotalPopulationInfo_ServerOnly_numLiving = CallFunc_GetTotalPopulationInfo_ServerOnly_numLiving;
	Parms.CallFunc_GetTotalPopulationInfo_ServerOnly_numDead = CallFunc_GetTotalPopulationInfo_ServerOnly_numDead;
	Parms.CallFunc_GetTotalPopulationInfo_ServerOnly_numDestroyed = CallFunc_GetTotalPopulationInfo_ServerOnly_numDestroyed;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningSkirmish_ReturnValue_1 = CallFunc_GetOwningSkirmish_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTrackedPawns_ServerOnly_ReturnValue = CallFunc_GetTrackedPawns_ServerOnly_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetTrackedSpawnGroups_ServerOnly_ReturnValue = CallFunc_GetTrackedSpawnGroups_ServerOnly_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetSpawnGroupInfo_ServerOnly_numPending = CallFunc_GetSpawnGroupInfo_ServerOnly_numPending;
	Parms.CallFunc_GetSpawnGroupInfo_ServerOnly_numTelegraphing = CallFunc_GetSpawnGroupInfo_ServerOnly_numTelegraphing;
	Parms.CallFunc_GetSpawnGroupInfo_ServerOnly_numLiving = CallFunc_GetSpawnGroupInfo_ServerOnly_numLiving;
	Parms.CallFunc_GetSpawnGroupInfo_ServerOnly_numDead = CallFunc_GetSpawnGroupInfo_ServerOnly_numDead;
	Parms.CallFunc_GetSpawnGroupInfo_ServerOnly_numDestroyed = CallFunc_GetSpawnGroupInfo_ServerOnly_numDestroyed;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


