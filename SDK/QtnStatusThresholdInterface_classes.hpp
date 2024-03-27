#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnStatusThresholdInterface.QtnStatusThresholdInterface_C
class IQtnStatusThresholdInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQtnStatusThresholdInterface_C* GetDefaultObj();

	void GetAssociatedStatusEffect(class UClass** StatusEffect);
	void GetBGColor(struct FLinearColor* BGColor);
	void GetColor(struct FLinearColor* Color);
	void GetIcon(class UTexture2D** Tex);
	void GetCalculatedThresholdValue(float* Value);
};

}


