#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass MentalSubStateMeleeTactics_AllyBot.MentalSubStateMeleeTactics_AllyBot_C
class UMentalSubStateMeleeTactics_AllyBot_C : public UMentalSubStateMeleeTactics_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalSubStateMeleeTactics_AllyBot_C* GetDefaultObj();

	void OnThinkMentalSubState(float TimeSinceLastThought);
	void ExecuteUbergraph_MentalSubStateMeleeTactics_AllyBot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess);
};

}


