#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x94 - 0x81)
// BlueprintGeneratedClass Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C
class UPerk_FamilyHeirlooms_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_2CE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ToiletPaperPerInstance;                            // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_FamilyHeirlooms_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void GetToiletPaperValueToAdd(int32* ToiletPaperValue, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_FamilyHeirlooms(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn);
};

}


