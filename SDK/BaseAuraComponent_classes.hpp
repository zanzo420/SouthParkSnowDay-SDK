#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x138 - 0x100)
// BlueprintGeneratedClass BaseAuraComponent.BaseAuraComponent_C
class UBaseAuraComponent_C : public UQtnAuraComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       OwningBodyPawn_ServerOnly;                         // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      AuraSphere_ServerOnly;                             // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        In_Sphere_Radius;                                  // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3528[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerSphere_ServerOnly;                           // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnBase_C*>               AuraVictims_ServerOnly;                            // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBaseAuraComponent_C* GetDefaultObj();

	void CleanupLingeringAuraVictims_ServerOnly(const TArray<class ABodyPawnBase_C*>& LOCAL_VictimsToCleanup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABodyPawnBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RemoveAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ApplyAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody, int32 CallFunc_Array_AddUnique_ReturnValue);
	void DestroyDangerVolume_ServerOnly(bool CallFunc_IsValid_ReturnValue);
	void SpawnDangerVolume_ServerOnly(const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue);
	void Should_Apply_Aura_Effect_Server_Only(class AActor* Other_Actor, bool* Should_Apply_Status_Effect, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsEnemy_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleEndOverlap_ServerOnly(class AActor* OtherActor, class ABodyPawnBase_C* Overlapping_Body_Pawn, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleBeginOverlap_ServerOnly(class AActor* OtherActor, class ABodyPawnBase_C* Colliding_Body_Pawn, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Should_Apply_Aura_Effect_Server_Only_Should_Apply_Status_Effect);
	void SetupAuraSphere_ServerOnly(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USphereComponent* CallFunc_AddComponentByClass_ReturnValue);
	void Setup_Aura_ServerOnly();
	void OnAuraSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnAuraSphereEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BaseAuraComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_otherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_otherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


