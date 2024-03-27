#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SpawningInterface.SpawningInterface_C
class ISpawningInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawningInterface_C* GetDefaultObj();

	void GetSpawnAnimsFromBody(class UClass* SpawnerClass, struct FBodySpawnAnimArray* AnimArrayStruct);
	void PerAISpawn(class AQtnBodyPawn* Body);
	void SpawnPresentationStop();
	void SpawnPresentationStart();
};

}


