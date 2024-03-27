#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA59 - 0xA59)
// BlueprintGeneratedClass BSTimeWaveVerb.BSTimeWaveVerb_C
class UBSTimeWaveVerb_C : public UVerbPlayerCheatBase_C
{
public:

	static class UClass* StaticClass();
	static class UBSTimeWaveVerb_C* GetDefaultObj();

	void StartCheatExecution(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, class UBullshit_SpawnWave_C* CallFunc_AddBullshit_ServerOnly_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, bool CallFunc_IsBullshitActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


