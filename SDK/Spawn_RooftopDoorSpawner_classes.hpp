#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x518 - 0x50C)
// BlueprintGeneratedClass Spawn_RooftopDoorSpawner.Spawn_RooftopDoorSpawner_C
class ASpawn_RooftopDoorSpawner_C : public ASpawn_DoorSpawner_Archetype_C
{
public:
	uint8                                        Pad_7382[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpawn_RooftopDoorSpawner_C* GetDefaultObj();

};

}


