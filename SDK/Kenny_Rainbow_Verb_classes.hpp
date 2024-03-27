#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0xAE8 - 0xAA9)
// BlueprintGeneratedClass Kenny_Rainbow_Verb.Kenny_Rainbow_Verb_C
class UKenny_Rainbow_Verb_C : public UVerb_Ranged_Archetype_C
{
public:
	uint8                                        Pad_33AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        BarrageCountMax;                                   // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BarrageCount;                                      // 0xABC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       Barrage_Verb_Action;                               // 0xAC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBattlefieldTrackingComponent_C*       Cached_Battlefield_Tracking_Component;             // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnBase_C*>               PotentialTargets;                                  // 0xAD8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UKenny_Rainbow_Verb_C* GetDefaultObj();

	void SelectTarget(class ABodyPawnBase_C** Selected_Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Get_Item, class ABodyPawnBase_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Get_Item_1, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* K2Node_Select_Default);
	void CheckForBarrageOrFinishVerb(class ABodyPawnBase_C* CallFunc_SelectTarget_Selected_Target, float CallFunc_StartVerbAction_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue);
	void GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AKennyBossWeapon_C* K2Node_DynamicCast_AsKenny_Boss_Weapon, bool K2Node_DynamicCast_bSuccess);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void ExecuteUbergraph_Kenny_Rainbow_Verb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, enum class EQtnDifficulty Temp_byte_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, enum class EQtnDifficulty Temp_byte_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, bool Temp_bool_Variable_2, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UStatusEffect_Hover_Kenny_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable_4, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_4, int32 Temp_int_Variable_5, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_isServer_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* CallFunc_SelectTarget_Selected_Target, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer, int32 CallFunc_Add_IntInt_ReturnValue_2, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, float CallFunc_GetHealth_health_1, float CallFunc_GetHealth_maxHealth_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


