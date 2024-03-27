#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactFilter_OnlyInvisibleTarget.ContactFilter_OnlyInvisibleTarget_C
// (None)

class UClass* UContactFilter_OnlyInvisibleTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactFilter_OnlyInvisibleTarget_C");

	return Clss;
}


// ContactFilter_OnlyInvisibleTarget_C ContactFilter_OnlyInvisibleTarget.Default__ContactFilter_OnlyInvisibleTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactFilter_OnlyInvisibleTarget_C* UContactFilter_OnlyInvisibleTarget_C::GetDefaultObj()
{
	static class UContactFilter_OnlyInvisibleTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactFilter_OnlyInvisibleTarget_C*>(UContactFilter_OnlyInvisibleTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactFilter_OnlyInvisibleTarget.ContactFilter_OnlyInvisibleTarget_C.FilterIncomingContactRequest
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UContactFilter_OnlyInvisibleTarget_C::FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactFilter_OnlyInvisibleTarget_C", "FilterIncomingContactRequest");

	Params::UContactFilter_OnlyInvisibleTarget_C_FilterIncomingContactRequest_Params Parms{};

	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


