#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass BodyPawnNeckOffsetComponent.BodyPawnNeckOffsetComponent_C
class UBodyPawnNeckOffsetComponent_C : public USceneComponent
{
public:
	uint8                                        Pad_4D0B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnCameraComponent*                   CamComponent;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyPawnNeckOffsetComponent_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodyPawnNeckOffsetComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRelativeNeckOffset_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


