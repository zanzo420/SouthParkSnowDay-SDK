#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass InstantUpgradeAction_GrantCurrency.InstantUpgradeAction_GrantCurrency_C
class UInstantUpgradeAction_GrantCurrency_C : public UQtnInstantUpgradeActionArchetype_C
{
public:
	struct FGameplayTag                          CurrencyTag;                                       // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedInt                         QuantityRange;                                     // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UInstantUpgradeAction_GrantCurrency_C* GetDefaultObj();

	bool K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
};

}


