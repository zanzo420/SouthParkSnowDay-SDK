#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ButtersPageNumber_Widget.ButtersPageNumber_Widget_C
// (None)

class UClass* UButtersPageNumber_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtersPageNumber_Widget_C");

	return Clss;
}


// ButtersPageNumber_Widget_C ButtersPageNumber_Widget.Default__ButtersPageNumber_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtersPageNumber_Widget_C* UButtersPageNumber_Widget_C::GetDefaultObj()
{
	static class UButtersPageNumber_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtersPageNumber_Widget_C*>(UButtersPageNumber_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.SequenceEvent__ENTRYPOINTButtersPageNumber_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::SequenceEvent__ENTRYPOINTButtersPageNumber_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "SequenceEvent__ENTRYPOINTButtersPageNumber_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.HoverRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::HoverRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "HoverRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtersPageNumber_Widget_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "AnimSeq_Hover");

	Params::UButtersPageNumber_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtersPageNumber_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "PreConstruct");

	Params::UButtersPageNumber_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "BndEvt__ButtersPageNumber_Widget_Button_43_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UButtersPageNumber_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.RefreshSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantSelected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButtersPageNumber_Widget_C::RefreshSelected(bool WantSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "RefreshSelected");

	Params::UButtersPageNumber_Widget_C_RefreshSelected_Params Parms{};

	Parms.WantSelected = WantSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.ExecuteUbergraph_ButtersPageNumber_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantSelected                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButtersPageNumber_Widget_C::ExecuteUbergraph_ButtersPageNumber_Widget(int32 EntryPoint, bool K2Node_CustomEvent_WantSelected, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsHovered, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "ExecuteUbergraph_ButtersPageNumber_Widget");

	Params::UButtersPageNumber_Widget_C_ExecuteUbergraph_ButtersPageNumber_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_WantSelected = K2Node_CustomEvent_WantSelected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ButtersPageNumber_Widget.ButtersPageNumber_Widget_C.ChangeButtersPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PageIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButtersPageNumber_Widget_C::ChangeButtersPage__DelegateSignature(int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtersPageNumber_Widget_C", "ChangeButtersPage__DelegateSignature");

	Params::UButtersPageNumber_Widget_C_ChangeButtersPage__DelegateSignature_Params Parms{};

	Parms.PageIndex = PageIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


