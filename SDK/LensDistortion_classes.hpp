#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LensDistortion.LensDistortionBlueprintLibrary
class ULensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULensDistortionBlueprintLibrary* GetDefaultObj();

	bool NotEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel& A, struct FLensDistortionCameraModel& B);
	void GetUndistortOverscanFactor(struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor);
	bool EqualEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel& A, struct FLensDistortionCameraModel& B);
	void DrawUVDisplacementToRenderTarget(class UObject* WorldContextObject, struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd);
};

}


