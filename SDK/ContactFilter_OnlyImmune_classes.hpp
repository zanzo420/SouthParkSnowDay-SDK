#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ContactFilter_OnlyImmune.ContactFilter_OnlyImmune_C
class UContactFilter_OnlyImmune_C : public UQtnContactSubsystemTargetFilter
{
public:

	static class UClass* StaticClass();
	static class UContactFilter_OnlyImmune_C* GetDefaultObj();

	bool FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsDamageInhibited_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


