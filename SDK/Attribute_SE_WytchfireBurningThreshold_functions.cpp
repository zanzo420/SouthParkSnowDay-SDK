#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_SE_WytchfireBurningThreshold.Attribute_SE_WytchfireBurningThreshold_C
// (None)

class UClass* UAttribute_SE_WytchfireBurningThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_SE_WytchfireBurningThreshold_C");

	return Clss;
}


// Attribute_SE_WytchfireBurningThreshold_C Attribute_SE_WytchfireBurningThreshold.Default__Attribute_SE_WytchfireBurningThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_SE_WytchfireBurningThreshold_C* UAttribute_SE_WytchfireBurningThreshold_C::GetDefaultObj()
{
	static class UAttribute_SE_WytchfireBurningThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_SE_WytchfireBurningThreshold_C*>(UAttribute_SE_WytchfireBurningThreshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_SE_WytchfireBurningThreshold.Attribute_SE_WytchfireBurningThreshold_C.ExecuteUbergraph_Attribute_SE_WytchfireBurningThreshold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_SE_WytchfireBurningThreshold_C::ExecuteUbergraph_Attribute_SE_WytchfireBurningThreshold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_WytchfireBurningThreshold_C", "ExecuteUbergraph_Attribute_SE_WytchfireBurningThreshold");

	Params::UAttribute_SE_WytchfireBurningThreshold_C_ExecuteUbergraph_Attribute_SE_WytchfireBurningThreshold_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


