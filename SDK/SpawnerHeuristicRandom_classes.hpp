#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass SpawnerHeuristicRandom.SpawnerHeuristicRandom_C
class USpawnerHeuristicRandom_C : public UQtnSkirmishSpawnerHeuristic
{
public:
	float                                        MaxValue;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpawnerHeuristicRandom_C* GetDefaultObj();

	float CalculateHeuristicScore(class AQtnSkirmish* OwningSkirmish, class AQtnSpawner* Spawner, struct FVector& PlayerCentroid, class FName& SpawnWaveName, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


