#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPlacementComp.PlayerPlacementComp_C
// (SceneComponent)

class UClass* UPlayerPlacementComp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPlacementComp_C");

	return Clss;
}


// PlayerPlacementComp_C PlayerPlacementComp.Default__PlayerPlacementComp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerPlacementComp_C* UPlayerPlacementComp_C::GetDefaultObj()
{
	static class UPlayerPlacementComp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerPlacementComp_C*>(UPlayerPlacementComp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPlacementComp.PlayerPlacementComp_C.SnapPlayerPositionToGround
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPlacementComp_C::SnapPlayerPositionToGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPlacementComp_C", "SnapPlayerPositionToGround");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPlacementComp.PlayerPlacementComp_C.ExecuteUbergraph_PlayerPlacementComp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPlacementComp_C::ExecuteUbergraph_PlayerPlacementComp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPlacementComp_C", "ExecuteUbergraph_PlayerPlacementComp");

	Params::UPlayerPlacementComp_C_ExecuteUbergraph_PlayerPlacementComp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


