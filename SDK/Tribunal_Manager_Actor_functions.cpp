#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tribunal_Manager_Actor.Tribunal_Manager_Actor_C
// (Actor)

class UClass* ATribunal_Manager_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tribunal_Manager_Actor_C");

	return Clss;
}


// Tribunal_Manager_Actor_C Tribunal_Manager_Actor.Default__Tribunal_Manager_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATribunal_Manager_Actor_C* ATribunal_Manager_Actor_C::GetDefaultObj()
{
	static class ATribunal_Manager_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATribunal_Manager_Actor_C*>(ATribunal_Manager_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DoGetRunInEditor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RunInEditor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::DoGetRunInEditor(bool* RunInEditor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DoGetRunInEditor");

	Params::ATribunal_Manager_Actor_C_DoGetRunInEditor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RunInEditor != nullptr)
		*RunInEditor = Parms.RunInEditor;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PrimeNecessarySounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundWaveRefs              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PrimeSoundCues_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PrimeSoundWaves_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::PrimeNecessarySounds(const struct FSoundWaveRefs& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend, bool CallFunc_PrimeSoundCues_ReturnValue, bool CallFunc_PrimeSoundWaves_ReturnValue, bool CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PrimeNecessarySounds");

	Params::ATribunal_Manager_Actor_C_PrimeNecessarySounds_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetGrousingFriend_grousingFriend = CallFunc_GetGrousingFriend_grousingFriend;
	Parms.CallFunc_PrimeSoundCues_ReturnValue = CallFunc_PrimeSoundCues_ReturnValue;
	Parms.CallFunc_PrimeSoundWaves_ReturnValue = CallFunc_PrimeSoundWaves_ReturnValue;
	Parms.CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue = CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FinishTribunal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LOCAL_needsBinderVO                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::FinishTribunal(bool LOCAL_needsBinderVO, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FinishTribunal");

	Params::ATribunal_Manager_Actor_C_FinishTribunal_Params Parms{};

	Parms.LOCAL_needsBinderVO = LOCAL_needsBinderVO;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.hasScriptedGrousing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasScriptedGrousing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::HasScriptedGrousing(bool* HasScriptedGrousing, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "hasScriptedGrousing");

	Params::ATribunal_Manager_Actor_C_HasScriptedGrousing_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasScriptedGrousing != nullptr)
		*HasScriptedGrousing = Parms.HasScriptedGrousing;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_TribunalFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OnRep_TribunalFinished(bool CallFunc_IsTradeshowDemo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_TribunalFinished");

	Params::ATribunal_Manager_Actor_C_OnRep_TribunalFinished_Params Parms{};

	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetTicking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldTick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::SetTicking(bool bShouldTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetTicking");

	Params::ATribunal_Manager_Actor_C_SetTicking_Params Parms{};

	Parms.bShouldTick = bShouldTick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.AddLateJoinToArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           LateJoinBody                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundNullEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::AddLateJoinToArray(class ABodyPawnPlayer_C* LateJoinBody, bool FoundNullEntry, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "AddLateJoinToArray");

	Params::ATribunal_Manager_Actor_C_AddLateJoinToArray_Params Parms{};

	Parms.LateJoinBody = LateJoinBody;
	Parms.FoundNullEntry = FoundNullEntry;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Start PreRoll and Preload Upgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_Results                                    (ReferenceParm)
// int32                              CallFunc_RollUpgrades_RollQuantity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RollUpgrades_BonusQuantity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::Start_PreRoll_and_Preload_Upgrades(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_Results, int32 CallFunc_RollUpgrades_RollQuantity, int32 CallFunc_RollUpgrades_BonusQuantity, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Start PreRoll and Preload Upgrades");

	Params::ATribunal_Manager_Actor_C_Start_PreRoll_and_Preload_Upgrades_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_RollUpgrades_Results = CallFunc_RollUpgrades_Results;
	Parms.CallFunc_RollUpgrades_RollQuantity = CallFunc_RollUpgrades_RollQuantity;
	Parms.CallFunc_RollUpgrades_BonusQuantity = CallFunc_RollUpgrades_BonusQuantity;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Get Player Rolled Upgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>Result                                                           (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Get_Player_Rolled_Upgrades(class ABodyPawnPlayer_C* TargetPlayer, TArray<struct FQtnRolledUpgradeResult>* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Get Player Rolled Upgrades");

	Params::ATribunal_Manager_Actor_C_Get_Player_Rolled_Upgrades_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_r_NeedCosmeticChangeForSTD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_r_NeedCosmeticChangeForSTD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_r_NeedCosmeticChangeForSTD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.AwardRandomUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           LatePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// TArray<struct FQtnReactionToTag>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_ReturnValue                                (ReferenceParm)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)

void ATribunal_Manager_Actor_C::AwardRandomUpgrade(class ABodyPawnPlayer_C* LatePlayer, TArray<struct FQtnRolledUpgradeResult>& K2Node_MakeArray_Array, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, TArray<struct FQtnReactionToTag>& K2Node_MakeArray_Array_1, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "AwardRandomUpgrade");

	Params::ATribunal_Manager_Actor_C_AwardRandomUpgrade_Params Parms{};

	Parms.LatePlayer = LatePlayer;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_RollUpgrades_ReturnValue = CallFunc_RollUpgrades_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.GetGrousingEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AScriptedSkeletalActor_C*    GrousingEnemy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::GetGrousingEnemy(class AScriptedSkeletalActor_C** GrousingEnemy, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "GetGrousingEnemy");

	Params::ATribunal_Manager_Actor_C_GetGrousingEnemy_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GrousingEnemy != nullptr)
		*GrousingEnemy = Parms.GrousingEnemy;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.GetGrousingFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AScriptedSkeletalActor_C*    GrousingFriend                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::GetGrousingFriend(class AScriptedSkeletalActor_C** GrousingFriend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "GetGrousingFriend");

	Params::ATribunal_Manager_Actor_C_GetGrousingFriend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GrousingFriend != nullptr)
		*GrousingFriend = Parms.GrousingFriend;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Check STD Achievement Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AtLeastOneNotInfected                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AtLeastOneInfected                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Check_STD_Achievement_Server_Only(bool AtLeastOneNotInfected, bool AtLeastOneInfected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Check STD Achievement Server Only");

	Params::ATribunal_Manager_Actor_C_Check_STD_Achievement_Server_Only_Params Parms{};

	Parms.AtLeastOneNotInfected = AtLeastOneNotInfected;
	Parms.AtLeastOneInfected = AtLeastOneInfected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Determine Current Arc For VO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Determine_Current_Arc_For_VO(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Determine Current Arc For VO");

	Params::ATribunal_Manager_Actor_C_Determine_Current_Arc_For_VO_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.GetUniqueVOContexts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABS_Choice_Card_C*>   bsChoiceCards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayTag>        UniqueVOContexts                                                 (Parm, OutParm)
// TArray<struct FGameplayTag>        UniqueVOContextsArray                                            (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::GetUniqueVOContexts(TArray<class ABS_Choice_Card_C*>& bsChoiceCards, TArray<struct FGameplayTag>* UniqueVOContexts, const TArray<struct FGameplayTag>& UniqueVOContextsArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "GetUniqueVOContexts");

	Params::ATribunal_Manager_Actor_C_GetUniqueVOContexts_Params Parms{};

	Parms.bsChoiceCards = bsChoiceCards;
	Parms.UniqueVOContextsArray = UniqueVOContextsArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueVOContexts != nullptr)
		*UniqueVOContexts = std::move(Parms.UniqueVOContexts);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.GetBestPlayerUpgradeVOContext
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABS_Choice_Card_C*>   bsChoiceCards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                bestVOContext                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        LOCAL_secondaryTags                                              (Edit, BlueprintVisible)
// TArray<struct FGameplayTag>        LOCAL_primaryTags                                                (Edit, BlueprintVisible)
// bool                               HasMultipleMaxes                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                MaxTag                                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentTag                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCount                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentCount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, int32>   VoContextSecondaryTagCounts                                      (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, int32>   VoContextTagCounts                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_SelectBestUpgradeTag_ReturnValue                        (NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::GetBestPlayerUpgradeVOContext(TArray<class ABS_Choice_Card_C*>& bsChoiceCards, struct FGameplayTag* bestVOContext, const TArray<struct FGameplayTag>& LOCAL_secondaryTags, const TArray<struct FGameplayTag>& LOCAL_primaryTags, bool HasMultipleMaxes, const struct FGameplayTag& MaxTag, const struct FGameplayTag& CurrentTag, int32 MaxCount, int32 CurrentCount, TMap<struct FGameplayTag, int32> VoContextSecondaryTagCounts, TMap<struct FGameplayTag, int32> VoContextTagCounts, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FGameplayTag& CallFunc_SelectBestUpgradeTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "GetBestPlayerUpgradeVOContext");

	Params::ATribunal_Manager_Actor_C_GetBestPlayerUpgradeVOContext_Params Parms{};

	Parms.bsChoiceCards = bsChoiceCards;
	Parms.LOCAL_secondaryTags = LOCAL_secondaryTags;
	Parms.LOCAL_primaryTags = LOCAL_primaryTags;
	Parms.HasMultipleMaxes = HasMultipleMaxes;
	Parms.MaxTag = MaxTag;
	Parms.CurrentTag = CurrentTag;
	Parms.MaxCount = MaxCount;
	Parms.CurrentCount = CurrentCount;
	Parms.VoContextSecondaryTagCounts = VoContextSecondaryTagCounts;
	Parms.VoContextTagCounts = VoContextTagCounts;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_SelectBestUpgradeTag_ReturnValue = CallFunc_SelectBestUpgradeTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bestVOContext != nullptr)
		*bestVOContext = std::move(Parms.bestVOContext);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SlapFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             TargetComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               AnimToPlay                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::SlapFX(class USceneComponent* TargetComponent, bool Player, class UAnimSequence* AnimToPlay, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SlapFX");

	Params::ATribunal_Manager_Actor_C_SlapFX_Params Parms{};

	Parms.TargetComponent = TargetComponent;
	Parms.Player = Player;
	Parms.AnimToPlay = AnimToPlay;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DTime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPulse                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::UpdateTimer(float DTime, bool ShouldPulse, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "UpdateTimer");

	Params::ATribunal_Manager_Actor_C_UpdateTimer_Params Parms{};

	Parms.DTime = DTime;
	Parms.ShouldPulse = ShouldPulse;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.UpdateCardPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             StartComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             OutComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ALPHA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::UpdateCardPresentation(class USceneComponent* StartComp, class USceneComponent* OutComp, float ALPHA, class AActor* Card, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "UpdateCardPresentation");

	Params::ATribunal_Manager_Actor_C_UpdateCardPresentation_Params Parms{};

	Parms.StartComp = StartComp;
	Parms.OutComp = OutComp;
	Parms.ALPHA = ALPHA;
	Parms.Card = Card;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ImproveUpgradeCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardNumber                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ImproveUpgradeCard(int32 CardNumber, class ABodyPawnPlayer_C* PlayerBody, int32 OldCurrency, int32 UpgradeCost, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ImproveUpgradeCard");

	Params::ATribunal_Manager_Actor_C_ImproveUpgradeCard_Params Parms{};

	Parms.CardNumber = CardNumber;
	Parms.PlayerBody = PlayerBody;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ApplyUpgradesClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     RolledUpgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ApplyUpgradesClient(const struct FQtnRolledUpgradeResult& RolledUpgrade, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ApplyUpgradesClient");

	Params::ATribunal_Manager_Actor_C_ApplyUpgradesClient_Params Parms{};

	Parms.RolledUpgrade = RolledUpgrade;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ConvertReplicatedUpgradeSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnUpgradeSettings         OutValidUpgradeSettings                                          (Parm, OutParm)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ConvertReplicatedUpgradeSettings(const struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnUpgradeSettings* OutValidUpgradeSettings, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ConvertReplicatedUpgradeSettings");

	Params::ATribunal_Manager_Actor_C_ConvertReplicatedUpgradeSettings_Params Parms{};

	Parms.UpgradeSettings = UpgradeSettings;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValidUpgradeSettings != nullptr)
		*OutValidUpgradeSettings = std::move(Parms.OutValidUpgradeSettings);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.MakeUpgradeChoiceClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>RolledChoiceArray                                                (Edit, BlueprintVisible)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::MakeUpgradeChoiceClient(int32 CardIndex, const TArray<struct FQtnRolledUpgradeResult>& RolledChoiceArray, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "MakeUpgradeChoiceClient");

	Params::ATribunal_Manager_Actor_C_MakeUpgradeChoiceClient_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.RolledChoiceArray = RolledChoiceArray;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StartUpgradesServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_Get_Player_Rolled_Upgrades_Result                       (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::StartUpgradesServer(class ABodyPawnPlayer_C* PlayerBody, TArray<struct FQtnRolledUpgradeResult>& CallFunc_Get_Player_Rolled_Upgrades_Result, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, int32 CallFunc_Array_Length_ReturnValue, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item, bool CallFunc_FindPlayerData____FoundPlayer_1, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_1, int32 CallFunc_FindPlayerData____PlayerIndex_1, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StartUpgradesServer");

	Params::ATribunal_Manager_Actor_C_StartUpgradesServer_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.CallFunc_Get_Player_Rolled_Upgrades_Result = CallFunc_Get_Player_Rolled_Upgrades_Result;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FindPlayerData____FoundPlayer_1 = CallFunc_FindPlayerData____FoundPlayer_1;
	Parms.CallFunc_FindPlayerData____PlayerSession_1 = CallFunc_FindPlayerData____PlayerSession_1;
	Parms.CallFunc_FindPlayerData____PlayerIndex_1 = CallFunc_FindPlayerData____PlayerIndex_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetupUpgradeWidgetLocally
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Widget_C*       K2Node_DynamicCast_AsMenu_Upgrade_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::SetupUpgradeWidgetLocally(class AQtnBodyPawn* bodyPawn, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuUpgrade_Widget_C* K2Node_DynamicCast_AsMenu_Upgrade_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetupUpgradeWidgetLocally");

	Params::ATribunal_Manager_Actor_C_SetupUpgradeWidgetLocally_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMenu_Upgrade_Widget = K2Node_DynamicCast_AsMenu_Upgrade_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FindNullPlayerEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NullPlayer                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::FindNullPlayerEntry(int32* NullPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FindNullPlayerEntry");

	Params::ATribunal_Manager_Actor_C_FindNullPlayerEntry_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NullPlayer != nullptr)
		*NullPlayer = Parms.NullPlayer;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetUpCartmanTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              KyleZ                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SlapOffset                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATribunal_Manager_Actor_C::SetUpCartmanTarget(float KyleZ, const struct FVector2D& SlapOffset, int32 Temp_int_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetUpCartmanTarget");

	Params::ATribunal_Manager_Actor_C_SetUpCartmanTarget_Params Parms{};

	Parms.KyleZ = KyleZ;
	Parms.SlapOffset = SlapOffset;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PostBSChoiceRep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexThatRepped                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::PostBSChoiceRep(int32 ChoiceIndex, int32 IndexThatRepped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PostBSChoiceRep");

	Params::ATribunal_Manager_Actor_C_PostBSChoiceRep_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.IndexThatRepped = IndexThatRepped;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.GetChoiceArrayForPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        BSChoiceArray                                                    (Parm, OutParm)
// TArray<struct FQtnBSChoice>        OutArray                                                         (Edit, BlueprintVisible)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::GetChoiceArrayForPlayer(int32 SlotIndex, TArray<struct FQtnBSChoice>* BSChoiceArray, const TArray<struct FQtnBSChoice>& OutArray, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "GetChoiceArrayForPlayer");

	Params::ATribunal_Manager_Actor_C_GetChoiceArrayForPlayer_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.OutArray = OutArray;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BSChoiceArray != nullptr)
		*BSChoiceArray = std::move(Parms.BSChoiceArray);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_BSChoices_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_BSChoices_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_BSChoices_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_BSChoices_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_BSChoices_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_BSChoices_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_BSChoices_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_BSChoices_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_BSChoices_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.LateJoin_MoveToTrial_SERVER
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Joiner                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)

void ATribunal_Manager_Actor_C::LateJoin_MoveToTrial_SERVER(class ABodyPawnPlayer_C* Joiner, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_GetRandomValue_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "LateJoin_MoveToTrial_SERVER");

	Params::ATribunal_Manager_Actor_C_LateJoin_MoveToTrial_SERVER_Params Parms{};

	Parms.Joiner = Joiner;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue_1 = CallFunc_GetRandomValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_trialSetupTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_trialSetupTriggered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_trialSetupTriggered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetUpKyleTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Vec3SlapOffset                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              KyleZ                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SlapOffset                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::SetUpKyleTarget(const struct FVector& Vec3SlapOffset, float KyleZ, const struct FVector2D& SlapOffset, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetUpKyleTarget");

	Params::ATribunal_Manager_Actor_C_SetUpKyleTarget_Params Parms{};

	Parms.Vec3SlapOffset = Vec3SlapOffset;
	Parms.KyleZ = KyleZ;
	Parms.SlapOffset = SlapOffset;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DealEnemyCards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnBSChoice>        EnemyChoiceArray_Temp                                            (Edit, BlueprintVisible)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Create_New_Bullshit_Card_Option_New_Card                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::DealEnemyCards(bool NewParam, const TArray<struct FQtnBSChoice>& EnemyChoiceArray_Temp, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Variable, const struct FQtnBSChoice& CallFunc_Create_New_Bullshit_Card_Option_New_Card, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DealEnemyCards");

	Params::ATribunal_Manager_Actor_C_DealEnemyCards_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.EnemyChoiceArray_Temp = EnemyChoiceArray_Temp;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_New_Bullshit_Card_Option_New_Card = CallFunc_Create_New_Bullshit_Card_Option_New_Card;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ProcessLateSpawnAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABodyPawnAI_C*>       ProcessedAI                                                      (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAI_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ProcessLateSpawnAI(const TArray<class ABodyPawnAI_C*>& ProcessedAI, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue, class ABodyPawnAI_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_GetRandomValue_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnAI_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ProcessLateSpawnAI");

	Params::ATribunal_Manager_Actor_C_ProcessLateSpawnAI_Params Parms{};

	Parms.ProcessedAI = ProcessedAI;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue_1 = CallFunc_GetRandomValue_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ButtersBookAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AButtersWBook_Actor_BP_C*    K2Node_DynamicCast_AsButters_WBook_Actor_BP                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               CallFunc_FindBookAnim_outBookAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ButtersBookAnim(class AActor* Actor, class UAnimMontage* Montage, bool CallFunc_IsValid_ReturnValue, class AButtersWBook_Actor_BP_C* K2Node_DynamicCast_AsButters_WBook_Actor_BP, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* CallFunc_FindBookAnim_outBookAnim, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ButtersBookAnim");

	Params::ATribunal_Manager_Actor_C_ButtersBookAnim_Params Parms{};

	Parms.Actor = Actor;
	Parms.Montage = Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsButters_WBook_Actor_BP = K2Node_DynamicCast_AsButters_WBook_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindBookAnim_outBookAnim = CallFunc_FindBookAnim_outBookAnim;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.LocalReadyToAdvance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::LocalReadyToAdvance(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "LocalReadyToAdvance");

	Params::ATribunal_Manager_Actor_C_LocalReadyToAdvance_Params Parms{};

	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.AdvanceSequence_Server
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::AdvanceSequence_Server(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "AdvanceSequence_Server");

	Params::ATribunal_Manager_Actor_C_AdvanceSequence_Server_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.sequenceAdvanceCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               SequenceFinished                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ValidPlayers                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::SequenceAdvanceCheck(bool* SequenceFinished, int32 ValidPlayers, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "sequenceAdvanceCheck");

	Params::ATribunal_Manager_Actor_C_SequenceAdvanceCheck_Params Parms{};

	Parms.ValidPlayers = ValidPlayers;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SequenceFinished != nullptr)
		*SequenceFinished = Parms.SequenceFinished;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Create New Bullshit Card Option
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnBSChoice>        Cards_In_Hand_Already                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Is_Player_Turn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnBSChoice                New_Card                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerTurn                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Bullshit_Found                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              Temp_wildcard_Variable                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnBSChoice                K2Node_MakeStruct_QtnBSChoice                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_Select_Default                                            (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_Select_Default_1                                          (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Create_New_Bullshit_Card_Option(TArray<struct FQtnBSChoice>& Cards_In_Hand_Already, bool Is_Player_Turn, struct FQtnBSChoice* New_Card, bool PlayerTurn, bool Bullshit_Found, bool Temp_bool_Variable, TArray<class UClass*>& Temp_wildcard_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UClass* Temp_wildcard_Variable_1, bool Temp_bool_Variable_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, const struct FQtnBSChoice& K2Node_MakeStruct_QtnBSChoice, TArray<class UClass*>& K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_2, int32 Temp_int_Variable, TArray<class UClass*>& K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List, int32 CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List_1, int32 CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Create New Bullshit Card Option");

	Params::ATribunal_Manager_Actor_C_Create_New_Bullshit_Card_Option_Params Parms{};

	Parms.Cards_In_Hand_Already = Cards_In_Hand_Already;
	Parms.Is_Player_Turn = Is_Player_Turn;
	Parms.PlayerTurn = PlayerTurn;
	Parms.Bullshit_Found = Bullshit_Found;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnBSChoice = K2Node_MakeStruct_QtnBSChoice;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List = CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List;
	Parms.CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found = CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List_1 = CallFunc_Is_BS_Class_In_Choice_List_Is_In_Choice_List_1;
	Parms.CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found_1 = CallFunc_Is_BS_Class_In_Choice_List_Index_If_Found_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (New_Card != nullptr)
		*New_Card = std::move(Parms.New_Card);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Is BS Class In Choice List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BS_To_Find                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        List_Of_Choices                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Is_In_Choice_List                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index_If_Found                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::Is_BS_Class_In_Choice_List(class UClass* BS_To_Find, TArray<struct FQtnBSChoice>& List_Of_Choices, bool* Is_In_Choice_List, int32* Index_If_Found, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnBSChoice& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Is BS Class In Choice List");

	Params::ATribunal_Manager_Actor_C_Is_BS_Class_In_Choice_List_Params Parms{};

	Parms.BS_To_Find = BS_To_Find;
	Parms.List_Of_Choices = List_Of_Choices;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_In_Choice_List != nullptr)
		*Is_In_Choice_List = Parms.Is_In_Choice_List;

	if (Index_If_Found != nullptr)
		*Index_If_Found = Parms.Index_If_Found;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.MakeSortedBodyArrays
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AQtnBodyPawn*>        QtnBodies                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::MakeSortedBodyArrays(TArray<class AQtnBodyPawn*>& QtnBodies, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_3, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "MakeSortedBodyArrays");

	Params::ATribunal_Manager_Actor_C_MakeSortedBodyArrays_Params Parms{};

	Parms.QtnBodies = QtnBodies;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsObjectOfType_outputPin_3 = CallFunc_IsObjectOfType_outputPin_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FreezePlayServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::FreezePlayServer(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetRandomValue_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FreezePlayServer");

	Params::ATribunal_Manager_Actor_C_FreezePlayServer_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue_1 = CallFunc_GetRandomValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Check for Players Ready
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DTime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CountownTime                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AreAllExpectedPlayersReady_numReadyPlayers              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAllExpectedPlayersReady_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Check_for_Players_Ready(float DTime, float CountownTime, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsReadyForGameplay_ReturnValue, int32 CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_AreAllExpectedPlayersReady_numReadyPlayers, bool CallFunc_AreAllExpectedPlayersReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Check for Players Ready");

	Params::ATribunal_Manager_Actor_C_Check_for_Players_Ready_Params Parms{};

	Parms.DTime = DTime;
	Parms.CountownTime = CountownTime;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers = CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers;
	Parms.CallFunc_AreAllExpectedPlayersReady_numReadyPlayers = CallFunc_AreAllExpectedPlayersReady_numReadyPlayers;
	Parms.CallFunc_AreAllExpectedPlayersReady_ReturnValue = CallFunc_AreAllExpectedPlayersReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ApplyNewRules
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnBSChoice                Incomingchoice                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ApplyNewRules(const struct FQtnBSChoice& Incomingchoice, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ApplyNewRules");

	Params::ATribunal_Manager_Actor_C_ApplyNewRules_Params Parms{};

	Parms.Incomingchoice = Incomingchoice;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StartBullshit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitManagerComponent*CallFunc_GetBullshitManager_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_AddBullshit_ServerOnly_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::StartBullshit(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnBSChoice& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_AddBullshit_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StartBullshit");

	Params::ATribunal_Manager_Actor_C_StartBullshit_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetBullshitManager_ReturnValue = CallFunc_GetBullshitManager_ReturnValue;
	Parms.CallFunc_AddBullshit_ServerOnly_ReturnValue = CallFunc_AddBullshit_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.CallPlayerTurnSizzle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SelectionText                                                    (Edit, BlueprintVisible)
// class FText                        TurnText                                                         (Edit, BlueprintVisible)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::CallPlayerTurnSizzle(class FText SelectionText, class FText TurnText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "CallPlayerTurnSizzle");

	Params::ATribunal_Manager_Actor_C_CallPlayerTurnSizzle_Params Parms{};

	Parms.SelectionText = SelectionText;
	Parms.TurnText = TurnText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_BSChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnRep_BSChoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_BSChoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ShowChoices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearChoices                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        ChoicesToPresent                                                 (Edit, BlueprintVisible)
// int32                              PassedPlayer                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActorPlacementComp_C*>CardLocs                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FQtnBSChoice>        CallFunc_GetChoiceArrayForPlayer_BSChoiceArray                   (ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ShowChoices(bool ClearChoices, int32 PlayerIndex, const TArray<struct FQtnBSChoice>& ChoicesToPresent, int32 PassedPlayer, const TArray<class UActorPlacementComp_C*>& CardLocs, TArray<struct FQtnBSChoice>& CallFunc_GetChoiceArrayForPlayer_BSChoiceArray, TArray<struct FQtnRolledUpgradeResult>& K2Node_MakeArray_Array, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_1, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ShowChoices");

	Params::ATribunal_Manager_Actor_C_ShowChoices_Params Parms{};

	Parms.ClearChoices = ClearChoices;
	Parms.PlayerIndex = PlayerIndex;
	Parms.ChoicesToPresent = ChoicesToPresent;
	Parms.PassedPlayer = PassedPlayer;
	Parms.CardLocs = CardLocs;
	Parms.CallFunc_GetChoiceArrayForPlayer_BSChoiceArray = CallFunc_GetChoiceArrayForPlayer_BSChoiceArray;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetUpCurrentCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CardPlay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GroupShot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnSPCharacter         Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurPlayer                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::SetUpCurrentCamera(int32 CurrentPlayer, bool CardPlay, bool GroupShot, enum class EQtnSPCharacter Character, int32 CurPlayer, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetUpCurrentCamera");

	Params::ATribunal_Manager_Actor_C_SetUpCurrentCamera_Params Parms{};

	Parms.CurrentPlayer = CurrentPlayer;
	Parms.CardPlay = CardPlay;
	Parms.GroupShot = GroupShot;
	Parms.Character = Character;
	Parms.CurPlayer = CurPlayer;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_1 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_1 = CallFunc_GetLocalPlayerControllerBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ReturnPlayersFromTribunal_SERVER
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ReturnPlayersFromTribunal_SERVER(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ReturnPlayersFromTribunal_SERVER");

	Params::ATribunal_Manager_Actor_C_ReturnPlayersFromTribunal_SERVER_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SortPlacementArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorPlacementComp_C*>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               Inserted                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UActorPlacementComp_C*>SortedArray                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UActorPlacementComp_C*>TempArray                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorPlacementComp_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorPlacementComp_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::SortPlacementArray(TArray<class UActorPlacementComp_C*>& Array, bool Inserted, const TArray<class UActorPlacementComp_C*>& SortedArray, const TArray<class UActorPlacementComp_C*>& TempArray, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UActorPlacementComp_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UActorPlacementComp_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SortPlacementArray");

	Params::ATribunal_Manager_Actor_C_SortPlacementArray_Params Parms{};

	Parms.Array = Array;
	Parms.Inserted = Inserted;
	Parms.SortedArray = SortedArray;
	Parms.TempArray = TempArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.MovePlayersToTribunal_SERVER
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABodyPawnBase_C*>     AllBodies                                                        (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// int32                              CurrentAIArray                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CurrentbodyClass                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Nomtage                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AParticipantTarget_C*        OriginalLocation                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      SpawnClass                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             Body                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayerPlacementComp_C*>PlayerPlacement                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UEnemyPlacementComp_C*>EnemyPlacement                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// class AParticipantTarget_C*        TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             TargetComp                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  TeleTransform                                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// int32                              AIProcessed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayersProcessed                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AParticipantTarget_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnemyPlacementComp_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AParticipantTarget_C*        K2Node_DynamicCast_AsParticipant_Target                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)

void ATribunal_Manager_Actor_C::MovePlayersToTribunal_SERVER(const TArray<class ABodyPawnBase_C*>& AllBodies, int32 CurrentAIArray, class UClass* CurrentbodyClass, class UAnimMontage* Nomtage, class AParticipantTarget_C* OriginalLocation, class UClass* SpawnClass, class ABodyPawnBase_C* Body, const TArray<class UPlayerPlacementComp_C*>& PlayerPlacement, const TArray<class UEnemyPlacementComp_C*>& EnemyPlacement, class AParticipantTarget_C* TargetActor, class USceneComponent* TargetComp, const struct FTransform& TeleTransform, int32 AIProcessed, int32 PlayersProcessed, int32 Temp_int_Array_Index_Variable, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AParticipantTarget_C* CallFunc_FinishSpawningActor_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_GetRandomValue_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UEnemyPlacementComp_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue_1, class AParticipantTarget_C* K2Node_DynamicCast_AsParticipant_Target, bool K2Node_DynamicCast_bSuccess_1, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "MovePlayersToTribunal_SERVER");

	Params::ATribunal_Manager_Actor_C_MovePlayersToTribunal_SERVER_Params Parms{};

	Parms.AllBodies = AllBodies;
	Parms.CurrentAIArray = CurrentAIArray;
	Parms.CurrentbodyClass = CurrentbodyClass;
	Parms.Nomtage = Nomtage;
	Parms.OriginalLocation = OriginalLocation;
	Parms.SpawnClass = SpawnClass;
	Parms.Body = Body;
	Parms.PlayerPlacement = PlayerPlacement;
	Parms.EnemyPlacement = EnemyPlacement;
	Parms.TargetActor = TargetActor;
	Parms.TargetComp = TargetComp;
	Parms.TeleTransform = TeleTransform;
	Parms.AIProcessed = AIProcessed;
	Parms.PlayersProcessed = PlayersProcessed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue = CallFunc_SyncLoadActorClass_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue_1 = CallFunc_GetRandomValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsParticipant_Target = K2Node_DynamicCast_AsParticipant_Target;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.HowManyChoicesForPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           InBodyPawnPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumChoices                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPerk_MasterfulBullshitter_C*CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::HowManyChoicesForPlayer(class ABodyPawnPlayer_C* InBodyPawnPlayer, int32* NumChoices, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPerk_MasterfulBullshitter_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "HowManyChoicesForPlayer");

	Params::ATribunal_Manager_Actor_C_HowManyChoicesForPlayer_Params Parms{};

	Parms.InBodyPawnPlayer = InBodyPawnPlayer;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NumChoices != nullptr)
		*NumChoices = Parms.NumChoices;

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_currentPlayerIndex
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TurnText                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OnRep_currentPlayerIndex(class FText TurnText, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_currentPlayerIndex");

	Params::ATribunal_Manager_Actor_C_OnRep_currentPlayerIndex_Params Parms{};

	Parms.TurnText = TurnText;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ProcessPlayerChoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoosingPlayerIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        CallFunc_GetChoiceArrayForPlayer_BSChoiceArray                   (ReferenceParm)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_AddVerb_ServerOnly_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ProcessPlayerChoice(int32 ChoiceIndex, int32 ChoosingPlayerIndex, TArray<struct FQtnBSChoice>& CallFunc_GetChoiceArrayForPlayer_BSChoiceArray, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item, const struct FQtnBSChoice& CallFunc_Array_Get_Item_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ProcessPlayerChoice");

	Params::ATribunal_Manager_Actor_C_ProcessPlayerChoice_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.ChoosingPlayerIndex = ChoosingPlayerIndex;
	Parms.CallFunc_GetChoiceArrayForPlayer_BSChoiceArray = CallFunc_GetChoiceArrayForPlayer_BSChoiceArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_AddVerb_ServerOnly_ReturnValue = CallFunc_AddVerb_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayIntroCinematics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::PlayIntroCinematics(int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayIntroCinematics");

	Params::ATribunal_Manager_Actor_C_PlayIntroCinematics_Params Parms{};

	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Generate Player Choices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumChoicesToGenerate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForRandomDistro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                LatePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalPlayerIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumChoices                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        Temp_BSChoices                                                   (Edit, BlueprintVisible)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnBSChoice                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_AddVerb_ServerOnly_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnBSChoice                CallFunc_Create_New_Bullshit_Card_Option_New_Card                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Generate_Player_Choices(int32 NumChoicesToGenerate, bool ForRandomDistro, class AQtnBodyPawn* LatePlayer, int32 PlayerIndex, int32 LocalPlayerIndex, int32 NumChoices, const TArray<struct FQtnBSChoice>& Temp_BSChoices, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FQtnBSChoice& CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FQtnBSChoice& CallFunc_Create_New_Bullshit_Card_Option_New_Card, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Generate Player Choices");

	Params::ATribunal_Manager_Actor_C_Generate_Player_Choices_Params Parms{};

	Parms.NumChoicesToGenerate = NumChoicesToGenerate;
	Parms.ForRandomDistro = ForRandomDistro;
	Parms.LatePlayer = LatePlayer;
	Parms.PlayerIndex = PlayerIndex;
	Parms.LocalPlayerIndex = LocalPlayerIndex;
	Parms.NumChoices = NumChoices;
	Parms.Temp_BSChoices = Temp_BSChoices;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AddVerb_ServerOnly_ReturnValue = CallFunc_AddVerb_ServerOnly_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Create_New_Bullshit_Card_Option_New_Card = CallFunc_Create_New_Bullshit_Card_Option_New_Card;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_currentPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OnRep_currentPhase(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_currentPhase");

	Params::ATribunal_Manager_Actor_C_OnRep_currentPhase_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_currentRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OnRep_currentRound(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_currentRound");

	Params::ATribunal_Manager_Actor_C_OnRep_currentRound_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnRep_hasTribunalStarted
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1               (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OnRep_hasTribunalStarted(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnRep_hasTribunalStarted");

	Params::ATribunal_Manager_Actor_C_OnRep_hasTribunalStarted_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1 = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_1 = CallFunc_GetLocalPlayerOriginalBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.InitializeTribunal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyLeaderClass                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UEnemyPlacementComp_C*>EnemyActorPlacement                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPlayerNameplateManagerComponent*CallFunc_GetQtnNameplateManagerComponent_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AScriptedSkeletalActor_Trial_C>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerPlacementComp_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfPlayers_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UEnemyPlacementComp_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UEnemyPlacementComp_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetClassToSpawn_class                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AButtersWBook_Actor_BP_C*    CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_5                    (IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Active_Arena_Director_Active_Arena_Index            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADirector_C*                 CallFunc_Get_Active_Arena_Director_Active_Director               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayerPlacementComp_C*>CallFunc_K2_GetComponentsByClass_ReturnValue_1                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerState*>     CallFunc_GetAllPlayerStates_currentPlayerStates                  (ReferenceParm)
// class AQtnPlayerState*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTribunal_Screen_C*          CallFunc_RegisterScreen_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_UserWidget_C*      K2Node_DynamicCast_AsTribunal_User_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::InitializeTribunal(class UClass* EnemyLeaderClass, const TArray<class UEnemyPlacementComp_C*>& EnemyActorPlacement, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UQtnPlayerNameplateManagerComponent* CallFunc_GetQtnNameplateManagerComponent_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TSoftClassPtr<class AScriptedSkeletalActor_Trial_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, int32 CallFunc_GetNumberOfPlayers_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, TArray<class UEnemyPlacementComp_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UEnemyPlacementComp_C* CallFunc_Array_Get_Item_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, class UClass* CallFunc_GetClassToSpawn_class, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class AButtersWBook_Actor_BP_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_5, class AScriptedSkeletalActor_Trial_C* CallFunc_FinishSpawningActor_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class AScriptedSkeletalActor_Trial_C* CallFunc_FinishSpawningActor_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Get_Active_Arena_Director_Active_Arena_Index, class ADirector_C* CallFunc_Get_Active_Arena_Director_Active_Director, TArray<class UPlayerPlacementComp_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, TArray<class AQtnPlayerState*>& CallFunc_GetAllPlayerStates_currentPlayerStates, class AQtnPlayerState* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class AQtnPlayerPawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UTribunal_Screen_C* CallFunc_RegisterScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UTribunal_UserWidget_C* K2Node_DynamicCast_AsTribunal_User_Widget, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "InitializeTribunal");

	Params::ATribunal_Manager_Actor_C_InitializeTribunal_Params Parms{};

	Parms.EnemyLeaderClass = EnemyLeaderClass;
	Parms.EnemyActorPlacement = EnemyActorPlacement;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetQtnNameplateManagerComponent_ReturnValue = CallFunc_GetQtnNameplateManagerComponent_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_GetNumberOfPlayers_ReturnValue = CallFunc_GetNumberOfPlayers_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_GetClassToSpawn_class = CallFunc_GetClassToSpawn_class;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_5 = CallFunc_K2_GetComponentToWorld_ReturnValue_5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Get_Active_Arena_Director_Active_Arena_Index = CallFunc_Get_Active_Arena_Director_Active_Arena_Index;
	Parms.CallFunc_Get_Active_Arena_Director_Active_Director = CallFunc_Get_Active_Arena_Director_Active_Director;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = CallFunc_K2_GetComponentsByClass_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetAllPlayerStates_currentPlayerStates = CallFunc_GetAllPlayerStates_currentPlayerStates;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_RegisterScreen_ReturnValue = CallFunc_RegisterScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTribunal_User_Widget = K2Node_DynamicCast_AsTribunal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATribunal_Manager_Actor_C::UserConstructionScript(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "UserConstructionScript");

	Params::ATribunal_Manager_Actor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.BloomWipe__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::BloomWipe__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "BloomWipe__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.BloomWipe__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::BloomWipe__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "BloomWipe__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StormOutTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::StormOutTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StormOutTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StormOutTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::StormOutTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StormOutTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ButtersGlow__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ButtersGlow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ButtersGlow__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ButtersGlow__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ButtersGlow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ButtersGlow__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FanOutBS__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::FanOutBS__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FanOutBS__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FanOutBS__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::FanOutBS__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FanOutBS__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnLoaded_1C0599C44DC9846FFBDB32B452C24E87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::OnLoaded_1C0599C44DC9846FFBDB32B452C24E87(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnLoaded_1C0599C44DC9846FFBDB32B452C24E87");

	Params::ATribunal_Manager_Actor_C_OnLoaded_1C0599C44DC9846FFBDB32B452C24E87_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetupUpgradeStationComponentEventListeners
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::SetupUpgradeStationComponentEventListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetupUpgradeStationComponentEventListeners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnUpgradeProcessBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::OnUpgradeProcessBegin(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnUpgradeProcessBegin");

	Params::ATribunal_Manager_Actor_C_OnUpgradeProcessBegin_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnUpgradeProcessComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::OnUpgradeProcessComplete(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnUpgradeProcessComplete");

	Params::ATribunal_Manager_Actor_C_OnUpgradeProcessComplete_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnUpgradeRerollEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::OnUpgradeRerollEvent(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnUpgradeRerollEvent");

	Params::ATribunal_Manager_Actor_C_OnUpgradeRerollEvent_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnUpgradeCardsArrayUpdatedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::OnUpgradeCardsArrayUpdatedEvent(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnUpgradeCardsArrayUpdatedEvent");

	Params::ATribunal_Manager_Actor_C_OnUpgradeCardsArrayUpdatedEvent_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ProcessPendingSessions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ProcessPendingSessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ProcessPendingSessions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ProcessPendingCardDeals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ProcessPendingCardDeals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ProcessPendingCardDeals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_TribunalExitCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_TribunalExitCalled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_TribunalExitCalled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_TribunalInitializationComplete_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_TribunalInitializationComplete_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_TribunalInitializationComplete_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_IterateNextRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_IterateNextRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_IterateNextRound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_StartKyleRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_StartKyleRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_StartKyleRound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_StartPlayerRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_StartPlayerRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_StartPlayerRound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_SetupPlayerChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::Event_SetupPlayerChoice(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_SetupPlayerChoice");

	Params::ATribunal_Manager_Actor_C_Event_SetupPlayerChoice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_PostPlayerSelection
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_PostPlayerSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_PostPlayerSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_TribunalOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_TribunalOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_TribunalOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_ChoiceConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           ChoosingPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::Event_ChoiceConfirmed(int32 ChoiceIndex, class ABodyPawnPlayer_C* ChoosingPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_ChoiceConfirmed");

	Params::ATribunal_Manager_Actor_C_Event_ChoiceConfirmed_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.ChoosingPlayer = ChoosingPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Event_RefreshTribunalUI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Event_RefreshTribunalUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Event_RefreshTribunalUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StartTribunal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::StartTribunal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StartTribunal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ChoiceMade_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ChoiceMade_MULTI(int32 ChoiceIndex, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ChoiceMade_MULTI");

	Params::ATribunal_Manager_Actor_C_ChoiceMade_MULTI_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.CardsPlayed_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnBSChoice                Choice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerChoice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WantResponse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::CardsPlayed_MULTI(const struct FQtnBSChoice& Choice, bool PlayerChoice, int32 Seed, bool WantResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "CardsPlayed_MULTI");

	Params::ATribunal_Manager_Actor_C_CardsPlayed_MULTI_Params Parms{};

	Parms.Choice = Choice;
	Parms.PlayerChoice = PlayerChoice;
	Parms.Seed = Seed;
	Parms.WantResponse = WantResponse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.CardPlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABS_Choice_Card_C*           Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::CardPlayed(class ABS_Choice_Card_C* Card, bool PlayerCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "CardPlayed");

	Params::ATribunal_Manager_Actor_C_CardPlayed_Params Parms{};

	Parms.Card = Card;
	Parms.PlayerCard = PlayerCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.CameraSetupEndRound_MULTI
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABodyPawnBase_C*>     ReactionArray                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::CameraSetupEndRound_MULTI(TArray<class ABodyPawnBase_C*>& ReactionArray, int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "CameraSetupEndRound_MULTI");

	Params::ATribunal_Manager_Actor_C_CameraSetupEndRound_MULTI_Params Parms{};

	Parms.ReactionArray = ReactionArray;
	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.EndBullshit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::EndBullshit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "EndBullshit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.IntroCinematic_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::IntroCinematic_MULTI(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "IntroCinematic_MULTI");

	Params::ATribunal_Manager_Actor_C_IntroCinematic_MULTI_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Round1Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Round1Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Round1Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.RoundNotifyPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::RoundNotifyPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "RoundNotifyPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.RoundAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::RoundAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "RoundAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.VisualSetup_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::VisualSetup_MULTI(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "VisualSetup_MULTI");

	Params::ATribunal_Manager_Actor_C_VisualSetup_MULTI_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SlapAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::SlapAnim(bool Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SlapAnim");

	Params::ATribunal_Manager_Actor_C_SlapAnim_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ButtersAnimIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ButtersAnimIntro(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ButtersAnimIntro");

	Params::ATribunal_Manager_Actor_C_ButtersAnimIntro_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ReceiveTick");

	Params::ATribunal_Manager_Actor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.BullShitCallout_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::BullShitCallout_Multi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "BullShitCallout_Multi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.InitializeCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::InitializeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "InitializeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DelayTribunal_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::DelayTribunal_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DelayTribunal_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DelayTribunal_MULTICast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewTime                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::DelayTribunal_MULTICast(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DelayTribunal_MULTICast");

	Params::ATribunal_Manager_Actor_C_DelayTribunal_MULTICast_Params Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OutroCinematic_NULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CleanUpOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::OutroCinematic_NULTI(int32 Seed, bool CleanUpOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OutroCinematic_NULTI");

	Params::ATribunal_Manager_Actor_C_OutroCinematic_NULTI_Params Parms{};

	Parms.Seed = Seed;
	Parms.CleanUpOnly = CleanUpOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.HideAIInArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unhide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::HideAIInArea(bool Unhide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "HideAIInArea");

	Params::ATribunal_Manager_Actor_C_HideAIInArea_Params Parms{};

	Parms.Unhide = Unhide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.UnhideEnemyActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::UnhideEnemyActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "UnhideEnemyActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayerCameIn_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::PlayerCameIn_Server(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayerCameIn_Server");

	Params::ATribunal_Manager_Actor_C_PlayerCameIn_Server_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.LateJoinSetup_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::LateJoinSetup_Multi(class AQtnBodyPawn* Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "LateJoinSetup_Multi");

	Params::ATribunal_Manager_Actor_C_LateJoinSetup_Multi_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.HideLocalPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               beHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::HideLocalPlayers(bool beHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "HideLocalPlayers");

	Params::ATribunal_Manager_Actor_C_HideLocalPlayers_Params Parms{};

	Parms.beHidden = beHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.IntroExchangeCinematic_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::IntroExchangeCinematic_MULTI(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "IntroExchangeCinematic_MULTI");

	Params::ATribunal_Manager_Actor_C_IntroExchangeCinematic_MULTI_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayerLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PlayerLeft(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayerLeft");

	Params::ATribunal_Manager_Actor_C_PlayerLeft_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ActorSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSpawner*                 Spawner                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpawnedActor                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ActorSpawned(class AQtnSpawner* Spawner, class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ActorSpawned");

	Params::ATribunal_Manager_Actor_C_ActorSpawned_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PreTrialPrep_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyPawnPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PreTrialPrep_Multi(class ABodyPawnPlayer_C* BodyPawnPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PreTrialPrep_Multi");

	Params::ATribunal_Manager_Actor_C_PreTrialPrep_Multi_Params Parms{};

	Parms.BodyPawnPlayer = BodyPawnPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PreTrialPrep_Local
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           bodyPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PreTrialPrep_Local(class ABodyPawnPlayer_C* bodyPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PreTrialPrep_Local");

	Params::ATribunal_Manager_Actor_C_PreTrialPrep_Local_Params Parms{};

	Parms.bodyPlayer = bodyPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ServerRemovePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyPawnPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ServerRemovePlayer(class ABodyPawnPlayer_C* BodyPawnPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ServerRemovePlayer");

	Params::ATribunal_Manager_Actor_C_ServerRemovePlayer_Params Parms{};

	Parms.BodyPawnPlayer = BodyPawnPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayEnemyHand_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::PlayEnemyHand_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayEnemyHand_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.KyleCardCloseup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::KyleCardCloseup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "KyleCardCloseup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.KyleCardCloseup_Multi
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::KyleCardCloseup_Multi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "KyleCardCloseup_Multi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.TrialSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::TrialSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "TrialSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.EndTrial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::EndTrial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "EndTrial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DisconnectListenEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::DisconnectListenEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DisconnectListenEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ListenForLateJoinerForRandomBS
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ListenForLateJoinerForRandomBS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ListenForLateJoinerForRandomBS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.VeryLateJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::VeryLateJoin(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "VeryLateJoin");

	Params::ATribunal_Manager_Actor_C_VeryLateJoin_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ChoiceConfirmedSimultaneous_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerSlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ChoiceConfirmedSimultaneous_Server(int32 ChoiceIndex, int32 PlayerSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ChoiceConfirmedSimultaneous_Server");

	Params::ATribunal_Manager_Actor_C_ChoiceConfirmedSimultaneous_Server_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.PlayerSlotIndex = PlayerSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PresentAllPlayerChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::PresentAllPlayerChoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PresentAllPlayerChoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.MakeBSChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerNumber                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::MakeBSChoices(int32 PlayerNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "MakeBSChoices");

	Params::ATribunal_Manager_Actor_C_MakeBSChoices_Params Parms{};

	Parms.PlayerNumber = PlayerNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.LateJoineChoiceRetry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::LateJoineChoiceRetry(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "LateJoineChoiceRetry");

	Params::ATribunal_Manager_Actor_C_LateJoineChoiceRetry_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetCardToReplaceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::SetCardToReplaceLocal(int32 CardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetCardToReplaceLocal");

	Params::ATribunal_Manager_Actor_C_SetCardToReplaceLocal_Params Parms{};

	Parms.CardIndex = CardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.MakeUpgradeChoiceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::MakeUpgradeChoiceLocal(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "MakeUpgradeChoiceLocal");

	Params::ATribunal_Manager_Actor_C_MakeUpgradeChoiceLocal_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.UpgradeCoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::UpgradeCoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "UpgradeCoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PlayerFinished(class ABodyPawnPlayer_C* PlayerBody, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayerFinished");

	Params::ATribunal_Manager_Actor_C_PlayerFinished_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ImproveCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ImproveCard(int32 CardIndex, class ABodyPawnPlayer_C* PlayerBody, int32 OldCurrency, int32 UpgradeCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ImproveCard");

	Params::ATribunal_Manager_Actor_C_ImproveCard_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.PlayerBody = PlayerBody;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.RecordUpgradeForTribunal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ATribunal_Manager_Actor_C::RecordUpgradeForTribunal(const struct FQtnRolledUpgradeResult& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "RecordUpgradeForTribunal");

	Params::ATribunal_Manager_Actor_C_RecordUpgradeForTribunal_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayerBSPlay_MULTI
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnBSChoice>        BSArray                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               PlayerArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              StreamSeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PlayerBSPlay_MULTI(TArray<struct FQtnBSChoice>& BSArray, bool PlayerArray, int32 StreamSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayerBSPlay_MULTI");

	Params::ATribunal_Manager_Actor_C_PlayerBSPlay_MULTI_Params Parms{};

	Parms.BSArray = BSArray;
	Parms.PlayerArray = PlayerArray;
	Parms.StreamSeed = StreamSeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayCurrentCards
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABS_Choice_Card_C*>   CurCards                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class USceneComponent*>     TargetComponents                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUpgrades                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::PlayCurrentCards(TArray<class ABS_Choice_Card_C*>& CurCards, TArray<class USceneComponent*>& TargetComponents, bool Player, bool IsUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayCurrentCards");

	Params::ATribunal_Manager_Actor_C_PlayCurrentCards_Params Parms{};

	Parms.CurCards = CurCards;
	Parms.TargetComponents = TargetComponents;
	Parms.Player = Player;
	Parms.IsUpgrades = IsUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayUpgrades
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>Array                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATribunal_Manager_Actor_C::PlayUpgrades(TArray<struct FQtnRolledUpgradeResult>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayUpgrades");

	Params::ATribunal_Manager_Actor_C_PlayUpgrades_Params Parms{};

	Parms.Array = Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayEnemyBS
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnBSChoice>        EnemyBS                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATribunal_Manager_Actor_C::PlayEnemyBS(TArray<struct FQtnBSChoice>& EnemyBS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayEnemyBS");

	Params::ATribunal_Manager_Actor_C_PlayEnemyBS_Params Parms{};

	Parms.EnemyBS = EnemyBS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PlayEnemyUpgrades
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>EnemyUpgrades                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATribunal_Manager_Actor_C::PlayEnemyUpgrades(TArray<struct FQtnRolledUpgradeResult>& EnemyUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PlayEnemyUpgrades");

	Params::ATribunal_Manager_Actor_C_PlayEnemyUpgrades_Params Parms{};

	Parms.EnemyUpgrades = EnemyUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Finish Enemy Turn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Finish_Enemy_Turn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Finish Enemy Turn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.TimeExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::TimeExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "TimeExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ForceBSChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::ForceBSChoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ForceBSChoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ToggleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ToggleTimer(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ToggleTimer");

	Params::ATribunal_Manager_Actor_C_ToggleTimer_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Play Grousing VO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Play_Grousing_VO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Play Grousing VO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Stop Grousing VO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Stop_Grousing_VO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Stop Grousing VO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.LateJoinGameplayReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::LateJoinGameplayReady(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "LateJoinGameplayReady");

	Params::ATribunal_Manager_Actor_C_LateJoinGameplayReady_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Play Cards VO
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABS_Choice_Card_C*>   CardsPlayed                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsPlayer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUpgrades                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::Play_Cards_VO(TArray<class ABS_Choice_Card_C*>& CardsPlayed, bool IsPlayer, bool IsUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Play Cards VO");

	Params::ATribunal_Manager_Actor_C_Play_Cards_VO_Params Parms{};

	Parms.CardsPlayed = CardsPlayed;
	Parms.IsPlayer = IsPlayer;
	Parms.IsUpgrades = IsUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Try Finish Playing Current Cards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Try_Finish_Playing_Current_Cards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Try Finish Playing Current Cards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.Play Hurry Up VO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::Play_Hurry_Up_VO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "Play Hurry Up VO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.StanAxeJumpToCards
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::StanAxeJumpToCards(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "StanAxeJumpToCards");

	Params::ATribunal_Manager_Actor_C_StanAxeJumpToCards_Params Parms{};

	Parms.Seed = Seed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.TrialCleanUpOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::TrialCleanUpOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "TrialCleanUpOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SetUpEnemyBSDirectly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::SetUpEnemyBSDirectly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SetUpEnemyBSDirectly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.SkipTrialInEditor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::SkipTrialInEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "SkipTrialInEditor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DoAdvanceSequenceServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::DoAdvanceSequenceServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DoAdvanceSequenceServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DoEventChoiceConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           ChoosingPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::DoEventChoiceConfirmed(int32 ChoiceIndex, class ABodyPawnPlayer_C* ChoosingPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DoEventChoiceConfirmed");

	Params::ATribunal_Manager_Actor_C_DoEventChoiceConfirmed_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.ChoosingPlayer = ChoosingPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.OnTribunalUpgradeChoice_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::OnTribunalUpgradeChoice_Local()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "OnTribunalUpgradeChoice_Local");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.STD Cosmetic Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::STD_Cosmetic_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "STD Cosmetic Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.PreLoadUpgradeDisplayIcons_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   DisplayIcon                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::PreLoadUpgradeDisplayIcons_MULTI(TSoftObjectPtr<class UTexture2D> DisplayIcon, class ABodyPawnPlayer_C* TargetPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "PreLoadUpgradeDisplayIcons_MULTI");

	Params::ATribunal_Manager_Actor_C_PreLoadUpgradeDisplayIcons_MULTI_Params Parms{};

	Parms.DisplayIcon = DisplayIcon;
	Parms.TargetPlayer = TargetPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.DestroyCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::DestroyCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "DestroyCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FadeNoSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::FadeNoSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FadeNoSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.FadeUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::FadeUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "FadeUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ProcessLateJoiner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                LateJoiner                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ProcessLateJoiner(class AQtnBodyPawn* LateJoiner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ProcessLateJoiner");

	Params::ATribunal_Manager_Actor_C_ProcessLateJoiner_Params Parms{};

	Parms.LateJoiner = LateJoiner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.CheckUnprocessedLateJoiners
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::CheckUnprocessedLateJoiners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "CheckUnprocessedLateJoiners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATribunal_Manager_Actor_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ReceiveEndPlay");

	Params::ATribunal_Manager_Actor_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.ExecuteUbergraph_Tribunal_Manager_Actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_6                                           (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_7                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_8                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_9                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_10                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_11                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_12                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_13                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_10                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_14                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_11                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_15                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_2                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_13                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_16                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_14                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_15                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_17                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_16                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_17                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_3                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_18                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_18                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_19                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_19                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_20                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_MakeStruct_Vector4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_MakeStruct_Vector4_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_27                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_21                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue_14           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_22                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_28                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_29                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_20                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_21                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_22                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnBSChoice>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_23                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_4                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_24                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_5                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_25                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_26                                          (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_6                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_choiceIndex_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_choosingPlayer                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_choiceIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                K2Node_CustomEvent_choice                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlayerChoice                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_seed_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wantResponse                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           K2Node_CustomEvent_card                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_playerCard                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_27                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_28                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_7                                          (NoDestructor, HasGetValueTypeHash)
// TArray<class ABodyPawnBase_C*>     K2Node_CustomEvent_ReactionArray                                 (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              K2Node_CustomEvent_seed_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_seed_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue_1                          (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_29                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_30                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_31                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_8                                          (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_player_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult_1            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              K2Node_CustomEvent_seed_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Active_Arena_Director_Active_Arena_Index            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADirector_C*                 CallFunc_Get_Active_Arena_Director_Active_Director               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_newTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_seed_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CleanUpOnly                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue_2                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings_1                          (None)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_unhide                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_9                                          (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_2                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_2                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer_1                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_Body                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_32                                          (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_beHidden                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_seed_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue_3                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_33                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_34                                          (NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_1                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_1                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_10                                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolFromStream_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_35                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSpawner*                 K2Node_CustomEvent_spawner                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SpawnedActor                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_bodypawnPlayer_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_7                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_bodyPlayer                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_8                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_36                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_11                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_37                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_38                                          (NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_bodypawnPlayer                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_12                                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_DynamicCast_AsPlayer_Upgrade_Session_State                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_9                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnemyBSManagerComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HowManyChoicesForPlayer_numChoices                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_10                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_choiceIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerSlotIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_39                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_40                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_13                                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_41                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_42                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        CallFunc_GetChoiceArrayForPlayer_BSChoiceArray                   (ReferenceParm)
// int32                              K2Node_CustomEvent_PlayerNumber                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_43                                          (NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_14                                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindNullPlayerEntry_nullPlayer                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_44                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_45                                          (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CardIndex_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChoiceIndex_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_46                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_Event_PlayerBody_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChoiceIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CardIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_Event_PlayerBody                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_oldCurrency                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_upgradeCost                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     K2Node_Event_Upgrade                                             (None)
// TArray<struct FQtnBSChoice>        K2Node_CustomEvent_BSArray                                       (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_PlayerArray                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_StreamSeed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue_4                          (ZeroConstructor, NoDestructor)
// struct FQtnBSChoice                CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_15                                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_47                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_48                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_16                                         (NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult_2            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class ABS_Choice_Card_C*>   K2Node_CustomEvent_CurCards                                      (ConstParm, ReferenceParm)
// TArray<class USceneComponent*>     K2Node_CustomEvent_TargetComponents                              (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_player                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUpgrades_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_Array_Get_Item_16                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_17                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_23                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_49                                          (NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_17                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_Array_Get_Item_18                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_18                                         (NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FQtnRolledUpgradeResult>K2Node_CustomEvent_Array                                         (ConstParm, ReferenceParm)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_20                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_50                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_19                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_4                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FQtnBSChoice>        K2Node_CustomEvent_EnemyBS                                       (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item_21                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_51                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_20                                         (NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FQtnRolledUpgradeResult>K2Node_CustomEvent_EnemyUpgrades                                 (ConstParm, ReferenceParm)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_22                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_5                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_11                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_sequenceAdvanceCheck_sequenceFinished_6                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_24                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_5                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_6                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgrade_Choice_Card_C*      CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult_3            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult_4            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_7                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgrade_Choice_Card_C*      CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorRelativeRotation_SweepHitResult_5            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_52                                          (NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_6                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               Temp_bool_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolFromStream_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_53                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_localOccupiedBodyPawn                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_54                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_12                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABS_Choice_Card_C*>   K2Node_CustomEvent_cardsPlayed                                   (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_isPlayer                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUpgrades                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_21                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_22                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_23                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_24                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_24                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_25                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameplayTag>        CallFunc_GetUniqueVOContexts_uniqueVOContexts                    (ReferenceParm)
// struct FGameplayTag                K2Node_Select_Default_25                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item_29                                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_26                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetBestPlayerUpgradeVOContext_bestVOContext             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_27                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_C*    K2Node_Select_Default_26                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_2                    (None)
// struct FGameplayTag                Temp_struct_Variable_55                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_56                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_57                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_27                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_58                                          (NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_C*    K2Node_Select_Default_28                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_3                    (None)
// bool                               Temp_bool_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_29                                         (NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_C*    K2Node_Select_Default_30                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_4                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_5                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_6                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_7                    (None)
// int32                              K2Node_CustomEvent_seed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue_5                          (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_59                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_60                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_31                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_61                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_30                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_31                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_7                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_32                                         (NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalCombatSettings_C*     K2Node_DynamicCast_AsGlobal_Combat_Settings                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ChoiceIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_Event_choosingPlayer                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_33                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_28                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_34                                         (NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_8                    (None)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_9                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_10                   (None)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingEnemy_grousingEnemy                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingEnemy_grousingEnemy_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_11                   (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_12                   (None)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_29                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_35                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_62                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumberOfPlayers_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_36                                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceSettings*CallFunc_GetCharacterAppearanceSettings_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_63                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBodyMeshClass_success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnCharacterBodyMesh>CallFunc_GetBodyMeshClass_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_40                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_13                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_37                                         (NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_DisplayIcon                                   (ConstParm, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_TargetPlayer                                  (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetVaultCosmeticsData_ReturnValue                       (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPlayerNameplateManagerComponent*CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_32                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_14                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasScriptedGrousing_hasScriptedGrousing                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_13                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_14                   (None)
// struct FTribunal_GrousingScriptedVOCallFunc_Array_Get_Item_33                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_23                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_C*    CallFunc_GetGrousingFriend_grousingFriend_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default_38                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_39                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_LateJOiner                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_QtnGetUniqueId_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_8                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_34                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_24                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGlobalRunProgress*       CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPlayerRunProgress*       CallFunc_GetPlayerRunProgressFromUniqueNetId_ServerOnly_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerSubProgress_Upgrades_C*CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUpgrades_HasUpgrades_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATribunal_Manager_Actor_C::ExecuteUbergraph_Tribunal_Manager_Actor(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_MakeLiteralBool_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_MakeLiteralBool_ReturnValue_2, bool CallFunc_MakeLiteralBool_ReturnValue_3, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue_3, bool CallFunc_IsGameplayTagValid_ReturnValue_4, bool CallFunc_MakeLiteralBool_ReturnValue_4, bool Temp_bool_Variable, class UAnimSequence* Temp_object_Variable, bool Temp_bool_Variable_1, bool CallFunc_MakeLiteralBool_ReturnValue_5, class AActor* Temp_object_Variable_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue_5, bool Temp_bool_Variable_2, bool CallFunc_IsGameplayTagValid_ReturnValue_6, class UClass* Temp_class_Variable, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_MakeLiteralBool_ReturnValue_6, const struct FGameplayTag& Temp_struct_Variable_2, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3, bool CallFunc_MakeLiteralBool_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTag& Temp_struct_Variable_3, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_4, class UObject* Temp_object_Variable_2, const struct FGameplayTag& K2Node_Select_Default_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_MakeLiteralBool_ReturnValue_8, const class FString& Temp_string_Variable, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_4, bool CallFunc_MakeLiteralBool_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool Temp_bool_Variable_5, bool CallFunc_MakeLiteralBool_ReturnValue_10, const struct FGameplayTag& Temp_struct_Variable_6, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_5, bool CallFunc_IsGameplayTagValid_ReturnValue_7, const struct FGameplayTag& Temp_struct_Variable_7, bool CallFunc_MakeLiteralBool_ReturnValue_11, bool Temp_bool_Variable_6, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_8, const struct FGameplayTag& Temp_struct_Variable_9, bool Temp_bool_Variable_7, const struct FGameplayTag& Temp_struct_Variable_10, const struct FGameplayTag& Temp_struct_Variable_11, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, const struct FGameplayTag& Temp_struct_Variable_12, const struct FGameplayTag& Temp_struct_Variable_13, bool CallFunc_MakeLiteralBool_ReturnValue_12, bool Temp_bool_Variable_11, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_6, bool CallFunc_IsGameplayTagValid_ReturnValue_8, bool CallFunc_IsGameplayTagValid_ReturnValue_9, bool Temp_bool_Variable_12, bool CallFunc_MakeLiteralBool_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_MakeLiteralBool_ReturnValue_14, bool CallFunc_IsGameplayTagValid_ReturnValue_10, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_7, bool CallFunc_MakeLiteralBool_ReturnValue_15, const struct FGameplayTag& Temp_struct_Variable_14, bool CallFunc_MakeLiteralBool_ReturnValue_16, bool CallFunc_IsGameplayTagValid_ReturnValue_11, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_8, bool CallFunc_MakeLiteralBool_ReturnValue_17, const struct FGameplayTag& Temp_struct_Variable_15, bool Temp_bool_Variable_13, bool CallFunc_MakeLiteralBool_ReturnValue_18, const struct FGameplayTag& K2Node_Select_Default_2, bool CallFunc_IsGameplayTagValid_ReturnValue_12, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_9, bool CallFunc_IsGameplayTagValid_ReturnValue_13, bool CallFunc_MakeLiteralBool_ReturnValue_19, const struct FGameplayTag& Temp_struct_Variable_16, bool CallFunc_MakeLiteralBool_ReturnValue_20, bool CallFunc_IsGameplayTagValid_ReturnValue_14, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_10, bool CallFunc_IsGameplayTagValid_ReturnValue_15, bool CallFunc_MakeLiteralBool_ReturnValue_21, const struct FGameplayTag& Temp_struct_Variable_17, bool CallFunc_MakeLiteralBool_ReturnValue_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsGameplayTagValid_ReturnValue_16, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_11, bool CallFunc_IsGameplayTagValid_ReturnValue_17, bool CallFunc_MakeLiteralBool_ReturnValue_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_14, bool CallFunc_MakeLiteralBool_ReturnValue_24, int32 Temp_int_Loop_Counter_Variable_3, const struct FGameplayTag& K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsGameplayTagValid_ReturnValue_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& Temp_struct_Variable_18, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_12, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, const struct FGameplayTag& Temp_struct_Variable_19, bool Temp_bool_Variable_15, bool CallFunc_MakeLiteralBool_ReturnValue_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_13, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_19, bool CallFunc_IsGameplayTagValid_ReturnValue_20, bool CallFunc_MakeLiteralBool_ReturnValue_26, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FVector4& K2Node_MakeStruct_Vector4, const struct FVector4& K2Node_MakeStruct_Vector4_1, bool CallFunc_MakeLiteralBool_ReturnValue_27, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, bool CallFunc_IsGameplayTagValid_ReturnValue_21, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_14, bool CallFunc_IsGameplayTagValid_ReturnValue_22, bool CallFunc_MakeLiteralBool_ReturnValue_28, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_MakeLiteralBool_ReturnValue_29, int32 Temp_int_Loop_Counter_Variable_5, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayTag& Temp_struct_Variable_20, const struct FGameplayTag& Temp_struct_Variable_21, int32 Temp_int_Loop_Counter_Variable_6, const struct FGameplayTag& Temp_struct_Variable_22, int32 CallFunc_Add_IntInt_ReturnValue_6, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_3, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_2, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_1, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, TArray<struct FQtnBSChoice>& K2Node_MakeArray_Array, bool Temp_bool_Variable_16, const struct FGameplayTag& Temp_struct_Variable_23, const struct FGameplayTag& K2Node_Select_Default_4, const struct FGameplayTag& Temp_struct_Variable_24, bool Temp_bool_Variable_17, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsReadyForGameplay_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsReadyForGameplay_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_25, const struct FGameplayTag& Temp_struct_Variable_26, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Variable_18, const struct FGameplayTag& K2Node_Select_Default_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 K2Node_CustomEvent_PlayerIndex_2, bool CallFunc_IsServer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 K2Node_CustomEvent_choiceIndex_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_choosingPlayer, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, int32 K2Node_CustomEvent_choiceIndex_1, int32 K2Node_CustomEvent_PlayerIndex_1, const struct FQtnBSChoice& K2Node_CustomEvent_choice, bool K2Node_CustomEvent_PlayerChoice, int32 K2Node_CustomEvent_seed_6, bool K2Node_CustomEvent_wantResponse, class ABS_Choice_Card_C* K2Node_CustomEvent_card, bool K2Node_CustomEvent_playerCard, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABS_Choice_Card_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FGameplayTag& Temp_struct_Variable_27, bool Temp_bool_Variable_19, const struct FGameplayTag& Temp_struct_Variable_28, const struct FGameplayTag& K2Node_Select_Default_7, TArray<class ABodyPawnBase_C*>& K2Node_CustomEvent_ReactionArray, int32 K2Node_CustomEvent_seed_5, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, bool Temp_bool_IsClosed_Variable_1, int32 K2Node_CustomEvent_seed_4, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_29, int32 Temp_int_Array_Index_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, const struct FGameplayTag& Temp_struct_Variable_30, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_IsServer_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_8, bool K2Node_CustomEvent_starting, int32 Temp_int_Array_Index_Variable_8, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_31, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable_20, const struct FGameplayTag& K2Node_Select_Default_8, bool K2Node_CustomEvent_player_1, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult_1, int32 K2Node_CustomEvent_seed_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, float K2Node_Event_DeltaSeconds, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Get_Active_Arena_Director_Active_Arena_Index, class ADirector_C* CallFunc_Get_Active_Arena_Director_Active_Director, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, float K2Node_CustomEvent_newTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_3, int32 K2Node_CustomEvent_seed_2, bool K2Node_CustomEvent_CleanUpOnly, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float CallFunc_Montage_Play_ReturnValue_2, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings_1, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, int32 CallFunc_Array_AddUnique_ReturnValue, bool K2Node_CustomEvent_unhide, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool Temp_bool_Variable_21, const struct FGameplayTag& K2Node_Select_Default_9, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_9, class AScriptedSkeletalActor_Trial_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_2, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_2, bool K2Node_CustomEvent_isLocalPlayer_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_5, class AQtnBodyPawn* K2Node_CustomEvent_Body, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_5, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_3, bool CallFunc_IsReadyForGameplay_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_32, bool K2Node_CustomEvent_beHidden, int32 K2Node_CustomEvent_seed_1, bool CallFunc_sequenceAdvanceCheck_sequenceFinished, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_6, int32 Temp_int_Array_Index_Variable_10, class AQtnBodyPawn* CallFunc_Array_Get_Item_3, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsDedicatedServer_ReturnValue_5, bool Temp_bool_Variable_22, const struct FGameplayTag& Temp_struct_Variable_33, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_1, const struct FGameplayTag& Temp_struct_Variable_34, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_7, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_10, bool Temp_bool_Variable_23, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FGameplayTag& K2Node_Select_Default_10, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Array_Index_Variable_11, bool CallFunc_RandomBoolFromStream_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_35, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AQtnSpawner* K2Node_CustomEvent_spawner, class AActor* K2Node_CustomEvent_SpawnedActor, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_2, bool K2Node_DynamicCast_bSuccess_8, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_9, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetRandomValue_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, int32 CallFunc_Array_AddUnique_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsReadyForGameplay_ReturnValue_3, class ABodyPawnPlayer_C* K2Node_CustomEvent_bodypawnPlayer_1, int32 Temp_int_Loop_Counter_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_12, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_7, bool CallFunc_IsReadyForGameplay_ReturnValue_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_4, class ABodyPawnPlayer_C* K2Node_CustomEvent_bodyPlayer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_8, bool CallFunc_IsReadyForGameplay_ReturnValue_5, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_10, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTag& Temp_struct_Variable_36, bool Temp_bool_Variable_24, const struct FGameplayTag& K2Node_Select_Default_11, bool CallFunc_IsPlayingInEditor_ReturnValue, int32 Temp_int_Array_Index_Variable_12, const struct FGameplayTag& Temp_struct_Variable_37, const struct FGameplayTag& Temp_struct_Variable_38, class ABodyPawnPlayer_C* K2Node_CustomEvent_bodypawnPlayer, bool Temp_bool_Variable_25, const struct FGameplayTag& K2Node_Select_Default_12, int32 Temp_int_Loop_Counter_Variable_12, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 Temp_int_Array_Index_Variable_13, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 Temp_int_Array_Index_Variable_14, class UQtnUpgradeSession* CallFunc_Array_Get_Item_4, class UPlayerUpgradeSessionState_C* K2Node_DynamicCast_AsPlayer_Upgrade_Session_State, bool K2Node_DynamicCast_bSuccess_11, int32 CallFunc_Array_Add_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_9, class UEnemyBSManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_5, int32 CallFunc_HowManyChoicesForPlayer_numChoices, int32 Temp_int_Loop_Counter_Variable_13, int32 CallFunc_Add_IntInt_ReturnValue_14, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_CustomEvent_choiceIndex, int32 K2Node_CustomEvent_PlayerSlotIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_15, const struct FGameplayTag& Temp_struct_Variable_39, int32 CallFunc_Array_Length_ReturnValue_7, const struct FGameplayTag& Temp_struct_Variable_40, bool Temp_bool_Variable_26, const struct FGameplayTag& K2Node_Select_Default_13, int32 CallFunc_Array_Find_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_14, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 Temp_int_Array_Index_Variable_15, const struct FGameplayTag& Temp_struct_Variable_41, int32 Temp_int_Loop_Counter_Variable_15, int32 CallFunc_Add_IntInt_ReturnValue_17, const struct FGameplayTag& Temp_struct_Variable_42, int32 Temp_int_Array_Index_Variable_16, TArray<struct FQtnBSChoice>& CallFunc_GetChoiceArrayForPlayer_BSChoiceArray, int32 K2Node_CustomEvent_PlayerNumber, const struct FGameplayTag& Temp_struct_Variable_43, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_6, bool CallFunc_IsValid_ReturnValue_9, bool Temp_bool_Variable_27, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_7, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_5, const struct FGameplayTag& K2Node_Select_Default_14, int32 Temp_int_Array_Index_Variable_17, class UQtnUpgradeSession* CallFunc_Array_Get_Item_8, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, int32 Temp_int_Loop_Counter_Variable_16, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 CallFunc_Array_Find_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_FindNullPlayerEntry_nullPlayer, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 K2Node_CustomEvent_PlayerIndex, const struct FGameplayTag& Temp_struct_Variable_44, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_45, int32 K2Node_Event_CardIndex_1, int32 K2Node_Event_ChoiceIndex_2, int32 CallFunc_Array_Length_ReturnValue_8, const struct FGameplayTag& Temp_struct_Variable_46, int32 Temp_int_Array_Index_Variable_18, class ABodyPawnPlayer_C* K2Node_Event_PlayerBody_1, int32 K2Node_Event_ChoiceIndex_1, class ABodyPawnPlayer_C* CallFunc_Array_Get_Item_9, int32 K2Node_Event_CardIndex, class ABodyPawnPlayer_C* K2Node_Event_PlayerBody, int32 K2Node_Event_oldCurrency, int32 K2Node_Event_upgradeCost, int32 CallFunc_Array_Find_ReturnValue_3, const struct FQtnRolledUpgradeResult& K2Node_Event_Upgrade, TArray<struct FQtnBSChoice>& K2Node_CustomEvent_BSArray, bool K2Node_CustomEvent_PlayerArray, int32 K2Node_CustomEvent_StreamSeed, int32 CallFunc_Array_Add_ReturnValue_2, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue_4, const struct FQtnBSChoice& CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Get_Item_11, const struct FQtnBSChoice& CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_10, bool Temp_bool_Variable_28, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FGameplayTag& K2Node_Select_Default_15, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_47, const struct FGameplayTag& Temp_struct_Variable_48, bool Temp_bool_Variable_29, const struct FGameplayTag& K2Node_Select_Default_16, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_13, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_14, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_15, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABS_Choice_Card_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult_2, TArray<class ABS_Choice_Card_C*>& K2Node_CustomEvent_CurCards, TArray<class USceneComponent*>& K2Node_CustomEvent_TargetComponents, bool K2Node_CustomEvent_player, bool K2Node_CustomEvent_isUpgrades_1, class USceneComponent* CallFunc_Array_Get_Item_16, const struct FGameplayTag& K2Node_Select_Default_17, bool CallFunc_IsGameplayTagValid_ReturnValue_23, const struct FGameplayTag& Temp_struct_Variable_49, class USceneComponent* CallFunc_Array_Get_Item_17, bool Temp_bool_Variable_30, class USceneComponent* CallFunc_Array_Get_Item_18, const struct FGameplayTag& K2Node_Select_Default_18, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_19, int32 CallFunc_Array_Length_ReturnValue_11, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_7, TArray<class USceneComponent*>& K2Node_MakeArray_Array_1, TArray<struct FQtnRolledUpgradeResult>& K2Node_CustomEvent_Array, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_20, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue_8, bool Temp_bool_Variable_31, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_50, const struct FGameplayTag& K2Node_Select_Default_19, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_4, TArray<class USceneComponent*>& K2Node_MakeArray_Array_2, TArray<struct FQtnBSChoice>& K2Node_CustomEvent_EnemyBS, int32 Temp_int_Loop_Counter_Variable_17, const struct FQtnBSChoice& CallFunc_Array_Get_Item_21, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 CallFunc_Array_Length_ReturnValue_13, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_51, bool Temp_bool_Variable_32, const struct FGameplayTag& K2Node_Select_Default_20, TArray<class USceneComponent*>& K2Node_MakeArray_Array_3, TArray<struct FQtnRolledUpgradeResult>& K2Node_CustomEvent_EnemyUpgrades, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_22, int32 CallFunc_Array_Length_ReturnValue_14, bool CallFunc_Less_IntInt_ReturnValue_11, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, TArray<class USceneComponent*>& K2Node_MakeArray_Array_4, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_5, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_11, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, class UClass* CallFunc_Array_Get_Item_23, int32 CallFunc_Array_Length_ReturnValue_15, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_12, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_16, bool CallFunc_Greater_IntInt_ReturnValue, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_sequenceAdvanceCheck_sequenceFinished_6, int32 Temp_int_Loop_Counter_Variable_18, bool CallFunc_Less_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_20, class USceneComponent* CallFunc_Array_Get_Item_24, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_25, bool CallFunc_Array_IsValidIndex_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_5, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class ABS_Choice_Card_C* CallFunc_FinishSpawningActor_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class AUpgrade_Choice_Card_C* CallFunc_FinishSpawningActor_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class AUpgrade_Choice_Card_C* CallFunc_FinishSpawningActor_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_8, const struct FHitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult_5, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_5, bool K2Node_DynamicCast_bSuccess_12, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Array_Find_ReturnValue_4, const struct FGameplayTag& Temp_struct_Variable_52, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_26, class ABS_Choice_Card_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_6, bool K2Node_DynamicCast_bSuccess_13, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Array_Find_ReturnValue_5, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_27, class ABS_Choice_Card_C* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, bool K2Node_CustomEvent_On, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool Temp_bool_Variable_33, bool CallFunc_RandomBoolFromStream_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, const struct FGameplayTag& Temp_struct_Variable_53, int32 CallFunc_Array_Length_ReturnValue_17, const struct FQtnBSChoice& CallFunc_Array_Get_Item_28, int32 CallFunc_Array_Length_ReturnValue_18, bool CallFunc_Less_IntInt_ReturnValue_14, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, const struct FGameplayTag& Temp_struct_Variable_54, bool CallFunc_Not_PreBool_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_12, bool Temp_bool_Variable_34, TArray<class ABS_Choice_Card_C*>& K2Node_CustomEvent_cardsPlayed, bool K2Node_CustomEvent_isPlayer, bool K2Node_CustomEvent_isUpgrades, const struct FGameplayTag& K2Node_Select_Default_21, const struct FGameplayTag& K2Node_Select_Default_22, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_23, const struct FGameplayTag& K2Node_Select_Default_24, bool CallFunc_IsGameplayTagValid_ReturnValue_24, bool CallFunc_IsGameplayTagValid_ReturnValue_25, TArray<struct FGameplayTag>& CallFunc_GetUniqueVOContexts_uniqueVOContexts, const struct FGameplayTag& K2Node_Select_Default_25, const struct FGameplayTag& CallFunc_Array_Get_Item_29, int32 CallFunc_Array_Length_ReturnValue_19, bool CallFunc_IsGameplayTagValid_ReturnValue_26, bool CallFunc_Less_IntInt_ReturnValue_15, const struct FGameplayTag& CallFunc_GetBestPlayerUpgradeVOContext_bestVOContext, bool CallFunc_IsGameplayTagValid_ReturnValue_27, class AScriptedSkeletalActor_C* K2Node_Select_Default_26, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_55, const struct FGameplayTag& Temp_struct_Variable_56, bool Temp_bool_Variable_35, const struct FGameplayTag& Temp_struct_Variable_57, const struct FGameplayTag& K2Node_Select_Default_27, const struct FGameplayTag& Temp_struct_Variable_58, class AScriptedSkeletalActor_C* K2Node_Select_Default_28, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_3, bool Temp_bool_Variable_36, const struct FGameplayTag& K2Node_Select_Default_29, class AScriptedSkeletalActor_C* K2Node_Select_Default_30, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_4, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_5, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_6, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_7, int32 K2Node_CustomEvent_seed, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue_5, const struct FGameplayTag& Temp_struct_Variable_59, const struct FGameplayTag& Temp_struct_Variable_60, bool Temp_bool_Variable_37, bool CallFunc_IsServer_ReturnValue_8, const struct FGameplayTag& K2Node_Select_Default_31, const struct FGameplayTag& Temp_struct_Variable_61, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_9, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 Temp_int_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item_30, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_20, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1, bool CallFunc_Less_IntInt_ReturnValue_16, class AQtnBodyPawn* CallFunc_Array_Get_Item_31, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_7, bool K2Node_DynamicCast_bSuccess_14, int32 CallFunc_Array_Length_ReturnValue_21, bool CallFunc_Less_IntInt_ReturnValue_17, int32 CallFunc_Array_Length_ReturnValue_22, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable_38, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_32, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess_15, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 K2Node_Event_ChoiceIndex, class ABodyPawnPlayer_C* K2Node_Event_choosingPlayer, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue_3, const struct FGameplayTag& K2Node_Select_Default_33, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsGameplayTagValid_ReturnValue_28, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_34, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_8, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_9, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_10, class AScriptedSkeletalActor_C* CallFunc_GetGrousingEnemy_grousingEnemy, class AScriptedSkeletalActor_C* CallFunc_GetGrousingEnemy_grousingEnemy_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_11, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_12, bool CallFunc_IsGameplayTagValid_ReturnValue_29, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default_35, const struct FGameplayTag& Temp_struct_Variable_62, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_GetNumberOfPlayers_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, bool Temp_bool_Variable_39, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_2, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_2, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_36, bool K2Node_SwitchEnum_CmpSuccess_4, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, class UQtnCharacterAppearanceSettings* CallFunc_GetCharacterAppearanceSettings_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_63, bool CallFunc_GetBodyMeshClass_success, TSubclassOf<class UQtnCharacterBodyMesh> CallFunc_GetBodyMeshClass_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1, bool Temp_bool_Variable_40, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_13, bool CallFunc_IsReadyForGameplay_ReturnValue_6, const struct FGameplayTag& K2Node_Select_Default_37, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_3, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_3, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_DisplayIcon, class ABodyPawnPlayer_C* K2Node_CustomEvent_TargetPlayer, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_7, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_5, int32 CallFunc_Array_AddUnique_ReturnValue_4, bool CallFunc_IsPlayingInEditor_ReturnValue_1, class UQtnPlayerNameplateManagerComponent* CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue, int32 Temp_int_Array_Index_Variable_19, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_32, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_HasScriptedGrousing_hasScriptedGrousing, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend_2, bool CallFunc_BooleanOR_ReturnValue_4, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_1, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_14, const struct FTribunal_GrousingScriptedVO& CallFunc_Array_Get_Item_33, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_23, bool CallFunc_Less_IntInt_ReturnValue_18, class AScriptedSkeletalActor_C* CallFunc_GetGrousingFriend_grousingFriend_4, class AActor* K2Node_Select_Default_38, class UAnimSequence* K2Node_Select_Default_39, class AQtnBodyPawn* K2Node_CustomEvent_LateJOiner, int32 CallFunc_Array_AddUnique_ReturnValue_5, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_12, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_8, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_34, int32 CallFunc_Array_Length_ReturnValue_24, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_Greater_IntInt_ReturnValue_4, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class UQtnPlayerRunProgress* CallFunc_GetPlayerRunProgressFromUniqueNetId_ServerOnly_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_14, class UPlayerSubProgress_Upgrades_C* CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_HasAnyUpgrades_HasUpgrades_, bool CallFunc_IsShippingBuild_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_19, bool CallFunc_Less_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_21, bool CallFunc_IsTradeshowDemo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "ExecuteUbergraph_Tribunal_Manager_Actor");

	Params::ATribunal_Manager_Actor_C_ExecuteUbergraph_Tribunal_Manager_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_2 = CallFunc_MakeLiteralBool_ReturnValue_2;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_3 = CallFunc_MakeLiteralBool_ReturnValue_3;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_2 = CallFunc_IsGameplayTagValid_ReturnValue_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_3 = CallFunc_IsGameplayTagValid_ReturnValue_3;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_4 = CallFunc_IsGameplayTagValid_ReturnValue_4;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_4 = CallFunc_MakeLiteralBool_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_5 = CallFunc_MakeLiteralBool_ReturnValue_5;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_5 = CallFunc_IsGameplayTagValid_ReturnValue_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_6 = CallFunc_IsGameplayTagValid_ReturnValue_6;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_6 = CallFunc_MakeLiteralBool_ReturnValue_6;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_3;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_7 = CallFunc_MakeLiteralBool_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_8 = CallFunc_MakeLiteralBool_ReturnValue_8;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_4 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_4;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_9 = CallFunc_MakeLiteralBool_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_10 = CallFunc_MakeLiteralBool_ReturnValue_10;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_5 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_5;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_7 = CallFunc_IsGameplayTagValid_ReturnValue_7;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_11 = CallFunc_MakeLiteralBool_ReturnValue_11;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_12 = CallFunc_MakeLiteralBool_ReturnValue_12;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_6 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_6;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_8 = CallFunc_IsGameplayTagValid_ReturnValue_8;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_9 = CallFunc_IsGameplayTagValid_ReturnValue_9;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_13 = CallFunc_MakeLiteralBool_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_14 = CallFunc_MakeLiteralBool_ReturnValue_14;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_10 = CallFunc_IsGameplayTagValid_ReturnValue_10;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_7 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_7;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_15 = CallFunc_MakeLiteralBool_ReturnValue_15;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_16 = CallFunc_MakeLiteralBool_ReturnValue_16;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_11 = CallFunc_IsGameplayTagValid_ReturnValue_11;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_8 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_8;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_17 = CallFunc_MakeLiteralBool_ReturnValue_17;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_18 = CallFunc_MakeLiteralBool_ReturnValue_18;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_12 = CallFunc_IsGameplayTagValid_ReturnValue_12;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_9 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_9;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_13 = CallFunc_IsGameplayTagValid_ReturnValue_13;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_19 = CallFunc_MakeLiteralBool_ReturnValue_19;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_20 = CallFunc_MakeLiteralBool_ReturnValue_20;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_14 = CallFunc_IsGameplayTagValid_ReturnValue_14;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_10 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_10;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_15 = CallFunc_IsGameplayTagValid_ReturnValue_15;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_21 = CallFunc_MakeLiteralBool_ReturnValue_21;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_22 = CallFunc_MakeLiteralBool_ReturnValue_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_16 = CallFunc_IsGameplayTagValid_ReturnValue_16;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_11 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_11;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_17 = CallFunc_IsGameplayTagValid_ReturnValue_17;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_23 = CallFunc_MakeLiteralBool_ReturnValue_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_24 = CallFunc_MakeLiteralBool_ReturnValue_24;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_18 = CallFunc_IsGameplayTagValid_ReturnValue_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_12 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_12;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_25 = CallFunc_MakeLiteralBool_ReturnValue_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_13 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_13;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_19 = CallFunc_IsGameplayTagValid_ReturnValue_19;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_20 = CallFunc_IsGameplayTagValid_ReturnValue_20;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_26 = CallFunc_MakeLiteralBool_ReturnValue_26;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_MakeStruct_Vector4 = K2Node_MakeStruct_Vector4;
	Parms.K2Node_MakeStruct_Vector4_1 = K2Node_MakeStruct_Vector4_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_27 = CallFunc_MakeLiteralBool_ReturnValue_27;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_21 = CallFunc_IsGameplayTagValid_ReturnValue_21;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue_14 = CallFunc_RandomIntegerInRangeFromStream_ReturnValue_14;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_22 = CallFunc_IsGameplayTagValid_ReturnValue_22;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_28 = CallFunc_MakeLiteralBool_ReturnValue_28;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_29 = CallFunc_MakeLiteralBool_ReturnValue_29;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_CustomEvent_UpgradeSession_3 = K2Node_CustomEvent_UpgradeSession_3;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_UpgradeSession_2 = K2Node_CustomEvent_UpgradeSession_2;
	Parms.K2Node_CustomEvent_UpgradeSession_1 = K2Node_CustomEvent_UpgradeSession_1;
	Parms.K2Node_CustomEvent_UpgradeSession = K2Node_CustomEvent_UpgradeSession;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_struct_Variable_23 = Temp_struct_Variable_23;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_struct_Variable_24 = Temp_struct_Variable_24;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTribunalSlot_TribSlot_1 = CallFunc_GetTribunalSlot_TribSlot_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_2 = CallFunc_IsLocallyControlledPlayer_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_1 = CallFunc_IsReadyForGameplay_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_struct_Variable_25 = Temp_struct_Variable_25;
	Parms.Temp_struct_Variable_26 = Temp_struct_Variable_26;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.K2Node_CustomEvent_PlayerIndex_2 = K2Node_CustomEvent_PlayerIndex_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_choiceIndex_2 = K2Node_CustomEvent_choiceIndex_2;
	Parms.K2Node_CustomEvent_choosingPlayer = K2Node_CustomEvent_choosingPlayer;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_choiceIndex_1 = K2Node_CustomEvent_choiceIndex_1;
	Parms.K2Node_CustomEvent_PlayerIndex_1 = K2Node_CustomEvent_PlayerIndex_1;
	Parms.K2Node_CustomEvent_choice = K2Node_CustomEvent_choice;
	Parms.K2Node_CustomEvent_PlayerChoice = K2Node_CustomEvent_PlayerChoice;
	Parms.K2Node_CustomEvent_seed_6 = K2Node_CustomEvent_seed_6;
	Parms.K2Node_CustomEvent_wantResponse = K2Node_CustomEvent_wantResponse;
	Parms.K2Node_CustomEvent_card = K2Node_CustomEvent_card;
	Parms.K2Node_CustomEvent_playerCard = K2Node_CustomEvent_playerCard;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_struct_Variable_27 = Temp_struct_Variable_27;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_struct_Variable_28 = Temp_struct_Variable_28;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_CustomEvent_ReactionArray = K2Node_CustomEvent_ReactionArray;
	Parms.K2Node_CustomEvent_seed_5 = K2Node_CustomEvent_seed_5;
	Parms.CallFunc_MakeRandomStream_ReturnValue = CallFunc_MakeRandomStream_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_seed_4 = K2Node_CustomEvent_seed_4;
	Parms.CallFunc_MakeRandomStream_ReturnValue_1 = CallFunc_MakeRandomStream_ReturnValue_1;
	Parms.Temp_struct_Variable_29 = Temp_struct_Variable_29;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_struct_Variable_30 = Temp_struct_Variable_30;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_struct_Variable_31 = Temp_struct_Variable_31;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_CustomEvent_player_1 = K2Node_CustomEvent_player_1;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult = CallFunc_K2_SetActorRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetActorRelativeRotation_SweepHitResult_1;
	Parms.K2Node_CustomEvent_seed_3 = K2Node_CustomEvent_seed_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_Active_Arena_Director_Active_Arena_Index = CallFunc_Get_Active_Arena_Director_Active_Arena_Index;
	Parms.CallFunc_Get_Active_Arena_Director_Active_Director = CallFunc_Get_Active_Arena_Director_Active_Director;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.K2Node_CustomEvent_newTime = K2Node_CustomEvent_newTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue_1 = CallFunc_Montage_Play_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.K2Node_CustomEvent_seed_2 = K2Node_CustomEvent_seed_2;
	Parms.K2Node_CustomEvent_CleanUpOnly = K2Node_CustomEvent_CleanUpOnly;
	Parms.CallFunc_MakeRandomStream_ReturnValue_2 = CallFunc_MakeRandomStream_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_4 = CallFunc_IsDedicatedServer_ReturnValue_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_Montage_Play_ReturnValue_2 = CallFunc_Montage_Play_ReturnValue_2;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings_1 = K2Node_MakeStruct_PostProcessSettings_1;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CustomEvent_unhide = K2Node_CustomEvent_unhide;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI_1 = K2Node_DynamicCast_AsBody_Pawn_AI_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue_3 = CallFunc_GetQtnGameState_ReturnValue_3;
	Parms.K2Node_CustomEvent_playerPawnSoul_2 = K2Node_CustomEvent_playerPawnSoul_2;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_2 = K2Node_CustomEvent_occupiedBodyPawn_2;
	Parms.K2Node_CustomEvent_isLocalPlayer_1 = K2Node_CustomEvent_isLocalPlayer_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_GetQtnGameState_ReturnValue_4 = CallFunc_GetQtnGameState_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue_5 = CallFunc_GetQtnGameState_ReturnValue_5;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_3 = CallFunc_IsLocallyControlledPlayer_ReturnValue_3;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_2 = CallFunc_IsReadyForGameplay_ReturnValue_2;
	Parms.Temp_struct_Variable_32 = Temp_struct_Variable_32;
	Parms.K2Node_CustomEvent_beHidden = K2Node_CustomEvent_beHidden;
	Parms.K2Node_CustomEvent_seed_1 = K2Node_CustomEvent_seed_1;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished = CallFunc_sequenceAdvanceCheck_sequenceFinished;
	Parms.CallFunc_MakeRandomStream_ReturnValue_3 = CallFunc_MakeRandomStream_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_5 = CallFunc_IsDedicatedServer_ReturnValue_5;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.Temp_struct_Variable_33 = Temp_struct_Variable_33;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_1 = CallFunc_sequenceAdvanceCheck_sequenceFinished_1;
	Parms.Temp_struct_Variable_34 = Temp_struct_Variable_34;
	Parms.K2Node_CustomEvent_playerPawnSoul_1 = K2Node_CustomEvent_playerPawnSoul_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_1 = K2Node_CustomEvent_occupiedBodyPawn_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_RandomBoolFromStream_ReturnValue = CallFunc_RandomBoolFromStream_ReturnValue;
	Parms.Temp_struct_Variable_35 = Temp_struct_Variable_35;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_spawner = K2Node_CustomEvent_spawner;
	Parms.K2Node_CustomEvent_SpawnedActor = K2Node_CustomEvent_SpawnedActor;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI_2 = K2Node_DynamicCast_AsBody_Pawn_AI_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_3 = K2Node_DynamicCast_AsBody_Pawn_Player_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetRandomValue_ReturnValue_1 = CallFunc_GetRandomValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_6 = CallFunc_GetQtnGameState_ReturnValue_6;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_3 = CallFunc_IsReadyForGameplay_ReturnValue_3;
	Parms.K2Node_CustomEvent_bodypawnPlayer_1 = K2Node_CustomEvent_bodypawnPlayer_1;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_GetQtnGameState_ReturnValue_7 = CallFunc_GetQtnGameState_ReturnValue_7;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_4 = CallFunc_IsReadyForGameplay_ReturnValue_4;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_4 = CallFunc_IsLocallyControlledPlayer_ReturnValue_4;
	Parms.K2Node_CustomEvent_bodyPlayer = K2Node_CustomEvent_bodyPlayer;
	Parms.CallFunc_GetQtnGameState_ReturnValue_8 = CallFunc_GetQtnGameState_ReturnValue_8;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_5 = CallFunc_IsReadyForGameplay_ReturnValue_5;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_1 = CallFunc_GetLocalPlayerOriginalBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_4 = K2Node_DynamicCast_AsBody_Pawn_Player_4;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_struct_Variable_36 = Temp_struct_Variable_36;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.Temp_struct_Variable_37 = Temp_struct_Variable_37;
	Parms.Temp_struct_Variable_38 = Temp_struct_Variable_38;
	Parms.K2Node_CustomEvent_bodypawnPlayer = K2Node_CustomEvent_bodypawnPlayer;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_2 = CallFunc_sequenceAdvanceCheck_sequenceFinished_2;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_DynamicCast_AsPlayer_Upgrade_Session_State = K2Node_DynamicCast_AsPlayer_Upgrade_Session_State;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetQtnGameState_ReturnValue_9 = CallFunc_GetQtnGameState_ReturnValue_9;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_HowManyChoicesForPlayer_numChoices = CallFunc_HowManyChoicesForPlayer_numChoices;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_GetQtnGameState_ReturnValue_10 = CallFunc_GetQtnGameState_ReturnValue_10;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_choiceIndex = K2Node_CustomEvent_choiceIndex;
	Parms.K2Node_CustomEvent_PlayerSlotIndex = K2Node_CustomEvent_PlayerSlotIndex;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.Temp_struct_Variable_39 = Temp_struct_Variable_39;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.Temp_struct_Variable_40 = Temp_struct_Variable_40;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.Temp_int_Array_Index_Variable_15 = Temp_int_Array_Index_Variable_15;
	Parms.Temp_struct_Variable_41 = Temp_struct_Variable_41;
	Parms.Temp_int_Loop_Counter_Variable_15 = Temp_int_Loop_Counter_Variable_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.Temp_struct_Variable_42 = Temp_struct_Variable_42;
	Parms.Temp_int_Array_Index_Variable_16 = Temp_int_Array_Index_Variable_16;
	Parms.CallFunc_GetChoiceArrayForPlayer_BSChoiceArray = CallFunc_GetChoiceArrayForPlayer_BSChoiceArray;
	Parms.K2Node_CustomEvent_PlayerNumber = K2Node_CustomEvent_PlayerNumber;
	Parms.Temp_struct_Variable_43 = Temp_struct_Variable_43;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_5 = CallFunc_IsLocallyControlledPlayer_ReturnValue_5;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.Temp_int_Array_Index_Variable_17 = Temp_int_Array_Index_Variable_17;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_6 = CallFunc_IsLocallyControlledPlayer_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.Temp_int_Loop_Counter_Variable_16 = Temp_int_Loop_Counter_Variable_16;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_FindNullPlayerEntry_nullPlayer = CallFunc_FindNullPlayerEntry_nullPlayer;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerIndex = K2Node_CustomEvent_PlayerIndex;
	Parms.Temp_struct_Variable_44 = Temp_struct_Variable_44;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_struct_Variable_45 = Temp_struct_Variable_45;
	Parms.K2Node_Event_CardIndex_1 = K2Node_Event_CardIndex_1;
	Parms.K2Node_Event_ChoiceIndex_2 = K2Node_Event_ChoiceIndex_2;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.Temp_struct_Variable_46 = Temp_struct_Variable_46;
	Parms.Temp_int_Array_Index_Variable_18 = Temp_int_Array_Index_Variable_18;
	Parms.K2Node_Event_PlayerBody_1 = K2Node_Event_PlayerBody_1;
	Parms.K2Node_Event_ChoiceIndex_1 = K2Node_Event_ChoiceIndex_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_Event_CardIndex = K2Node_Event_CardIndex;
	Parms.K2Node_Event_PlayerBody = K2Node_Event_PlayerBody;
	Parms.K2Node_Event_oldCurrency = K2Node_Event_oldCurrency;
	Parms.K2Node_Event_upgradeCost = K2Node_Event_upgradeCost;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.K2Node_Event_Upgrade = K2Node_Event_Upgrade;
	Parms.K2Node_CustomEvent_BSArray = K2Node_CustomEvent_BSArray;
	Parms.K2Node_CustomEvent_PlayerArray = K2Node_CustomEvent_PlayerArray;
	Parms.K2Node_CustomEvent_StreamSeed = K2Node_CustomEvent_StreamSeed;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_MakeRandomStream_ReturnValue_4 = CallFunc_MakeRandomStream_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.Temp_bool_Variable_28 = Temp_bool_Variable_28;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.Temp_struct_Variable_47 = Temp_struct_Variable_47;
	Parms.Temp_struct_Variable_48 = Temp_struct_Variable_48;
	Parms.Temp_bool_Variable_29 = Temp_bool_Variable_29;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_3 = CallFunc_sequenceAdvanceCheck_sequenceFinished_3;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetActorRelativeRotation_SweepHitResult_2;
	Parms.K2Node_CustomEvent_CurCards = K2Node_CustomEvent_CurCards;
	Parms.K2Node_CustomEvent_TargetComponents = K2Node_CustomEvent_TargetComponents;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.K2Node_CustomEvent_isUpgrades_1 = K2Node_CustomEvent_isUpgrades_1;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_23 = CallFunc_IsGameplayTagValid_ReturnValue_23;
	Parms.Temp_struct_Variable_49 = Temp_struct_Variable_49;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.Temp_bool_Variable_30 = Temp_bool_Variable_30;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_Array = K2Node_CustomEvent_Array;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.Temp_bool_Variable_31 = Temp_bool_Variable_31;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.Temp_struct_Variable_50 = Temp_struct_Variable_50;
	Parms.K2Node_Select_Default_19 = K2Node_Select_Default_19;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_4 = CallFunc_sequenceAdvanceCheck_sequenceFinished_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_CustomEvent_EnemyBS = K2Node_CustomEvent_EnemyBS;
	Parms.Temp_int_Loop_Counter_Variable_17 = Temp_int_Loop_Counter_Variable_17;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.Temp_struct_Variable_51 = Temp_struct_Variable_51;
	Parms.Temp_bool_Variable_32 = Temp_bool_Variable_32;
	Parms.K2Node_Select_Default_20 = K2Node_Select_Default_20;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_CustomEvent_EnemyUpgrades = K2Node_CustomEvent_EnemyUpgrades;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Array_Length_ReturnValue_14 = CallFunc_Array_Length_ReturnValue_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_3 = CallFunc_RandomIntegerInRange_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_5 = CallFunc_sequenceAdvanceCheck_sequenceFinished_5;
	Parms.CallFunc_GetQtnGameState_ReturnValue_11 = CallFunc_GetQtnGameState_ReturnValue_11;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Length_ReturnValue_15 = CallFunc_Array_Length_ReturnValue_15;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_16 = CallFunc_Array_Length_ReturnValue_16;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_sequenceAdvanceCheck_sequenceFinished_6 = CallFunc_sequenceAdvanceCheck_sequenceFinished_6;
	Parms.Temp_int_Loop_Counter_Variable_18 = Temp_int_Loop_Counter_Variable_18;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_5 = CallFunc_K2_GetComponentToWorld_ReturnValue_5;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_6 = CallFunc_K2_GetComponentToWorld_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetActorRelativeRotation_SweepHitResult_3;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult_4 = CallFunc_K2_SetActorRelativeRotation_SweepHitResult_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_7 = CallFunc_K2_GetComponentToWorld_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult_5 = CallFunc_K2_SetActorRelativeRotation_SweepHitResult_5;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_5 = K2Node_DynamicCast_AsBody_Pawn_Player_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Find_ReturnValue_4 = CallFunc_Array_Find_ReturnValue_4;
	Parms.Temp_struct_Variable_52 = Temp_struct_Variable_52;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_1 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_6 = K2Node_DynamicCast_AsBody_Pawn_Player_6;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Array_Find_ReturnValue_5 = CallFunc_Array_Find_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.Temp_bool_Variable_33 = Temp_bool_Variable_33;
	Parms.CallFunc_RandomBoolFromStream_ReturnValue_1 = CallFunc_RandomBoolFromStream_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_struct_Variable_53 = Temp_struct_Variable_53;
	Parms.CallFunc_Array_Length_ReturnValue_17 = CallFunc_Array_Length_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_Array_Length_ReturnValue_18 = CallFunc_Array_Length_ReturnValue_18;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_CustomEvent_localOccupiedBodyPawn = K2Node_CustomEvent_localOccupiedBodyPawn;
	Parms.Temp_struct_Variable_54 = Temp_struct_Variable_54;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_12 = CallFunc_GetQtnGameState_ReturnValue_12;
	Parms.Temp_bool_Variable_34 = Temp_bool_Variable_34;
	Parms.K2Node_CustomEvent_cardsPlayed = K2Node_CustomEvent_cardsPlayed;
	Parms.K2Node_CustomEvent_isPlayer = K2Node_CustomEvent_isPlayer;
	Parms.K2Node_CustomEvent_isUpgrades = K2Node_CustomEvent_isUpgrades;
	Parms.K2Node_Select_Default_21 = K2Node_Select_Default_21;
	Parms.K2Node_Select_Default_22 = K2Node_Select_Default_22;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_23 = K2Node_Select_Default_23;
	Parms.K2Node_Select_Default_24 = K2Node_Select_Default_24;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_24 = CallFunc_IsGameplayTagValid_ReturnValue_24;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_25 = CallFunc_IsGameplayTagValid_ReturnValue_25;
	Parms.CallFunc_GetUniqueVOContexts_uniqueVOContexts = CallFunc_GetUniqueVOContexts_uniqueVOContexts;
	Parms.K2Node_Select_Default_25 = K2Node_Select_Default_25;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_Array_Length_ReturnValue_19 = CallFunc_Array_Length_ReturnValue_19;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_26 = CallFunc_IsGameplayTagValid_ReturnValue_26;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.CallFunc_GetBestPlayerUpgradeVOContext_bestVOContext = CallFunc_GetBestPlayerUpgradeVOContext_bestVOContext;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_27 = CallFunc_IsGameplayTagValid_ReturnValue_27;
	Parms.K2Node_Select_Default_26 = K2Node_Select_Default_26;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_2 = CallFunc_StaticMakeEventMessage_ReturnValue_2;
	Parms.Temp_struct_Variable_55 = Temp_struct_Variable_55;
	Parms.Temp_struct_Variable_56 = Temp_struct_Variable_56;
	Parms.Temp_bool_Variable_35 = Temp_bool_Variable_35;
	Parms.Temp_struct_Variable_57 = Temp_struct_Variable_57;
	Parms.K2Node_Select_Default_27 = K2Node_Select_Default_27;
	Parms.Temp_struct_Variable_58 = Temp_struct_Variable_58;
	Parms.K2Node_Select_Default_28 = K2Node_Select_Default_28;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_3 = CallFunc_StaticMakeEventMessage_ReturnValue_3;
	Parms.Temp_bool_Variable_36 = Temp_bool_Variable_36;
	Parms.K2Node_Select_Default_29 = K2Node_Select_Default_29;
	Parms.K2Node_Select_Default_30 = K2Node_Select_Default_30;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_4 = CallFunc_StaticMakeEventMessage_ReturnValue_4;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_5 = CallFunc_StaticMakeEventMessage_ReturnValue_5;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_6 = CallFunc_StaticMakeEventMessage_ReturnValue_6;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_7 = CallFunc_StaticMakeEventMessage_ReturnValue_7;
	Parms.K2Node_CustomEvent_seed = K2Node_CustomEvent_seed;
	Parms.CallFunc_MakeRandomStream_ReturnValue_5 = CallFunc_MakeRandomStream_ReturnValue_5;
	Parms.Temp_struct_Variable_59 = Temp_struct_Variable_59;
	Parms.Temp_struct_Variable_60 = Temp_struct_Variable_60;
	Parms.Temp_bool_Variable_37 = Temp_bool_Variable_37;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.K2Node_Select_Default_31 = K2Node_Select_Default_31;
	Parms.Temp_struct_Variable_61 = Temp_struct_Variable_61;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_4 = CallFunc_RandomIntegerInRange_ReturnValue_4;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item_30 = CallFunc_Array_Get_Item_30;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_20 = CallFunc_Array_Length_ReturnValue_20;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1 = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_Array_Get_Item_31 = CallFunc_Array_Get_Item_31;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_7 = K2Node_DynamicCast_AsBody_Pawn_Player_7;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Array_Length_ReturnValue_21 = CallFunc_Array_Length_ReturnValue_21;
	Parms.CallFunc_Less_IntInt_ReturnValue_17 = CallFunc_Less_IntInt_ReturnValue_17;
	Parms.CallFunc_Array_Length_ReturnValue_22 = CallFunc_Array_Length_ReturnValue_22;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_38 = Temp_bool_Variable_38;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.K2Node_Select_Default_32 = K2Node_Select_Default_32;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Combat_Settings = K2Node_DynamicCast_AsGlobal_Combat_Settings;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Event_ChoiceIndex = K2Node_Event_ChoiceIndex;
	Parms.K2Node_Event_choosingPlayer = K2Node_Event_choosingPlayer;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.K2Node_Select_Default_33 = K2Node_Select_Default_33;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_28 = CallFunc_IsGameplayTagValid_ReturnValue_28;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.K2Node_Select_Default_34 = K2Node_Select_Default_34;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_8 = CallFunc_StaticMakeEventMessage_ReturnValue_8;
	Parms.CallFunc_GetGrousingFriend_grousingFriend = CallFunc_GetGrousingFriend_grousingFriend;
	Parms.CallFunc_GetGrousingFriend_grousingFriend_1 = CallFunc_GetGrousingFriend_grousingFriend_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_9 = CallFunc_StaticMakeEventMessage_ReturnValue_9;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_10 = CallFunc_StaticMakeEventMessage_ReturnValue_10;
	Parms.CallFunc_GetGrousingEnemy_grousingEnemy = CallFunc_GetGrousingEnemy_grousingEnemy;
	Parms.CallFunc_GetGrousingEnemy_grousingEnemy_1 = CallFunc_GetGrousingEnemy_grousingEnemy_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_11 = CallFunc_StaticMakeEventMessage_ReturnValue_11;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_12 = CallFunc_StaticMakeEventMessage_ReturnValue_12;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_29 = CallFunc_IsGameplayTagValid_ReturnValue_29;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_35 = K2Node_Select_Default_35;
	Parms.Temp_struct_Variable_62 = Temp_struct_Variable_62;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetNumberOfPlayers_ReturnValue = CallFunc_GetNumberOfPlayers_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable_39 = Temp_bool_Variable_39;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_2 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_2;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_2 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_2;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.K2Node_Select_Default_36 = K2Node_Select_Default_36;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue_1 = CallFunc_GetQtnGameInstance_ReturnValue_1;
	Parms.CallFunc_GetCharacterAppearanceSettings_ReturnValue = CallFunc_GetCharacterAppearanceSettings_ReturnValue;
	Parms.Temp_struct_Variable_63 = Temp_struct_Variable_63;
	Parms.CallFunc_GetBodyMeshClass_success = CallFunc_GetBodyMeshClass_success;
	Parms.CallFunc_GetBodyMeshClass_ReturnValue = CallFunc_GetBodyMeshClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.Temp_bool_Variable_40 = Temp_bool_Variable_40;
	Parms.CallFunc_GetQtnGameState_ReturnValue_13 = CallFunc_GetQtnGameState_ReturnValue_13;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_6 = CallFunc_IsReadyForGameplay_ReturnValue_6;
	Parms.K2Node_Select_Default_37 = K2Node_Select_Default_37;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_3 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_3;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_3 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_3;
	Parms.K2Node_CustomEvent_DisplayIcon = K2Node_CustomEvent_DisplayIcon;
	Parms.K2Node_CustomEvent_TargetPlayer = K2Node_CustomEvent_TargetPlayer;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue_1 = CallFunc_GetBodyAppearanceComponent_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_7 = CallFunc_IsLocallyControlledPlayer_ReturnValue_7;
	Parms.CallFunc_GetVaultCosmeticsData_ReturnValue = CallFunc_GetVaultCosmeticsData_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_6 = CallFunc_Array_Find_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue_1 = CallFunc_IsPlayingInEditor_ReturnValue_1;
	Parms.CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue = CallFunc_GetQtnPlayerNameplateManagerComponent_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_19 = Temp_int_Array_Index_Variable_19;
	Parms.CallFunc_Array_Get_Item_32 = CallFunc_Array_Get_Item_32;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_14 = CallFunc_GetQtnGameState_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_HasScriptedGrousing_hasScriptedGrousing = CallFunc_HasScriptedGrousing_hasScriptedGrousing;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetGrousingFriend_grousingFriend_2 = CallFunc_GetGrousingFriend_grousingFriend_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_13 = CallFunc_StaticMakeEventMessage_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetGrousingFriend_grousingFriend_3 = CallFunc_GetGrousingFriend_grousingFriend_3;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_14 = CallFunc_StaticMakeEventMessage_ReturnValue_14;
	Parms.CallFunc_Array_Get_Item_33 = CallFunc_Array_Get_Item_33;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_23 = CallFunc_Array_Length_ReturnValue_23;
	Parms.CallFunc_Less_IntInt_ReturnValue_18 = CallFunc_Less_IntInt_ReturnValue_18;
	Parms.CallFunc_GetGrousingFriend_grousingFriend_4 = CallFunc_GetGrousingFriend_grousingFriend_4;
	Parms.K2Node_Select_Default_38 = K2Node_Select_Default_38;
	Parms.K2Node_Select_Default_39 = K2Node_Select_Default_39;
	Parms.K2Node_CustomEvent_LateJOiner = K2Node_CustomEvent_LateJOiner;
	Parms.CallFunc_Array_AddUnique_ReturnValue_5 = CallFunc_Array_AddUnique_ReturnValue_5;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue_7 = CallFunc_IsReadyForGameplay_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_QtnGetUniqueId_ReturnValue = CallFunc_QtnGetUniqueId_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_8 = K2Node_DynamicCast_AsBody_Pawn_Player_8;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_34 = CallFunc_Array_Get_Item_34;
	Parms.CallFunc_Array_Length_ReturnValue_24 = CallFunc_Array_Length_ReturnValue_24;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue = CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue;
	Parms.CallFunc_GetPlayerRunProgressFromUniqueNetId_ServerOnly_ReturnValue = CallFunc_GetPlayerRunProgressFromUniqueNetId_ServerOnly_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue = CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_HasAnyUpgrades_HasUpgrades_ = CallFunc_HasAnyUpgrades_HasUpgrades_;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_19 = Temp_int_Loop_Counter_Variable_19;
	Parms.CallFunc_Less_IntInt_ReturnValue_19 = CallFunc_Less_IntInt_ReturnValue_19;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_Manager_Actor.Tribunal_Manager_Actor_C.TrialComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATribunal_Manager_Actor_C::TrialComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_Manager_Actor_C", "TrialComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


