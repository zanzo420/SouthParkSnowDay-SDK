#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1A8 - 0x180)
// BlueprintGeneratedClass Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C
class UAttribute_StatusEffectThreshold_Base_C : public UQtnThresholdAttribute
{
public:
	class UTexture2D*                            Status_Icon;                                       // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Threshold_Color;                                   // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThresholdBGColor;                                  // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttribute_StatusEffectThreshold_Base_C* GetDefaultObj();

	void GetAssociatedStatusEffect(class UClass** StatusEffect);
	void GetCalculatedThresholdValue(float* Value, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GetIcon(class UTexture2D** Tex);
	void GetColor(struct FLinearColor* Color);
	void GetBGColor(struct FLinearColor* BGColor);
};

}


