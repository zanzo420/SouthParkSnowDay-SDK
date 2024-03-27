#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x15DC - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIPooplet.BodyPawnAIPooplet_C
class ABodyPawnAIPooplet_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Size;                                              // 0x15D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIPooplet_C* GetDefaultObj();

	void DestoryUselessComponent(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7);
	void CanAcceptEnemyUpgrades(bool* Accept);
	void HandleDeath(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue);
	void UserConstructionScript(float LOCAL_SwitchMovementTickInterval, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess);
	void FootFall(enum class EPhysicalSurface PhysicalSurface, struct FVector& ImpactLocation, struct FVector& ImpactNormal, float FootstepLoudness);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AddManagedCarryComponent(class UQtnCarryComponent* CarryComponent, struct FQtnCarrySettings& CarrySettings);
	void RemoveManagedCarryComponent(class UQtnCarryComponent* CarryComponent);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodyPawnAIPooplet(int32 EntryPoint, enum class EPhysicalSurface K2Node_CustomEvent_physicalSurface, const struct FVector& K2Node_CustomEvent_impactLocation, const struct FVector& K2Node_CustomEvent_impactNormal, float K2Node_CustomEvent_footstepLoudness, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABodyPawnAIPooplet_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class ABodyPawnAIPooplet_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, class UWorld* CallFunc_GetExpectedWorld_ReturnValue, bool CallFunc_IsEndPlayShuttingDown_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, class UQtnCarryComponent* K2Node_Event_carryComponent_1, const struct FQtnCarrySettings& K2Node_Event_carrySettings, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UQtnCarryComponent* K2Node_Event_carryComponent, float CallFunc_ApplyKnockback_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, float K2Node_Event_DeltaSeconds, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


