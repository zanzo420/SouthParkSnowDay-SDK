#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x3C0 - 0x3B5)
// BlueprintGeneratedClass Hanky_Actor_BP.Hanky_Actor_BP_C
class AHanky_Actor_BP_C : public AHankey_HubActor_BP_C
{
public:
	uint8                                        Pad_5236[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHanky_Actor_BP_C* GetDefaultObj();

	void Local_Update_Hankey_Vis(bool ForceVisOn);
	void DoBeckon(class AActor* OtherActor);
	void ExecuteUbergraph_Hanky_Actor_BP(int32 EntryPoint, class AActor* K2Node_Event_OtherActor);
};

}


