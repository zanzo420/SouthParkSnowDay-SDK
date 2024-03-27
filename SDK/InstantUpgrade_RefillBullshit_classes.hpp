#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x83 - 0x83)
// BlueprintGeneratedClass InstantUpgrade_RefillBullshit.InstantUpgrade_RefillBullshit_C
class UInstantUpgrade_RefillBullshit_C : public UQtnUpgradeArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UInstantUpgrade_RefillBullshit_C* GetDefaultObj();

	bool CanUpgradeBeRolled(class AQtnBodyPawn* TargetBodyPawn, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	class FText CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtn_CheatVerb_Archetype_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetExpendedBullshitAmount_ExpendedBullshits, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


