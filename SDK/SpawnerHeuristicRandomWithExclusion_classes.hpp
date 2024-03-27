#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass SpawnerHeuristicRandomWithExclusion.SpawnerHeuristicRandomWithExclusion_C
class USpawnerHeuristicRandomWithExclusion_C : public UQtnSkirmishSpawnerHeuristic
{
public:
	float                                        MaxValue;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_752B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SpawnerTagsToIgnore;                               // 0x30(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class USpawnerHeuristicRandomWithExclusion_C* GetDefaultObj();

	float CalculateHeuristicScore(class AQtnSkirmish* OwningSkirmish, class AQtnSpawner* Spawner, struct FVector& PlayerCentroid, class FName& SpawnWaveName, bool LOCAL_FoundIgnoredTag, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


