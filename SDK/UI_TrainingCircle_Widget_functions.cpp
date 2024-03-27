#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C
// (None)

class UClass* UUI_TrainingCircle_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TrainingCircle_Widget_C");

	return Clss;
}


// UI_TrainingCircle_Widget_C UI_TrainingCircle_Widget.Default__UI_TrainingCircle_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TrainingCircle_Widget_C* UUI_TrainingCircle_Widget_C::GetDefaultObj()
{
	static class UUI_TrainingCircle_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TrainingCircle_Widget_C*>(UUI_TrainingCircle_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.SequenceEvent__ENTRYPOINTUI_TrainingCircle_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TrainingCircle_Widget_C::SequenceEvent__ENTRYPOINTUI_TrainingCircle_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "SequenceEvent__ENTRYPOINTUI_TrainingCircle_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TrainingCircle_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "PreConstruct");

	Params::UUI_TrainingCircle_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TrainingCircle_Widget_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.Anim_AddCircle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TrainingCircle_Widget_C::Anim_AddCircle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "Anim_AddCircle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.Anim_RemoveCircle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TrainingCircle_Widget_C::Anim_RemoveCircle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "Anim_RemoveCircle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TrainingCircle_Widget.UI_TrainingCircle_Widget_C.ExecuteUbergraph_UI_TrainingCircle_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TrainingCircle_Widget_C::ExecuteUbergraph_UI_TrainingCircle_Widget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TrainingCircle_Widget_C", "ExecuteUbergraph_UI_TrainingCircle_Widget");

	Params::UUI_TrainingCircle_Widget_C_ExecuteUbergraph_UI_TrainingCircle_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


