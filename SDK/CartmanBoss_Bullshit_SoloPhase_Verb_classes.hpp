#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA20 - 0x9F0)
// BlueprintGeneratedClass CartmanBoss_Bullshit_SoloPhase_Verb.CartmanBoss_Bullshit_SoloPhase_Verb_C
class UCartmanBoss_Bullshit_SoloPhase_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UNotificationCard_Widget_C*            PlayerCardNotifications;                           // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGoalHUD_C*                            LocalGoalHUD;                                      // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCartmanBoss_Bullshit_SoloPhase_Verb_C* GetDefaultObj();

	bool CanMantle();
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_CartmanBoss_Bullshit_SoloPhase_Verb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, float CallFunc_StartVerbAction_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


