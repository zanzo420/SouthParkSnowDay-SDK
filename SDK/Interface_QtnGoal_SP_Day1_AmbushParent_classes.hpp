#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_AmbushParent.Interface_QtnGoal_SP_Day1_AmbushParent_C
class IInterface_QtnGoal_SP_Day1_AmbushParent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SP_Day1_AmbushParent_C* GetDefaultObj();

	void DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc);
	void DoGetExitGate(class ATravelVolume_BP_C** ExitGate);
	void DoGetEntranceDestination(class ABP_DeadPlayerTeleportLoc_C** EntranceDestination);
	void DoGetGate(class ATravelVolume_BP_C** Gate);
};

}


