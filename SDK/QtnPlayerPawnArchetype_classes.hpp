#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xC80 - 0xC20)
// BlueprintGeneratedClass QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C
class AQtnPlayerPawnArchetype_C : public AQtnPlayerPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UReplicatedSaveDataComponent_C*        ReplicatedSaveDataComponent;                       // 0xC28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UModularSynthComponent*                ModularSynth;                                      // 0xC30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction;                                 // 0xC38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraDirection;                                   // 0xC40(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7117[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRecievedCameraDirection;                         // 0xC50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               CameraPosition;                                    // 0xC60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7118[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDLCsUpdated;                                     // 0xC70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AQtnPlayerPawnArchetype_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper);
	void ServerSetCameraDirection(const struct FVector& InCamDir, const struct FVector& InCamPos);
	void ClientCacheCameraDirection();
	void ServerSetPlayerMaxUnlockedArc(int32 MaxUnlockedArc);
	void ClientSetRemainingTradeshowSeconds(float RemainingTime);
	void ClientDLCUpdate();
	void ServerDLCUpdate();
	void ExecuteUbergraph_QtnPlayerPawnArchetype(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& K2Node_CustomEvent_InCamDir, const struct FVector& K2Node_CustomEvent_InCamPos, int32 K2Node_CustomEvent_maxUnlockedArc, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_remainingTime, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue);
	void OnDLCsUpdated__DelegateSignature();
	void OnRecievedCameraDirection__DelegateSignature();
};

}


