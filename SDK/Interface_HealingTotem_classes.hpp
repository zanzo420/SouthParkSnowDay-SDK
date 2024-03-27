#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_HealingTotem.Interface_HealingTotem_C
class IInterface_HealingTotem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_HealingTotem_C* GetDefaultObj();

	void ToggleReviveProxyFeedback(bool On);
	void GetReviveProxyFeedbackOn(bool* ReviveProxyFeedbackOn);
	void GetUpgradeRevivalProxyMultiplier(float* UpgradeRevivalProxyMultiplier);
	void GetUpgradeRevivalProxy(bool* UpgradeRevivalProxy);
};

}


