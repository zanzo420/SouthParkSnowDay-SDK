#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LensDistortion.LensDistortionBlueprintLibrary
// (None)

class UClass* ULensDistortionBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LensDistortionBlueprintLibrary");

	return Clss;
}


// LensDistortionBlueprintLibrary LensDistortion.Default__LensDistortionBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULensDistortionBlueprintLibrary* ULensDistortionBlueprintLibrary::GetDefaultObj()
{
	static class ULensDistortionBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULensDistortionBlueprintLibrary*>(ULensDistortionBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel& A, struct FLensDistortionCameraModel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionBlueprintLibrary", "NotEqual_CompareLensDistortionModels");

	Params::ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel  CameraModel                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DistortedHorizontalFOV                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistortedAspectRatio                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UndistortOverscanFactor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionBlueprintLibrary", "GetUndistortOverscanFactor");

	Params::ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Params Parms{};

	Parms.CameraModel = CameraModel;
	Parms.DistortedHorizontalFOV = DistortedHorizontalFOV;
	Parms.DistortedAspectRatio = DistortedAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UndistortOverscanFactor != nullptr)
		*UndistortOverscanFactor = Parms.UndistortOverscanFactor;

}


// Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel& A, struct FLensDistortionCameraModel& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionBlueprintLibrary", "EqualEqual_CompareLensDistortionModels");

	Params::ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel  CameraModel                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DistortedHorizontalFOV                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistortedAspectRatio                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UndistortOverscanFactor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      OutputRenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutputMultiply                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutputAdd                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(class UObject* WorldContextObject, struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LensDistortionBlueprintLibrary", "DrawUVDisplacementToRenderTarget");

	Params::ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraModel = CameraModel;
	Parms.DistortedHorizontalFOV = DistortedHorizontalFOV;
	Parms.DistortedAspectRatio = DistortedAspectRatio;
	Parms.UndistortOverscanFactor = UndistortOverscanFactor;
	Parms.OutputRenderTarget = OutputRenderTarget;
	Parms.OutputMultiply = OutputMultiply;
	Parms.OutputAdd = OutputAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


