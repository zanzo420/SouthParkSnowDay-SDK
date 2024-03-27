#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2A - 0x28)
// BlueprintGeneratedClass ContactFilter_GeneralIgnore.ContactFilter_GeneralIgnore_C
class UContactFilter_GeneralIgnore_C : public UQtnContactSubsystemTargetFilter
{
public:
	bool                                         BypassIfTargetIsInvisible;                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BypassIfTargetIsDamageImmune;                      // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UContactFilter_GeneralIgnore_C* GetDefaultObj();

	bool FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlly_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


