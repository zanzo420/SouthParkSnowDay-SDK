#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShizaHulud_CircleDamageGuide.BP_ShizaHulud_CircleDamageGuide_C
// (Actor)

class UClass* ABP_ShizaHulud_CircleDamageGuide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShizaHulud_CircleDamageGuide_C");

	return Clss;
}


// BP_ShizaHulud_CircleDamageGuide_C BP_ShizaHulud_CircleDamageGuide.Default__BP_ShizaHulud_CircleDamageGuide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShizaHulud_CircleDamageGuide_C* ABP_ShizaHulud_CircleDamageGuide_C::GetDefaultObj()
{
	static class ABP_ShizaHulud_CircleDamageGuide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShizaHulud_CircleDamageGuide_C*>(ABP_ShizaHulud_CircleDamageGuide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShizaHulud_CircleDamageGuide.BP_ShizaHulud_CircleDamageGuide_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ShizaHulud_CircleDamageGuide_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShizaHulud_CircleDamageGuide_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ShizaHulud_CircleDamageGuide.BP_ShizaHulud_CircleDamageGuide_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ShizaHulud_CircleDamageGuide_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShizaHulud_CircleDamageGuide_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ShizaHulud_CircleDamageGuide.BP_ShizaHulud_CircleDamageGuide_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ShizaHulud_CircleDamageGuide_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShizaHulud_CircleDamageGuide_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ShizaHulud_CircleDamageGuide.BP_ShizaHulud_CircleDamageGuide_C.ExecuteUbergraph_BP_ShizaHulud_CircleDamageGuide
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShizaHulud_CircleDamageGuide_C::ExecuteUbergraph_BP_ShizaHulud_CircleDamageGuide(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShizaHulud_CircleDamageGuide_C", "ExecuteUbergraph_BP_ShizaHulud_CircleDamageGuide");

	Params::ABP_ShizaHulud_CircleDamageGuide_C_ExecuteUbergraph_BP_ShizaHulud_CircleDamageGuide_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


