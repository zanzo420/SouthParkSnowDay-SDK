#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E0 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIRangedChaff.BodyPawnAIRangedChaff_C
class ABodyPawnAIRangedChaff_C : public ABodyPawnAI_C
{
public:
	FMulticastInlineDelegateProperty_            StringPlucked;                                     // 0x15D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABodyPawnAIRangedChaff_C* GetDefaultObj();

	void HandleDeath(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
	void StringPlucked__DelegateSignature();
};

}


