#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x499 - 0x478)
// BlueprintGeneratedClass QtnGameInstanceArchetype.QtnGameInstanceArchetype_C
class UQtnGameInstanceArchetype_C : public UQtnGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                PlayerSessionID;                                   // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HasSeenIntroCinematic;                             // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DEBUG_SpawnUpgradeStationsCount;                   // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PRIVATE_FailedToJoinHordeModeMap;                  // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGameInstanceArchetype_C* GetDefaultObj();

	void SetFailedToJoinHordeModeMap(bool Value);
	void ConsumeFailedToJoinHordeModeMap(bool* Result, bool LOCAL_FailedToJoinHordeModeMap);
	bool CanPlayHordeMode(class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue);
	void GetCurrentLevelName(class FString* OutLevelName, const class FString& CallFunc_GetCurrentLevelName_ReturnValue);
	void SetCurrentArc(int32 CurrentArc);
	void ExecuteUbergraph_QtnGameInstanceArchetype(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, int32 K2Node_Event_CurrentArc, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


