#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x188 - 0xF0)
// BlueprintGeneratedClass QtnCheatBPBase.QtnCheatBPBase_C
class UQtnCheatBPBase_C : public UQtnStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                OnInvoke_Verb;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnCheatSlot                     Occupied_Slot;                                     // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnAttributeComponent*                Local_Attribute_Component_Reference;               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBodyBSComponent_C*                    Local_Cheat_Manager_Reference;                     // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnUIBodyActionEnum              Body_Action_Slot_Overwritten;                      // 0x118(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Currently_Invoked;                           // 0x119(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C67[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Suppressed_Verb;                                   // 0x120(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class AQtnBodyPawn>>    AI_Class_Mask;                                     // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Cheat_Terminated;                                  // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Player_Mask;                                       // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        Status_Effects_To_Add_On_Invoke;                   // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        Status_Effects_To_Remove_On_Retire;                // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnPatrolRouteComponent*              Old_Tethered_Patrol_Route;                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VerbToAdd;                                         // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnVerb*                              InvokingVerb;                                      // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnCheatBPBase_C* GetDefaultObj();

	void GetReplicatedEnemyBSSaveData_ServerOnly(struct FQtnReplicatedSaveData* CombinedReplicatedSaveData, const struct FQtnReplicatedSaveData& LOCAL_combinedReplicatedSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7);
	void Get_Verb_Associated_With_Body_Action(bool* Verb_Found_, class UQtnVerb** Verb_Result, float Temp_float_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable_1, class UQtnVerb* Temp_wildcard_Variable, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool Temp_bool_Variable_1, TArray<class UQtnVerb*>& CallFunc_GetAllVerbs_verbs, int32 CallFunc_Array_Length_ReturnValue, enum class EQtnUIBodyActionEnum CallFunc_GetAssociatedInputAction_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue);
	void Retire_Cheat(class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnVerb* CallFunc_AddVerb_ServerOnly_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Invoke_Cheat(class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetOwningDamageReceptorComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UQtnVerb* CallFunc_AddVerb_ServerOnly_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Get_Verb_Associated_With_Body_Action_Verb_Found_, class UQtnVerb* CallFunc_Get_Verb_Associated_With_Body_Action_Verb_Result, class UClass* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetOwningDamageReceptorComponent_ReturnValue_1, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, class UStatusEffect_Cheat_Base_C* K2Node_DynamicCast_AsStatus_Effect_Cheat_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void PlayEnemyBSExplainVO_ServerOnly(const struct FGameplayTag& BullshitType);
	void ExecuteUbergraph_QtnCheatBPBase(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Unallocate_Power_Slot_For_Cheat_ServerOnly_Was_Remove_Successful_, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UQtnPatrolRouteComponent* CallFunc_GetTetheredPatrolRouteComponent_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCombatHUD_FoundWidget, class UCombatHUD_C* CallFunc_GetCombatHUD_CombatHUD, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool CallFunc_IsValid_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_6, class UBodyBSComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_7, class UBodyBSComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_4, class UBodyBSComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_Allocate_Power_Slot_For_Cheat_ServerOnly_Slot_Granted_, enum class EQtnUIBodyActionEnum CallFunc_Allocate_Power_Slot_For_Cheat_ServerOnly_Slot_That_Was_Granted, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_5, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_10, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_11, bool CallFunc_HasAuthority_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_bullshitType, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
	void Cheat_Terminated__DelegateSignature(class UClass* Which_Cheat, class AQtnBodyPawn* Which_Actor);
};

}

