#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xA68 - 0xA59)
// BlueprintGeneratedClass BSFireRainVerb.BSFireRainVerb_C
class UBSFireRainVerb_C : public UVerbPlayerCheatBase_C
{
public:
	uint8                                        Pad_35E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBSFireRainVerb_C* GetDefaultObj();

	void StartCheatExecution(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, class UBS_FireRain_C* CallFunc_AddBullshit_ServerOnly_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_IsCooldownZero_yes, bool CallFunc_CanVerbStart_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsBullshitActive_ReturnValue, bool CallFunc_IsBullshitActive_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_BSFireRainVerb(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer);
};

}


