#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C
// (None)

class UClass* UDodgeVerb_ShieldCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DodgeVerb_ShieldCharge_C");

	return Clss;
}


// DodgeVerb_ShieldCharge_C DodgeVerb_ShieldCharge.Default__DodgeVerb_ShieldCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDodgeVerb_ShieldCharge_C* UDodgeVerb_ShieldCharge_C::GetDefaultObj()
{
	static class UDodgeVerb_ShieldCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDodgeVerb_ShieldCharge_C*>(UDodgeVerb_ShieldCharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.ServerOnly_Upgrade_OmniDirectionalBlock_HealonBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::ServerOnly_Upgrade_OmniDirectionalBlock_HealonBlock(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "ServerOnly_Upgrade_OmniDirectionalBlock_HealonBlock");

	Params::UDodgeVerb_ShieldCharge_C_ServerOnly_Upgrade_OmniDirectionalBlock_HealonBlock_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.ModifyAnimWindowBlockParryValues
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQtnRangedFloat             OriginalDegrees                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              OriginalCm                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             ModifiedDegrees                                                  (Parm, OutParm, NoDestructor)
// float                              ModifiedCm                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeVerb_ShieldCharge_C::ModifyAnimWindowBlockParryValues(struct FQtnRangedFloat& OriginalDegrees, float OriginalCm, struct FQtnRangedFloat* ModifiedDegrees, float* ModifiedCm, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "ModifyAnimWindowBlockParryValues");

	Params::UDodgeVerb_ShieldCharge_C_ModifyAnimWindowBlockParryValues_Params Parms{};

	Parms.OriginalDegrees = OriginalDegrees;
	Parms.OriginalCm = OriginalCm;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedDegrees != nullptr)
		*ModifiedDegrees = std::move(Parms.ModifiedDegrees);

	if (ModifiedCm != nullptr)
		*ModifiedCm = Parms.ModifiedCm;

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.OnProjectilePreHit_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnProjectile*              Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreCollision                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    LOCAL_Culprit                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnProjectile*              LOCAL_Projectile                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnProjectileArchetype_C*   K2Node_DynamicCast_AsQtn_Projectile_Archetype                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetBlockInfo_blockingVerb                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBlockInfo_wouldBlockSucceed                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::OnProjectilePreHit_ServerOnly(class AQtnProjectile* Projectile, bool* IgnoreCollision, class AQtnPawn* LOCAL_Culprit, class AQtnProjectile* LOCAL_Projectile, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, class AQtnProjectileArchetype_C* K2Node_DynamicCast_AsQtn_Projectile_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnVerb* CallFunc_GetBlockInfo_blockingVerb, bool CallFunc_GetBlockInfo_wouldBlockSucceed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "OnProjectilePreHit_ServerOnly");

	Params::UDodgeVerb_ShieldCharge_C_OnProjectilePreHit_ServerOnly_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.LOCAL_Culprit = LOCAL_Culprit;
	Parms.LOCAL_Projectile = LOCAL_Projectile;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Projectile_Archetype = K2Node_DynamicCast_AsQtn_Projectile_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetExistingVerb_ReturnValue_1 = CallFunc_GetExistingVerb_ReturnValue_1;
	Parms.CallFunc_GetCulprit_ReturnValue = CallFunc_GetCulprit_ReturnValue;
	Parms.CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision = CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision;
	Parms.CallFunc_GetCulprit_ReturnValue_1 = CallFunc_GetCulprit_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningItem_ReturnValue_1 = CallFunc_GetOwningItem_ReturnValue_1;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.CallFunc_GetOwningPawn_ReturnValue_3 = CallFunc_GetOwningPawn_ReturnValue_3;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_GetBlockInfo_blockingVerb = CallFunc_GetBlockInfo_blockingVerb;
	Parms.CallFunc_GetBlockInfo_wouldBlockSucceed = CallFunc_GetBlockInfo_wouldBlockSucceed;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreCollision != nullptr)
		*IgnoreCollision = Parms.IgnoreCollision;

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.HandleIncomingBlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDodgeVerb_ShieldCharge_C::HandleIncomingBlock(struct FQtnDamageInfo& DamageInfo, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "HandleIncomingBlock");

	Params::UDodgeVerb_ShieldCharge_C_HandleIncomingBlock_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.GetLocoBlendOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBlendSpace*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_GetLocoBlendOverride_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBlendSpace* UDodgeVerb_ShieldCharge_C::GetLocoBlendOverride(class UBlendSpace* CallFunc_GetLocoBlendOverride_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "GetLocoBlendOverride");

	Params::UDodgeVerb_ShieldCharge_C_GetLocoBlendOverride_Params Parms{};

	Parms.CallFunc_GetLocoBlendOverride_ReturnValue = CallFunc_GetLocoBlendOverride_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.StartDodge_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeVerb_ShieldCharge_C::StartDodge_Derived(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "StartDodge_Derived");

	Params::UDodgeVerb_ShieldCharge_C_StartDodge_Derived_Params Parms{};

	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.HandleTouchLivingEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             EnemyBody                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDodgeVerb_ShieldCharge_C::HandleTouchLivingEnemy(class ABodyPawnBase_C*& EnemyBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "HandleTouchLivingEnemy");

	Params::UDodgeVerb_ShieldCharge_C_HandleTouchLivingEnemy_Params Parms{};

	Parms.EnemyBody = EnemyBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.GetDamageValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      VictimActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_BaseDamage                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LOCAL_VictimActor                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_BonusDamage                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_DamageScalar                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnDamageType>  CallFunc_GetDamageType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnDamageType>  CallFunc_GetDamageType_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateDamageValues_OutDamageScalar                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDamageValues_OutBonusDamage                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDamageValues_OutDamageScalar_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDamageValues_OutBonusDamage_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UDodgeVerb_ShieldCharge_C::GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float LOCAL_BaseDamage, class AActor* LOCAL_VictimActor, float LOCAL_BonusDamage, float LOCAL_DamageScalar, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_CalculateDamageValues_OutDamageScalar, float CallFunc_CalculateDamageValues_OutBonusDamage, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_CalculateDamageValues_OutDamageScalar_1, float CallFunc_CalculateDamageValues_OutBonusDamage_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "GetDamageValue");

	Params::UDodgeVerb_ShieldCharge_C_GetDamageValue_Params Parms{};

	Parms.VictimActor = VictimActor;
	Parms.DamageMultiplier = DamageMultiplier;
	Parms.LOCAL_BaseDamage = LOCAL_BaseDamage;
	Parms.LOCAL_VictimActor = LOCAL_VictimActor;
	Parms.LOCAL_BonusDamage = LOCAL_BonusDamage;
	Parms.LOCAL_DamageScalar = LOCAL_DamageScalar;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDamageType_ReturnValue_1 = CallFunc_GetDamageType_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CalculateDamageValues_OutDamageScalar = CallFunc_CalculateDamageValues_OutDamageScalar;
	Parms.CallFunc_CalculateDamageValues_OutBonusDamage = CallFunc_CalculateDamageValues_OutBonusDamage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_CalculateDamageValues_OutDamageScalar_1 = CallFunc_CalculateDamageValues_OutDamageScalar_1;
	Parms.CallFunc_CalculateDamageValues_OutBonusDamage_1 = CallFunc_CalculateDamageValues_OutBonusDamage_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (BaseDamage != nullptr)
		*BaseDamage = Parms.BaseDamage;

	return Parms.ReturnValue;

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.MulticastOnBlocked
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDodgeVerb_ShieldCharge_C::MulticastOnBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "MulticastOnBlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.OnActiveVerbTicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnPawnIntentions          PawnIntentions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                              DeltaSeconds                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedTime                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "OnActiveVerbTicked");

	Params::UDodgeVerb_ShieldCharge_C_OnActiveVerbTicked_Params Parms{};

	Parms.PawnIntentions = PawnIntentions;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.ElapsedTime = ElapsedTime;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "OnVerbStart");

	Params::UDodgeVerb_ShieldCharge_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "OnVerbStop");

	Params::UDodgeVerb_ShieldCharge_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C.ExecuteUbergraph_DodgeVerb_ShieldCharge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnIntentions          K2Node_Event_pawnIntentions                                      (ConstParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_elapsedTime                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDodgeVerb_ShieldCharge_C::ExecuteUbergraph_DodgeVerb_ShieldCharge(int32 EntryPoint, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DodgeVerb_ShieldCharge_C", "ExecuteUbergraph_DodgeVerb_ShieldCharge");

	Params::UDodgeVerb_ShieldCharge_C_ExecuteUbergraph_DodgeVerb_ShieldCharge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_Event_pawnIntentions = K2Node_Event_pawnIntentions;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_elapsedTime = K2Node_Event_elapsedTime;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue_1 = CallFunc_GetNiagaraComponent_ReturnValue_1;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue_2 = CallFunc_GetNiagaraComponent_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


