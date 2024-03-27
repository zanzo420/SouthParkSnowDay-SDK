#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3B8 - 0x3A0)
// BlueprintGeneratedClass Stan_Actor_Hub.Stan_Actor_Hub_C
class AStan_Actor_Hub_C : public AStan_Actor_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnFrobbableComponent*                QtnFrobbable;                                      // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         InHideout;                                         // 0x3B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2C21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DayForOnTalkTo;                                    // 0x3B4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AStan_Actor_Hub_C* GetDefaultObj();

	void GetDayForOnTalkTo(int32* Day);
	void OnRep_InHideout();
	void CheckDayStatus();
	void BndEvt__Stan_Actor_Hub_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Stan_Actor_Hub(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, bool CallFunc_Greater_IntInt_ReturnValue, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer);
};

}


