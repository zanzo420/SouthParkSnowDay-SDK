#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x90 - 0x81)
// BlueprintGeneratedClass Perk_Tester.Perk_Tester_C
class UPerk_Tester_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_802[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPerk_Tester_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper);
	bool IsPerkEquipped();
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void OnDeactivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_Tester(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn_1, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn);
};

}


