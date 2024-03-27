#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7 (0x88 - 0x81)
// BlueprintGeneratedClass Perk_Escape.Perk_Escape_C
class UPerk_Escape_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GrabDurationMultiplierPerLevel;                    // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_Escape_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
	void Get_Calculated_Grab_Duration_Multiplier(float* Multiplier, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
};

}


