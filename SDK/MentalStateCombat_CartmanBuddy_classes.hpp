#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E0 - 0x2D8)
// BlueprintGeneratedClass MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C
class UMentalStateCombat_CartmanBuddy_C : public UMentalStateCombat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStateCombat_CartmanBuddy_C* GetDefaultObj();

	void OnExitMentalState(TSubclassOf<class UQtnMentalState> NextMentalStateClass);
	void OnEnterMentalState(class UQtnMentalState* PreviousMentalState);
	void ExecuteUbergraph_MentalStateCombat_CartmanBuddy(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState, TSubclassOf<class UQtnMentalState> K2Node_Event_nextMentalStateClass, bool CallFunc_IsValidClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetClosestPlayer_ReturnValue);
};

}


