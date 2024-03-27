#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C
class IInterface_QtnPawn_ShizaHulud_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnPawn_ShizaHulud_C* GetDefaultObj();

	void DoRequestShizaVerb(int32 VerbIndex);
	void DoExperimentalFightLogic();
	void DoCheatRecovery();
	void DoCheatCannon();
	void DoCheatNextPhase();
	void DoSkipCannons();
	void DoCallOnDeathEvent();
	void DoSpawnPoopletAtLocation(const struct FVector& Location, const struct FRotator& Rotation);
};

}


