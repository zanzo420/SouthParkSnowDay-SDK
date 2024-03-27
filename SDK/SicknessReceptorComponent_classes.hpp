#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass SicknessReceptorComponent.SicknessReceptorComponent_C
class USicknessReceptorComponent_C : public UAttributeReceptorComponent_C
{
public:

	static class UClass* StaticClass();
	static class USicknessReceptorComponent_C* GetDefaultObj();

	void ShouldIncreaseAttribute_ServerOnly(bool* Yes, bool* CanStopTicking, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


