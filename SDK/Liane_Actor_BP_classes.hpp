#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x3A0 - 0x38A)
// BlueprintGeneratedClass Liane_Actor_BP.Liane_Actor_BP_C
class ALiane_Actor_BP_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_51EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALiane_Actor_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Liane_Actor_BP(int32 EntryPoint);
};

}


