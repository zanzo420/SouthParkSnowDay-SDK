#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass QtnAIJobCluster_PatrolSniperCombat.QtnAIJobCluster_PatrolSniperCombat_C
class UQtnAIJobCluster_PatrolSniperCombat_C : public UQtnJobCluster_TetherZone_C
{
public:

	static class UClass* StaticClass();
	static class UQtnAIJobCluster_PatrolSniperCombat_C* GetDefaultObj();

	void CanSnipeFromLocation_ServerOnly(struct FVector& SniperLocation, struct FVector& EnemyLocation, class AQtnBodyPawn*& SelfBody, bool* CanSnipe, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_GetFavoriteAttackRange_isRangedCombatant, float CallFunc_GetFavoriteAttackRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsCloseEnough_ReturnValue);
	void CanSnipeFromPatrol_ServerOnly(class AQtnBodyPawn*& SelfBody, class AQtnPawn*& EnemyPawn, bool* CanSnipe, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnAIJob_TetherPatrolSnipe_C* K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe, class UQtnPatrolRouteComponent* CallFunc_GetSniperPatrolRoute_patrolRouteComponent, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetClosestWaypoint_distanceFromWaypoint, class AQtnWaypoint* CallFunc_GetClosestWaypoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_CanSnipeFromLocation_ServerOnly_canSnipe_1);
	bool IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption);
};

}


