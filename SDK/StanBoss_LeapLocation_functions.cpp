#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanBoss_LeapLocation.StanBoss_LeapLocation_C
// (Actor)

class UClass* AStanBoss_LeapLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanBoss_LeapLocation_C");

	return Clss;
}


// StanBoss_LeapLocation_C StanBoss_LeapLocation.Default__StanBoss_LeapLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanBoss_LeapLocation_C* AStanBoss_LeapLocation_C::GetDefaultObj()
{
	static class AStanBoss_LeapLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanBoss_LeapLocation_C*>(AStanBoss_LeapLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StanBoss_LeapLocation.StanBoss_LeapLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStanBoss_LeapLocation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StanBoss_LeapLocation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StanBoss_LeapLocation.StanBoss_LeapLocation_C.ExecuteUbergraph_StanBoss_LeapLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStanBoss_LeapLocation_C::ExecuteUbergraph_StanBoss_LeapLocation(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StanBoss_LeapLocation_C", "ExecuteUbergraph_StanBoss_LeapLocation");

	Params::AStanBoss_LeapLocation_C_ExecuteUbergraph_StanBoss_LeapLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


