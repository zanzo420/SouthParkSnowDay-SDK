#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2A0 - 0x250)
// BlueprintGeneratedClass DarkMatterHankey_BP.DarkMatterHankey_BP_C
class ADarkMatterHankey_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UThinkersThroneFrobbable_C*            ThinkersThroneFrobbable;                           // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Collider;                                          // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHankey_HubActor_BP_C*                 HankeyActor;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerUI*                          LocalPlayerUI;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerController*                  LocalPlayerController;                             // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          LocalPlayerBody;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_CutsceneThisVisit;                               // 0x290(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3005[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASocialHub_CutsceneManager_C*          SocialHubCutsceneManager;                          // 0x298(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADarkMatterHankey_BP_C* GetDefaultObj();

	bool Is_Safe_to_Prompt_Dark_Matter_UI(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool Should_Auto_Prompt_Dark_Matter_UI(int32 CurrentDarkMatter, int32 DarkMatterBeforeLastMission, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FDarkMatterCost_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSocialHubDataBag(class USocialHubDataBag_C** SocialHubDBag, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowPerksUI(class UGlobalNav_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMenu_DarkMatterPerks_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess);
	void ReceiveTick(float DeltaSeconds);
	void EvaluateAutomaticDMPScreen(bool PlayingCutscene);
	void Multicast_EvaluateAutomaticDMPScreen();
	void EvaluateDarkMatterBeckon();
	void QtnReadyForGameplayEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn);
	void BndEvt__DarkMatterButters_BP_ThinkersThroneFrobbable_K2Node_ComponentBoundEvent_1_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void ReceiveBeginPlay();
	void CheckForDemo();
	void ExecuteUbergraph_DarkMatterHankey_BP(int32 EntryPoint, class USocialHubDataBag_C* CallFunc_GetSocialHubDataBag_socialHubDBag, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Is_Safe_to_Prompt_Dark_Matter_UI_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_Should_Auto_Prompt_Dark_Matter_UI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_PlayingCutscene, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnTargetableInterface> CallFunc_CanBeInteractedWith_self_CastInput, class FText CallFunc_CanBeInteractedWith_affordancePrompt, bool CallFunc_CanBeInteractedWith_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsTradeshowDemo_ReturnValue);
};

}


