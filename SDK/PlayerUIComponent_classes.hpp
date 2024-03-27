#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x188 - 0xE0)
// BlueprintGeneratedClass PlayerUIComponent.PlayerUIComponent_C
class UPlayerUIComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerHUD_C*                          LocalHUD;                                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnScreen_Texture                     DeathIconOnScreen;                                 // 0xF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    DeathIconOffScreen;                                // 0x118(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnBase_C*                       CachedBodyPawn;                                    // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnScreen_Texture                     HelpIconOnScreen;                                  // 0x140(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    HelpIconOffScreen;                                 // 0x168(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerUIComponent_C* GetDefaultObj();

	void SetHelpIconVisibility(bool WantVisible, const struct FOnScreenPulse& K2Node_MakeStruct_OnScreenPulse, const struct FIndicatorType& K2Node_MakeStruct_IndicatorType, const struct FEffects& K2Node_MakeStruct_Effects, class AActor* CallFunc_GetOwner_ReturnValue, const struct FIndicatorData& K2Node_MakeStruct_IndicatorData, bool CallFunc_IsValid_ReturnValue, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut);
	void SetDeathIconVisibility(bool WantVisible, const struct FOnScreenPulse& K2Node_MakeStruct_OnScreenPulse, const struct FIndicatorType& K2Node_MakeStruct_IndicatorType, const struct FEffects& K2Node_MakeStruct_Effects, class AActor* CallFunc_GetOwner_ReturnValue, const struct FIndicatorData& K2Node_MakeStruct_IndicatorData, bool CallFunc_IsValid_ReturnValue, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut);
	void InitLocalUI(class AQtnPlayerUI*& PlayerUI, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void BodyAliveChangeEvent_Event_0(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void ReadyForUIEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI);
	void ReceiveBeginPlay();
	void Dispatcher_NeedsHelp_Event_0(bool NeedsHelp);
	void ExecuteUbergraph_PlayerUIComponent(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsReadyForSafeUsage_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_needsHelp);
};

}


