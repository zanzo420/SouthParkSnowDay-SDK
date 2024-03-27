#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x368 - 0x358)
// BlueprintGeneratedClass QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C
class AQtnGameModeSocialHubArchetype_C : public AQtnGameModeSocialHub
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnGameModeSocialHubArchetype_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void DisplayFailedToJoinHordeModeMap();
	void FailedToJoinHordeModeMapDialogFinished(bool Accepted);
	void ExecuteUbergraph_QtnGameModeSocialHubArchetype(int32 EntryPoint, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, class AQtnPlayerUI* CallFunc_GetPlayerUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue, bool K2Node_CustomEvent_accepted);
};

}


