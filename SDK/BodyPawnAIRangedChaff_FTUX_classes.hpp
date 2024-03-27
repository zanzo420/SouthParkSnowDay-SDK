#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x17A0 - 0x15E0)
// BlueprintGeneratedClass BodyPawnAIRangedChaff_FTUX.BodyPawnAIRangedChaff_FTUX_C
class ABodyPawnAIRangedChaff_FTUX_C : public ABodyPawnAIRangedChaff_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_HitLines;                                       // 0x15F0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIndicatorData                        Indicator_Data_0;                                  // 0x1618(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_5F75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               IconOnscreen_0;                                    // 0x1748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconOffscreen_0;                                   // 0x1750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnScreen_Texture                     OnscreenIconData_0;                                // 0x1758(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    OffscreenIconData_0;                               // 0x1780(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIRangedChaff_FTUX_C* GetDefaultObj();

	void CreateIndicatorData();
	void GetIndicatorData(struct FIndicatorData* IndicatorData);
	void CanAcceptEnemyUpgrades(bool* Accept);
	void HandleDeath(bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void BndEvt__BodyPawnAIRangedChaff_FTUX_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BodyPawnAIRangedChaff_FTUX(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


