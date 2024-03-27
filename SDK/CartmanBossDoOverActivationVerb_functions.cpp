#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossDoOverActivationVerb.CartmanBossDoOverActivationVerb_C
// (None)

class UClass* UCartmanBossDoOverActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossDoOverActivationVerb_C");

	return Clss;
}


// CartmanBossDoOverActivationVerb_C CartmanBossDoOverActivationVerb.Default__CartmanBossDoOverActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanBossDoOverActivationVerb_C* UCartmanBossDoOverActivationVerb_C::GetDefaultObj()
{
	static class UCartmanBossDoOverActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanBossDoOverActivationVerb_C*>(UCartmanBossDoOverActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CartmanBossDoOverActivationVerb.CartmanBossDoOverActivationVerb_C.GetEnemiesToRevive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnGameState*               GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Bullshitter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        EnemiesToRevive                                                  (Parm, OutParm, ContainsInstancedReference)
// TArray<class AQtnBodyPawn*>        K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBossDoOverActivationVerb_C::GetEnemiesToRevive(class AQtnGameState* GameState, class AQtnBodyPawn* Bullshitter, TArray<class AQtnBodyPawn*>* EnemiesToRevive, TArray<class AQtnBodyPawn*>& K2Node_MakeArray_Array, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBossDoOverActivationVerb_C", "GetEnemiesToRevive");

	Params::UCartmanBossDoOverActivationVerb_C_GetEnemiesToRevive_Params Parms{};

	Parms.GameState = GameState;
	Parms.Bullshitter = Bullshitter;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemiesToRevive != nullptr)
		*EnemiesToRevive = std::move(Parms.EnemiesToRevive);

}

}


