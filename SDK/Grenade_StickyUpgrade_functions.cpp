#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_StickyUpgrade.Grenade_StickyUpgrade_C
// (None)

class UClass* UGrenade_StickyUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_StickyUpgrade_C");

	return Clss;
}


// Grenade_StickyUpgrade_C Grenade_StickyUpgrade.Default__Grenade_StickyUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrenade_StickyUpgrade_C* UGrenade_StickyUpgrade_C::GetDefaultObj()
{
	static class UGrenade_StickyUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrenade_StickyUpgrade_C*>(UGrenade_StickyUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGrenade_StickyUpgrade_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "OnSlottedEvent");

	Params::UGrenade_StickyUpgrade_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.OnUnslottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             PreviousSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGrenade_StickyUpgrade_C::OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "OnUnslottedEvent");

	Params::UGrenade_StickyUpgrade_C_OnUnslottedEvent_Params Parms{};

	Parms.PreviousSlot = PreviousSlot;
	Parms.RolledData = RolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.OnUpgradeRolledDataChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       PreviousRolledData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       NewRolledData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGrenade_StickyUpgrade_C::OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "OnUpgradeRolledDataChangedEvent");

	Params::UGrenade_StickyUpgrade_C_OnUpgradeRolledDataChangedEvent_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.PreviousRolledData = PreviousRolledData;
	Parms.NewRolledData = NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.OnHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeProjectile_Parent_C* Grenade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitEffect                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGrenade_StickyUpgrade_C::OnHit(class AGrenadeProjectile_Parent_C* Grenade, const struct FHitResult& HitEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "OnHit");

	Params::UGrenade_StickyUpgrade_C_OnHit_Params Parms{};

	Parms.Grenade = Grenade;
	Parms.HitEffect = HitEffect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.OnExplosion
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeProjectile_Parent_C* Grenade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              DamagedActors                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGrenade_StickyUpgrade_C::OnExplosion(class AGrenadeProjectile_Parent_C* Grenade, TArray<class AActor*>& DamagedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "OnExplosion");

	Params::UGrenade_StickyUpgrade_C_OnExplosion_Params Parms{};

	Parms.Grenade = Grenade;
	Parms.DamagedActors = DamagedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenade_StickyUpgrade.Grenade_StickyUpgrade_C.ExecuteUbergraph_Grenade_StickyUpgrade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData_1                                        (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             K2Node_Event_PreviousSlot                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Grenade_C*             CallFunc_GetVerb_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Grenade_C*             CallFunc_GetVerb_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_OwningSlot                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_PreviousRolledData                                  (ConstParm)
// struct FQtnRolledUpgradeData       K2Node_Event_NewRolledData                                       (ConstParm)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Grenade_C*             CallFunc_GetVerb_ReturnValue_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitEffect                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetSourceVerb_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerb_Grenade_C*             K2Node_DynamicCast_AsVerb_Grenade                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindClosestBone_K2_BoneLocation                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_FindClosestBone_K2_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_C*    K2Node_DynamicCast_AsScripted_Skeletal_Actor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindClosestBone_K2_BoneLocation_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_FindClosestBone_K2_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkeletalMeshActor*          K2Node_DynamicCast_AsSkeletal_Mesh_Actor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindClosestBone_K2_BoneLocation_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_FindClosestBone_K2_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindClosestBone_K2_BoneLocation_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_FindClosestBone_K2_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_Event_DamagedActors                                       (ConstParm, ReferenceParm)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetSourceVerb_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetExplosionRadius_Radius                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Grenade_C*             K2Node_DynamicCast_AsVerb_Grenade_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// TArray<class AActor*>              CallFunc_QtnDoRadialDamage_ReturnValue                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnemy_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_FlashbangKnockdown_C*CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGrenade_StickyUpgrade_C::ExecuteUbergraph_Grenade_StickyUpgrade(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_4, float CallFunc_GetValueOfUpgrade_ReturnValue_5, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade_1, const struct FHitResult& K2Node_Event_HitEffect, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation, class FName CallFunc_FindClosestBone_K2_ReturnValue, class AScriptedSkeletalActor_C* K2Node_DynamicCast_AsScripted_Skeletal_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_1, class FName CallFunc_FindClosestBone_K2_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_3, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_2, class FName CallFunc_FindClosestBone_K2_ReturnValue_2, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_2, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_3, class FName CallFunc_FindClosestBone_K2_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade, TArray<class AActor*>& K2Node_Event_DamagedActors, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, float CallFunc_GetExplosionRadius_Radius, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade_1, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStatusEffect_FlashbangKnockdown_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenade_StickyUpgrade_C", "ExecuteUbergraph_Grenade_StickyUpgrade");

	Params::UGrenade_StickyUpgrade_C_ExecuteUbergraph_Grenade_StickyUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData_1 = K2Node_Event_RolledData_1;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;
	Parms.K2Node_Event_PreviousSlot = K2Node_Event_PreviousSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_GetOwningItem_ReturnValue_1 = CallFunc_GetOwningItem_ReturnValue_1;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue_1 = CallFunc_GetVerbComponent_ReturnValue_1;
	Parms.CallFunc_GetVerb_ReturnValue = CallFunc_GetVerb_ReturnValue;
	Parms.CallFunc_GetVerb_ReturnValue_1 = CallFunc_GetVerb_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_1 = CallFunc_GetValueOfUpgrade_ReturnValue_1;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_2 = CallFunc_GetValueOfUpgrade_ReturnValue_2;
	Parms.K2Node_Event_OwningSlot = K2Node_Event_OwningSlot;
	Parms.K2Node_Event_PreviousRolledData = K2Node_Event_PreviousRolledData;
	Parms.K2Node_Event_NewRolledData = K2Node_Event_NewRolledData;
	Parms.CallFunc_GetOwningItem_ReturnValue_2 = CallFunc_GetOwningItem_ReturnValue_2;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_3 = CallFunc_GetValueOfUpgrade_ReturnValue_3;
	Parms.CallFunc_GetVerbComponent_ReturnValue_2 = CallFunc_GetVerbComponent_ReturnValue_2;
	Parms.CallFunc_GetVerb_ReturnValue_2 = CallFunc_GetVerb_ReturnValue_2;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_4 = CallFunc_GetValueOfUpgrade_ReturnValue_4;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_5 = CallFunc_GetValueOfUpgrade_ReturnValue_5;
	Parms.K2Node_Event_Grenade_1 = K2Node_Event_Grenade_1;
	Parms.K2Node_Event_HitEffect = K2Node_Event_HitEffect;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetSourceVerb_ReturnValue = CallFunc_GetSourceVerb_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVerb_Grenade = K2Node_DynamicCast_AsVerb_Grenade;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindClosestBone_K2_BoneLocation = CallFunc_FindClosestBone_K2_BoneLocation;
	Parms.CallFunc_FindClosestBone_K2_ReturnValue = CallFunc_FindClosestBone_K2_ReturnValue;
	Parms.K2Node_DynamicCast_AsScripted_Skeletal_Actor = K2Node_DynamicCast_AsScripted_Skeletal_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_FindClosestBone_K2_BoneLocation_1 = CallFunc_FindClosestBone_K2_BoneLocation_1;
	Parms.CallFunc_FindClosestBone_K2_ReturnValue_1 = CallFunc_FindClosestBone_K2_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Actor = K2Node_DynamicCast_AsSkeletal_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_FindClosestBone_K2_BoneLocation_2 = CallFunc_FindClosestBone_K2_BoneLocation_2;
	Parms.CallFunc_FindClosestBone_K2_ReturnValue_2 = CallFunc_FindClosestBone_K2_ReturnValue_2;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_FindClosestBone_K2_BoneLocation_3 = CallFunc_FindClosestBone_K2_BoneLocation_3;
	Parms.CallFunc_FindClosestBone_K2_ReturnValue_3 = CallFunc_FindClosestBone_K2_ReturnValue_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_Event_Grenade = K2Node_Event_Grenade;
	Parms.K2Node_Event_DamagedActors = K2Node_Event_DamagedActors;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.CallFunc_GetCulprit_ReturnValue = CallFunc_GetCulprit_ReturnValue;
	Parms.CallFunc_GetSourceVerb_ReturnValue_1 = CallFunc_GetSourceVerb_ReturnValue_1;
	Parms.CallFunc_GetExplosionRadius_Radius = CallFunc_GetExplosionRadius_Radius;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsVerb_Grenade_1 = K2Node_DynamicCast_AsVerb_Grenade_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_QtnDoRadialDamage_ReturnValue = CallFunc_QtnDoRadialDamage_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsEnemy_ReturnValue = CallFunc_IsEnemy_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


