#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C
class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C* GetDefaultObj();

	void SetHankeyDown(bool HankeyDown);
	void GetHankeyWorm(class AActor** HankeyWorm);
	void DoEndGoalSequence();
	void DEBUGONLY_SetCanSpawn(bool CanSpawn);
};

}


