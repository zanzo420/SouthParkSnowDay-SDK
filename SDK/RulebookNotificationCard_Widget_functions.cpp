#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RulebookNotificationCard_Widget.RulebookNotificationCard_Widget_C
// (None)

class UClass* URulebookNotificationCard_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RulebookNotificationCard_Widget_C");

	return Clss;
}


// RulebookNotificationCard_Widget_C RulebookNotificationCard_Widget.Default__RulebookNotificationCard_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebookNotificationCard_Widget_C* URulebookNotificationCard_Widget_C::GetDefaultObj()
{
	static class URulebookNotificationCard_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebookNotificationCard_Widget_C*>(URulebookNotificationCard_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RulebookNotificationCard_Widget.RulebookNotificationCard_Widget_C.InitializeCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    CardArt                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CardName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void URulebookNotificationCard_Widget_C::InitializeCard(class UTexture* CardArt, class FText CardName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotificationCard_Widget_C", "InitializeCard");

	Params::URulebookNotificationCard_Widget_C_InitializeCard_Params Parms{};

	Parms.CardArt = CardArt;
	Parms.CardName = CardName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookNotificationCard_Widget.RulebookNotificationCard_Widget_C.ExecuteUbergraph_RulebookNotificationCard_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_CardArt                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_CardName                                      (None)

void URulebookNotificationCard_Widget_C::ExecuteUbergraph_RulebookNotificationCard_Widget(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture* K2Node_CustomEvent_CardArt, class FText K2Node_CustomEvent_CardName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookNotificationCard_Widget_C", "ExecuteUbergraph_RulebookNotificationCard_Widget");

	Params::URulebookNotificationCard_Widget_C_ExecuteUbergraph_RulebookNotificationCard_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_CardArt = K2Node_CustomEvent_CardArt;
	Parms.K2Node_CustomEvent_CardName = K2Node_CustomEvent_CardName;

	UObject::ProcessEvent(Func, &Parms);

}

}


