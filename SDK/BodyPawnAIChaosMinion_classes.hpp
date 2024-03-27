#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x15E8 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIChaosMinion.BodyPawnAIChaosMinion_C
class ABodyPawnAIChaosMinion_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       FriendlyDecal;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBattlefieldTrackingComponent_C*       CachedBattlefieldTracker;                          // 0x15E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIChaosMinion_C* GetDefaultObj();

	void CanAcceptEnemyUpgrades(bool* Accept);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void MulticastUnSummon();
	void LocalCutsceneEvent_Event_0(bool IsCutsceneActive, bool DoWorldCleanup);
	void ExecuteUbergraph_BodyPawnAIChaosMinion(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, class UWorld* CallFunc_GetExpectedWorld_ReturnValue, bool CallFunc_IsEndPlayShuttingDown_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup);
};

}


