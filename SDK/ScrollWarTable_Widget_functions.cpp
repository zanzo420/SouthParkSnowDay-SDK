#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScrollWarTable_Widget.ScrollWarTable_Widget_C
// (None)

class UClass* UScrollWarTable_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollWarTable_Widget_C");

	return Clss;
}


// ScrollWarTable_Widget_C ScrollWarTable_Widget.Default__ScrollWarTable_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScrollWarTable_Widget_C* UScrollWarTable_Widget_C::GetDefaultObj()
{
	static class UScrollWarTable_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollWarTable_Widget_C*>(UScrollWarTable_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScrollWarTable_Widget.ScrollWarTable_Widget_C.AnimateOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UScrollWarTable_Widget_C::AnimateOut(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollWarTable_Widget_C", "AnimateOut");

	Params::UScrollWarTable_Widget_C_AnimateOut_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScrollWarTable_Widget.ScrollWarTable_Widget_C.AnimateIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollWarTable_Widget_C::AnimateIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollWarTable_Widget_C", "AnimateIn");

	Params::UScrollWarTable_Widget_C_AnimateIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScrollWarTable_Widget.ScrollWarTable_Widget_C.HideOnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UScrollWarTable_Widget_C::HideOnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollWarTable_Widget_C", "HideOnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScrollWarTable_Widget.ScrollWarTable_Widget_C.SetScrollText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Subheading                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ScrollText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollWarTable_Widget_C::SetScrollText(class FText Subheading, class FText ScrollText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollWarTable_Widget_C", "SetScrollText");

	Params::UScrollWarTable_Widget_C_SetScrollText_Params Parms{};

	Parms.Subheading = Subheading;
	Parms.ScrollText = ScrollText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScrollWarTable_Widget.ScrollWarTable_Widget_C.ExecuteUbergraph_ScrollWarTable_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Subheading                                    (None)
// class FText                        K2Node_CustomEvent_ScrollText                                    (None)

void UScrollWarTable_Widget_C::ExecuteUbergraph_ScrollWarTable_Widget(int32 EntryPoint, class FText K2Node_CustomEvent_Subheading, class FText K2Node_CustomEvent_ScrollText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollWarTable_Widget_C", "ExecuteUbergraph_ScrollWarTable_Widget");

	Params::UScrollWarTable_Widget_C_ExecuteUbergraph_ScrollWarTable_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Subheading = K2Node_CustomEvent_Subheading;
	Parms.K2Node_CustomEvent_ScrollText = K2Node_CustomEvent_ScrollText;

	UObject::ProcessEvent(Func, &Parms);

}

}


