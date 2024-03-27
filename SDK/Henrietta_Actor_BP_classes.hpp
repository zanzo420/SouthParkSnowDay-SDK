#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x398 - 0x38A)
// BlueprintGeneratedClass Henrietta_Actor_BP.Henrietta_Actor_BP_C
class AHenrietta_Actor_BP_C : public AScriptedSkeletalActor_Hub_C
{
public:
	uint8                                        Pad_525D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHenrietta_Actor_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Henrietta_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


