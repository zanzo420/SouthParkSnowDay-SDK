#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass SkirmishActionBSWindowOpen.SkirmishActionBSWindowOpen_C
class USkirmishActionBSWindowOpen_C : public UQtnSkirmishAction
{
public:
	TArray<class UClass*>                        BSTypes;                                           // 0x28(0x10)(Edit, BlueprintVisible)
	class UClass*                                ChosenBS;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishActionBSWindowOpen_C* GetDefaultObj();

	void ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess);
};

}


