#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_StanBossBattle.Interface_StanBossBattle_C
class IInterface_StanBossBattle_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_StanBossBattle_C* GetDefaultObj();

	void DoTrackThisCannonball(class AActor* CannonballAsActor);
	void DoCannonFiredEvent();
	void DEBUGONLY_SetCheckForStanDamage(bool CheckForStanDamage);
	void DEBUGONLY_EndDragonPhase();
};

}


