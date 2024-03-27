#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TPCannonRig_ANBP.TPCannonRig_ANBP_C
// (None)

class UClass* UTPCannonRig_ANBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPCannonRig_ANBP_C");

	return Clss;
}


// TPCannonRig_ANBP_C TPCannonRig_ANBP.Default__TPCannonRig_ANBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTPCannonRig_ANBP_C* UTPCannonRig_ANBP_C::GetDefaultObj()
{
	static class UTPCannonRig_ANBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTPCannonRig_ANBP_C*>(UTPCannonRig_ANBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TPCannonRig_ANBP.TPCannonRig_ANBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTPCannonRig_ANBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TPCannonRig_ANBP_C", "AnimGraph");

	Params::UTPCannonRig_ANBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TPCannonRig_ANBP.TPCannonRig_ANBP_C.SetPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTPCannonRig_ANBP_C::SetPitch(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TPCannonRig_ANBP_C", "SetPitch");

	Params::UTPCannonRig_ANBP_C_SetPitch_Params Parms{};

	Parms.Pitch = Pitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TPCannonRig_ANBP.TPCannonRig_ANBP_C.SetAmmoPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTPCannonRig_ANBP_C::SetAmmoPercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TPCannonRig_ANBP_C", "SetAmmoPercent");

	Params::UTPCannonRig_ANBP_C_SetAmmoPercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TPCannonRig_ANBP.TPCannonRig_ANBP_C.ExecuteUbergraph_TPCannonRig_ANBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Pitch                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTPCannonRig_ANBP_C::ExecuteUbergraph_TPCannonRig_ANBP(int32 EntryPoint, float K2Node_CustomEvent_Percent, float CallFunc_FClamp_ReturnValue, float K2Node_CustomEvent_Pitch, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TPCannonRig_ANBP_C", "ExecuteUbergraph_TPCannonRig_ANBP");

	Params::UTPCannonRig_ANBP_C_ExecuteUbergraph_TPCannonRig_ANBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_CustomEvent_Pitch = K2Node_CustomEvent_Pitch;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


