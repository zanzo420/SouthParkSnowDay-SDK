#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass AnimNotify_HitReactionThreshold.AnimNotify_HitReactionThreshold_C
class UAnimNotify_HitReactionThreshold_C : public UQtnAnimWindow
{
public:
	float                                        Threshold_Override_Ratio;                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_HitReactionThreshold_C* GetDefaultObj();

	void OnVerbWindowEnd(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, bool Interrupted, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnVerbWindowBegin(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, float TotalDuration, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}


