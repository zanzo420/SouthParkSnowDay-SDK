#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C
class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C* GetDefaultObj();

	void GetInitialAllLocations(TArray<class ALocationMarker_BP_C*>* InitialAllLocations);
	void DEBUGONLY_DoForceLocations(TArray<class FString>& OrderedItems);
	void DEBUGONLY_SetForcedLocations(TArray<class ALocationMarker_BP_C*>& ForcedLocations);
	void SetSpawnedInDebugMode(bool SpawnedInDebugMode);
};

}


