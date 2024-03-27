#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// BlueprintGeneratedClass Loot_Container_FinalBossChest.Loot_Container_FinalBossChest_C
class ALoot_Container_FinalBossChest_C : public ALoot_Container_Parent_Frob_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALoot_Container_FinalBossChest_C* GetDefaultObj();

	void ExecuteUbergraph_Loot_Container_FinalBossChest(int32 EntryPoint);
};

}


