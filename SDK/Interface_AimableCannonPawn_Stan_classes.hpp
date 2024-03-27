#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_AimableCannonPawn_Stan.Interface_AimableCannonPawn_Stan_C
class IInterface_AimableCannonPawn_Stan_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_AimableCannonPawn_Stan_C* GetDefaultObj();

	void GetMuzzle(class USceneComponent** Muzzle);
	void DoSwarmerLaunch(class AQtnBodyPawn* Swarmer);
};

}


