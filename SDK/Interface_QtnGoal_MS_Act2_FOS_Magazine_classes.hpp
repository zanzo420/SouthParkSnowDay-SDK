#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C
class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C* GetDefaultObj();

	void SetPlayersInSpoke(bool PlayersInSpoke);
	void SetMagazinesGrabbed(bool MagazinesGrabbed);
	void SetStartedInDebugMode(bool DebugMode);
	void DEBUGONLY_SetDebugLocations(TArray<int32>& DebugLocations);
};

}


