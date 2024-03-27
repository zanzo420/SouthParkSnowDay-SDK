#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B0 - 0x1A8)
// BlueprintGeneratedClass Attribute_SE_WytchfireBurningThreshold.Attribute_SE_WytchfireBurningThreshold_C
class UAttribute_SE_WytchfireBurningThreshold_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_SE_WytchfireBurningThreshold_C* GetDefaultObj();

	void ExecuteUbergraph_Attribute_SE_WytchfireBurningThreshold(int32 EntryPoint);
};

}


