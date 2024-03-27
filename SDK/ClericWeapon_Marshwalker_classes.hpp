#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x900 - 0x8F8)
// BlueprintGeneratedClass ClericWeapon_Marshwalker.ClericWeapon_Marshwalker_C
class AClericWeapon_Marshwalker_C : public AClericWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AClericWeapon_Marshwalker_C* GetDefaultObj();

	void HandleClericFX_Derived();
	void ExecuteUbergraph_ClericWeapon_Marshwalker(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1);
};

}


