#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD9 (0x5B1 - 0x4D8)
// BlueprintGeneratedClass BP_Ambrosia.BP_Ambrosia_C
class ABP_Ambrosia_C : public ABP_GoalPickup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mesh_MI;                                           // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SFX_Hit;                                           // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SFX_Destruction;                                   // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CarryFrobPrompt;                                   // 0x500(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DeliverFrobPrompt;                                 // 0x518(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DropFrobPrompt;                                    // 0x530(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABodyPawnPlayer_C*>             PlayersInZone;                                     // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ShouldTargetStatus;                                // 0x558(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CanBeDelivered;                                    // 0x559(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5B36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWheelbarrow_BP_C*                     Wheelbarrow;                                       // 0x560(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AmbrosiaDeath;                                     // 0x568(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            AmbrosiaDeliver;                                   // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         R_settingCarry;                                    // 0x588(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Init;                                              // 0x589(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B37[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DefendText;                                        // 0x590(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        bannerCountdownTimerMax;                           // 0x5A8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        bannerCountdownTimer;                              // 0x5AC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleShader;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Ambrosia_C* GetDefaultObj();

	void SnapToGroundUponDrop(class AActor* FormerCarrier, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
	void OkToShowBanner(bool* Show_it, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void Server_KickOffIcons(bool Want_On, bool CallFunc_IsServer_ReturnValue);
	void OnRep_inPreGoalPhase();
	void OnRep_canBeDelivered();
	void ReplicatedDeliverEvents();
	void OnRep_shouldTargetStatus();
	void Server_Carry_End_Events(class ABodyPawnPlayer_C* Player, bool CallFunc_Array_RemoveItem_ReturnValue);
	void FrobToCarry(class UQtnFrobbableComponent* This_frobbable, class AQtnBodyPawn* Frobbing_pawn);
	void ReplicatedCarryEvents(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_2, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_2, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD_2, bool K2Node_DynamicCast_bSuccess_2, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut_2);
	void SetUpDropState();
	void HandleItemCarrierDisconnect(class ABodyPawnPlayer_C* Player_who_left, bool* Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DeferredDestroy();
	void Server_Carry_Start_Events(class ABodyPawnPlayer_C* Player);
	void BndEvt__BP_Ambrosia_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void BndEvt__BP_Ambrosia_frobZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_Ambrosia_frobZone_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetCarry(class ABodyPawnPlayer_C* Carrier);
	void Multicast_DefendBanner();
	void Local_ToggleHighlight();
	void ExecuteUbergraph_BP_Ambrosia(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class ABodyPawnPlayer_C* K2Node_Event_player, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsServer_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, int32 CallFunc_Array_AddUnique_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_carrier, bool CallFunc_IsServer_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_5, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, float CallFunc_Abs_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_OkToShowBanner_show_it, bool CallFunc_IsValid_ReturnValue_2);
	void AmbrosiaDeliver__DelegateSignature(class ABP_Ambrosia_C* DeliveredItem);
	void AmbrosiaDeath__DelegateSignature(class ABP_Ambrosia_C* Ambrosia_that_died);
};

}


