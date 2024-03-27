#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BossHealth_Widget.BossHealth_Widget_C
// (None)

class UClass* UBossHealth_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BossHealth_Widget_C");

	return Clss;
}


// BossHealth_Widget_C BossHealth_Widget.Default__BossHealth_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBossHealth_Widget_C* UBossHealth_Widget_C::GetDefaultObj()
{
	static class UBossHealth_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBossHealth_Widget_C*>(UBossHealth_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BossHealth_Widget.BossHealth_Widget_C.SequenceEvent__ENTRYPOINTBossHealth_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::SequenceEvent__ENTRYPOINTBossHealth_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "SequenceEvent__ENTRYPOINTBossHealth_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.ResetAttributeAppearances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBossHealth_Widget_C::ResetAttributeAppearances(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "ResetAttributeAppearances");

	Params::UBossHealth_Widget_C_ResetAttributeAppearances_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.BindToAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnAttribute*>       AttributesLocal                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyToBlame_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAllAttributes_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnAttribute*>       CallFunc_GetAllAttributes_ReturnValue                            (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBossHealth_Widget_C::BindToAttributes(const TArray<class UQtnAttribute*>& AttributesLocal, int32 Temp_int_Array_Index_Variable, class UQtnAttribute* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyToBlame_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAllAttributes_self_CastInput, TArray<class UQtnAttribute*>& CallFunc_GetAllAttributes_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "BindToAttributes");

	Params::UBossHealth_Widget_C_BindToAttributes_Params Parms{};

	Parms.AttributesLocal = AttributesLocal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetBodyToBlame_ReturnValue = CallFunc_GetBodyToBlame_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllAttributes_self_CastInput = CallFunc_GetAllAttributes_self_CastInput;
	Parms.CallFunc_GetAllAttributes_ReturnValue = CallFunc_GetAllAttributes_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.Finished_4F3FB20B4731016B5C854B8DE68E726B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::Finished_4F3FB20B4731016B5C854B8DE68E726B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "Finished_4F3FB20B4731016B5C854B8DE68E726B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.InitBossHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlwaysVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* DamageReceptor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHealth_Widget_C::InitBossHealthBar(bool AlwaysVisible, class UQtnDamageReceptorComponent* DamageReceptor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "InitBossHealthBar");

	Params::UBossHealth_Widget_C_InitBossHealthBar_Params Parms{};

	Parms.AlwaysVisible = AlwaysVisible;
	Parms.DamageReceptor = DamageReceptor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.StartStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::StartStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "StartStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.LoopStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::LoopStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "LoopStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.StopStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::StopStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "StopStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.OnAttributeAddedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnAttribute>   AttributeClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHealth_Widget_C::OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "OnAttributeAddedEvent");

	Params::UBossHealth_Widget_C_OnAttributeAddedEvent_Params Parms{};

	Parms.AttributeClass = AttributeClass;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.AnimSeq_AddAttribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Adding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GenericAttributePipWidget_C*SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHealth_Widget_C::AnimSeq_AddAttribute(bool Adding, class UBP_GenericAttributePipWidget_C* SourceWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "AnimSeq_AddAttribute");

	Params::UBossHealth_Widget_C_AnimSeq_AddAttribute_Params Parms{};

	Parms.Adding = Adding;
	Parms.SourceWidget = SourceWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.EventRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::EventRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "EventRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.OnStartAttributeDamageEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::OnStartAttributeDamageEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "OnStartAttributeDamageEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.OnStopAttributeDamageEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBossHealth_Widget_C::OnStopAttributeDamageEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "OnStopAttributeDamageEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossHealth_Widget.BossHealth_Widget_C.UpdateBossHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SubGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBossHealth_Widget_C::UpdateBossHint(class FText SubGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "UpdateBossHint");

	Params::UBossHealth_Widget_C_UpdateBossHint_Params Parms{};

	Parms.SubGoal = SubGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossHealth_Widget.BossHealth_Widget_C.ExecuteUbergraph_BossHealth_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_alwaysVisible                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnAttribute>   K2Node_CustomEvent_attributeClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               K2Node_CustomEvent_Attribute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_StatusEffectThreshold_Base_C*K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (ConstParm)
// struct FQtnHealthBarInitializationParametersK2Node_MakeStruct_QtnHealthBarInitializationParameters           (None)
// bool                               K2Node_CustomEvent_Adding                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GenericAttributePipWidget_C*K2Node_CustomEvent_SourceWidget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BindBarWidgets_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BindTextWidgets_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BindBossIconWidgets_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BindStandardIconWidgets_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_SubGoal                                       (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHealth_Widget_C::ExecuteUbergraph_BossHealth_Widget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_CustomEvent_alwaysVisible, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_5, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, class UAttribute_StatusEffectThreshold_Base_C* K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters, bool K2Node_CustomEvent_Adding, class UBP_GenericAttributePipWidget_C* K2Node_CustomEvent_SourceWidget, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BindBarWidgets_ReturnValue, bool CallFunc_BindTextWidgets_ReturnValue, bool CallFunc_BindBossIconWidgets_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BindStandardIconWidgets_ReturnValue, class FText K2Node_CustomEvent_SubGoal, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossHealth_Widget_C", "ExecuteUbergraph_BossHealth_Widget");

	Params::UBossHealth_Widget_C_ExecuteUbergraph_BossHealth_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_alwaysVisible = K2Node_CustomEvent_alwaysVisible;
	Parms.K2Node_CustomEvent_damageReceptor = K2Node_CustomEvent_damageReceptor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = CallFunc_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_2 = CallFunc_GetVectorParameterValue_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_3 = CallFunc_GetVectorParameterValue_ReturnValue_3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_4 = CallFunc_GetVectorParameterValue_ReturnValue_4;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_5 = CallFunc_GetVectorParameterValue_ReturnValue_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_attributeClass = K2Node_CustomEvent_attributeClass;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base = K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_QtnHealthBarInitializationParameters = K2Node_MakeStruct_QtnHealthBarInitializationParameters;
	Parms.K2Node_CustomEvent_Adding = K2Node_CustomEvent_Adding;
	Parms.K2Node_CustomEvent_SourceWidget = K2Node_CustomEvent_SourceWidget;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BindBarWidgets_ReturnValue = CallFunc_BindBarWidgets_ReturnValue;
	Parms.CallFunc_BindTextWidgets_ReturnValue = CallFunc_BindTextWidgets_ReturnValue;
	Parms.CallFunc_BindBossIconWidgets_ReturnValue = CallFunc_BindBossIconWidgets_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput_1 = CallFunc_GetAttribute_self_CastInput_1;
	Parms.CallFunc_GetAttribute_ReturnValue_1 = CallFunc_GetAttribute_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BindStandardIconWidgets_ReturnValue = CallFunc_BindStandardIconWidgets_ReturnValue;
	Parms.K2Node_CustomEvent_SubGoal = K2Node_CustomEvent_SubGoal;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


