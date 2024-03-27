#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArtTool_LightInterface.ArtTool_LightInterface_C
// (None)

class UClass* IArtTool_LightInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArtTool_LightInterface_C");

	return Clss;
}


// ArtTool_LightInterface_C ArtTool_LightInterface.Default__ArtTool_LightInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IArtTool_LightInterface_C* IArtTool_LightInterface_C::GetDefaultObj()
{
	static class IArtTool_LightInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IArtTool_LightInterface_C*>(IArtTool_LightInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArtTool_LightInterface.ArtTool_LightInterface_C.LM_GatherInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MultipleLights                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Light_Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FVector>             Light_Locations                                                  (Parm, OutParm)
// TArray<struct FRotator>            Light_Orientations                                               (Parm, OutParm)
// TArray<struct FVector>             Light_SourceSize                                                 (Parm, OutParm)

void IArtTool_LightInterface_C::LM_GatherInfo(bool* MultipleLights, class UClass** Light_Type, class FString* FolderName, TArray<struct FVector>* Light_Locations, TArray<struct FRotator>* Light_Orientations, TArray<struct FVector>* Light_SourceSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArtTool_LightInterface_C", "LM_GatherInfo");

	Params::IArtTool_LightInterface_C_LM_GatherInfo_Params Parms{};


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


