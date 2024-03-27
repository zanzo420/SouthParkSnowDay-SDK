#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerDeath.SkirmishTriggerDeath_C
class USkirmishTriggerDeath_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnPawn*                              LastDeadPawn;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishTriggerDeath_C* GetDefaultObj();

	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void SkirmishDeathEvent_Event_0(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn);
	void ExecuteUbergraph_SkirmishTriggerDeath(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class AQtnPawn* K2Node_CustomEvent_skirmishPawn);
};

}


