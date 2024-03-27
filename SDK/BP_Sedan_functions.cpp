#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Sedan.BP_Sedan_C
// (Actor)

class UClass* ABP_Sedan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Sedan_C");

	return Clss;
}


// BP_Sedan_C BP_Sedan.Default__BP_Sedan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Sedan_C* ABP_Sedan_C::GetDefaultObj()
{
	static class ABP_Sedan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Sedan_C*>(ABP_Sedan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Sedan.BP_Sedan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sedan_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sedan_C", "UserConstructionScript");

	Params::ABP_Sedan_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


