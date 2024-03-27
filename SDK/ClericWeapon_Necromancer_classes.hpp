#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x908 - 0x8F8)
// BlueprintGeneratedClass ClericWeapon_Necromancer.ClericWeapon_Necromancer_C
class AClericWeapon_Necromancer_C : public AClericWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Overlay;                                           // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AClericWeapon_Necromancer_C* GetDefaultObj();

	void ToggleFlame(bool On);
	void ExecuteUbergraph_ClericWeapon_Necromancer(int32 EntryPoint, bool K2Node_Event_On, bool CallFunc_Not_PreBool_ReturnValue);
};

}


