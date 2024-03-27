#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SingleCombatDelayedStart.Interface_QtnGoal_SingleCombatDelayedStart_C
class IInterface_QtnGoal_SingleCombatDelayedStart_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SingleCombatDelayedStart_C* GetDefaultObj();

	void DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc);
	void DoGetEntranceGate(class ATravelVolume_BP_C** EntranceGate);
};

}


