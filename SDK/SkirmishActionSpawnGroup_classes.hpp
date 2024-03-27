#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x3E - 0x28)
// BlueprintGeneratedClass SkirmishActionSpawnGroup.SkirmishActionSpawnGroup_C
class USkirmishActionSpawnGroup_C : public UQtnSkirmishAction
{
public:
	class FName                                  SpawnGroupName;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RandomizeSpawners;                                 // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3662[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialSpawnDelay;                                 // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SuccessiveSpawnDelay;                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnorePopulationCap;                               // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoSFX;                                             // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USkirmishActionSpawnGroup_C* GetDefaultObj();

	void ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FQtnSkirmishRequestSpawnParams& K2Node_MakeStruct_QtnSkirmishRequestSpawnParams, bool CallFunc_RequestSpawnGroup_ServerOnly_ReturnValue);
};

}


