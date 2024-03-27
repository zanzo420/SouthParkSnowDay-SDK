#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerOnWaveSpawned.SkirmishTriggerOnWaveSpawned_C
class USkirmishTriggerOnWaveSpawned_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  GroupNameToWatchFor;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishTriggerOnWaveSpawned_C* GetDefaultObj();

	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void MatchingGroupSpawned(class FName GroupName);
	void ExecuteUbergraph_SkirmishTriggerOnWaveSpawned(int32 EntryPoint, bool CallFunc_EqualEqual_NameName_ReturnValue, class AQtnSkirmish* K2Node_Event_owningSkirmish, bool CallFunc_IsValid_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_GroupName, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


