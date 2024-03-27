#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x1A1 - 0x160)
// BlueprintGeneratedClass BodyDamageReactionBruteTackle.BodyDamageReactionBruteTackle_C
class UBodyDamageReactionBruteTackle_C : public UBodyDamageReactionBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Detatch_Called;                                    // 0x168(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TackleIntro;                                       // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ChosenTackleDamage;                                // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TackleLoop;                                        // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Interrupted;                                       // 0x188(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CameraBehaviorClass;                               // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBruteChargeVerb_C*                    L_tacklingVerb;                                    // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyDamageReactionBruteTackleEnum L_tackleState;                                     // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDamageReactionBruteTackle_C* GetDefaultObj();

	void EndVictimCam(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartVictimCam(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnCameraBehavior* CallFunc_RequestCameraBehavior_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void SetTackleState(enum class EBodyDamageReactionBruteTackleEnum TackleState, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, float CallFunc_PlayReactionMontage_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, float CallFunc_PlayReactionMontage_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_4, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_2, float CallFunc_PlayReactionMontage_ReturnValue_2);
	bool IsReactionFinished(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Server_Attach(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FQtnCarrySettings& K2Node_MakeStruct_QtnCarrySettings, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue);
	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	void DoTackleDamage(class UAnimMontage*& ReactionMontage);
	void DetatchFromTackle(bool Interrupted, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue);
	void OnEnterReaction(bool IsServer);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void OnExitReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void ExecuteUbergraph_BodyDamageReactionBruteTackle(int32 EntryPoint, bool K2Node_Event_isServer_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_2, bool CallFunc_IsCarrying_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_3, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, bool CallFunc_IsCarrying_ReturnValue_1, class UBruteChargeVerb_C* K2Node_DynamicCast_AsBrute_Charge_Verb, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_2, bool CallFunc_AcknowledgeTackle_success, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_3, bool CallFunc_IsVerbActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_4, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull_1, float CallFunc_GetButtonMashRatio_ReturnValue_1);
};

}


