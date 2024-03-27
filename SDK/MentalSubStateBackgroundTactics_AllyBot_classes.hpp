#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C
class UMentalSubStateBackgroundTactics_AllyBot_C : public UMentalSubStateBackgroundTactics_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMentalSubStateBackgroundTactics_AllyBot_C* GetDefaultObj();

	void OnThinkMentalSubState(float TimeSinceLastThought);
	void ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess);
};

}


