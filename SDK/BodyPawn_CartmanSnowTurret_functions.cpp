#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C
// (Actor, Pawn)

class UClass* ABodyPawn_CartmanSnowTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_CartmanSnowTurret_C");

	return Clss;
}


// BodyPawn_CartmanSnowTurret_C BodyPawn_CartmanSnowTurret.Default__BodyPawn_CartmanSnowTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_CartmanSnowTurret_C* ABodyPawn_CartmanSnowTurret_C::GetDefaultObj()
{
	static class ABodyPawn_CartmanSnowTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_CartmanSnowTurret_C*>(ABodyPawn_CartmanSnowTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.CheckIsFXIntercepted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class AQtnFXActor>     FxClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABodyPawn_CartmanSnowTurret_C::CheckIsFXIntercepted(TSubclassOf<class AQtnFXActor> FxClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "CheckIsFXIntercepted");

	Params::ABodyPawn_CartmanSnowTurret_C_CheckIsFXIntercepted_Params Parms{};

	Parms.FxClass = FxClass;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawn_CartmanBoss_C*     CallFunc_Get_Cartman_Cartman                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawn_CartmanSnowTurret_C::HandleDeath(class ABodyPawn_CartmanBoss_C* CallFunc_Get_Cartman_Cartman)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "HandleDeath");

	Params::ABodyPawn_CartmanSnowTurret_C_HandleDeath_Params Parms{};

	Parms.CallFunc_Get_Cartman_Cartman = CallFunc_Get_Cartman_Cartman;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.Get Cartman
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawn_CartmanBoss_C*     Cartman                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanSnowTurret_C::Get_Cartman(class ABodyPawn_CartmanBoss_C** Cartman, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "Get Cartman");

	Params::ABodyPawn_CartmanSnowTurret_C_Get_Cartman_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cartman != nullptr)
		*Cartman = Parms.Cartman;

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanSnowTurret_C::UserConstructionScript(enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "UserConstructionScript");

	Params::ABodyPawn_CartmanSnowTurret_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.FadeEgg__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::FadeEgg__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "FadeEgg__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.FadeEgg__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::FadeEgg__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "FadeEgg__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.HatchEgg
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::HatchEgg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "HatchEgg");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.AlivenessEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanSnowTurret_C::AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "AlivenessEvent");

	Params::ABodyPawn_CartmanSnowTurret_C_AlivenessEvent_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.BndEvt__BodyPawn_CartmanSnowDecoy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanSnowTurret_C::BndEvt__BodyPawn_CartmanSnowDecoy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "BndEvt__BodyPawn_CartmanSnowDecoy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature");

	Params::ABodyPawn_CartmanSnowTurret_C_BndEvt__BodyPawn_CartmanSnowDecoy_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.ReformOnRevive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::ReformOnRevive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "ReformOnRevive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.DeathFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::DeathFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "DeathFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanSnowTurret_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanSnowTurret.BodyPawn_CartmanSnowTurret_C.ExecuteUbergraph_BodyPawn_CartmanSnowTurret
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_alivenessInstigator                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_oldBodyAliveness                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_bodyAliveness                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawn_CartmanBoss_C*     CallFunc_Get_Cartman_Cartman                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNavWalking_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanSnowTurret_C::ExecuteUbergraph_BodyPawn_CartmanSnowTurret(int32 EntryPoint, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AActor* K2Node_Event_alivenessInstigator, enum class EQtnBodyAliveness K2Node_Event_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_Event_bodyAliveness, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsServer_ReturnValue, class ABodyPawn_CartmanBoss_C* CallFunc_Get_Cartman_Cartman, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, bool CallFunc_ShouldUseNavWalking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanSnowTurret_C", "ExecuteUbergraph_BodyPawn_CartmanSnowTurret");

	Params::ABodyPawn_CartmanSnowTurret_C_ExecuteUbergraph_BodyPawn_CartmanSnowTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.K2Node_Event_alivenessInstigator = K2Node_Event_alivenessInstigator;
	Parms.K2Node_Event_oldBodyAliveness = K2Node_Event_oldBodyAliveness;
	Parms.K2Node_Event_bodyAliveness = K2Node_Event_bodyAliveness;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetBodyController_ReturnValue_1 = CallFunc_GetBodyController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Get_Cartman_Cartman = CallFunc_Get_Cartman_Cartman;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.CallFunc_ShouldUseNavWalking_ReturnValue = CallFunc_ShouldUseNavWalking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


