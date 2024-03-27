#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass UpgradeInterface.UpgradeInterface_C
class IUpgradeInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUpgradeInterface_C* GetDefaultObj();

	void RecordUpgradeForTribunal(const struct FQtnRolledUpgradeResult& Upgrade);
	void MakeUpgradeChoiceLocal(int32 ChoiceIndex);
	void SetCardToReplaceLocal(int32 CardIndex);
	void ImproveCard(int32 CardIndex, class ABodyPawnPlayer_C* PlayerBody, int32 OldCurrency, int32 UpgradeCost);
	void PlayerFinished(class ABodyPawnPlayer_C* PlayerBody, int32 ChoiceIndex);
};

}


