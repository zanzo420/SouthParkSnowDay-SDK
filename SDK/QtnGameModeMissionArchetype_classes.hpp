#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x39C - 0x358)
// BlueprintGeneratedClass QtnGameModeMissionArchetype.QtnGameModeMissionArchetype_C
class AQtnGameModeMissionArchetype_C : public AQtnGameModeMission
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SpawnedDecals;                                     // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        DecalSpawnRadius;                                  // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDebugDecals;                                     // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Opt_IsDebugFartCloud;                              // 0x37D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1981[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Opt_FartCloudOverlappedThreshold;                  // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1982[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Opt_SpawnedFartCloud;                              // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        Opt_FartCloudMergeTriggerThreshold;                // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnGameModeMissionArchetype_C* GetDefaultObj();

	class AActor* ChoosePlayerStart(class AController* Player, int32 CurrentArc, class AActor* PlayerStartFromCode, class AQtnPlayerController* LocalPlayerController, bool CallFunc_HasAuthority_ReturnValue, class AQtnPlayerController* K2Node_DynamicCast_AsQtn_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AActor* CallFunc_ChoosePlayerStartForArc_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetCurrentArc_CurrentArc, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_QtnGameModeMissionArchetype(int32 EntryPoint);
};

}


