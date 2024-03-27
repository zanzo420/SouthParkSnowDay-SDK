#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ContactFilter_OnlyInvisibleTarget.ContactFilter_OnlyInvisibleTarget_C
class UContactFilter_OnlyInvisibleTarget_C : public UQtnContactSubsystemTargetFilter
{
public:

	static class UClass* StaticClass();
	static class UContactFilter_OnlyInvisibleTarget_C* GetDefaultObj();

	bool FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
};

}


