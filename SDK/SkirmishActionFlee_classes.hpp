#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass SkirmishActionFlee.SkirmishActionFlee_C
class USkirmishActionFlee_C : public UQtnSkirmishAction
{
public:
	TArray<TSoftObjectPtr<class ADeepSnow_BP_C>> DeepSnows;                                         // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        ExceptTheseClasses;                                // 0x38(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class USkirmishActionFlee_C* GetDefaultObj();

	void CloseAllBSWindows(class AQtnSkirmish* OwningSkirmish, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess);
	void ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class ADeepSnow_BP_C* LOCAL_CurrentClosest, const class FString& CallFunc_GetDisplayName_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, TArray<class AQtnPawn*>& CallFunc_GetTrackedDeadPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, class AQtnPawn* CallFunc_Array_Get_Item_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TSoftObjectPtr<class ADeepSnow_BP_C> CallFunc_Array_Get_Item_2, TSoftObjectPtr<class ADeepSnow_BP_C> CallFunc_Array_Get_Item_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ADeepSnow_BP_C* K2Node_DynamicCast_AsDeep_Snow_BP, bool K2Node_DynamicCast_bSuccess_3, class ADeepSnow_BP_C* K2Node_DynamicCast_AsDeep_Snow_BP_1, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Array_Index_Variable_3, TSoftObjectPtr<class ADeepSnow_BP_C> CallFunc_Array_Get_Item_4, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ADeepSnow_BP_C* K2Node_DynamicCast_AsDeep_Snow_BP_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
};

}


