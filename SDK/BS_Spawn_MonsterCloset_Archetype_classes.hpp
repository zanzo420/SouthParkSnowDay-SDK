#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B8 - 0x4A8)
// BlueprintGeneratedClass BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C
class ABS_Spawn_MonsterCloset_Archetype_C : public ABP_SafeSpawnLocation_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABS_Spawn_MonsterCloset_Archetype_C* GetDefaultObj();

	void GetSpawnAnimsFromBody(class UClass* SpawnerClass, struct FBodySpawnAnimArray* AnimArrayStruct);
	void UserConstructionScript(TSoftObjectPtr<class ABS_Spawn_MonsterCloset_Archetype_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void SpawnPresentationStart();
	void SpawnPresentationStop();
	void PerAISpawn(class AQtnBodyPawn* Body);
	void ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_body);
};

}


