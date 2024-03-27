#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Verb_Bow_ShootArchetype.Verb_Bow_ShootArchetype_C
// (None)

class UClass* UVerb_Bow_ShootArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Verb_Bow_ShootArchetype_C");

	return Clss;
}


// Verb_Bow_ShootArchetype_C Verb_Bow_ShootArchetype.Default__Verb_Bow_ShootArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerb_Bow_ShootArchetype_C* UVerb_Bow_ShootArchetype_C::GetDefaultObj()
{
	static class UVerb_Bow_ShootArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerb_Bow_ShootArchetype_C*>(UVerb_Bow_ShootArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Verb_Bow_ShootArchetype.Verb_Bow_ShootArchetype_C.GetMuzzleComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             OutMuzzleComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABow_C*                      K2Node_DynamicCast_AsBow                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_Bow_ShootArchetype_C::GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABow_C* K2Node_DynamicCast_AsBow, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_Bow_ShootArchetype_C", "GetMuzzleComponent");

	Params::UVerb_Bow_ShootArchetype_C_GetMuzzleComponent_Params Parms{};

	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBow = K2Node_DynamicCast_AsBow;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMuzzleComponent != nullptr)
		*OutMuzzleComponent = Parms.OutMuzzleComponent;

}

}


