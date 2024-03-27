#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AIHealth_Widget.AIHealth_Widget_C
// (None)

class UClass* UAIHealth_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHealth_Widget_C");

	return Clss;
}


// AIHealth_Widget_C AIHealth_Widget.Default__AIHealth_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIHealth_Widget_C* UAIHealth_Widget_C::GetDefaultObj()
{
	static class UAIHealth_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHealth_Widget_C*>(UAIHealth_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIHealth_Widget.AIHealth_Widget_C.CalculateHealthBarSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealth_Widget_C::CalculateHealthBarSize(struct FVector2D* Size, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "CalculateHealthBarSize");

	Params::UAIHealth_Widget_C_CalculateHealthBarSize_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function AIHealth_Widget.AIHealth_Widget_C.Resize Health Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_CalculateHealthBarSize_Size                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnHealthBarInitializationParametersK2Node_MakeStruct_QtnHealthBarInitializationParameters           (None)

void UAIHealth_Widget_C::Resize_Health_Bar(const struct FVector2D& CallFunc_CalculateHealthBarSize_Size, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "Resize Health Bar");

	Params::UAIHealth_Widget_C_Resize_Health_Bar_Params Parms{};

	Parms.CallFunc_CalculateHealthBarSize_Size = CallFunc_CalculateHealthBarSize_Size;
	Parms.K2Node_MakeStruct_QtnHealthBarInitializationParameters = K2Node_MakeStruct_QtnHealthBarInitializationParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.SetupHealthBarTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealth_Widget_C::SetupHealthBarTexture(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "SetupHealthBarTexture");

	Params::UAIHealth_Widget_C_SetupHealthBarTexture_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.BindToAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnAttribute*>       AttributesLocal                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnThresholdAttribute*      K2Node_DynamicCast_AsQtn_Threshold_Attribute                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAllAttributes_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnAttribute*>       CallFunc_GetAllAttributes_ReturnValue                            (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIHealth_Widget_C::BindToAttributes(const TArray<class UQtnAttribute*>& AttributesLocal, int32 Temp_int_Array_Index_Variable, class UQtnAttribute* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnThresholdAttribute* K2Node_DynamicCast_AsQtn_Threshold_Attribute, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAllAttributes_self_CastInput, TArray<class UQtnAttribute*>& CallFunc_GetAllAttributes_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "BindToAttributes");

	Params::UAIHealth_Widget_C_BindToAttributes_Params Parms{};

	Parms.AttributesLocal = AttributesLocal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Threshold_Attribute = K2Node_DynamicCast_AsQtn_Threshold_Attribute;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllAttributes_self_CastInput = CallFunc_GetAllAttributes_self_CastInput;
	Parms.CallFunc_GetAllAttributes_ReturnValue = CallFunc_GetAllAttributes_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.Finished_566CA2154BF7AFDCD19D70A12698F9AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::Finished_566CA2154BF7AFDCD19D70A12698F9AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "Finished_566CA2154BF7AFDCD19D70A12698F9AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.Finished_213199134EDDA6F8E2C849B5F6FFBB58
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::Finished_213199134EDDA6F8E2C849B5F6FFBB58()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "Finished_213199134EDDA6F8E2C849B5F6FFBB58");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.StartStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::StartStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "StartStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.LoopStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::LoopStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "LoopStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.StopStatusDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::StopStatusDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "StopStatusDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.OnAttributeAddedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnAttribute>   AttributeClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealth_Widget_C::OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "OnAttributeAddedEvent");

	Params::UAIHealth_Widget_C_OnAttributeAddedEvent_Params Parms{};

	Parms.AttributeClass = AttributeClass;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.OnStartAttributeDamageEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::OnStartAttributeDamageEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "OnStartAttributeDamageEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.OnStopAttributeDamageEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIHealth_Widget_C::OnStopAttributeDamageEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "OnStopAttributeDamageEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealth_Widget.AIHealth_Widget_C.InitHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlwaysVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* DamageReceptor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealth_Widget_C::InitHealthBar(bool AlwaysVisible, class UQtnDamageReceptorComponent* DamageReceptor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "InitHealthBar");

	Params::UAIHealth_Widget_C_InitHealthBar_Params Parms{};

	Parms.AlwaysVisible = AlwaysVisible;
	Parms.DamageReceptor = DamageReceptor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.OnDataBagSettingsChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHealthBarsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              HealthBarScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealth_Widget_C::OnDataBagSettingsChangedEvent(bool IsHealthBarsEnabled, float HealthBarScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "OnDataBagSettingsChangedEvent");

	Params::UAIHealth_Widget_C_OnDataBagSettingsChangedEvent_Params Parms{};

	Parms.IsHealthBarsEnabled = IsHealthBarsEnabled;
	Parms.HealthBarScale = HealthBarScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealth_Widget.AIHealth_Widget_C.ExecuteUbergraph_AIHealth_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetFloatingHealthBarsScale_OutScale                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TSubclassOf<class UQtnAttribute>   K2Node_CustomEvent_attributeClass                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAttribute*               K2Node_CustomEvent_Attribute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_StatusEffectThreshold_Base_C*K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BindTextWidgets_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BindBossIconWidgets_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_alwaysVisible                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHealthBarsEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_HealthBarScale                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOptionsDataBag_C*           CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_CalculateHealthBarSize_Size                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BindBarWidgets_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnHealthBarInitializationParametersK2Node_MakeStruct_QtnHealthBarInitializationParameters           (None)
// struct FQtnHealthBarInitializationParametersK2Node_MakeStruct_QtnHealthBarInitializationParameters_1         (None)

void UAIHealth_Widget_C::ExecuteUbergraph_AIHealth_Widget(int32 EntryPoint, bool CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetFloatingHealthBarsScale_OutScale, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, class UAttribute_StatusEffectThreshold_Base_C* K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_5, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_BindTextWidgets_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BindBossIconWidgets_ReturnValue, bool K2Node_CustomEvent_alwaysVisible, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_CustomEvent_IsHealthBarsEnabled, float K2Node_CustomEvent_HealthBarScale, bool K2Node_SwitchEnum_CmpSuccess_1, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, const struct FVector2D& CallFunc_CalculateHealthBarSize_Size, bool CallFunc_BindBarWidgets_ReturnValue, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealth_Widget_C", "ExecuteUbergraph_AIHealth_Widget");

	Params::UAIHealth_Widget_C_ExecuteUbergraph_AIHealth_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_ = CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetFloatingHealthBarsScale_OutScale = CallFunc_GetFloatingHealthBarsScale_OutScale;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = CallFunc_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_2 = CallFunc_GetVectorParameterValue_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_3 = CallFunc_GetVectorParameterValue_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_attributeClass = K2Node_CustomEvent_attributeClass;
	Parms.K2Node_CustomEvent_Attribute = K2Node_CustomEvent_Attribute;
	Parms.K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base = K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_4 = CallFunc_GetVectorParameterValue_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_5 = CallFunc_GetVectorParameterValue_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_BindTextWidgets_ReturnValue = CallFunc_BindTextWidgets_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BindBossIconWidgets_ReturnValue = CallFunc_BindBossIconWidgets_ReturnValue;
	Parms.K2Node_CustomEvent_alwaysVisible = K2Node_CustomEvent_alwaysVisible;
	Parms.K2Node_CustomEvent_damageReceptor = K2Node_CustomEvent_damageReceptor;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAttribute_self_CastInput_1 = CallFunc_GetAttribute_self_CastInput_1;
	Parms.CallFunc_GetAttribute_ReturnValue_1 = CallFunc_GetAttribute_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_CustomEvent_IsHealthBarsEnabled = K2Node_CustomEvent_IsHealthBarsEnabled;
	Parms.K2Node_CustomEvent_HealthBarScale = K2Node_CustomEvent_HealthBarScale;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_CalculateHealthBarSize_Size = CallFunc_CalculateHealthBarSize_Size;
	Parms.CallFunc_BindBarWidgets_ReturnValue = CallFunc_BindBarWidgets_ReturnValue;
	Parms.K2Node_MakeStruct_QtnHealthBarInitializationParameters = K2Node_MakeStruct_QtnHealthBarInitializationParameters;
	Parms.K2Node_MakeStruct_QtnHealthBarInitializationParameters_1 = K2Node_MakeStruct_QtnHealthBarInitializationParameters_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


