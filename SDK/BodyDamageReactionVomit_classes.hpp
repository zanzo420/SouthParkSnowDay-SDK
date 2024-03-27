#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x170 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionVomit.BodyDamageReactionVomit_C
class UBodyDamageReactionVomit_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Base_Vomit_Damage;                                 // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Summed_Vomit_Damage;                               // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sickened_CashMinusIn_Conversion_Rate;              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vomit_Damage_Applied;                              // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFatalDamage;                                     // 0x165(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D5D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                VomitCamClass;                                     // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDamageReactionVomit_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	void OnEnterReaction(bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify);
	void OnExitReaction(bool IsServer);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReactionVomit(int32 EntryPoint, enum class EHitReactionAnimationResults Temp_byte_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EHitReactionAnimationResults Temp_byte_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, bool K2Node_Event_isServer_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UQtnAnimNotify* K2Node_Event_animNotify, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_5, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool Temp_bool_Variable_1, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_6, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_2, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_8, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_9, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_3, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue_1, enum class EHitReactionAnimationResults K2Node_Select_Default, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_10, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_11, const class FString& K2Node_Select_Default_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_12, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_13, float Temp_float_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UVomitCam_C* CallFunc_RequestCameraBehavior_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_14, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_15, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_16, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_17, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_18, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue);
};

}


