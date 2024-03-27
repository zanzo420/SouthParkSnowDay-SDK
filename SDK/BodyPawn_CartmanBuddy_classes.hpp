#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x15E9 - 0x15E0)
// BlueprintGeneratedClass BodyPawn_CartmanBuddy.BodyPawn_CartmanBuddy_C
class ABodyPawn_CartmanBuddy_C : public ABodyPawn_CartmanBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DoPuff;                                            // 0x15E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABodyPawn_CartmanBuddy_C* GetDefaultObj();

	void HandleDeath();
	void OnQtnReadyForGameplay();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BodyPawn_CartmanBuddy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer);
	void BndEvt__BodyPawn_CartmanBuddy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ExecuteUbergraph_BodyPawn_CartmanBuddy(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, bool K2Node_ComponentBoundEvent_isServer_1, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsAlly_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1);
};

}


