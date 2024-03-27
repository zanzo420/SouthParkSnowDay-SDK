#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PowerIcon_Widget.PowerIcon_Widget_C
// (None)

class UClass* UPowerIcon_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PowerIcon_Widget_C");

	return Clss;
}


// PowerIcon_Widget_C PowerIcon_Widget.Default__PowerIcon_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowerIcon_Widget_C* UPowerIcon_Widget_C::GetDefaultObj()
{
	static class UPowerIcon_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowerIcon_Widget_C*>(UPowerIcon_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PowerIcon_Widget.PowerIcon_Widget_C.UpdateCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Charges                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CooldownRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasEmpty                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasBelowFull                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewCharges                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerIcon_Widget_C::UpdateCooldown(float Charges, float CooldownRatio, bool WasEmpty, bool WasBelowFull, float NewCharges, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "UpdateCooldown");

	Params::UPowerIcon_Widget_C_UpdateCooldown_Params Parms{};

	Parms.Charges = Charges;
	Parms.CooldownRatio = CooldownRatio;
	Parms.WasEmpty = WasEmpty;
	Parms.WasBelowFull = WasBelowFull;
	Parms.NewCharges = NewCharges;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.UpdateIconReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PowerNotReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerIcon_Widget_C::UpdateIconReady(bool PowerNotReady, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "UpdateIconReady");

	Params::UPowerIcon_Widget_C_UpdateIconReady_Params Parms{};

	Parms.PowerNotReady = PowerNotReady;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.PowerOffAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerIcon_Widget_C::PowerOffAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "PowerOffAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.PowerOnAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerIcon_Widget_C::PowerOnAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "PowerOnAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.UpdateWeaponIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    WeaponItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerIcon_Widget_C::UpdateWeaponIcon(class AQtnItem* WeaponItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "UpdateWeaponIcon");

	Params::UPowerIcon_Widget_C_UpdateWeaponIcon_Params Parms{};

	Parms.WeaponItem = WeaponItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.UpdatePowerIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb_Archetype_C*        PassedVerb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerIcon_Widget_C::UpdatePowerIcon(class UQtnVerb_Archetype_C* PassedVerb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "UpdatePowerIcon");

	Params::UPowerIcon_Widget_C_UpdatePowerIcon_Params Parms{};

	Parms.PassedVerb = PassedVerb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.ExecuteUbergraph_PowerIcon_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    K2Node_CustomEvent_WeaponItem                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_CustomEvent_PassedVerb                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCooldownRatio_ratio                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetCooldownWheelTexture_cooldownWheelTexture            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerIcon_Widget_C::ExecuteUbergraph_PowerIcon_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AQtnItem* K2Node_CustomEvent_WeaponItem, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UQtnVerb_Archetype_C* K2Node_CustomEvent_PassedVerb, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_GetCooldownRatio_ratio, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetCooldownWheelTexture_cooldownWheelTexture, bool CallFunc_IsValid_ReturnValue_2, class UTexture2D* CallFunc_GetIconForUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "ExecuteUbergraph_PowerIcon_Widget");

	Params::UPowerIcon_Widget_C_ExecuteUbergraph_PowerIcon_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_WeaponItem = K2Node_CustomEvent_WeaponItem;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_PassedVerb = K2Node_CustomEvent_PassedVerb;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCooldownRatio_ratio = CallFunc_GetCooldownRatio_ratio;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCooldownWheelTexture_cooldownWheelTexture = CallFunc_GetCooldownWheelTexture_cooldownWheelTexture;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.OnCooldownRatioFullyDepleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerIcon_Widget_C::OnCooldownRatioFullyDepleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "OnCooldownRatioFullyDepleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PowerIcon_Widget.PowerIcon_Widget_C.OnCooldownRatioReachedFull__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPowerIcon_Widget_C::OnCooldownRatioReachedFull__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PowerIcon_Widget_C", "OnCooldownRatioReachedFull__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


