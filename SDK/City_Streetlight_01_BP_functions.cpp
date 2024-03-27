#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass City_Streetlight_01_BP.City_Streetlight_01_BP_C
// (Actor)

class UClass* ACity_Streetlight_01_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("City_Streetlight_01_BP_C");

	return Clss;
}


// City_Streetlight_01_BP_C City_Streetlight_01_BP.Default__City_Streetlight_01_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACity_Streetlight_01_BP_C* ACity_Streetlight_01_BP_C::GetDefaultObj()
{
	static class ACity_Streetlight_01_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACity_Streetlight_01_BP_C*>(ACity_Streetlight_01_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function City_Streetlight_01_BP.City_Streetlight_01_BP_C.LM_GatherInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MultipleLights                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Light_Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FVector>             Light_Locations                                                  (Parm, OutParm)
// TArray<struct FRotator>            Light_Orientations                                               (Parm, OutParm)
// TArray<struct FVector>             Light_SourceSize                                                 (Parm, OutParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRotator>            K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_1                                         (ReferenceParm)

void ACity_Streetlight_01_BP_C::LM_GatherInfo(bool* MultipleLights, class UClass** Light_Type, class FString* FolderName, TArray<struct FVector>* Light_Locations, TArray<struct FRotator>* Light_Orientations, TArray<struct FVector>* Light_SourceSize, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FRotator>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("City_Streetlight_01_BP_C", "LM_GatherInfo");

	Params::ACity_Streetlight_01_BP_C_LM_GatherInfo_Params Parms{};

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MultipleLights != nullptr)
		*MultipleLights = Parms.MultipleLights;

	if (Light_Type != nullptr)
		*Light_Type = Parms.Light_Type;

	if (FolderName != nullptr)
		*FolderName = std::move(Parms.FolderName);

	if (Light_Locations != nullptr)
		*Light_Locations = std::move(Parms.Light_Locations);

	if (Light_Orientations != nullptr)
		*Light_Orientations = std::move(Parms.Light_Orientations);

	if (Light_SourceSize != nullptr)
		*Light_SourceSize = std::move(Parms.Light_SourceSize);

}

}


