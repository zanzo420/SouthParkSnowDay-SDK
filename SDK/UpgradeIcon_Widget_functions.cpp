#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UpgradeIcon_Widget.UpgradeIcon_Widget_C
// (None)

class UClass* UUpgradeIcon_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeIcon_Widget_C");

	return Clss;
}


// UpgradeIcon_Widget_C UpgradeIcon_Widget.Default__UpgradeIcon_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgradeIcon_Widget_C* UUpgradeIcon_Widget_C::GetDefaultObj()
{
	static class UUpgradeIcon_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgradeIcon_Widget_C*>(UUpgradeIcon_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUpgradeIcon_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUpgradeIcon_Widget_C::BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.ResetHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUpgradeIcon_Widget_C::ResetHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "ResetHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUpgradeIcon_Widget_C::BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "BndEvt__UpgradeIcon_Widget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.ExecuteUbergraph_UpgradeIcon_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UUpgradeIcon_Widget_C::ExecuteUbergraph_UpgradeIcon_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "ExecuteUbergraph_UpgradeIcon_Widget");

	Params::UUpgradeIcon_Widget_C_ExecuteUbergraph_UpgradeIcon_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.ButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUpgradeIcon_Widget_C::ButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "ButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeIcon_Widget.UpgradeIcon_Widget_C.NewButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeIcon_Widget_C::NewButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeIcon_Widget_C", "NewButtonHovered__DelegateSignature");

	Params::UUpgradeIcon_Widget_C_NewButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


