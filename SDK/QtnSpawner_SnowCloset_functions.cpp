#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnSpawner_SnowCloset.QtnSpawner_SnowCloset_C
// (Actor)

class UClass* AQtnSpawner_SnowCloset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnSpawner_SnowCloset_C");

	return Clss;
}


// QtnSpawner_SnowCloset_C QtnSpawner_SnowCloset.Default__QtnSpawner_SnowCloset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnSpawner_SnowCloset_C* AQtnSpawner_SnowCloset_C::GetDefaultObj()
{
	static class AQtnSpawner_SnowCloset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnSpawner_SnowCloset_C*>(AQtnSpawner_SnowCloset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnSpawner_SnowCloset.QtnSpawner_SnowCloset_C.PostSpawnAIPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        AnimsLocal                                                       (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)

void AQtnSpawner_SnowCloset_C::PostSpawnAIPresentation(class AQtnBodyPawn* Body, const TArray<class UAnimMontage*>& AnimsLocal, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnSpawner_SnowCloset_C", "PostSpawnAIPresentation");

	Params::AQtnSpawner_SnowCloset_C_PostSpawnAIPresentation_Params Parms{};

	Parms.Body = Body;
	Parms.AnimsLocal = AnimsLocal;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;

	UObject::ProcessEvent(Func, &Parms);

}

}


