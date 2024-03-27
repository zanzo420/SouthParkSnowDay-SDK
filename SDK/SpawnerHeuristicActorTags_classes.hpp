#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// BlueprintGeneratedClass SpawnerHeuristicActorTags.SpawnerHeuristicActorTags_C
class USpawnerHeuristicActorTags_C : public UQtnSkirmishSpawnerHeuristic
{
public:
	TMap<class FName, float>                     ExpectedTags;                                      // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly)

	static class UClass* StaticClass();
	static class USpawnerHeuristicActorTags_C* GetDefaultObj();

	float CalculateHeuristicScore(class AQtnSkirmish* OwningSkirmish, class AQtnSpawner* Spawner, struct FVector& PlayerCentroid, class FName& SpawnWaveName, float Score, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


