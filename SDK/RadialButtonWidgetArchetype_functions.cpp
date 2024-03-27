#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C
// (None)

class UClass* URadialButtonWidgetArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialButtonWidgetArchetype_C");

	return Clss;
}


// RadialButtonWidgetArchetype_C RadialButtonWidgetArchetype.Default__RadialButtonWidgetArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadialButtonWidgetArchetype_C* URadialButtonWidgetArchetype_C::GetDefaultObj()
{
	static class URadialButtonWidgetArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialButtonWidgetArchetype_C*>(URadialButtonWidgetArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetSelectionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasSelected_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialButtonWidgetArchetype_C::SetSelectionState(bool WasSelected_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "SetSelectionState");

	Params::URadialButtonWidgetArchetype_C_SetSelectionState_Params Parms{};

	Parms.WasSelected_ = WasSelected_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetHoveredState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallHoverEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialButtonWidgetArchetype_C::SetHoveredState(bool IsHovered, bool CallHoverEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "SetHoveredState");

	Params::URadialButtonWidgetArchetype_C_SetHoveredState_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CallHoverEvent = CallHoverEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.BindToRadialCollection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadialButtonCollection_Widget_C*OwningCollection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void URadialButtonWidgetArchetype_C::BindToRadialCollection(class URadialButtonCollection_Widget_C* OwningCollection, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "BindToRadialCollection");

	Params::URadialButtonWidgetArchetype_C_BindToRadialCollection_Params Parms{};

	Parms.OwningCollection = OwningCollection;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetRadialButtonSelectionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallPressedEvent_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialButtonWidgetArchetype_C::SetRadialButtonSelectionState(bool IsSelected_, bool CallPressedEvent_, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "SetRadialButtonSelectionState");

	Params::URadialButtonWidgetArchetype_C_SetRadialButtonSelectionState_Params Parms{};

	Parms.IsSelected_ = IsSelected_;
	Parms.CallPressedEvent_ = CallPressedEvent_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URadialButtonWidgetArchetype_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.InitNavWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialButtonWidgetArchetype_C::InitNavWidget(class UTexture2D* Texture, class FText Text, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "InitNavWidget");

	Params::URadialButtonWidgetArchetype_C_InitNavWidget_Params Parms{};

	Parms.Texture = Texture;
	Parms.Text = Text;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.ExecuteUbergraph_RadialButtonWidgetArchetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_texture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialButtonWidgetArchetype_C::ExecuteUbergraph_RadialButtonWidgetArchetype(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_texture, class FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_index, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "ExecuteUbergraph_RadialButtonWidgetArchetype");

	Params::URadialButtonWidgetArchetype_C_ExecuteUbergraph_RadialButtonWidgetArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_texture = K2Node_CustomEvent_texture;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.OnRadialButtonHoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialButtonWidgetArchetype_C::OnRadialButtonHoverStateChanged__DelegateSignature(bool IsHovered, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "OnRadialButtonHoverStateChanged__DelegateSignature");

	Params::URadialButtonWidgetArchetype_C_OnRadialButtonHoverStateChanged__DelegateSignature_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.OnRadialButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialButtonWidgetArchetype_C::OnRadialButtonPressed__DelegateSignature(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialButtonWidgetArchetype_C", "OnRadialButtonPressed__DelegateSignature");

	Params::URadialButtonWidgetArchetype_C_OnRadialButtonPressed__DelegateSignature_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


