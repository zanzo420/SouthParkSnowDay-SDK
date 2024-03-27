#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_AttributePipContainer.BP_AttributePipContainer_C
// (None)

class UClass* UBP_AttributePipContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttributePipContainer_C");

	return Clss;
}


// BP_AttributePipContainer_C BP_AttributePipContainer.Default__BP_AttributePipContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AttributePipContainer_C* UBP_AttributePipContainer_C::GetDefaultObj()
{
	static class UBP_AttributePipContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AttributePipContainer_C*>(UBP_AttributePipContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AttributePipContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "PreConstruct");

	Params::UBP_AttributePipContainer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.BindToBodyPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::BindToBodyPawn(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "BindToBodyPawn");

	Params::UBP_AttributePipContainer_C_BindToBodyPawn_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.OnAttributeAddedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnAttribute>   AttributeClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "OnAttributeAddedEvent");

	Params::UBP_AttributePipContainer_C_OnAttributeAddedEvent_Params Parms{};

	Parms.AttributeClass = AttributeClass;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.OnRemoveRequestAttribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAttributePipWidget*      SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnAttribute>   AttributeClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::OnRemoveRequestAttribute(class UQtnAttributePipWidget* SourceWidget, TSubclassOf<class UQtnAttribute> AttributeClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "OnRemoveRequestAttribute");

	Params::UBP_AttributePipContainer_C_OnRemoveRequestAttribute_Params Parms{};

	Parms.SourceWidget = SourceWidget;
	Parms.AttributeClass = AttributeClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.OnRequestVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAttributePipWidget*      SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::OnRequestVisibility(class UQtnAttributePipWidget* SourceWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "OnRequestVisibility");

	Params::UBP_AttributePipContainer_C_OnRequestVisibility_Params Parms{};

	Parms.SourceWidget = SourceWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.ClearVis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAttributePipWidget*      SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::ClearVis(class UQtnAttributePipWidget* SourceWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "ClearVis");

	Params::UBP_AttributePipContainer_C_ClearVis_Params Parms{};

	Parms.SourceWidget = SourceWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.OnAttributeRemovedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnAttribute>   AttributeClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::OnAttributeRemovedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "OnAttributeRemovedEvent");

	Params::UBP_AttributePipContainer_C_OnAttributeRemovedEvent_Params Parms{};

	Parms.AttributeClass = AttributeClass;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.ExecuteUbergraph_BP_AttributePipContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               K2Node_DynamicCast_AsQtn_Game_State                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GenericAttributePipWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnAttribute>   K2Node_CustomEvent_attributeClass_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               K2Node_CustomEvent_Attribute_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnThresholdAttribute*      K2Node_DynamicCast_AsQtn_Threshold_Attribute                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GenericAttributePipWidget_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributePipWidget*      K2Node_CustomEvent_SourceWidget_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnAttribute>   K2Node_CustomEvent_attributeClass_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQtnAttributePipWidget*      K2Node_CustomEvent_SourceWidget_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UQtnAttributePipWidget*      K2Node_CustomEvent_SourceWidget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnAttribute>   K2Node_CustomEvent_attributeClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               K2Node_CustomEvent_Attribute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UBP_GenericAttributePipWidget_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               K2Node_DynamicCast_AsQtn_Game_State_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_AcquireWidgetFromPool_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GenericAttributePipWidget_C*K2Node_DynamicCast_AsBP_Generic_Attribute_Pip_Widget             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnAttributePipInitializationParametersK2Node_MakeStruct_QtnAttributePipInitializationParameters        (NoDestructor)

void UBP_AttributePipContainer_C::ExecuteUbergraph_BP_AttributePipContainer(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Variable, class AQtnGameState* K2Node_DynamicCast_AsQtn_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_GenericAttributePipWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass_2, class UQtnAttribute* K2Node_CustomEvent_Attribute_1, class UQtnThresholdAttribute* K2Node_DynamicCast_AsQtn_Threshold_Attribute, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Map_Contains_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_GenericAttributePipWidget_C* CallFunc_Array_Get_Item, bool CallFunc_RemoveChild_ReturnValue, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget_2, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnAttributePipWidget* K2Node_CustomEvent_SourceWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UBP_GenericAttributePipWidget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AQtnGameState* K2Node_DynamicCast_AsQtn_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_AcquireWidgetFromPool_ReturnValue, class UBP_GenericAttributePipWidget_C* K2Node_DynamicCast_AsBP_Generic_Attribute_Pip_Widget, bool K2Node_DynamicCast_bSuccess_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FQtnAttributePipInitializationParameters& K2Node_MakeStruct_QtnAttributePipInitializationParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "ExecuteUbergraph_BP_AttributePipContainer");

	Params::UBP_AttributePipContainer_C_ExecuteUbergraph_BP_AttributePipContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsQtn_Game_State = K2Node_DynamicCast_AsQtn_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_CustomEvent_attributeClass_2 = K2Node_CustomEvent_attributeClass_2;
	Parms.K2Node_CustomEvent_Attribute_1 = K2Node_CustomEvent_Attribute_1;
	Parms.K2Node_DynamicCast_AsQtn_Threshold_Attribute = K2Node_DynamicCast_AsQtn_Threshold_Attribute;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.K2Node_CustomEvent_SourceWidget_2 = K2Node_CustomEvent_SourceWidget_2;
	Parms.K2Node_CustomEvent_attributeClass_1 = K2Node_CustomEvent_attributeClass_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SourceWidget_1 = K2Node_CustomEvent_SourceWidget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_SourceWidget = K2Node_CustomEvent_SourceWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_CustomEvent_attributeClass = K2Node_CustomEvent_attributeClass;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_1 = K2Node_DynamicCast_AsQtn_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_AcquireWidgetFromPool_ReturnValue = CallFunc_AcquireWidgetFromPool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Generic_Attribute_Pip_Widget = K2Node_DynamicCast_AsBP_Generic_Attribute_Pip_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_QtnAttributePipInitializationParameters = K2Node_MakeStruct_QtnAttributePipInitializationParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttributePipContainer.BP_AttributePipContainer_C.AnimateAttribute__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GenericAttributePipWidget_C*SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttributePipContainer_C::AnimateAttribute__DelegateSignature(bool Adding, class UBP_GenericAttributePipWidget_C* SourceWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttributePipContainer_C", "AnimateAttribute__DelegateSignature");

	Params::UBP_AttributePipContainer_C_AnimateAttribute__DelegateSignature_Params Parms{};

	Parms.Adding = Adding;
	Parms.SourceWidget = SourceWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


