#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C
// (None)

class UClass* UMentalStateCombat_CartmanBuddy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_CartmanBuddy_C");

	return Clss;
}


// MentalStateCombat_CartmanBuddy_C MentalStateCombat_CartmanBuddy.Default__MentalStateCombat_CartmanBuddy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_CartmanBuddy_C* UMentalStateCombat_CartmanBuddy_C::GetDefaultObj()
{
	static class UMentalStateCombat_CartmanBuddy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_CartmanBuddy_C*>(UMentalStateCombat_CartmanBuddy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.OnExitMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnMentalState> NextMentalStateClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UMentalStateCombat_CartmanBuddy_C::OnExitMentalState(TSubclassOf<class UQtnMentalState> NextMentalStateClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanBuddy_C", "OnExitMentalState");

	Params::UMentalStateCombat_CartmanBuddy_C_OnExitMentalState_Params Parms{};

	Parms.NextMentalStateClass = NextMentalStateClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanBuddy_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanBuddy_C", "OnEnterMentalState");

	Params::UMentalStateCombat_CartmanBuddy_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.ExecuteUbergraph_MentalStateCombat_CartmanBuddy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnMentalState> K2Node_Event_nextMentalStateClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetClosestPlayer_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanBuddy_C::ExecuteUbergraph_MentalStateCombat_CartmanBuddy(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState, TSubclassOf<class UQtnMentalState> K2Node_Event_nextMentalStateClass, bool CallFunc_IsValidClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetClosestPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanBuddy_C", "ExecuteUbergraph_MentalStateCombat_CartmanBuddy");

	Params::UMentalStateCombat_CartmanBuddy_C_ExecuteUbergraph_MentalStateCombat_CartmanBuddy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;
	Parms.K2Node_Event_nextMentalStateClass = K2Node_Event_nextMentalStateClass;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetClosestPlayer_ReturnValue = CallFunc_GetClosestPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


