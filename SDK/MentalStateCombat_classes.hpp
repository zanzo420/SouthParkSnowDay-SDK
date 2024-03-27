#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2D8 - 0x2D0)
// BlueprintGeneratedClass MentalStateCombat.MentalStateCombat_C
class UMentalStateCombat_C : public UQtnMentalStateCombat
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStateCombat_C* GetDefaultObj();

	void OnEnterMentalState(class UQtnMentalState* PreviousMentalState);
	void ExecuteUbergraph_MentalStateCombat(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState);
};

}


