#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x3A0 - 0x38A)
// BlueprintGeneratedClass NewKid_Actor_BP.NewKid_Actor_BP_C
class ANewKid_Actor_BP_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_5262[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Hair;                                              // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANewKid_Actor_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewKid_Actor_BP(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue);
};

}


