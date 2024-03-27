#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedChaffHailStormVerb.RangedChaffHailStormVerb_C
// (None)

class UClass* URangedChaffHailStormVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedChaffHailStormVerb_C");

	return Clss;
}


// RangedChaffHailStormVerb_C RangedChaffHailStormVerb.Default__RangedChaffHailStormVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedChaffHailStormVerb_C* URangedChaffHailStormVerb_C::GetDefaultObj()
{
	static class URangedChaffHailStormVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedChaffHailStormVerb_C*>(URangedChaffHailStormVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedChaffHailStormVerb.RangedChaffHailStormVerb_C.GetDamageType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQtnDamageType>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UQtnDamageType> URangedChaffHailStormVerb_C::GetDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffHailStormVerb_C", "GetDamageType");

	Params::URangedChaffHailStormVerb_C_GetDamageType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RangedChaffHailStormVerb.RangedChaffHailStormVerb_C.AdjustProjectileType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URangedChaffHailStormVerb_C::AdjustProjectileType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffHailStormVerb_C", "AdjustProjectileType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedChaffHailStormVerb.RangedChaffHailStormVerb_C.Adjust Accuracy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHitReactingOrKnockedDown_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URangedChaffHailStormVerb_C::Adjust_Accuracy(class UObject* IntendedTarget, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffHailStormVerb_C", "Adjust Accuracy");

	Params::URangedChaffHailStormVerb_C_Adjust_Accuracy_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsHitReactingOrKnockedDown_ReturnValue = CallFunc_IsHitReactingOrKnockedDown_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedChaffHailStormVerb.RangedChaffHailStormVerb_C.InitRapidFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URangedChaffHailStormVerb_C::InitRapidFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffHailStormVerb_C", "InitRapidFire");



	UObject::ProcessEvent(Func, nullptr);

}

}


