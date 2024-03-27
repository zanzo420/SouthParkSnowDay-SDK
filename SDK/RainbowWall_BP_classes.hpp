#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2B0 - 0x250)
// BlueprintGeneratedClass RainbowWall_BP.RainbowWall_BP_C
class ARainbowWall_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                      SplineGuide;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SplineMeshLength;                                  // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumVisualDivisions;                                // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumPhysicsDivisions;                               // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AQtnNavLinkCustomProxy>> NavLinks;                                          // 0x278(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         Active;                                            // 0x288(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_EB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AQtnNavLinkMantleProxy>> NavLinksMantle;                                    // 0x290(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	class AQtnBodyPawn*                          Body;                                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mat;                                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARainbowWall_BP_C* GetDefaultObj();

	void GetPlayerBody(class AQtnBodyPawn** Body, bool CallFunc_IsValid_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, TSoftObjectPtr<class AQtnNavLinkMantleProxy> CallFunc_Array_Get_Item, TSoftObjectPtr<class AQtnNavLinkMantleProxy> CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AQtnNavLinkMantleProxy* K2Node_DynamicCast_AsQtn_Nav_Link_Mantle_Proxy, bool K2Node_DynamicCast_bSuccess, class AQtnNavLinkMantleProxy* K2Node_DynamicCast_AsQtn_Nav_Link_Mantle_Proxy_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TSoftObjectPtr<class AQtnNavLinkCustomProxy> CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnNavLinkCustomProxy* K2Node_DynamicCast_AsQtn_Nav_Link_Custom_Proxy, bool K2Node_DynamicCast_bSuccess_2, TSoftObjectPtr<class AQtnNavLinkCustomProxy> CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class AQtnNavLinkCustomProxy* K2Node_DynamicCast_AsQtn_Nav_Link_Custom_Proxy_1, bool K2Node_DynamicCast_bSuccess_3);
	void OnRep_active();
	void UserConstructionScript(float CurDistanceCol, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, float CallFunc_GetSplineLength_ReturnValue_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Variable_1, const struct FTransform& Temp_struct_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBoxComponent* CallFunc_AddComponent_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, const struct FVector& CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_2, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_RainbowWall_BP(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetPlayerBody_Body, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
};

}


