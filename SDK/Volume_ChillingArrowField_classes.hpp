#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3B5 - 0x3B5)
// BlueprintGeneratedClass Volume_ChillingArrowField.Volume_ChillingArrowField_C
class AVolume_ChillingArrowField_C : public AVolume_MarshwalkerGrossOutField_C
{
public:

	static class UClass* StaticClass();
	static class AVolume_ChillingArrowField_C* GetDefaultObj();

	void UnaffectEnemy_ServerOnly(class ABodyPawnBase_C* Enemy);
	void AffectEnemy_ServerOnly(class ABodyPawnBase_C* Enemy);
	void UserConstructionScript(float CallFunc_GetScaledSphereRadius_ReturnValue);
};

}


