#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FlameThrowerHUD_Widget.FlameThrowerHUD_Widget_C
// (None)

class UClass* UFlameThrowerHUD_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameThrowerHUD_Widget_C");

	return Clss;
}


// FlameThrowerHUD_Widget_C FlameThrowerHUD_Widget.Default__FlameThrowerHUD_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlameThrowerHUD_Widget_C* UFlameThrowerHUD_Widget_C::GetDefaultObj()
{
	static class UFlameThrowerHUD_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlameThrowerHUD_Widget_C*>(UFlameThrowerHUD_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlameThrowerHUD_Widget.FlameThrowerHUD_Widget_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameThrowerHUD_Widget_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameThrowerHUD_Widget_C", "OnQtnWidgetTicked");

	Params::UFlameThrowerHUD_Widget_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameThrowerHUD_Widget.FlameThrowerHUD_Widget_C.InitFlameUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameThrowerVerb_C*         FlameVerb                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameThrowerHUD_Widget_C::InitFlameUI(class UFlameThrowerVerb_C* FlameVerb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameThrowerHUD_Widget_C", "InitFlameUI");

	Params::UFlameThrowerHUD_Widget_C_InitFlameUI_Params Parms{};

	Parms.FlameVerb = FlameVerb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameThrowerHUD_Widget.FlameThrowerHUD_Widget_C.OnQtnWidgetShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameThrowerHUD_Widget_C::OnQtnWidgetShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameThrowerHUD_Widget_C", "OnQtnWidgetShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlameThrowerHUD_Widget.FlameThrowerHUD_Widget_C.ExecuteUbergraph_FlameThrowerHUD_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Fuel_Attribute_Max_Value_MaxValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Fuel_Attribute_Value_CurrentFuel                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlameThrowerVerb_C*         K2Node_CustomEvent_FlameVerb                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Fuel_Attribute_Value_CurrentFuel_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFuelToStart_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameThrowerHUD_Widget_C::ExecuteUbergraph_FlameThrowerHUD_Widget(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Get_Fuel_Attribute_Max_Value_MaxValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Get_Fuel_Attribute_Value_CurrentFuel, class UFlameThrowerVerb_C* K2Node_CustomEvent_FlameVerb, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Get_Fuel_Attribute_Value_CurrentFuel_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_HasFuelToStart_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameThrowerHUD_Widget_C", "ExecuteUbergraph_FlameThrowerHUD_Widget");

	Params::UFlameThrowerHUD_Widget_C_ExecuteUbergraph_FlameThrowerHUD_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_Fuel_Attribute_Max_Value_MaxValue = CallFunc_Get_Fuel_Attribute_Max_Value_MaxValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Get_Fuel_Attribute_Value_CurrentFuel = CallFunc_Get_Fuel_Attribute_Value_CurrentFuel;
	Parms.K2Node_CustomEvent_FlameVerb = K2Node_CustomEvent_FlameVerb;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Fuel_Attribute_Value_CurrentFuel_1 = CallFunc_Get_Fuel_Attribute_Value_CurrentFuel_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_HasFuelToStart_ReturnValue = CallFunc_HasFuelToStart_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


