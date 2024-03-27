#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactFilter_OnlyImmune.ContactFilter_OnlyImmune_C
// (None)

class UClass* UContactFilter_OnlyImmune_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactFilter_OnlyImmune_C");

	return Clss;
}


// ContactFilter_OnlyImmune_C ContactFilter_OnlyImmune.Default__ContactFilter_OnlyImmune_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactFilter_OnlyImmune_C* UContactFilter_OnlyImmune_C::GetDefaultObj()
{
	static class UContactFilter_OnlyImmune_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactFilter_OnlyImmune_C*>(UContactFilter_OnlyImmune_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactFilter_OnlyImmune.ContactFilter_OnlyImmune_C.FilterIncomingContactRequest
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDamageInhibited_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDamageImmunity_permanentlyImmune                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDamageImmunity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UContactFilter_OnlyImmune_C::FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsDamageInhibited_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactFilter_OnlyImmune_C", "FilterIncomingContactRequest");

	Params::UContactFilter_OnlyImmune_C_FilterIncomingContactRequest_Params Parms{};

	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_IsDamageInhibited_ReturnValue = CallFunc_IsDamageInhibited_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasDamageImmunity_permanentlyImmune = CallFunc_HasDamageImmunity_permanentlyImmune;
	Parms.CallFunc_HasDamageImmunity_ReturnValue = CallFunc_HasDamageImmunity_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


