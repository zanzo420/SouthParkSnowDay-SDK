#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_Modal_Widget.FTUX_Modal_Widget_C
// (None)

class UClass* UFTUX_Modal_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Modal_Widget_C");

	return Clss;
}


// FTUX_Modal_Widget_C FTUX_Modal_Widget.Default__FTUX_Modal_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Modal_Widget_C* UFTUX_Modal_Widget_C::GetDefaultObj()
{
	static class UFTUX_Modal_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Modal_Widget_C*>(UFTUX_Modal_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.ScaleImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDefault                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Modal_Widget_C::ScaleImage(bool UseDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "ScaleImage");

	Params::UFTUX_Modal_Widget_C_ScaleImage_Params Parms{};

	Parms.UseDefault = UseDefault;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.PlaceImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_Modal_Widget_C::PlaceImage(class UWidget* Content, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "PlaceImage");

	Params::UFTUX_Modal_Widget_C_PlaceImage_Params Parms{};

	Parms.Content = Content;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.OnInputChange_RefreshInputText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingMouseKeyboard                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UFTUX_Modal_Widget_C::OnInputChange_RefreshInputText(bool UsingMouseKeyboard, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "OnInputChange_RefreshInputText");

	Params::UFTUX_Modal_Widget_C_OnInputChange_RefreshInputText_Params Parms{};

	Parms.UsingMouseKeyboard = UsingMouseKeyboard;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.BndEvt__BP_BtnYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFTUX_Modal_Widget_C::BndEvt__BP_BtnYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "BndEvt__BP_BtnYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.RefreshTutorialUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_Modal_Widget_C::RefreshTutorialUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "RefreshTutorialUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Modal_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "PreConstruct");

	Params::UFTUX_Modal_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.ExecuteUbergraph_FTUX_Modal_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_Modal_Widget_C::ExecuteUbergraph_FTUX_Modal_Widget(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "ExecuteUbergraph_FTUX_Modal_Widget");

	Params::UFTUX_Modal_Widget_C_ExecuteUbergraph_FTUX_Modal_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_Modal_Widget.FTUX_Modal_Widget_C.ButtonOK_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_Modal_Widget_C::ButtonOK_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Modal_Widget_C", "ButtonOK_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


