#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x98 - 0x81)
// BlueprintGeneratedClass Perk_OnlyTheBest.Perk_OnlyTheBest_C
class UPerk_OnlyTheBest_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        LevelsToAdd;                                       // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CardChoicesToRemove;                               // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_OnlyTheBest_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_OnlyTheBest(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn);
};

}


