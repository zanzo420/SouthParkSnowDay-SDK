#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrobGate_CanGrabMagazine.FrobGate_CanGrabMagazine_C
// (None)

class UClass* UFrobGate_CanGrabMagazine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrobGate_CanGrabMagazine_C");

	return Clss;
}


// FrobGate_CanGrabMagazine_C FrobGate_CanGrabMagazine.Default__FrobGate_CanGrabMagazine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrobGate_CanGrabMagazine_C* UFrobGate_CanGrabMagazine_C::GetDefaultObj()
{
	static class UFrobGate_CanGrabMagazine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrobGate_CanGrabMagazine_C*>(UFrobGate_CanGrabMagazine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FrobGate_CanGrabMagazine.FrobGate_CanGrabMagazine_C.GetRejectionMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      FrobbableComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UFrobGate_CanGrabMagazine_C::GetRejectionMessage(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrobGate_CanGrabMagazine_C", "GetRejectionMessage");

	Params::UFrobGate_CanGrabMagazine_C_GetRejectionMessage_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.FrobbableComponent = FrobbableComponent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrobGate_CanGrabMagazine.FrobGate_CanGrabMagazine_C.IsFrobAllowed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      FrobbableComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMagazine_BP_C*              K2Node_DynamicCast_AsMagazine_BP                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFrobGate_CanGrabMagazine_C::IsFrobAllowed(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent, class AActor* CallFunc_GetOwner_ReturnValue, class AMagazine_BP_C* K2Node_DynamicCast_AsMagazine_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrobGate_CanGrabMagazine_C", "IsFrobAllowed");

	Params::UFrobGate_CanGrabMagazine_C_IsFrobAllowed_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.FrobbableComponent = FrobbableComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsMagazine_BP = K2Node_DynamicCast_AsMagazine_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


