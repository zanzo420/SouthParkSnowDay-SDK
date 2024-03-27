#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_CannonTutorial.Interface_CannonTutorial_C
class IInterface_CannonTutorial_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_CannonTutorial_C* GetDefaultObj();

	void PlayExplanationVO();
	void PlayFartVO();
	void TrackCannonball(class ABP_Cannonball_C* Cannonball);
	void PlayReminderVO();
};

}


