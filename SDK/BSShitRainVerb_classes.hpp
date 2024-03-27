#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA58 - 0xA50)
// BlueprintGeneratedClass BSShitRainVerb.BSShitRainVerb_C
class UBSShitRainVerb_C : public UQtn_CheatVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBSShitRainVerb_C* GetDefaultObj();

	void VO_StartAttackVO(bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_IsCooldownZero_yes, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, bool CallFunc_IsBullshitActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_BSShitRainVerb(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, bool CallFunc_IsServer_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class UEBS_ShitStorm_C* CallFunc_AddBullshit_ServerOnly_ReturnValue, class UEBS_ShitStorm_C* K2Node_DynamicCast_AsEBS_Shit_Storm, bool K2Node_DynamicCast_bSuccess);
};

}


