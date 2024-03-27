#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x398 - 0x398)
// BlueprintGeneratedClass QtnGoal_SP_Day1_CE_Clearing.QtnGoal_SP_Day1_CE_Clearing_C
class UQtnGoal_SP_Day1_CE_Clearing_C : public UQtnGoal_SP_Day1_CE_Parent_C
{
public:

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_CE_Clearing_C* GetDefaultObj();

	void VO_CheckForEntryVO();
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag);
};

}


