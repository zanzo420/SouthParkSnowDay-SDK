#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EncroacherShieldBlock.EncroacherShieldBlock_C
// (None)

class UClass* UEncroacherShieldBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncroacherShieldBlock_C");

	return Clss;
}


// EncroacherShieldBlock_C EncroacherShieldBlock.Default__EncroacherShieldBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEncroacherShieldBlock_C* UEncroacherShieldBlock_C::GetDefaultObj()
{
	static class UEncroacherShieldBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncroacherShieldBlock_C*>(UEncroacherShieldBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.HandleIncomingBlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UEncroacherShieldBlock_C::HandleIncomingBlock(struct FQtnDamageInfo& DamageInfo, float CallFunc_StartVerbAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "HandleIncomingBlock");

	Params::UEncroacherShieldBlock_C_HandleIncomingBlock_Params Parms{};

	Parms.DamageInfo = DamageInfo;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.CanMantle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEncroacherShieldBlock_C::CanMantle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "CanMantle");

	Params::UEncroacherShieldBlock_C_CanMantle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.HandleBlockAOEUpgrade_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_QtnDoRadialDamage_ReturnValue                           (ReferenceParm)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEncroacherShieldBlock_C::HandleBlockAOEUpgrade_ServerOnly(float Radius, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "HandleBlockAOEUpgrade_ServerOnly");

	Params::UEncroacherShieldBlock_C_HandleBlockAOEUpgrade_ServerOnly_Params Parms{};

	Parms.Radius = Radius;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_QtnDoRadialDamage_ReturnValue = CallFunc_QtnDoRadialDamage_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnProjectilePreHit_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnProjectile*              Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreCollision                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      ReflectingActor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    ProjectileCulprit                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnProjectile*              ReflectedProjectile                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetProjectileVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInFront_inFront                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetReflectionCount_ServerOnly_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetSourceVerb_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetProjectileVelocity_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetReflectionVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEncroacherShieldBlock_C::OnProjectilePreHit_ServerOnly(class AQtnProjectile* Projectile, bool* IgnoreCollision, class AActor* ReflectingActor, class AQtnPawn* ProjectileCulprit, class AQtnProjectile* ReflectedProjectile, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsInFront_inFront, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetReflectionCount_ServerOnly_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetReflectionVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* K2Node_Select_Default, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnProjectilePreHit_ServerOnly");

	Params::UEncroacherShieldBlock_C_OnProjectilePreHit_ServerOnly_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.ReflectingActor = ReflectingActor;
	Parms.ProjectileCulprit = ProjectileCulprit;
	Parms.ReflectedProjectile = ReflectedProjectile;
	Parms.CallFunc_GetProjectileVelocity_ReturnValue = CallFunc_GetProjectileVelocity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCulprit_ReturnValue = CallFunc_GetCulprit_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_IsInFront_inFront = CallFunc_IsInFront_inFront;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetReflectionCount_ServerOnly_ReturnValue = CallFunc_GetReflectionCount_ServerOnly_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSourceVerb_ReturnValue = CallFunc_GetSourceVerb_ReturnValue;
	Parms.CallFunc_GetProjectileVelocity_ReturnValue_1 = CallFunc_GetProjectileVelocity_ReturnValue_1;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReflectionVector_ReturnValue = CallFunc_GetReflectionVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningPawn_ReturnValue_3 = CallFunc_GetOwningPawn_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreCollision != nullptr)
		*IgnoreCollision = Parms.IgnoreCollision;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.IsInFront
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ThreatLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InFront                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCardinalDirection_isValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnCardinalDirection   CallFunc_GetCardinalDirection_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::IsInFront(struct FVector& ThreatLocation, bool* InFront, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_GetCardinalDirection_isValid, enum class EQtnCardinalDirection CallFunc_GetCardinalDirection_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "IsInFront");

	Params::UEncroacherShieldBlock_C_IsInFront_Params Parms{};

	Parms.ThreatLocation = ThreatLocation;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetCardinalDirection_isValid = CallFunc_GetCardinalDirection_isValid;
	Parms.CallFunc_GetCardinalDirection_ReturnValue = CallFunc_GetCardinalDirection_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InFront != nullptr)
		*InFront = Parms.InFront;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.AllowOtherVerbToInterrupt
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnVerb*                    OtherVerb                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEncroacherShieldBlock_C::AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "AllowOtherVerbToInterrupt");

	Params::UEncroacherShieldBlock_C_AllowOtherVerbToInterrupt_Params Parms{};

	Parms.OtherVerb = OtherVerb;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInFront_inFront                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHitReacting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTouchingGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEncroacherShieldBlock_C::CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsInFront_inFront, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsHitReacting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "CanVerbStart");

	Params::UEncroacherShieldBlock_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_IsInFront_inFront = CallFunc_IsInFront_inFront;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsHitReacting_ReturnValue = CallFunc_IsHitReacting_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsTouchingGround_ReturnValue = CallFunc_IsTouchingGround_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.IsVerbFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEncroacherShieldBlock_C::IsVerbFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "IsVerbFinished");

	Params::UEncroacherShieldBlock_C_IsVerbFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnVerbStart");

	Params::UEncroacherShieldBlock_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnMontageBlendingOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnMontageBlendingOut");

	Params::UEncroacherShieldBlock_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnMontageEnded");

	Params::UEncroacherShieldBlock_C_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.PresentCooldownWhileDormant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEncroacherShieldBlock_C::PresentCooldownWhileDormant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "PresentCooldownWhileDormant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnActiveVerbTicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FQtnPawnIntentions          PawnIntentions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                              DeltaSeconds                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedTime                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnActiveVerbTicked");

	Params::UEncroacherShieldBlock_C_OnActiveVerbTicked_Params Parms{};

	Parms.PawnIntentions = PawnIntentions;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.ElapsedTime = ElapsedTime;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.Play Block Effect Multicast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEncroacherShieldBlock_C::Play_Block_Effect_Multicast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "Play Block Effect Multicast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEncroacherShieldBlock_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "OnVerbStop");

	Params::UEncroacherShieldBlock_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.Play AOE Upgrade Effect Multicast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEncroacherShieldBlock_C::Play_AOE_Upgrade_Effect_Multicast(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "Play AOE Upgrade Effect Multicast");

	Params::UEncroacherShieldBlock_C_Play_AOE_Upgrade_Effect_Multicast_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncroacherShieldBlock.EncroacherShieldBlock_C.ExecuteUbergraph_EncroacherShieldBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnIntentions          K2Node_Event_pawnIntentions                                      (ConstParm, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_elapsedTime                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_StartVerbAction_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetIntendedTarget_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEncroacherShieldBlock_C::ExecuteUbergraph_EncroacherShieldBlock(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool CallFunc_IsValid_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_3, float K2Node_CustomEvent_radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncroacherShieldBlock_C", "ExecuteUbergraph_EncroacherShieldBlock");

	Params::UEncroacherShieldBlock_C_ExecuteUbergraph_EncroacherShieldBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_Event_montage_1 = K2Node_Event_montage_1;
	Parms.K2Node_Event_interrupted_1 = K2Node_Event_interrupted_1;
	Parms.K2Node_Event_isServer_3 = K2Node_Event_isServer_3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_4 = K2Node_Event_isServer_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_pawnIntentions = K2Node_Event_pawnIntentions;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_elapsedTime = K2Node_Event_elapsedTime;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_StartVerbAction_ReturnValue_1 = CallFunc_StartVerbAction_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetIntendedTarget_ReturnValue = CallFunc_GetIntendedTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_2 = CallFunc_BP_BeginEffect_ReturnValue_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_3 = CallFunc_BP_BeginEffect_ReturnValue_3;
	Parms.K2Node_CustomEvent_radius = K2Node_CustomEvent_radius;

	UObject::ProcessEvent(Func, &Parms);

}

}


