#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x271 - 0x260)
// BlueprintGeneratedClass QtnAIJobActorBase.QtnAIJobActorBase_C
class AQtnAIJobActorBase_C : public AQtnAIJobActorBaseNative
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowJobDebugInfo;                                  // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AQtnAIJobActorBase_C* GetDefaultObj();

	void OpenAllJobs_ServerOnly(const TArray<class UQtnAIJobComponent*>& JobComponents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnAIJobComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UQtnAIJobComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CloseAllJobs_ServerOnly(const TArray<class UQtnAIJobComponent*>& JobComponents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnAIJobComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UQtnAIJobComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsJobActorViable(class AQtnPawn*& Pawn, bool& InitialAdoption, class UQtnAIJobComponent* JobComponent, bool* IsViable, class UQtnAIJobComponentBaseNative* K2Node_DynamicCast_AsQtn_AIJob_Component_Base_Native, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidInCurrentArc_Valid_today, bool CallFunc_IsComponentEmploymentOpen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ShouldDisplayJobDebugInfo(bool* ShouldShowDebugInfo, bool CallFunc_IsPlayingInEditor_ReturnValue);
	void UpdateEditorIcon();
	void IsValidInCurrentArc(bool* Valid_today, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void UserConstructionScript();
	void ExecuteUbergraph_QtnAIJobActorBase(int32 EntryPoint);
};

}


