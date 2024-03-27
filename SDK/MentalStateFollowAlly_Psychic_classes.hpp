#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC8 - 0xC0)
// BlueprintGeneratedClass MentalStateFollowAlly_Psychic.MentalStateFollowAlly_Psychic_C
class UMentalStateFollowAlly_Psychic_C : public UQtnMentalStateFollowAlly
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStateFollowAlly_Psychic_C* GetDefaultObj();

	void OnEnterMentalState(class UQtnMentalState* PreviousMentalState);
	void ExecuteUbergraph_MentalStateFollowAlly_Psychic(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue);
};

}


