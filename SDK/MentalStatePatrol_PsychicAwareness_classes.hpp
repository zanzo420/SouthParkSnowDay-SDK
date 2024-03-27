#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x220 - 0x218)
// BlueprintGeneratedClass MentalStatePatrol_PsychicAwareness.MentalStatePatrol_PsychicAwareness_C
class UMentalStatePatrol_PsychicAwareness_C : public UQtnMentalStatePatrol
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalStatePatrol_PsychicAwareness_C* GetDefaultObj();

	void OnThinkMentalState(float TimeSinceLastThought);
	void ExecuteUbergraph_MentalStatePatrol_PsychicAwareness(int32 EntryPoint, float K2Node_Event_timeSinceLastThought);
};

}


