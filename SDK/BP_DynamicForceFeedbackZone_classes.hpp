#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x288 - 0x250)
// BlueprintGeneratedClass BP_DynamicForceFeedbackZone.BP_DynamicForceFeedbackZone_C
class ABP_DynamicForceFeedbackZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FeedbackRadius;                                    // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnPlayer_C*                     AffectedPlayerPawn;                                // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InteriorRadius;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FeedbackStrength;                                  // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  LastFF;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DynamicForceFeedbackZone_C* GetDefaultObj();

	void CalculateForceFeedbackParams(float* Intensity, class UForceFeedbackEffect** Direction, bool IsWeak, float ForwDot, float HorizDot, bool LS, bool LL, const struct FVector& TargetDirection, const struct FVector& TargetVector, class UForceFeedbackEffect* Temp_object_Variable, class UForceFeedbackEffect* Temp_object_Variable_1, bool Temp_bool_Variable, class UForceFeedbackEffect* Temp_object_Variable_2, class UForceFeedbackEffect* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UForceFeedbackEffect* Temp_object_Variable_4, class UForceFeedbackEffect* Temp_object_Variable_5, bool Temp_bool_Variable_2, class UForceFeedbackEffect* Temp_object_Variable_6, class UForceFeedbackEffect* Temp_object_Variable_7, class UForceFeedbackEffect* K2Node_Select_Default, class UForceFeedbackEffect* K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UForceFeedbackEffect* K2Node_Select_Default_2, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Vector_Forward_ReturnValue, bool Temp_bool_Variable_3, float CallFunc_Dot_VectorVector_ReturnValue, class UForceFeedbackEffect* K2Node_Select_Default_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Vector_Right_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BP_DynamicForceFeedbackZone_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_DynamicForceFeedbackZone_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_DynamicForceFeedbackZone(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_IsValid_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaSeconds, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, float CallFunc_CalculateForceFeedbackParams_Intensity, class UForceFeedbackEffect* CallFunc_CalculateForceFeedbackParams_Direction, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


