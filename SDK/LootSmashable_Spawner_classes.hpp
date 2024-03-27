#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x374 - 0x368)
// BlueprintGeneratedClass LootSmashable_Spawner.LootSmashable_Spawner_C
class ALootSmashable_Spawner_C : public AQtnSpawner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ChanceToSpawn;                                     // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALootSmashable_Spawner_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LootSmashable_Spawner(int32 EntryPoint, class AActor* CallFunc_SpawnWithTag_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue);
};

}


