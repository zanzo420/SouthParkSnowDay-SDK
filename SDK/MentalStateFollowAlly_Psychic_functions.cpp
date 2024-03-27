#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateFollowAlly_Psychic.MentalStateFollowAlly_Psychic_C
// (None)

class UClass* UMentalStateFollowAlly_Psychic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateFollowAlly_Psychic_C");

	return Clss;
}


// MentalStateFollowAlly_Psychic_C MentalStateFollowAlly_Psychic.Default__MentalStateFollowAlly_Psychic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateFollowAlly_Psychic_C* UMentalStateFollowAlly_Psychic_C::GetDefaultObj()
{
	static class UMentalStateFollowAlly_Psychic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateFollowAlly_Psychic_C*>(UMentalStateFollowAlly_Psychic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateFollowAlly_Psychic.MentalStateFollowAlly_Psychic_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateFollowAlly_Psychic_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateFollowAlly_Psychic_C", "OnEnterMentalState");

	Params::UMentalStateFollowAlly_Psychic_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateFollowAlly_Psychic.MentalStateFollowAlly_Psychic_C.ExecuteUbergraph_MentalStateFollowAlly_Psychic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateFollowAlly_Psychic_C::ExecuteUbergraph_MentalStateFollowAlly_Psychic(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateFollowAlly_Psychic_C", "ExecuteUbergraph_MentalStateFollowAlly_Psychic");

	Params::UMentalStateFollowAlly_Psychic_C_ExecuteUbergraph_MentalStateFollowAlly_Psychic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


