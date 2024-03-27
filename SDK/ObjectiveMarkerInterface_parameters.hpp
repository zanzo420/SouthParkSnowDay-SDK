#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.ShouldHideHUDPortion(DEPRECATED)
struct IObjectiveMarkerInterface_C_ShouldHideHUDPortion_DEPRECATED__Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetPathTargetLocation(DEPRECATED)
struct IObjectiveMarkerInterface_C_GetPathTargetLocation_DEPRECATED__Params
{
public:
	struct FVector                               PathLoc;                                           // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetPathProjectionExtents(DEPRECATED)
struct IObjectiveMarkerInterface_C_GetPathProjectionExtents_DEPRECATED__Params
{
public:
	struct FVector                               Extents;                                           // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.ShowJustOneOfMe(DEPRECATED)
struct IObjectiveMarkerInterface_C_ShowJustOneOfMe_DEPRECATED__Params
{
public:
	bool                                         ShowOne;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.DestinationPathingRelevant(DEPRECATED)
struct IObjectiveMarkerInterface_C_DestinationPathingRelevant_DEPRECATED__Params
{
public:
	bool                                         RelevantAsDestination;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetVisibilityDistance(DEPRECATED)
struct IObjectiveMarkerInterface_C_GetVisibilityDistance_DEPRECATED__Params
{
public:
	struct FVector2D                             DistanceMinMax;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.GetMarkerTexture(DEPRECATED)
struct IObjectiveMarkerInterface_C_GetMarkerTexture_DEPRECATED__Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Height;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ObjectiveMarkerInterface.ObjectiveMarkerInterface_C.DoesShowObjectiveMarker(DEPRECATED)
struct IObjectiveMarkerInterface_C_DoesShowObjectiveMarker_DEPRECATED__Params
{
public:
	bool                                         DoesShowMarker;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


