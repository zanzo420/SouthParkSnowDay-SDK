#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass BP_AttributePipContainer.BP_AttributePipContainer_C
class UBP_AttributePipContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HBOX_Container;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DebugOnly_DemoPips;                                // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_GenericAttributePipWidget_C*> DebugOnly_PipsArray;                               // 0x278(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class AQtnBodyPawn*                          BoundBodyPawn;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UBP_GenericAttributePipWidget_C*> AttributePipsMap;                                  // 0x290(0x50)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            AnimateAttribute;                                  // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_AttributePipContainer_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BindToBodyPawn(class AQtnBodyPawn* bodyPawn);
	void OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute);
	void OnRemoveRequestAttribute(class UQtnAttributePipWidget* SourceWidget, TSubclassOf<class UQtnAttribute> AttributeClass);
	void OnRequestVisibility(class UQtnAttributePipWidget* SourceWidget);
	void ClearVis(class UQtnAttributePipWidget* SourceWidget);
	void OnAttributeRemovedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute);
	void ExecuteUbergraph_BP_AttributePipContainer(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Variable, class AQtnGameState* K2Node_DynamicCast_AsQtn_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_GenericAttributePipWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass_2, class UQtnAttribute* K2Node_CustomEvent_Attribute_1, class UQtnThresholdAttribute* K2Node_DynamicCast_AsQtn_Threshold_Attribute, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Map_Contains_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_GenericAttributePipWidget_C* CallFunc_Array_Get_Item, bool CallFunc_RemoveChild_ReturnValue, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget_2, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UBP_GenericAttributePipWidget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AQtnGameState* K2Node_DynamicCast_AsQtn_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_AcquireWidgetFromPool_ReturnValue, class UBP_GenericAttributePipWidget_C* K2Node_DynamicCast_AsBP_Generic_Attribute_Pip_Widget, bool K2Node_DynamicCast_bSuccess_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FQtnAttributePipInitializationParameters& K2Node_MakeStruct_QtnAttributePipInitializationParameters);
	void AnimateAttribute__DelegateSignature(bool Adding, class UBP_GenericAttributePipWidget_C* SourceWidget);
};

}


