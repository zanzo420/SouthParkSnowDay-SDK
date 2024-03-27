#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactFilter_FleshOnly.ContactFilter_FleshOnly_C
// (None)

class UClass* UContactFilter_FleshOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactFilter_FleshOnly_C");

	return Clss;
}


// ContactFilter_FleshOnly_C ContactFilter_FleshOnly.Default__ContactFilter_FleshOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactFilter_FleshOnly_C* UContactFilter_FleshOnly_C::GetDefaultObj()
{
	static class UContactFilter_FleshOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactFilter_FleshOnly_C*>(UContactFilter_FleshOnly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactFilter_FleshOnly.ContactFilter_FleshOnly_C.FilterIncomingContactRequest
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UContactFilter_FleshOnly_C::FilterIncomingContactRequest(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactFilter_FleshOnly_C", "FilterIncomingContactRequest");

	Params::UContactFilter_FleshOnly_C_FilterIncomingContactRequest_Params Parms{};

	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


