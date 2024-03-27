#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnVerbUI_Interface.QtnVerbUI_Interface_C
class IQtnVerbUI_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQtnVerbUI_Interface_C* GetDefaultObj();

	void GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText);
	void ShowOnUI(bool* ShouldShow);
	void IsVerbACheat(bool* IsCheat);
	void PresentCooldownWhileDormant();
	void IsVerbWeaponBased(bool* IsWeaponBased);
	void GetCooldownWheelTexture(class UTexture2D** CooldownWheelTexture);
	void IsVerbAPower(bool* IsPower);
};

}


