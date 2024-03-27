#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_FindRandy.Interface_QtnGoal_SP_Day1_FindRandy_C
class IInterface_QtnGoal_SP_Day1_FindRandy_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SP_Day1_FindRandy_C* GetDefaultObj();

	void GetEntranceGate(class ATravelVolume_BP_C** EntranceGate);
	void DEBUGONLY_SetSkippedToSiege(bool SkippedToSiege);
	void SetIntroGoal(class UQtnGoal* IntroGoal);
};

}


