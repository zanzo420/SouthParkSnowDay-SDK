#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_StationWagon_BP.Vehicle_StationWagon_BP_C
// (Actor)

class UClass* AVehicle_StationWagon_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_StationWagon_BP_C");

	return Clss;
}


// Vehicle_StationWagon_BP_C Vehicle_StationWagon_BP.Default__Vehicle_StationWagon_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_StationWagon_BP_C* AVehicle_StationWagon_BP_C::GetDefaultObj()
{
	static class AVehicle_StationWagon_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_StationWagon_BP_C*>(AVehicle_StationWagon_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vehicle_StationWagon_BP.Vehicle_StationWagon_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVehicle_StationWagon_BP_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle_StationWagon_BP_C", "UserConstructionScript");

	Params::AVehicle_StationWagon_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


