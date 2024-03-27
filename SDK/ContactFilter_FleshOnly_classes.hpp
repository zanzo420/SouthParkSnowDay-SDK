#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ContactFilter_FleshOnly.ContactFilter_FleshOnly_C
class UContactFilter_FleshOnly_C : public UQtnContactSubsystemTargetFilter
{
public:

	static class UClass* StaticClass();
	static class UContactFilter_FleshOnly_C* GetDefaultObj();

	bool FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


