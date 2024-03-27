#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// BlueprintGeneratedClass FixedVolumeCam.FixedVolumeCam_C
class UFixedVolumeCam_C : public UQtnCameraBehavior
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFixedCameraVolume_C*                  OwningFixedCameraVolume;                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFixedVolumeCam_C* GetDefaultObj();

	void SetupFixedVolumeCam(class AFixedCameraVolume_C* FixedCamVolume);
	void UpdateFixedCam(const struct FVector& CallFunc_GetCameraLocationAndRotation_cameraLocation, const struct FRotator& CallFunc_GetCameraLocationAndRotation_cameraRotation);
	void OnCameraBehaviorTick(float DeltaSeconds);
	void ExecuteUbergraph_FixedVolumeCam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds);
};

}


