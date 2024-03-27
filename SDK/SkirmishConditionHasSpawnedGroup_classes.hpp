#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass SkirmishConditionHasSpawnedGroup.SkirmishConditionHasSpawnedGroup_C
class USkirmishConditionHasSpawnedGroup_C : public UQtnSkirmishCondition
{
public:
	class FName                                  SpawnGroupName;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishConditionHasSpawnedGroup_C* GetDefaultObj();

	bool IsSkirmishConditionSatisfied(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, TArray<class FName>& CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


