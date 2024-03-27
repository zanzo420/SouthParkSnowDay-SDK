#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA28 - 0x9F0)
// BlueprintGeneratedClass Kenny_Explosion_Aura_Verb.Kenny_Explosion_Aura_Verb_C
class UKenny_Explosion_Aura_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnBodyPawn*                          IntendedTarget;                                    // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKenny_SunshineExplosion_BP_C*         R_lastSunshineExplosion;                           // 0xA00(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  IntendedTargets;                                   // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class UBattlefieldTrackingComponent_C*       Cached_Battlefield_Tracking_Component;             // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BombCountMax;                                      // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BombCount;                                         // 0xA24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKenny_Explosion_Aura_Verb_C* GetDefaultObj();

	void GatherTargets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABodyPawnBase_C*>& CallFunc_GetPlayerAndBotBodies_bodies, class ABodyPawnBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_Kenny_Explosion_Aura_Verb(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, TArray<class AQtnBodyPawn*>& Temp_wildcard_Variable, float Temp_float_Variable_2, int32 CallFunc_Array_Length_ReturnValue, float Temp_float_Variable_3, TArray<class AQtnBodyPawn*>& Temp_wildcard_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, float Temp_float_Variable_4, float Temp_float_Variable_5, enum class EQtnDifficulty Temp_byte_Variable, float Temp_float_Variable_6, float K2Node_Select_Default, float Temp_float_Variable_7, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_2, class AQtnBodyPawn* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AKenny_SunshineExplosion_BP_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, bool K2Node_Event_isServer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, int32 K2Node_Select_Default_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, float CallFunc_GetHealth_health_1, float CallFunc_GetHealth_maxHealth_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


