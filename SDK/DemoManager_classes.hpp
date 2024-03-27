#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF0 - 0xE0)
// BlueprintGeneratedClass DemoManager.DemoManager_C
class UDemoManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnGameStateArchetype_C*              OwningGameState;                                   // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDemoManager_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayerEnterWorldEvent_Event_0(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void MulticastSetRemainingTradeshowSeconds(float RemainingSeconds);
	void OnAllExpectedPlayersReady_Event_0(int32 NumExpectedPlayers, bool IsServer);
	void MulticastEndDemo();
	void EndDemo_ServerOnly(float DelaySeconds);
	void DemoSkipToStarksHub_ServerOnly();
	void ExecuteUbergraph_DemoManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, class UQtnGameInstance* CallFunc_GetOwningGameInstance_ReturnValue, float CallFunc_GetRemainingDemoSeconds_totalTradeshowSeconds, float CallFunc_GetRemainingDemoSeconds_ReturnValue, float K2Node_CustomEvent_remainingSeconds, bool CallFunc_HasAuthority_ReturnValue_1, class UQtnGameInstance* CallFunc_GetOwningGameInstance_ReturnValue_1, int32 K2Node_CustomEvent_numExpectedPlayers, bool K2Node_CustomEvent_isServer, bool CallFunc_IsTradeshowDemo_ReturnValue, class UQtnGameInstance* CallFunc_GetOwningGameInstance_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, float CallFunc_GetRemainingDemoSeconds_totalTradeshowSeconds_1, float CallFunc_GetRemainingDemoSeconds_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UViewportHUDScreen_C* CallFunc_GetScreen_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UTradeshowDemoScreen_C* CallFunc_GetSubScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UTradeshowDemoWidget_C* K2Node_DynamicCast_AsTradeshow_Demo_Widget, bool K2Node_DynamicCast_bSuccess_2, float K2Node_CustomEvent_delaySeconds, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_3);
};

}


