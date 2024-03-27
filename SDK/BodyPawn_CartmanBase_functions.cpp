#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_CartmanBase.BodyPawn_CartmanBase_C
// (Actor, Pawn)

class UClass* ABodyPawn_CartmanBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_CartmanBase_C");

	return Clss;
}


// BodyPawn_CartmanBase_C BodyPawn_CartmanBase.Default__BodyPawn_CartmanBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_CartmanBase_C* ABodyPawn_CartmanBase_C::GetDefaultObj()
{
	static class ABodyPawn_CartmanBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_CartmanBase_C*>(ABodyPawn_CartmanBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawn_CartmanBase.BodyPawn_CartmanBase_C.CanAcceptEnemyUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Accept                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanBase_C::CanAcceptEnemyUpgrades(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanBase_C", "CanAcceptEnemyUpgrades");

	Params::ABodyPawn_CartmanBase_C_CanAcceptEnemyUpgrades_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;

}


// Function BodyPawn_CartmanBase.BodyPawn_CartmanBase_C.OnQtnTeleport_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OldRotation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     NewLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewRotation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanBase_C::OnQtnTeleport_Event_0(const struct FVector& OldLocation, const struct FRotator& OldRotation, const struct FVector& NewLocation, const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanBase_C", "OnQtnTeleport_Event_0");

	Params::ABodyPawn_CartmanBase_C_OnQtnTeleport_Event_0_Params Parms{};

	Parms.OldLocation = OldLocation;
	Parms.OldRotation = OldRotation;
	Parms.NewLocation = NewLocation;
	Parms.NewRotation = NewRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanBase.BodyPawn_CartmanBase_C.OnQtnReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanBase_C::OnQtnReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanBase_C", "OnQtnReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanBase.BodyPawn_CartmanBase_C.ExecuteUbergraph_BodyPawn_CartmanBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_CustomEvent_oldLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_oldRotation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_newLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_newRotation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawn_CartmanBase_C::ExecuteUbergraph_BodyPawn_CartmanBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_oldLocation, const struct FRotator& K2Node_CustomEvent_oldRotation, const struct FVector& K2Node_CustomEvent_newLocation, const struct FRotator& K2Node_CustomEvent_newRotation, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanBase_C", "ExecuteUbergraph_BodyPawn_CartmanBase");

	Params::ABodyPawn_CartmanBase_C_ExecuteUbergraph_BodyPawn_CartmanBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_oldLocation = K2Node_CustomEvent_oldLocation;
	Parms.K2Node_CustomEvent_oldRotation = K2Node_CustomEvent_oldRotation;
	Parms.K2Node_CustomEvent_newLocation = K2Node_CustomEvent_newLocation;
	Parms.K2Node_CustomEvent_newRotation = K2Node_CustomEvent_newRotation;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


