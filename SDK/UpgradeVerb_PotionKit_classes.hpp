#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xA40 - 0x9F0)
// BlueprintGeneratedClass UpgradeVerb_PotionKit.UpgradeVerb_PotionKit_C
class UUpgradeVerb_PotionKit_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TelegraphTimeBeforePotionUse;                      // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeRemaining;                                     // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Verb_Done;                                         // 0xA00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         PotionEquipped;                                    // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D7F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxUsage;                                          // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       Verb_Action_Kids;                                  // 0xA20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       Verb_Action_Adult;                                 // 0xA30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UUpgradeVerb_PotionKit_C* GetDefaultObj();

	void UnEquipPotion(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEnemyUpgrade_PotionKit_C* K2Node_DynamicCast_AsEnemy_Upgrade_Potion_Kit, bool K2Node_DynamicCast_bSuccess);
	void EquipPotion(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEnemyUpgrade_PotionKit_C* K2Node_DynamicCast_AsEnemy_Upgrade_Potion_Kit, bool K2Node_DynamicCast_bSuccess);
	bool IsVerbFinished();
	void Apply_Potion_Kit_Healing_Server_Only(class ABodyPawnBase_C* bodyPawn, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float Temp_float_Variable, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_FMax_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration, bool IsServer);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_UpgradeVerb_PotionKit(int32 EntryPoint, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_2, bool K2Node_Event_isServer_6, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_4, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_7, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_8, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, bool K2Node_Event_isServer_3, bool CallFunc_BooleanOR_ReturnValue, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class ABodyPawnAI_AdultBase_C* K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base, bool K2Node_DynamicCast_bSuccess_4);
};

}


