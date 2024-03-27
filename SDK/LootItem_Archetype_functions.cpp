#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootItem_Archetype.LootItem_Archetype_C
// (Actor)

class UClass* ALootItem_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootItem_Archetype_C");

	return Clss;
}


// LootItem_Archetype_C LootItem_Archetype.Default__LootItem_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALootItem_Archetype_C* ALootItem_Archetype_C::GetDefaultObj()
{
	static class ALootItem_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALootItem_Archetype_C*>(ALootItem_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LootItem_Archetype.LootItem_Archetype_C.HasAnyUpgradeToIncreaseLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasUpgrades_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgrade*>         CallFunc_GetCurrentUpgradesArray_ReturnValue                     (ReferenceParm)
// class UQtnUpgrade*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUpgradable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::HasAnyUpgradeToIncreaseLevel(class AQtnBodyPawn* bodyPawn, bool* HasUpgrades_, int32 Temp_int_Array_Index_Variable, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, class UQtnUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsLevelUpgradable_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "HasAnyUpgradeToIncreaseLevel");

	Params::ALootItem_Archetype_C_HasAnyUpgradeToIncreaseLevel_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentUpgradesArray_ReturnValue = CallFunc_GetCurrentUpgradesArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsLevelUpgradable_ReturnValue = CallFunc_IsLevelUpgradable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUpgrades_ != nullptr)
		*HasUpgrades_ = Parms.HasUpgrades_;

}


// Function LootItem_Archetype.LootItem_Archetype_C.ConditionalAutoTagLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::ConditionalAutoTagLoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "ConditionalAutoTagLoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.HandleCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CutsceneActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              AttachedActors                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::HandleCutscene(bool CutsceneActive, const TArray<class AActor*>& AttachedActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "HandleCutscene");

	Params::ALootItem_Archetype_C_HandleCutscene_Params Parms{};

	Parms.CutsceneActive = CutsceneActive;
	Parms.AttachedActors = AttachedActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.Apply Heal To Allies Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealingAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABodyPawnBase_C*>     CallFunc_GetPlayerAndBotBodies_bodies                            (ReferenceParm, ContainsInstancedReference)
// class ABodyPawnBase_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::Apply_Heal_To_Allies_Server_Only(float HealingAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "Apply Heal To Allies Server Only");

	Params::ALootItem_Archetype_C_Apply_Heal_To_Allies_Server_Only_Params Parms{};

	Parms.HealingAmount = HealingAmount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetPlayerAndBotBodies_bodies = CallFunc_GetPlayerAndBotBodies_bodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue = CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.CanIncreaseSlotLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UQtnUpgradeSlot*             SlotToCheck                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelsToIncrease                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanIncreaaseLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// class UQtnUpgrade*                 CallFunc_GetCurrentSlottedUpgrade_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::CanIncreaseSlotLevel(class UQtnUpgradeSlot* SlotToCheck, int32 LevelsToIncrease, bool* CanIncreaaseLevel, bool CallFunc_IsValid_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "CanIncreaseSlotLevel");

	Params::ALootItem_Archetype_C_CanIncreaseSlotLevel_Params Parms{};

	Parms.SlotToCheck = SlotToCheck;
	Parms.LevelsToIncrease = LevelsToIncrease;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_GetCurrentSlottedUpgrade_ReturnValue = CallFunc_GetCurrentSlottedUpgrade_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanIncreaaseLevel != nullptr)
		*CanIncreaaseLevel = Parms.CanIncreaaseLevel;

}


// Function LootItem_Archetype.LootItem_Archetype_C.HasAnyUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPlayerPawn*              InPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasUpgrades                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue                             (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_1                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotFilled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_2                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetAllEquippedVerbs_pawnVerbs                           (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_3                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotFilled_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::HasAnyUpgrades(class AQtnPlayerPawn* InPawn, bool* HasUpgrades, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsSlotFilled_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class UQtnVerb* CallFunc_Array_Get_Item_3, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsSlotFilled_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "HasAnyUpgrades");

	Params::ALootItem_Archetype_C_HasAnyUpgrades_Params Parms{};

	Parms.InPawn = InPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue = CallFunc_GetActualEquippedItem_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue_1 = CallFunc_GetActualEquippedItem_ReturnValue_1;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue = CallFunc_GetUpgradeSlots_ReturnValue;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_1 = CallFunc_GetUpgradeSlots_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsSlotFilled_ReturnValue = CallFunc_IsSlotFilled_ReturnValue;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_2 = CallFunc_GetUpgradeSlots_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetAllEquippedVerbs_pawnVerbs = CallFunc_GetAllEquippedVerbs_pawnVerbs;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsSlotFilled_ReturnValue_1 = CallFunc_IsSlotFilled_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsSlotFilled_ReturnValue_2 = CallFunc_IsSlotFilled_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_3 = CallFunc_GetUpgradeSlots_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsSlotFilled_ReturnValue_3 = CallFunc_IsSlotFilled_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUpgrades != nullptr)
		*HasUpgrades = Parms.HasUpgrades;

}


// Function LootItem_Archetype.LootItem_Archetype_C.IncreaseRandomUpgradeLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                LOCAL_BodyPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_origLevel                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             LOCAL_ChosenSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     LOCAL_AvailableSlots                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatWeaponSwapBase_C*   CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IncreaseRandomWeaponUpgradeLevel_FoundUpgrade           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFQtnUpgradeSaveData        CallFunc_IncreaseRandomWeaponUpgradeLevel_UpgradeSaveData        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue                             (ConstParm, ReferenceParm, ContainsInstancedReference)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_1                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_2                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetAllEquippedVerbs_pawnVerbs                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_3                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSlotFilled_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue_1                      (ConstParm)
// class UQtnUpgrade*                 CallFunc_GetCurrentSlottedUpgrade_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue_1                        (None)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// bool                               CallFunc_UpdateRolledData_ServerOnly_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             CallFunc_Array_Random_OutItem                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::IncreaseRandomUpgradeLevel(class AQtnBodyPawn* LOCAL_BodyPawn, int32 LOCAL_origLevel, class UQtnUpgradeSlot* LOCAL_ChosenSlot, const TArray<class UQtnUpgradeSlot*>& LOCAL_AvailableSlots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class UQtnCheatWeaponSwapBase_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IncreaseRandomWeaponUpgradeLevel_FoundUpgrade, const struct FFQtnUpgradeSaveData& CallFunc_IncreaseRandomWeaponUpgradeLevel_UpgradeSaveData, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_2, class UQtnVerb* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_4, bool CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_3, bool CallFunc_IsSlotFilled_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsSlotFilled_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue_1, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue_1, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, int32 CallFunc_Min_ReturnValue, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "IncreaseRandomUpgradeLevel");

	Params::ALootItem_Archetype_C_IncreaseRandomUpgradeLevel_Params Parms{};

	Parms.LOCAL_BodyPawn = LOCAL_BodyPawn;
	Parms.LOCAL_origLevel = LOCAL_origLevel;
	Parms.LOCAL_ChosenSlot = LOCAL_ChosenSlot;
	Parms.LOCAL_AvailableSlots = LOCAL_AvailableSlots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_IncreaseRandomWeaponUpgradeLevel_FoundUpgrade = CallFunc_IncreaseRandomWeaponUpgradeLevel_FoundUpgrade;
	Parms.CallFunc_IncreaseRandomWeaponUpgradeLevel_UpgradeSaveData = CallFunc_IncreaseRandomWeaponUpgradeLevel_UpgradeSaveData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue = CallFunc_GetActualEquippedItem_ReturnValue;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue = CallFunc_GetUpgradeSlots_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue_1 = CallFunc_GetActualEquippedItem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_1 = CallFunc_GetUpgradeSlots_ReturnValue_1;
	Parms.CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel = CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_1 = CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsSlotFilled_ReturnValue = CallFunc_IsSlotFilled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsSlotFilled_ReturnValue_1 = CallFunc_IsSlotFilled_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_2 = CallFunc_GetUpgradeSlots_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetAllEquippedVerbs_pawnVerbs = CallFunc_GetAllEquippedVerbs_pawnVerbs;
	Parms.CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_2 = CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_3 = CallFunc_GetUpgradeSlots_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_3 = CallFunc_CanIncreaseSlotLevel_CanIncreaaseLevel_3;
	Parms.CallFunc_IsSlotFilled_ReturnValue_2 = CallFunc_IsSlotFilled_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsSlotFilled_ReturnValue_3 = CallFunc_IsSlotFilled_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue_1 = CallFunc_GetRolledUpgradeData_ReturnValue_1;
	Parms.CallFunc_GetCurrentSlottedUpgrade_ReturnValue = CallFunc_GetCurrentSlottedUpgrade_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue_1 = CallFunc_GetUpgradeSettings_ReturnValue_1;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.CallFunc_UpdateRolledData_ServerOnly_ReturnValue = CallFunc_UpdateRolledData_ServerOnly_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_2 = CallFunc_GetOccupiedBodyPawn_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_3 = CallFunc_GetOccupiedBodyPawn_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.CanUserPickup
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPlayerPawn*              User                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUpgrades_HasUpgrades                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUpgradeToIncreaseLevel_HasUpgrades_               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCheatWeaponSwapBase_C*   CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_canBeRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSavedUpgrades_HasSavedUpgrades                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUpgrade_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLootRecipient_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLootRecipient_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUserPickup_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ALootItem_Archetype_C::CanUserPickup(class AQtnPlayerPawn* User, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_HasAnyUpgrades_HasUpgrades, bool CallFunc_HasAnyUpgradeToIncreaseLevel_HasUpgrades_, class UQtnCheatWeaponSwapBase_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_HasSavedUpgrades_HasSavedUpgrades, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_IsLootRecipient_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLootRecipient_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue_1, bool CallFunc_CanUserPickup_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "CanUserPickup");

	Params::ALootItem_Archetype_C_CanUserPickup_Params Parms{};

	Parms.User = User;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_HasAnyUpgrades_HasUpgrades = CallFunc_HasAnyUpgrades_HasUpgrades;
	Parms.CallFunc_HasAnyUpgradeToIncreaseLevel_HasUpgrades_ = CallFunc_HasAnyUpgradeToIncreaseLevel_HasUpgrades_;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_IsDead_canBeRevived = CallFunc_IsDead_canBeRevived;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_HasSavedUpgrades_HasSavedUpgrades = CallFunc_HasSavedUpgrades_HasSavedUpgrades;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasUpgrade_ReturnValue = CallFunc_HasUpgrade_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_2 = CallFunc_GetOccupiedBodyPawn_ReturnValue_2;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_IsLootRecipient_ReturnValue = CallFunc_IsLootRecipient_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLootRecipient_ReturnValue_1 = CallFunc_IsLootRecipient_ReturnValue_1;
	Parms.CallFunc_GetAttributeValue_ReturnValue_1 = CallFunc_GetAttributeValue_ReturnValue_1;
	Parms.CallFunc_CanUserPickup_ReturnValue = CallFunc_CanUserPickup_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue = CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootItem_Archetype.LootItem_Archetype_C.FetchWorldLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ALootItem_Archetype_C::FetchWorldLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "FetchWorldLocation");

	Params::ALootItem_Archetype_C_FetchWorldLocation_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootItem_Archetype.LootItem_Archetype_C.FetchShowItemPopUpBool
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ALootItem_Archetype_C::FetchShowItemPopUpBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "FetchShowItemPopUpBool");

	Params::ALootItem_Archetype_C_FetchShowItemPopUpBool_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootItem_Archetype.LootItem_Archetype_C.FetchItemData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnItemData                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)

struct FQtnItemData ALootItem_Archetype_C::FetchItemData(const struct FQtnItemData& CallFunc_GetItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "FetchItemData");

	Params::ALootItem_Archetype_C_FetchItemData_Params Parms{};

	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootItem_Archetype.LootItem_Archetype_C.FetchItemActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ALootItem_Archetype_C::FetchItemActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "FetchItemActor");

	Params::ALootItem_Archetype_C_FetchItemActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnDebugDisplay");

	Params::ALootItem_Archetype_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.BndEvt__TriggerUI_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALootItem_Archetype_C::BndEvt__TriggerUI_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "BndEvt__TriggerUI_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ALootItem_Archetype_C_BndEvt__TriggerUI_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.BndEvt__TriggerPickup_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALootItem_Archetype_C::BndEvt__TriggerPickup_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "BndEvt__TriggerPickup_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ALootItem_Archetype_C_BndEvt__TriggerPickup_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnPickupStartEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::OnPickupStartEvent(class AQtnPlayerPawn* TargetPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnPickupStartEvent");

	Params::ALootItem_Archetype_C_OnPickupStartEvent_Params Parms{};

	Parms.TargetPawn = TargetPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_2_QtnOnAccumulatorEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobAccumulatorComponent*Accumulator                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    LastFrobbingPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_2_QtnOnAccumulatorEvent__DelegateSignature(class UQtnFrobAccumulatorComponent* Accumulator, class AQtnPawn* LastFrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_2_QtnOnAccumulatorEvent__DelegateSignature");

	Params::ALootItem_Archetype_C_BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_2_QtnOnAccumulatorEvent__DelegateSignature_Params Parms{};

	Parms.Accumulator = Accumulator;
	Parms.LastFrobbingPawn = LastFrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_3_QtnOnAccumulatorEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobAccumulatorComponent*Accumulator                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    LastFrobbingPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_3_QtnOnAccumulatorEvent__DelegateSignature(class UQtnFrobAccumulatorComponent* Accumulator, class AQtnPawn* LastFrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_3_QtnOnAccumulatorEvent__DelegateSignature");

	Params::ALootItem_Archetype_C_BndEvt__FrobAccumulatorComponent_K2Node_ComponentBoundEvent_3_QtnOnAccumulatorEvent__DelegateSignature_Params Parms{};

	Parms.Accumulator = Accumulator;
	Parms.LastFrobbingPawn = LastFrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnUpdateFrobFillUIEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InFillRatio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::OnUpdateFrobFillUIEvent(float InFillRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnUpdateFrobFillUIEvent");

	Params::ALootItem_Archetype_C_OnUpdateFrobFillUIEvent_Params Parms{};

	Parms.InFillRatio = InFillRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnSpawnCompleteEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnSpawnCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnSpawnCompleteEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.BndEvt__TriggerUI_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::BndEvt__TriggerUI_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "BndEvt__TriggerUI_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	Params::ALootItem_Archetype_C_BndEvt__TriggerUI_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnAttachItemData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ALootItem_Archetype_C::OnAttachItemData(const struct FQtnItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnAttachItemData");

	Params::ALootItem_Archetype_C_OnAttachItemData_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnInventoryAdd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::OnInventoryAdd(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnInventoryAdd");

	Params::ALootItem_Archetype_C_OnInventoryAdd_Params Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnPickupConsumable_LocalOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnPickupConsumable_LocalOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnPickupConsumable_LocalOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnPickupConsumable_ServerOnly
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnPickupConsumable_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnPickupConsumable_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnPickupCompleteEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnPickupCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnPickupCompleteEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnConfigureVisualsEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnConfigureVisualsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnConfigureVisualsEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.DelaySpawnAnimation_ServerOnly
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnLootSpawnSettings       Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              SpawnDelay                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::DelaySpawnAnimation_ServerOnly(const struct FQtnLootSpawnSettings& Settings, float SpawnDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "DelaySpawnAnimation_ServerOnly");

	Params::ALootItem_Archetype_C_DelaySpawnAnimation_ServerOnly_Params Parms{};

	Parms.Settings = Settings;
	Parms.SpawnDelay = SpawnDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.UpgradeLeveledUp_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OrigLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void ALootItem_Archetype_C::UpgradeLeveledUp_MULTI(class AQtnBodyPawn* Body, int32 OrigLevel, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& RolledUpgradeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "UpgradeLeveledUp_MULTI");

	Params::ALootItem_Archetype_C_UpgradeLeveledUp_MULTI_Params Parms{};

	Parms.Body = Body;
	Parms.OrigLevel = OrigLevel;
	Parms.UpgradeSettings = UpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnPickupCurrency_ServerOnly
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::OnPickupCurrency_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnPickupCurrency_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::PickupFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "PickupFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.OnSpawnUpdateEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::OnSpawnUpdateEvent(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "OnSpawnUpdateEvent");

	Params::ALootItem_Archetype_C_OnSpawnUpdateEvent_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALootItem_Archetype_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "ReceiveEndPlay");

	Params::ALootItem_Archetype_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.LocalCutsceneEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCutsceneActive                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DoWorldCleanup                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::LocalCutsceneEvent_Event_0(bool IsCutsceneActive, bool DoWorldCleanup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "LocalCutsceneEvent_Event_0");

	Params::ALootItem_Archetype_C_LocalCutsceneEvent_Event_0_Params Parms{};

	Parms.IsCutsceneActive = IsCutsceneActive;
	Parms.DoWorldCleanup = DoWorldCleanup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LootItem_Archetype.LootItem_Archetype_C.IsBonusSpawnFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALootItem_Archetype_C::IsBonusSpawnFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "IsBonusSpawnFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootItem_Archetype.LootItem_Archetype_C.ExecuteUbergraph_LootItem_Archetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_Event_TargetPawn                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobAccumulatorComponent*K2Node_ComponentBoundEvent_accumulator_1                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_ComponentBoundEvent_lastFrobbingPawn_1                    (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobAccumulatorComponent*K2Node_ComponentBoundEvent_accumulator                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_ComponentBoundEvent_lastFrobbingPawn                      (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_inFillRatio                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                K2Node_Event_itemData                                            (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_owningActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLootRecipient_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnConsumableBehaviourTag>CallFunc_GetConsumableBehaviourTags_TagsArray                    (ReferenceParm)
// bool                               CallFunc_GetConsumableBehaviourTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnConsumableBehaviourTag  CallFunc_Array_Get_Item                                          (NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_1            (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TagIsChildOfParent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLootRecipientLocalPlayer_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetRarityColor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnLootSpawnSettings       K2Node_Event_Settings                                            (NoDestructor)
// float                              K2Node_Event_SpawnDelay                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)
// class AQtnBodyPawn*                K2Node_CustomEvent_Body                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OrigLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         K2Node_CustomEvent_UpgradeSettings                               (None)
// struct FQtnRolledUpgradeData       K2Node_CustomEvent_RolledUpgradeData                             (None)
// struct FGameplayTag                CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_2            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalHUD_C*                  CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_AirborneCalories_C*    CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// struct FGameplayTag                CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// struct FGameplayTag                CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// class UBodypawnHealingComponent_C* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Up_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalCutsceneActive_doWorldCleanup                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalCutsceneActive_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isCutsceneActive                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_doWorldCleanup                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUDScreen_C*          CallFunc_GetSubScreen_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatHUD_C*                K2Node_DynamicCast_AsCombat_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnItemDataProviderInterface>CallFunc_PickupNotification_Pickup_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootItem_Archetype_C::ExecuteUbergraph_LootItem_Archetype(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_1, class AQtnPlayerPawn* K2Node_Event_TargetPawn, class UQtnFrobAccumulatorComponent* K2Node_ComponentBoundEvent_accumulator_1, class AQtnPawn* K2Node_ComponentBoundEvent_lastFrobbingPawn_1, bool K2Node_ComponentBoundEvent_isServer_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UQtnFrobAccumulatorComponent* K2Node_ComponentBoundEvent_accumulator, class AQtnPawn* K2Node_ComponentBoundEvent_lastFrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, float K2Node_Event_inFillRatio, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FQtnItemData& K2Node_Event_itemData, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_Event_owningActor, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsHero_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasLootRecipient_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, TArray<struct FQtnConsumableBehaviourTag>& CallFunc_GetConsumableBehaviourTags_TagsArray, bool CallFunc_GetConsumableBehaviourTags_ReturnValue, const struct FQtnConsumableBehaviourTag& CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_TagIsChildOfParent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsLootRecipientLocalPlayer_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, const struct FQtnLootSpawnSettings& K2Node_Event_Settings, float K2Node_Event_SpawnDelay, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_Body, int32 K2Node_CustomEvent_OrigLevel, const struct FQtnUpgradeSettings& K2Node_CustomEvent_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_RolledUpgradeData, const struct FGameplayTag& CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_3, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, class UPerk_AirborneCalories_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_1, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_4, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_4, const struct FGameplayTag& CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_2, class UBodypawnHealingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_6, class UClass* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue, float K2Node_Event_Progress, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_5, float CallFunc_GetFloatValue_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, float Temp_float_Variable, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_6, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UCombatHUD_C* K2Node_DynamicCast_AsCombat_HUD, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IQtnItemDataProviderInterface> CallFunc_PickupNotification_Pickup_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootItem_Archetype_C", "ExecuteUbergraph_LootItem_Archetype");

	Params::ALootItem_Archetype_C_ExecuteUbergraph_LootItem_Archetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_1 = K2Node_DynamicCast_AsQtn_Body_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue = CallFunc_GetControllingPlayerPawn_ReturnValue;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue_1 = CallFunc_GetControllingPlayerPawn_ReturnValue_1;
	Parms.K2Node_Event_TargetPawn = K2Node_Event_TargetPawn;
	Parms.K2Node_ComponentBoundEvent_accumulator_1 = K2Node_ComponentBoundEvent_accumulator_1;
	Parms.K2Node_ComponentBoundEvent_lastFrobbingPawn_1 = K2Node_ComponentBoundEvent_lastFrobbingPawn_1;
	Parms.K2Node_ComponentBoundEvent_isServer_1 = K2Node_ComponentBoundEvent_isServer_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_2 = K2Node_DynamicCast_AsQtn_Body_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue_2 = CallFunc_GetControllingPlayerPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_accumulator = K2Node_ComponentBoundEvent_accumulator;
	Parms.K2Node_ComponentBoundEvent_lastFrobbingPawn = K2Node_ComponentBoundEvent_lastFrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.K2Node_Event_inFillRatio = K2Node_Event_inFillRatio;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_3 = K2Node_DynamicCast_AsQtn_Body_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue_3 = CallFunc_GetControllingPlayerPawn_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_4 = K2Node_DynamicCast_AsQtn_Body_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_itemData = K2Node_Event_itemData;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_owningActor = K2Node_Event_owningActor;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_5 = K2Node_DynamicCast_AsQtn_Body_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasLootRecipient_ReturnValue = CallFunc_HasLootRecipient_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue = CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetConsumableBehaviourTags_TagsArray = CallFunc_GetConsumableBehaviourTags_TagsArray;
	Parms.CallFunc_GetConsumableBehaviourTags_ReturnValue = CallFunc_GetConsumableBehaviourTags_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_1 = CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_1;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1 = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_TagIsChildOfParent_ReturnValue = CallFunc_TagIsChildOfParent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_IsLootRecipientLocalPlayer_ReturnValue = CallFunc_IsLootRecipientLocalPlayer_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRarityColor_ReturnValue = CallFunc_GetRarityColor_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_2 = CallFunc_BP_BeginEffect_ReturnValue_2;
	Parms.K2Node_Event_Settings = K2Node_Event_Settings;
	Parms.K2Node_Event_SpawnDelay = K2Node_Event_SpawnDelay;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.K2Node_CustomEvent_OrigLevel = K2Node_CustomEvent_OrigLevel;
	Parms.K2Node_CustomEvent_UpgradeSettings = K2Node_CustomEvent_UpgradeSettings;
	Parms.K2Node_CustomEvent_RolledUpgradeData = K2Node_CustomEvent_RolledUpgradeData;
	Parms.CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_2 = CallFunc_GetConsumableTypeAsGameplayTag_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_2 = CallFunc_IsLocallyControlledPlayer_ReturnValue_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_3 = CallFunc_BP_BeginEffect_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_2 = CallFunc_GetOccupiedBodyPawn_ReturnValue_2;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue = CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_3 = CallFunc_GetOccupiedBodyPawn_ReturnValue_3;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_1 = CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_4 = CallFunc_BP_BeginEffect_ReturnValue_4;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue_1 = CallFunc_GetNiagaraComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_4 = CallFunc_GetOccupiedBodyPawn_ReturnValue_4;
	Parms.CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_2 = CallFunc_GetCurrencyTypeAsGameplayTag_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_5 = CallFunc_BP_BeginEffect_ReturnValue_5;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Vector_Up_ReturnValue = CallFunc_Vector_Up_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsLocalCutsceneActive_doWorldCleanup = CallFunc_IsLocalCutsceneActive_doWorldCleanup;
	Parms.CallFunc_IsLocalCutsceneActive_ReturnValue = CallFunc_IsLocalCutsceneActive_ReturnValue;
	Parms.K2Node_CustomEvent_isCutsceneActive = K2Node_CustomEvent_isCutsceneActive;
	Parms.K2Node_CustomEvent_doWorldCleanup = K2Node_CustomEvent_doWorldCleanup;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_3 = CallFunc_IsLocallyControlledPlayer_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue_2 = CallFunc_GetNiagaraComponent_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_6 = CallFunc_BP_BeginEffect_ReturnValue_6;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI_1 = CallFunc_GetLocalPlayerUIBP_localPlayerUI_1;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin_1 = CallFunc_GetLocalPlayerUIBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetScreen_ReturnValue_1 = CallFunc_GetScreen_ReturnValue_1;
	Parms.CallFunc_GetSubScreen_ReturnValue = CallFunc_GetSubScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCombat_HUD = K2Node_DynamicCast_AsCombat_HUD;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_PickupNotification_Pickup_CastInput = CallFunc_PickupNotification_Pickup_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


