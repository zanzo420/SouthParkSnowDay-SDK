#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x97 (0x4A8 - 0x411)
// BlueprintGeneratedClass BP_SafeSpawnLocation.BP_SafeSpawnLocation_C
class ABP_SafeSpawnLocation_C : public AQtnWaveSpawner_BP_C
{
public:
	uint8                                        Pad_4A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnTextRenderComponent*               Widget;                                            // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        SupportedSpawnerTypes;                             // 0x438(0x10)(Edit, BlueprintVisible)
	TSoftObjectPtr<class AActor>                 SpawnActor;                                        // 0x448(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<enum class EQtnEnemyType>             Supported_AI_Groups;                               // 0x470(0x10)(Edit, BlueprintVisible)
	TSoftObjectPtr<class AQtnPatrolRoute>        DefaultPatrolTether;                               // 0x480(0x28)(Edit, BlueprintVisible, DisableEditOnTemplate, InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SafeSpawnLocation_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SafeSpawnLocation(int32 EntryPoint);
};

}


