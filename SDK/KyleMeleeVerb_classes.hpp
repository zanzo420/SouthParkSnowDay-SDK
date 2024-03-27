#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0xA39 - 0x9F0)
// BlueprintGeneratedClass KyleMeleeVerb.KyleMeleeVerb_C
class UKyleMeleeVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       Verb_Action_1;                                     // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Charging;                                          // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChargeTimeMax;                                     // 0xA24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeTime;                                        // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKyleBossItem_C*                       As_Kyle_Boss_Item;                                 // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldDoSecondSwing;                               // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UKyleMeleeVerb_C* GetDefaultObj();

	void SetShouldDoCombo(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitializeVariables(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AKyleBossItem_C* K2Node_DynamicCast_AsKyle_Boss_Item, bool K2Node_DynamicCast_bSuccess);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void ExecuteUbergraph_KyleMeleeVerb(int32 EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_4, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_3, float CallFunc_StartVerbAction_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AKyleBossItem_C* K2Node_DynamicCast_AsKyle_Boss_Item, bool K2Node_DynamicCast_bSuccess_2);
};

}


