#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JobCluster_DouseFire.JobCluster_DouseFire_C
// (None)

class UClass* UJobCluster_DouseFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobCluster_DouseFire_C");

	return Clss;
}


// JobCluster_DouseFire_C JobCluster_DouseFire.Default__JobCluster_DouseFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobCluster_DouseFire_C* UJobCluster_DouseFire_C::GetDefaultObj()
{
	static class UJobCluster_DouseFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobCluster_DouseFire_C*>(UJobCluster_DouseFire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobCluster_DouseFire.JobCluster_DouseFire_C.IsAIJobClusterViable_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForInitialAdoption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               IsOnFire                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QtnHasPath_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnNavHelperInterface>K2Node_DynamicCast_AsQtn_Nav_Helper_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetNavLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UJobCluster_DouseFire_C::IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, bool IsOnFire, const struct FVector& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_QtnHasPath_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnNavHelperInterface> K2Node_DynamicCast_AsQtn_Nav_Helper_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetNavLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobCluster_DouseFire_C", "IsAIJobClusterViable_ServerOnly");

	Params::UJobCluster_DouseFire_C_IsAIJobClusterViable_ServerOnly_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.ForInitialAdoption = ForInitialAdoption;
	Parms.IsOnFire = IsOnFire;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_QtnHasPath_ReturnValue = CallFunc_QtnHasPath_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Nav_Helper_Interface = K2Node_DynamicCast_AsQtn_Nav_Helper_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNavLocation_ReturnValue = CallFunc_GetNavLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


