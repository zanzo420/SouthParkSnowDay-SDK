#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactSubsystemResultSelector_Ricochet.ContactSubsystemResultSelector_Ricochet_C
// (None)

class UClass* UContactSubsystemResultSelector_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactSubsystemResultSelector_Ricochet_C");

	return Clss;
}


// ContactSubsystemResultSelector_Ricochet_C ContactSubsystemResultSelector_Ricochet.Default__ContactSubsystemResultSelector_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactSubsystemResultSelector_Ricochet_C* UContactSubsystemResultSelector_Ricochet_C::GetDefaultObj()
{
	static class UContactSubsystemResultSelector_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactSubsystemResultSelector_Ricochet_C*>(UContactSubsystemResultSelector_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactSubsystemResultSelector_Ricochet.ContactSubsystemResultSelector_Ricochet_C.SelectSystemResult
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FQtnSurfaceData             SurfaceData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnContactSystemResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// struct FQtnContactSystemResult     K2Node_MakeStruct_QtnContactSystemResult                         (ContainsInstancedReference)
// class AProjectile_ArrowBase_C*     K2Node_DynamicCast_AsProjectile_Arrow_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnContactSystemResult     K2Node_MakeStruct_QtnContactSystemResult_1                       (ContainsInstancedReference)

struct FQtnContactSystemResult UContactSubsystemResultSelector_Ricochet_C::SelectSystemResult(class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, const struct FQtnContactSystemResult& K2Node_MakeStruct_QtnContactSystemResult, class AProjectile_ArrowBase_C* K2Node_DynamicCast_AsProjectile_Arrow_Base, bool K2Node_DynamicCast_bSuccess, const struct FQtnContactSystemResult& K2Node_MakeStruct_QtnContactSystemResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactSubsystemResultSelector_Ricochet_C", "SelectSystemResult");

	Params::UContactSubsystemResultSelector_Ricochet_C_SelectSystemResult_Params Parms{};

	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.SurfaceData = SurfaceData;
	Parms.K2Node_MakeStruct_QtnContactSystemResult = K2Node_MakeStruct_QtnContactSystemResult;
	Parms.K2Node_DynamicCast_AsProjectile_Arrow_Base = K2Node_DynamicCast_AsProjectile_Arrow_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_QtnContactSystemResult_1 = K2Node_MakeStruct_QtnContactSystemResult_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


