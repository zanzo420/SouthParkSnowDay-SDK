#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// BlueprintGeneratedClass HankyIntroScene_Local.HankyIntroScene_Local_C
class AHankyIntroScene_Local_C : public ACinematicSceneSolo_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                NewKid;                                            // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  HankyCam;                                          // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HankySkel;                                         // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HankyPos;                                          // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  PlayerCam;                                         // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PlayerTarget;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHankey_HubActor_BP_C*                 Hanky;                                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          ScenePlayer;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerController*                  ScenePlayerController;                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AActor>>         ActorsToHide;                                      // 0x2B0(0x10)(Edit, BlueprintVisible)
	TArray<class APlayerTribunalSlot_BP_C*>      Slots;                                             // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            CutsceneEnded;                                     // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              HankyMat;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             HankyIntroMusic;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHankyIntroScene_Local_C* GetDefaultObj();

	void StartHankySceneForPlayer_Server(class AQtnBodyPawn* PlayerBody);
	void StartLocalScene(class AQtnBodyPawn* LocalPlayer);
	void PlayHankyLine(const struct FSyncedAudioStruct& AudioStruct);
	void ToggleHiddenActors(bool Hide);
	void HidePlayers(bool Hide);
	void ServerSideSetup(class AQtnBodyPawn* PlayerBody);
	void EndScene_Server(class AQtnBodyPawn* BodyToEndScene);
	void ExitScene();
	void ExecuteUbergraph_HankyIntroScene_Local(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody_1, class AQtnBodyPawn* K2Node_CustomEvent_LocalPlayer, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FSyncedAudioStruct& K2Node_CustomEvent_AudioStruct, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct_1, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct_2, bool K2Node_CustomEvent_Hide_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AHanky_Actor_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Hide, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_PlayerBody, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyPawn* K2Node_Event_BodyToEndScene, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_3);
	void CutsceneEnded__DelegateSignature(class AQtnBodyPawn* PlayerInScene);
};

}


