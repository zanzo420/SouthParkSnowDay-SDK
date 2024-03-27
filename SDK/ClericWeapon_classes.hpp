#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x8F8 - 0x8D9)
// BlueprintGeneratedClass ClericWeapon.ClericWeapon_C
class AClericWeapon_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_5EB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FlameNiagaraComponent;                             // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  FlamePointLightComponent;                          // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AClericWeapon_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void HealingPulseFX(float Radius);
	void ToggleFlame(bool On);
	void AttachClericWeaponFlame(class USceneComponent* ComponentToAttachTo, const struct FTransform& FlameTransform, class FName SocketName, class UNiagaraSystem* FlameNiagaraSystem, const struct FTransform& LightTransform);
	void HandleClericFX_Derived();
	void ExecuteUbergraph_ClericWeapon(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, float K2Node_CustomEvent_radius, bool K2Node_CustomEvent_On, class USceneComponent* K2Node_CustomEvent_ComponentToAttachTo, const struct FTransform& K2Node_CustomEvent_FlameTransform, class FName K2Node_CustomEvent_SocketName, class UNiagaraSystem* K2Node_CustomEvent_FlameNiagaraSystem, const struct FTransform& K2Node_CustomEvent_LightTransform, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
};

}


