#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x590 - 0x4D8)
// BlueprintGeneratedClass BP_GoalPickup_ShizaCannonAmmo.BP_GoalPickup_ShizaCannonAmmo_C
class ABP_GoalPickup_ShizaCannonAmmo_C : public ABP_GoalPickup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIFrobJobComponent_TPAmmo_C*          AIFrobJobComponent_TPAmmo;                         // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_TPBundle;                               // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh_Parachute;                            // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         StartWithIcons;                                    // 0x500(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsAirborne;                                        // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NeedsIconUpdate;                                   // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AFF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FallSpeed;                                         // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_LoadReminder_Stan;                              // 0x508(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VO_LoadReminderTimer;                              // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          VO_LoadReminderTimerHandle;                        // 0x538(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_LoadReminder_Butters;                           // 0x540(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AQtnPawn_ShizaHulud_C>  Registered_Shiza_Boss;                             // 0x568(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GoalPickup_ShizaCannonAmmo_C* GetDefaultObj();

	void Local_Refresh_All_Pickup_Icons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_GoalPickup_ShizaCannonAmmo_C* K2Node_DynamicCast_AsBP_Goal_Pickup_Shiza_Cannon_Ammo, bool K2Node_DynamicCast_bSuccess_1);
	void ShizaIconRefresh(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsReadyForGameplay_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD_1, bool K2Node_DynamicCast_bSuccess_1, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut_1);
	void ReplicatedCarryEvents();
	void VO_Check_for_Load_Reminder(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_RandomBool_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FrobToCarry(class UQtnFrobbableComponent* This_frobbable, class AQtnBodyPawn* Frobbing_pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void HandleLanding(bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void TickAirborne(float DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void OnRep_startWithIcons();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StartIcons();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BP_GoalPickup_ShizaCannonAmmo_QtnCarry_K2Node_ComponentBoundEvent_0_QtnCarryStartEvent__DelegateSignature(class UQtnCarryComponent* CarryComponent, class AActor* CarryingActor, struct FQtnCarrySettings& CarrySettings, bool IsServer);
	void BndEvt__BP_GoalPickup_ShizaCannonAmmo_QtnCarry_K2Node_ComponentBoundEvent_1_QtnCarryEndEvent__DelegateSignature(class UQtnCarryComponent* CarryComponent, class AActor* CarryingActor, bool IsServer);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GoalPickup_ShizaCannonAmmo(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UQtnCarryComponent* K2Node_ComponentBoundEvent_carryComponent_1, class AActor* K2Node_ComponentBoundEvent_carryingActor_1, const struct FQtnCarrySettings& K2Node_ComponentBoundEvent_carrySettings, bool K2Node_ComponentBoundEvent_isServer_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, class UQtnCarryComponent* K2Node_ComponentBoundEvent_carryComponent, class AActor* K2Node_ComponentBoundEvent_carryingActor, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsLocallyControlled_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class ABP_GoalPickup_ShizaCannonAmmo_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1);
};

}


