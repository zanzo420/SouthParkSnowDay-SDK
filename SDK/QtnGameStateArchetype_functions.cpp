#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGameStateArchetype.QtnGameStateArchetype_C
// (Actor)

class UClass* AQtnGameStateArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGameStateArchetype_C");

	return Clss;
}


// QtnGameStateArchetype_C QtnGameStateArchetype.Default__QtnGameStateArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnGameStateArchetype_C* AQtnGameStateArchetype_C::GetDefaultObj()
{
	static class AQtnGameStateArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnGameStateArchetype_C*>(AQtnGameStateArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_r_IsHordeMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_r_IsHordeMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_r_IsHordeMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.CanAllyBotThinkAboutHealing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              L_timeSinceLastHealingTotemUnregister                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          CallFunc_GetDifficulty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetQtnTimeSeconds_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::CanAllyBotThinkAboutHealing(bool* Yes, float L_timeSinceLastHealingTotemUnregister, enum class EQtnDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "CanAllyBotThinkAboutHealing");

	Params::AQtnGameStateArchetype_C_CanAllyBotThinkAboutHealing_Params Parms{};

	Parms.L_timeSinceLastHealingTotemUnregister = L_timeSinceLastHealingTotemUnregister;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_GetDifficulty_ReturnValue = CallFunc_GetDifficulty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetQtnTimeSeconds_ReturnValue = CallFunc_GetQtnTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.UnRegisterHealingTotem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHealingTotem_C*             HealingTotem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetQtnTimeSeconds_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::UnRegisterHealingTotem(class AHealingTotem_C* HealingTotem, float CallFunc_GetQtnTimeSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "UnRegisterHealingTotem");

	Params::AQtnGameStateArchetype_C_UnRegisterHealingTotem_Params Parms{};

	Parms.HealingTotem = HealingTotem;
	Parms.CallFunc_GetQtnTimeSeconds_ReturnValue = CallFunc_GetQtnTimeSeconds_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RegisterHealingTotem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHealingTotem_C*             HealingTotem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::RegisterHealingTotem(class AHealingTotem_C* HealingTotem, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RegisterHealingTotem");

	Params::AQtnGameStateArchetype_C_RegisterHealingTotem_Params Parms{};

	Parms.HealingTotem = HealingTotem;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RegisterCullingVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACullingVolume_C*            CullingVolume                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::RegisterCullingVolume(class ACullingVolume_C* CullingVolume, bool Adding, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RegisterCullingVolume");

	Params::AQtnGameStateArchetype_C_RegisterCullingVolume_Params Parms{};

	Parms.CullingVolume = CullingVolume;
	Parms.Adding = Adding;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RegisterCannonTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACannonTarget_BP_C*          CannonTargetBP                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::RegisterCannonTarget(class ACannonTarget_BP_C* CannonTargetBP, bool Adding, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RegisterCannonTarget");

	Params::AQtnGameStateArchetype_C_RegisterCannonTarget_Params Parms{};

	Parms.CannonTargetBP = CannonTargetBP;
	Parms.Adding = Adding;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.UnregisterSpawnedLootContainer_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Container_Parent_C*    LootContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::UnregisterSpawnedLootContainer_ServerOnly(class ALoot_Container_Parent_C* LootContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "UnregisterSpawnedLootContainer_ServerOnly");

	Params::AQtnGameStateArchetype_C_UnregisterSpawnedLootContainer_ServerOnly_Params Parms{};

	Parms.LootContainer = LootContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RegisterSpawnedLootContainer_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Container_Parent_C*    LootContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AQtnGameStateArchetype_C::RegisterSpawnedLootContainer_ServerOnly(class ALoot_Container_Parent_C* LootContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RegisterSpawnedLootContainer_ServerOnly");

	Params::AQtnGameStateArchetype_C_RegisterSpawnedLootContainer_ServerOnly_Params Parms{};

	Parms.LootContainer = LootContainer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.HandleDeadBossVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CurrentVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::HandleDeadBossVisibilityChanged(bool CurrentVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "HandleDeadBossVisibilityChanged");

	Params::AQtnGameStateArchetype_C_HandleDeadBossVisibilityChanged_Params Parms{};

	Parms.CurrentVisibility = CurrentVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.HandleDeadBossDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::HandleDeadBossDestroyed(class AActor* DestroyedActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "HandleDeadBossDestroyed");

	Params::AQtnGameStateArchetype_C_HandleDeadBossDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.HandleBossDeathTimerFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void AQtnGameStateArchetype_C::HandleBossDeathTimerFinish(bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "HandleBossDeathTimerFinish");

	Params::AQtnGameStateArchetype_C_HandleBossDeathTimerFinish_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RegisterTribunalManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATribunal_Manager_Actor_C*   TribunalManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::RegisterTribunalManager(class ATribunal_Manager_Actor_C* TribunalManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RegisterTribunalManager");

	Params::AQtnGameStateArchetype_C_RegisterTribunalManager_Params Parms{};

	Parms.TribunalManager = TribunalManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_r_ArcMapInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_r_ArcMapInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_r_ArcMapInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.SetMapEntryCountdownGlobally_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::SetMapEntryCountdownGlobally_ServerOnly(int32 Value, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "SetMapEntryCountdownGlobally_ServerOnly");

	Params::AQtnGameStateArchetype_C_SetMapEntryCountdownGlobally_ServerOnly_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_r_MapEntryCountdownGlobal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_r_MapEntryCountdownGlobal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_r_MapEntryCountdownGlobal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.GetAveragePlayerPerkLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              AveragePlayerPerkLevel                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_averagePlayerPerkLevel                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevelFromPerks_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::GetAveragePlayerPerkLevel(float* AveragePlayerPerkLevel, float Local_averagePlayerPerkLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "GetAveragePlayerPerkLevel");

	Params::AQtnGameStateArchetype_C_GetAveragePlayerPerkLevel_Params Parms{};

	Parms.Local_averagePlayerPerkLevel = Local_averagePlayerPerkLevel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevelFromPerks_ReturnValue = CallFunc_CalculatePlayerLevelFromPerks_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AveragePlayerPerkLevel != nullptr)
		*AveragePlayerPerkLevel = Parms.AveragePlayerPerkLevel;

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDebugWrapper*            LocalDebugWrapper                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnDebugDisplay");

	Params::AQtnGameStateArchetype_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.LocalDebugWrapper = LocalDebugWrapper;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.MuteCommentarySpeakers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        MuteSpeakers                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::MuteCommentarySpeakers(TArray<struct FGameplayTag>& MuteSpeakers, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "MuteCommentarySpeakers");

	Params::AQtnGameStateArchetype_C_MuteCommentarySpeakers_Params Parms{};

	Parms.MuteSpeakers = MuteSpeakers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_r_phoneActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalPhoneActor_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::OnRep_r_phoneActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_r_phoneActors");

	Params::AQtnGameStateArchetype_C_OnRep_r_phoneActors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.Add Screen Indicator Local Only
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorStruct                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScreenIndicator_C*          Indicator                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      IndicatorActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScreenIndicator_C*          IndicatorOut                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScreenIndicator_C*          CallFunc_CreateIndicator_LocalOnly_Indicator_Ref                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::Add_Screen_Indicator_Local_Only(const struct FIndicatorData& IndicatorStruct, bool Adding, class UScreenIndicator_C* Indicator, class AActor* IndicatorActor, class UScreenIndicator_C** IndicatorOut, class UScreenIndicator_C* CallFunc_CreateIndicator_LocalOnly_Indicator_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "Add Screen Indicator Local Only");

	Params::AQtnGameStateArchetype_C_Add_Screen_Indicator_Local_Only_Params Parms{};

	Parms.IndicatorStruct = IndicatorStruct;
	Parms.Adding = Adding;
	Parms.Indicator = Indicator;
	Parms.IndicatorActor = IndicatorActor;
	Parms.CallFunc_CreateIndicator_LocalOnly_Indicator_Ref = CallFunc_CreateIndicator_LocalOnly_Indicator_Ref;

	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorOut != nullptr)
		*IndicatorOut = Parms.IndicatorOut;

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_PotentialGoalsStructs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_PotentialGoalsStructs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_PotentialGoalsStructs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_CompletedGoalsStructs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_CompletedGoalsStructs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_CompletedGoalsStructs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.Set Max Unlocked Arc All Players Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxUnlockedArc                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::Set_Max_Unlocked_Arc_All_Players_Server_Only(int32 MaxUnlockedArc, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "Set Max Unlocked Arc All Players Server Only");

	Params::AQtnGameStateArchetype_C_Set_Max_Unlocked_Arc_All_Players_Server_Only_Params Parms{};

	Parms.MaxUnlockedArc = MaxUnlockedArc;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.GetMaxUnlockedDayAllPlayers_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MaxUnlockedDay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::GetMaxUnlockedDayAllPlayers_ServerOnly(int32* MaxUnlockedDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "GetMaxUnlockedDayAllPlayers_ServerOnly");

	Params::AQtnGameStateArchetype_C_GetMaxUnlockedDayAllPlayers_ServerOnly_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxUnlockedDay != nullptr)
		*MaxUnlockedDay = Parms.MaxUnlockedDay;

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.DoesPhoneActorExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      PhoneActorClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PhoneActorExists                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalPhoneActor_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::DoesPhoneActorExist(class UClass* PhoneActorClass, bool* PhoneActorExists, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "DoesPhoneActorExist");

	Params::AQtnGameStateArchetype_C_DoesPhoneActorExist_Params Parms{};

	Parms.PhoneActorClass = PhoneActorClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PhoneActorExists != nullptr)
		*PhoneActorExists = Parms.PhoneActorExists;

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.SpawnAndAddPhoneActors_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>>PhoneActorClasses                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesPhoneActorExist_phoneActorExists                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalPhoneActor_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::SpawnAndAddPhoneActors_ServerOnly(TArray<TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>>& PhoneActorClasses, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Array_Get_Item, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_DoesPhoneActorExist_phoneActorExists, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "SpawnAndAddPhoneActors_ServerOnly");

	Params::AQtnGameStateArchetype_C_SpawnAndAddPhoneActors_ServerOnly_Params Parms{};

	Parms.PhoneActorClasses = PhoneActorClasses;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor = K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_DoesPhoneActorExist_phoneActorExists = CallFunc_DoesPhoneActorExist_phoneActorExists;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnRep_randomStream
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::OnRep_randomStream()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnRep_randomStream");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.TestSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::TestSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "TestSession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ShowEntryUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::ShowEntryUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ShowEntryUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnSetScriptedVOScene_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::OnSetScriptedVOScene_ServerOnly(const struct FGameplayTag& ScriptedVOScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnSetScriptedVOScene_ServerOnly");

	Params::AQtnGameStateArchetype_C_OnSetScriptedVOScene_ServerOnly_Params Parms{};

	Parms.ScriptedVOScene = ScriptedVOScene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.Spawn Always Present Phone Actors Server Only
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::Spawn_Always_Present_Phone_Actors_Server_Only()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "Spawn Always Present Phone Actors Server Only");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ServerSetPlayerMaxUnlockedDay
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxUnlockedDay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::ServerSetPlayerMaxUnlockedDay(int32 MaxUnlockedDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ServerSetPlayerMaxUnlockedDay");

	Params::AQtnGameStateArchetype_C_ServerSetPlayerMaxUnlockedDay_Params Parms{};

	Parms.MaxUnlockedDay = MaxUnlockedDay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.Combat Event BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CombatBeginning                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::Combat_Event_BP(bool CombatBeginning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "Combat Event BP");

	Params::AQtnGameStateArchetype_C_Combat_Event_BP_Params Parms{};

	Parms.CombatBeginning = CombatBeginning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::ReadyForGameplay(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ReadyForGameplay");

	Params::AQtnGameStateArchetype_C_ReadyForGameplay_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnPlayerEnterWorldEvent_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::OnPlayerEnterWorldEvent_ServerOnly(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnPlayerEnterWorldEvent_ServerOnly");

	Params::AQtnGameStateArchetype_C_OnPlayerEnterWorldEvent_ServerOnly_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnBossDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnAI_C*               bossPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::OnBossDeath(class ABodyPawnAI_C* bossPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnBossDeath");

	Params::AQtnGameStateArchetype_C_OnBossDeath_Params Parms{};

	Parms.bossPawn = bossPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnLootContainerOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Container_Parent_C*    LootContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Opener                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::OnLootContainerOpened(class ALoot_Container_Parent_C* LootContainer, class AQtnPawn* Opener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnLootContainerOpened");

	Params::AQtnGameStateArchetype_C_OnLootContainerOpened_Params Parms{};

	Parms.LootContainer = LootContainer;
	Parms.Opener = Opener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ExecuteUbergraph_QtnGameStateArchetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Container_Parent_C*    K2Node_CustomEvent_lootContainer                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_opener                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUI_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_scriptedVOScene                                     (NoDestructor, HasGetValueTypeHash)
// struct FQtnPhoneActorArray         CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_maxUnlockedDay                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_combatBeginning                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnOutcomeTrackingSubsystem*CallFunc_GetOutcomeTrackingSubsystem_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnGameplayTagArray        CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_Map_Find_Value_2                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_DoesThisMapSpawnBodiesBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMesh*>       CallFunc_PreloadDefaultMeshesForClass_ReturnValue                (ReferenceParm)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// int32                              CallFunc_CalculatePlayerLevelFromPerks_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetQtnTimeSeconds_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetQtnTimeSeconds_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetAveragePlayerPerkLevel_averagePlayerPerkLevel        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_CustomEvent_bossPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameStateArchetype_C::ExecuteUbergraph_QtnGameStateArchetype(int32 EntryPoint, class ALoot_Container_Parent_C* K2Node_CustomEvent_lootContainer, class AQtnPawn* K2Node_CustomEvent_opener, bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_Event_scriptedVOScene, const struct FQtnPhoneActorArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 K2Node_CustomEvent_maxUnlockedDay, bool K2Node_CustomEvent_combatBeginning, int32 CallFunc_Max_ReturnValue, class UQtnOutcomeTrackingSubsystem* CallFunc_GetOutcomeTrackingSubsystem_ReturnValue, const struct FQtnGameplayTagArray& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FGameplayTag& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_isServer, TArray<class USkeletalMesh*>& CallFunc_PreloadDefaultMeshesForClass_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetAveragePlayerPerkLevel_averagePlayerPerkLevel, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class ABodyPawnAI_C* K2Node_CustomEvent_bossPawn, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ExecuteUbergraph_QtnGameStateArchetype");

	Params::AQtnGameStateArchetype_C_ExecuteUbergraph_QtnGameStateArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_lootContainer = K2Node_CustomEvent_lootContainer;
	Parms.K2Node_CustomEvent_opener = K2Node_CustomEvent_opener;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUI_ReturnValue = CallFunc_GetLocalPlayerUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_scriptedVOScene = K2Node_Event_scriptedVOScene;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_maxUnlockedDay = K2Node_CustomEvent_maxUnlockedDay;
	Parms.K2Node_CustomEvent_combatBeginning = K2Node_CustomEvent_combatBeginning;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetOutcomeTrackingSubsystem_ReturnValue = CallFunc_GetOutcomeTrackingSubsystem_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_DoesThisMapSpawnBodiesBP_outputPin = CallFunc_DoesThisMapSpawnBodiesBP_outputPin;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_PreloadDefaultMeshesForClass_ReturnValue = CallFunc_PreloadDefaultMeshesForClass_ReturnValue;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_CalculatePlayerLevelFromPerks_ReturnValue = CallFunc_CalculatePlayerLevelFromPerks_ReturnValue;
	Parms.CallFunc_GetQtnTimeSeconds_ReturnValue = CallFunc_GetQtnTimeSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetQtnTimeSeconds_ReturnValue_1 = CallFunc_GetQtnTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAveragePlayerPerkLevel_averagePlayerPerkLevel = CallFunc_GetAveragePlayerPerkLevel_averagePlayerPerkLevel;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_bossPawn = K2Node_CustomEvent_bossPawn;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnPawnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    DeadPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    SourceVerb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::OnPawnDeath__DelegateSignature(class AQtnPawn* DeadPawn, class UQtnVerb* SourceVerb, class AQtnPawn* Culprit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnPawnDeath__DelegateSignature");

	Params::AQtnGameStateArchetype_C_OnPawnDeath__DelegateSignature_Params Parms{};

	Parms.DeadPawn = DeadPawn;
	Parms.SourceVerb = SourceVerb;
	Parms.Culprit = Culprit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.IsHordeModeUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::IsHordeModeUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "IsHordeModeUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.BotExitWorldEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnAIAllyBot_C*        ExitingBotBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::BotExitWorldEvent__DelegateSignature(class ABodyPawnAIAllyBot_C* ExitingBotBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "BotExitWorldEvent__DelegateSignature");

	Params::AQtnGameStateArchetype_C_BotExitWorldEvent__DelegateSignature_Params Parms{};

	Parms.ExitingBotBody = ExitingBotBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.BotEnterWorldEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnAIAllyBot_C*        EnteringBotBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::BotEnterWorldEvent__DelegateSignature(class ABodyPawnAIAllyBot_C* EnteringBotBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "BotEnterWorldEvent__DelegateSignature");

	Params::AQtnGameStateArchetype_C_BotEnterWorldEvent__DelegateSignature_Params Parms{};

	Parms.EnteringBotBody = EnteringBotBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.EventOnLootContainerOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Container_Parent_C*    LootContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Opener                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::EventOnLootContainerOpened__DelegateSignature(class ALoot_Container_Parent_C* LootContainer, class AQtnPawn* Opener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "EventOnLootContainerOpened__DelegateSignature");

	Params::AQtnGameStateArchetype_C_EventOnLootContainerOpened__DelegateSignature_Params Parms{};

	Parms.LootContainer = LootContainer;
	Parms.Opener = Opener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.BossDeathEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    bossPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::BossDeathEnd__DelegateSignature(class AQtnPawn* bossPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "BossDeathEnd__DelegateSignature");

	Params::AQtnGameStateArchetype_C_BossDeathEnd__DelegateSignature_Params Parms{};

	Parms.bossPawn = bossPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.BossDeathBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    bossPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::BossDeathBegin__DelegateSignature(class AQtnPawn* bossPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "BossDeathBegin__DelegateSignature");

	Params::AQtnGameStateArchetype_C_BossDeathBegin__DelegateSignature_Params Parms{};

	Parms.bossPawn = bossPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.OnGlobalMapEntryTimerChangedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimerValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnGameStateArchetype_C::OnGlobalMapEntryTimerChangedEvent__DelegateSignature(int32 TimerValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "OnGlobalMapEntryTimerChangedEvent__DelegateSignature");

	Params::AQtnGameStateArchetype_C_OnGlobalMapEntryTimerChangedEvent__DelegateSignature_Params Parms{};

	Parms.TimerValue = TimerValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.GoalPinsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::GoalPinsUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "GoalPinsUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.ArcMapUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::ArcMapUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "ArcMapUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.MissionReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::MissionReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "MissionReady__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.RandomStreamInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::RandomStreamInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "RandomStreamInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameStateArchetype.QtnGameStateArchetype_C.SessionCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameStateArchetype_C::SessionCreated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameStateArchetype_C", "SessionCreated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


