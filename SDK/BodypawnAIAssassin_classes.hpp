#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E0 - 0x15D0)
// BlueprintGeneratedClass BodypawnAIAssassin.BodypawnAIAssassin_C
class ABodypawnAIAssassin_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Undies;                                            // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodypawnAIAssassin_C* GetDefaultObj();

	void UserConstructionScript();
	void ShowUndies(bool Show);
	void HandleInvisibility(bool WantInvisible);
	void OnOutgoingDamage_Event_0(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ThieveryVFX_Multicast(int32 LostTP, const struct FVector& Location);
	void ExecuteUbergraph_BodypawnAIAssassin(int32 EntryPoint, bool K2Node_CustomEvent_show, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_wantInvisible, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, class AActor* K2Node_Event_damagedActor, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactionInfo, bool K2Node_Event_isServer, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UStatusEffect_Invisibility_AssassinAlly_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, int32 K2Node_CustomEvent_LostTP, const struct FVector& K2Node_CustomEvent_location, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
};

}


