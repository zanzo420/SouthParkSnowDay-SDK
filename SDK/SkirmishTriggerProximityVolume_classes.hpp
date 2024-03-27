#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x80 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerProximityVolume.SkirmishTriggerProximityVolume_C
class USkirmishTriggerProximityVolume_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class AEncounterProximityVolumeBP_C> ProximityVolume;                                   // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	class UClass*                                IntruderClass;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishTriggerProximityVolume_C* GetDefaultObj();

	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void OnPlayerEntered();
	void ExecuteUbergraph_SkirmishTriggerProximityVolume(int32 EntryPoint, class AQtnSkirmish* K2Node_Event_owningSkirmish, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEncounterProximityVolumeBP_C* K2Node_DynamicCast_AsEncounter_Proximity_Volume_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


