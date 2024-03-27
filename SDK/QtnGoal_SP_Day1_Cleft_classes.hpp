#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x531 - 0x480)
// BlueprintGeneratedClass QtnGoal_SP_Day1_Cleft.QtnGoal_SP_Day1_Cleft_C
class UQtnGoal_SP_Day1_Cleft_C : public UQtnGoal_SingleCombatDelayedStart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATargetLocationVolume_C*               VO_NearWaterfallVolume;                            // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetLocationVolume_C*               VO_NearExitVolume;                                 // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_HasExplored;                                    // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_ExplorationUrge;                                // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_GateLockFTUX_Denial;                            // 0x4B0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1552[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_GateLockFTUX_Ready;                             // 0x4D8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1554[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_GateLockFTUX_Opened;                            // 0x500(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1555[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGateLock_BP_C*                        Gatelock;                                          // 0x528(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GateLockFTUX_ActiveThisRun;                        // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_Cleft_C* GetDefaultObj();

	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ServerSetUpGateLockFTUX(bool CallFunc_IsServer_ReturnValue);
	void GetGateLock(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AGateLock_BP_C* K2Node_DynamicCast_AsGate_Lock_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetVOVolumes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void bindVOExplorationLines();
	void PlayerExplored(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void OnGoalSpawned_ServerOnly();
	void PlayerNearExit(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindVOOnExitEvent();
	void UnbindNearWaterfallVOEvent();
	void bindGateLockFTUXVOEvents_ServerOnly();
	void GateLockFTUX_LockOpen(class AGateLock_BP_C* Lock);
	void GateLockDeniedFTUX(class AGateLock_BP_C* Lock);
	void GateLockFTUX_LockUnlocked(class AGateLock_BP_C* Lock);
	void Multicast_LocalSaveGateLockFTUXAsSeen();
	void BindGateLockFTUXFlycamEvents_ServerOnly();
	void GateLockFlyCam_ServerOnly();
	void bindGateLockHUDInstructionEvents_ServerOnly();
	void GateLockOpen_ServerOnly(class AGateLock_BP_C* Lock);
	void ExecuteUbergraph_QtnGoal_SP_Day1_Cleft(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGateLock_BP_C* K2Node_CustomEvent_Lock_3, bool CallFunc_IsServer_ReturnValue_5, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_1, bool K2Node_CustomEvent_onExit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_6, class AGateLock_BP_C* K2Node_CustomEvent_Lock_2, bool CallFunc_IsServer_ReturnValue_7, class AGateLock_BP_C* K2Node_CustomEvent_Lock_1, bool CallFunc_IsServer_ReturnValue_8, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_5, class AGateLock_BP_C* K2Node_CustomEvent_Lock, bool CallFunc_IsServer_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


