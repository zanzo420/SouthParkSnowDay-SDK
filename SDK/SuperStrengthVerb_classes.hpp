#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA59 - 0xA59)
// BlueprintGeneratedClass SuperStrengthVerb.SuperStrengthVerb_C
class USuperStrengthVerb_C : public UVerbPlayerCheatBase_C
{
public:

	static class UClass* StaticClass();
	static class USuperStrengthVerb_C* GetDefaultObj();

	void StartCheatExecution(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, class UStatusEffect_Cheat_Base_C* K2Node_DynamicCast_AsStatus_Effect_Cheat_Base, bool K2Node_DynamicCast_bSuccess);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


