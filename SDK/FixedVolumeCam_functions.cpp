#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FixedVolumeCam.FixedVolumeCam_C
// (None)

class UClass* UFixedVolumeCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedVolumeCam_C");

	return Clss;
}


// FixedVolumeCam_C FixedVolumeCam.Default__FixedVolumeCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFixedVolumeCam_C* UFixedVolumeCam_C::GetDefaultObj()
{
	static class UFixedVolumeCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedVolumeCam_C*>(UFixedVolumeCam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FixedVolumeCam.FixedVolumeCam_C.SetupFixedVolumeCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFixedCameraVolume_C*        FixedCamVolume                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedVolumeCam_C::SetupFixedVolumeCam(class AFixedCameraVolume_C* FixedCamVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedVolumeCam_C", "SetupFixedVolumeCam");

	Params::UFixedVolumeCam_C_SetupFixedVolumeCam_Params Parms{};

	Parms.FixedCamVolume = FixedCamVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FixedVolumeCam.FixedVolumeCam_C.UpdateFixedCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetCameraLocationAndRotation_cameraLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraLocationAndRotation_cameraRotation             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFixedVolumeCam_C::UpdateFixedCam(const struct FVector& CallFunc_GetCameraLocationAndRotation_cameraLocation, const struct FRotator& CallFunc_GetCameraLocationAndRotation_cameraRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedVolumeCam_C", "UpdateFixedCam");

	Params::UFixedVolumeCam_C_UpdateFixedCam_Params Parms{};

	Parms.CallFunc_GetCameraLocationAndRotation_cameraLocation = CallFunc_GetCameraLocationAndRotation_cameraLocation;
	Parms.CallFunc_GetCameraLocationAndRotation_cameraRotation = CallFunc_GetCameraLocationAndRotation_cameraRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FixedVolumeCam.FixedVolumeCam_C.OnCameraBehaviorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedVolumeCam_C::OnCameraBehaviorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedVolumeCam_C", "OnCameraBehaviorTick");

	Params::UFixedVolumeCam_C_OnCameraBehaviorTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FixedVolumeCam.FixedVolumeCam_C.ExecuteUbergraph_FixedVolumeCam
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedVolumeCam_C::ExecuteUbergraph_FixedVolumeCam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedVolumeCam_C", "ExecuteUbergraph_FixedVolumeCam");

	Params::UFixedVolumeCam_C_ExecuteUbergraph_FixedVolumeCam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


