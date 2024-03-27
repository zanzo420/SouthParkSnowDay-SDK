#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ObjectiveMarkerInterface.ObjectiveMarkerInterface_C
class IObjectiveMarkerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IObjectiveMarkerInterface_C* GetDefaultObj();

	void ShouldHideHUDPortion_DEPRECATED_(bool* IsHidden);
	void GetPathTargetLocation_DEPRECATED_(struct FVector* PathLoc);
	void GetPathProjectionExtents_DEPRECATED_(struct FVector* Extents);
	void ShowJustOneOfMe_DEPRECATED_(bool* ShowOne);
	void DestinationPathingRelevant_DEPRECATED_(bool* RelevantAsDestination);
	void GetVisibilityDistance_DEPRECATED_(struct FVector2D* DistanceMinMax);
	void GetMarkerTexture_DEPRECATED_(class UTexture2D** Texture, struct FVector2D* Height);
	void DoesShowObjectiveMarker_DEPRECATED_(bool* DoesShowMarker);
};

}


