#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x198 - 0x180)
// BlueprintGeneratedClass CameraBehavior_Deepsnow.CameraBehavior_Deepsnow_C
class UCameraBehavior_Deepsnow_C : public UAmbientTetherCam_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x180(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       TargetComponent;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeepSnow_BP_C*                        DeepSnow;                                          // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraBehavior_Deepsnow_C* GetDefaultObj();

	void OnCameraBehaviorTick(float DeltaSeconds);
	void ExecuteUbergraph_CameraBehavior_Deepsnow(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float K2Node_Event_DeltaSeconds, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Vector_GetAbs_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue);
};

}


