#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hub_House_BP.Hub_House_BP_C
// (Actor)

class UClass* AHub_House_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hub_House_BP_C");

	return Clss;
}


// Hub_House_BP_C Hub_House_BP.Default__Hub_House_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHub_House_BP_C* AHub_House_BP_C::GetDefaultObj()
{
	static class AHub_House_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHub_House_BP_C*>(AHub_House_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hub_House_BP.Hub_House_BP_C.Window_Configure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AHub_House_BP_C::Window_Configure(TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "Window_Configure");

	Params::AHub_House_BP_C_Window_Configure_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hub_House_BP.Hub_House_BP_C.ConfigureHouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void AHub_House_BP_C::ConfigureHouse(TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "ConfigureHouse");

	Params::AHub_House_BP_C_ConfigureHouse_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hub_House_BP.Hub_House_BP_C.LM_GatherInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MultipleLights                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Light_Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FVector>             Light_Locations                                                  (Parm, OutParm)
// TArray<struct FRotator>            Light_Orientations                                               (Parm, OutParm)
// TArray<struct FVector>             Light_SourceSize                                                 (Parm, OutParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_Light_BuildStaticInfo_light_locations                   (ReferenceParm)
// TArray<struct FRotator>            CallFunc_Light_BuildStaticInfo_light_rotations                   (ReferenceParm)
// TArray<struct FVector>             CallFunc_Light_BuildStaticInfo_light_sourcesize                  (ReferenceParm)

void AHub_House_BP_C::LM_GatherInfo(bool* MultipleLights, class UClass** Light_Type, class FString* FolderName, TArray<struct FVector>* Light_Locations, TArray<struct FRotator>* Light_Orientations, TArray<struct FVector>* Light_SourceSize, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<struct FVector>& K2Node_MakeArray_Array_1, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_2, TArray<struct FVector>& CallFunc_Light_BuildStaticInfo_light_locations, TArray<struct FRotator>& CallFunc_Light_BuildStaticInfo_light_rotations, TArray<struct FVector>& CallFunc_Light_BuildStaticInfo_light_sourcesize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "LM_GatherInfo");

	Params::AHub_House_BP_C_LM_GatherInfo_Params Parms{};

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Light_BuildStaticInfo_light_locations = CallFunc_Light_BuildStaticInfo_light_locations;
	Parms.CallFunc_Light_BuildStaticInfo_light_rotations = CallFunc_Light_BuildStaticInfo_light_rotations;
	Parms.CallFunc_Light_BuildStaticInfo_light_sourcesize = CallFunc_Light_BuildStaticInfo_light_sourcesize;

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


// Function Hub_House_BP.Hub_House_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHub_House_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub_House_BP.Hub_House_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHub_House_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub_House_BP.Hub_House_BP_C.ExecuteUbergraph_Hub_House_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHub_House_BP_C::ExecuteUbergraph_Hub_House_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_House_BP_C", "ExecuteUbergraph_Hub_House_BP");

	Params::AHub_House_BP_C_ExecuteUbergraph_Hub_House_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


