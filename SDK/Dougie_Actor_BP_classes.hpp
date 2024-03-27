#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x398 - 0x38A)
// BlueprintGeneratedClass Dougie_Actor_BP.Dougie_Actor_BP_C
class ADougie_Actor_BP_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_1270[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADougie_Actor_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Dougie_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


