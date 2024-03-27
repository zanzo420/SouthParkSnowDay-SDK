#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerNumber_FTUX_Widget.PlayerNumber_FTUX_Widget_C
// (None)

class UClass* UPlayerNumber_FTUX_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerNumber_FTUX_Widget_C");

	return Clss;
}


// PlayerNumber_FTUX_Widget_C PlayerNumber_FTUX_Widget.Default__PlayerNumber_FTUX_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerNumber_FTUX_Widget_C* UPlayerNumber_FTUX_Widget_C::GetDefaultObj()
{
	static class UPlayerNumber_FTUX_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerNumber_FTUX_Widget_C*>(UPlayerNumber_FTUX_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerNumber_FTUX_Widget.PlayerNumber_FTUX_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNumber_FTUX_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNumber_FTUX_Widget_C", "PreConstruct");

	Params::UPlayerNumber_FTUX_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerNumber_FTUX_Widget.PlayerNumber_FTUX_Widget_C.ExecuteUbergraph_PlayerNumber_FTUX_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UPlayerNumber_FTUX_Widget_C::ExecuteUbergraph_PlayerNumber_FTUX_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNumber_FTUX_Widget_C", "ExecuteUbergraph_PlayerNumber_FTUX_Widget");

	Params::UPlayerNumber_FTUX_Widget_C_ExecuteUbergraph_PlayerNumber_FTUX_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


