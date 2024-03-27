#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x94 - 0x81)
// BlueprintGeneratedClass Perk_SweetTalker.Perk_SweetTalker_C
class UPerk_SweetTalker_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6DE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CostReductionPercentPerInstance;                   // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_SweetTalker_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_SweetTalker(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn);
};

}


