#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ObjectiveMarkerInterface.ObjectiveMarkerInterface_C
// (None)

class UClass* IObjectiveMarkerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveMarkerInterface_C");

	return Clss;
}


// ObjectiveMarkerInterface_C ObjectiveMarkerInterface.Default__ObjectiveMarkerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IObjectiveMarkerInterface_C* IObjectiveMarkerInterface_C::GetDefaultObj()
{
	static class IObjectiveMarkerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IObjectiveMarkerInterface_C*>(IObjectiveMarkerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.ShouldHideHUDPortion(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IObjectiveMarkerInterface_C::ShouldHideHUDPortion_DEPRECATED_(bool* IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "ShouldHideHUDPortion(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_ShouldHideHUDPortion_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHidden != nullptr)
		*IsHidden = Parms.IsHidden;

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetPathTargetLocation(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PathLoc                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IObjectiveMarkerInterface_C::GetPathTargetLocation_DEPRECATED_(struct FVector* PathLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "GetPathTargetLocation(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_GetPathTargetLocation_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PathLoc != nullptr)
		*PathLoc = std::move(Parms.PathLoc);

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetPathProjectionExtents(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Extents                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IObjectiveMarkerInterface_C::GetPathProjectionExtents_DEPRECATED_(struct FVector* Extents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "GetPathProjectionExtents(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_GetPathProjectionExtents_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Extents != nullptr)
		*Extents = std::move(Parms.Extents);

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.ShowJustOneOfMe(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowOne                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IObjectiveMarkerInterface_C::ShowJustOneOfMe_DEPRECATED_(bool* ShowOne)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "ShowJustOneOfMe(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_ShowJustOneOfMe_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowOne != nullptr)
		*ShowOne = Parms.ShowOne;

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.DestinationPathingRelevant(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RelevantAsDestination                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IObjectiveMarkerInterface_C::DestinationPathingRelevant_DEPRECATED_(bool* RelevantAsDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "DestinationPathingRelevant(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_DestinationPathingRelevant_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RelevantAsDestination != nullptr)
		*RelevantAsDestination = Parms.RelevantAsDestination;

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetVisibilityDistance(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DistanceMinMax                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IObjectiveMarkerInterface_C::GetVisibilityDistance_DEPRECATED_(struct FVector2D* DistanceMinMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "GetVisibilityDistance(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_GetVisibilityDistance_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DistanceMinMax != nullptr)
		*DistanceMinMax = std::move(Parms.DistanceMinMax);

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetMarkerTexture(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IObjectiveMarkerInterface_C::GetMarkerTexture_DEPRECATED_(class UTexture2D** Texture, struct FVector2D* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "GetMarkerTexture(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_GetMarkerTexture_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Height != nullptr)
		*Height = std::move(Parms.Height);

}


// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.DoesShowObjectiveMarker(DEPRECATED)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoesShowMarker                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IObjectiveMarkerInterface_C::DoesShowObjectiveMarker_DEPRECATED_(bool* DoesShowMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMarkerInterface_C", "DoesShowObjectiveMarker(DEPRECATED)");

	Params::IObjectiveMarkerInterface_C_DoesShowObjectiveMarker_DEPRECATED__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DoesShowMarker != nullptr)
		*DoesShowMarker = Parms.DoesShowMarker;

}

}


