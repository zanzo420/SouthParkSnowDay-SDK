#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x150 - 0x120)
// BlueprintGeneratedClass StatusEffect_FlashbangKnockdown.StatusEffect_FlashbangKnockdown_C
class UStatusEffect_FlashbangKnockdown_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ElapsedTime;                                       // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DownedEffect;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockdownDetected;                                 // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KnockdownPatience;                                 // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockdownTimer;                                    // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnStatusPresentation            KnockdownStatus;                                   // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           EffectInstance;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_FlashbangKnockdown_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void SetKnockdownStatus(enum class EQtnStatusPresentation Status, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetAffectedActor_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_FlashbangKnockdown(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue_1);
};

}


