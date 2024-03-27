#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAIJobCluster_PatrolSniperCombat.QtnAIJobCluster_PatrolSniperCombat_C
// (None)

class UClass* UQtnAIJobCluster_PatrolSniperCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAIJobCluster_PatrolSniperCombat_C");

	return Clss;
}


// QtnAIJobCluster_PatrolSniperCombat_C QtnAIJobCluster_PatrolSniperCombat.Default__QtnAIJobCluster_PatrolSniperCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAIJobCluster_PatrolSniperCombat_C* UQtnAIJobCluster_PatrolSniperCombat_C::GetDefaultObj()
{
	static class UQtnAIJobCluster_PatrolSniperCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAIJobCluster_PatrolSniperCombat_C*>(UQtnAIJobCluster_PatrolSniperCombat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnAIJobCluster_PatrolSniperCombat.QtnAIJobCluster_PatrolSniperCombat_C.CanSnipeFromLocation_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     SniperLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EnemyLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                SelfBody                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanSnipe                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFavoriteAttackRange_isRangedCombatant                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFavoriteAttackRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCloseEnough_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnAIJobCluster_PatrolSniperCombat_C::CanSnipeFromLocation_ServerOnly(struct FVector& SniperLocation, struct FVector& EnemyLocation, class AQtnBodyPawn*& SelfBody, bool* CanSnipe, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_GetFavoriteAttackRange_isRangedCombatant, float CallFunc_GetFavoriteAttackRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsCloseEnough_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobCluster_PatrolSniperCombat_C", "CanSnipeFromLocation_ServerOnly");

	Params::UQtnAIJobCluster_PatrolSniperCombat_C_CanSnipeFromLocation_ServerOnly_Params Parms{};

	Parms.SniperLocation = SniperLocation;
	Parms.EnemyLocation = EnemyLocation;
	Parms.SelfBody = SelfBody;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_GetFavoriteAttackRange_isRangedCombatant = CallFunc_GetFavoriteAttackRange_isRangedCombatant;
	Parms.CallFunc_GetFavoriteAttackRange_ReturnValue = CallFunc_GetFavoriteAttackRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsCloseEnough_ReturnValue = CallFunc_IsCloseEnough_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanSnipe != nullptr)
		*CanSnipe = Parms.CanSnipe;

}


// Function QtnAIJobCluster_PatrolSniperCombat.QtnAIJobCluster_PatrolSniperCombat_C.CanSnipeFromPatrol_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                SelfBody                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    EnemyPawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanSnipe                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnAIJob_TetherPatrolSnipe_C*K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPatrolRouteComponent*    CallFunc_GetSniperPatrolRoute_patrolRouteComponent               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetClosestWaypoint_distanceFromWaypoint                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnWaypoint*                CallFunc_GetClosestWaypoint_ReturnValue                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe_1              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnAIJobCluster_PatrolSniperCombat_C::CanSnipeFromPatrol_ServerOnly(class AQtnBodyPawn*& SelfBody, class AQtnPawn*& EnemyPawn, bool* CanSnipe, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnAIJob_TetherPatrolSnipe_C* K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe, class UQtnPatrolRouteComponent* CallFunc_GetSniperPatrolRoute_patrolRouteComponent, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetClosestWaypoint_distanceFromWaypoint, class AQtnWaypoint* CallFunc_GetClosestWaypoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobCluster_PatrolSniperCombat_C", "CanSnipeFromPatrol_ServerOnly");

	Params::UQtnAIJobCluster_PatrolSniperCombat_C_CanSnipeFromPatrol_ServerOnly_Params Parms{};

	Parms.SelfBody = SelfBody;
	Parms.EnemyPawn = EnemyPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe = K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe = CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe;
	Parms.CallFunc_GetSniperPatrolRoute_patrolRouteComponent = CallFunc_GetSniperPatrolRoute_patrolRouteComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClosestWaypoint_distanceFromWaypoint = CallFunc_GetClosestWaypoint_distanceFromWaypoint;
	Parms.CallFunc_GetClosestWaypoint_ReturnValue = CallFunc_GetClosestWaypoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe_1 = CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CanSnipe != nullptr)
		*CanSnipe = Parms.CanSnipe;

}


// Function QtnAIJobCluster_PatrolSniperCombat.QtnAIJobCluster_PatrolSniperCombat_C.IsAIJobClusterViable_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForInitialAdoption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UQtnAIJobCluster_PatrolSniperCombat_C::IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobCluster_PatrolSniperCombat_C", "IsAIJobClusterViable_ServerOnly");

	Params::UQtnAIJobCluster_PatrolSniperCombat_C_IsAIJobClusterViable_ServerOnly_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.ForInitialAdoption = ForInitialAdoption;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


