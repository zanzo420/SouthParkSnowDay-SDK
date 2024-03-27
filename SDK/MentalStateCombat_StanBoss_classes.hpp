#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E0 - 0x2D8)
// BlueprintGeneratedClass MentalStateCombat_StanBoss.MentalStateCombat_StanBoss_C
class UMentalStateCombat_StanBoss_C : public UMentalStateCombat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStateCombat_StanBoss_C* GetDefaultObj();

	void OnEnterMentalState(class UQtnMentalState* PreviousMentalState);
	void ExecuteUbergraph_MentalStateCombat_StanBoss(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState);
};

}


