#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CapsuleBtnChild_Widget.BP_CapsuleBtnChild_Widget_C
// (None)

class UClass* UBP_CapsuleBtnChild_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CapsuleBtnChild_Widget_C");

	return Clss;
}


// BP_CapsuleBtnChild_Widget_C BP_CapsuleBtnChild_Widget.Default__BP_CapsuleBtnChild_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CapsuleBtnChild_Widget_C* UBP_CapsuleBtnChild_Widget_C::GetDefaultObj()
{
	static class UBP_CapsuleBtnChild_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CapsuleBtnChild_Widget_C*>(UBP_CapsuleBtnChild_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CapsuleBtnChild_Widget.BP_CapsuleBtnChild_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtnChild_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtnChild_Widget_C", "PreConstruct");

	Params::UBP_CapsuleBtnChild_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtnChild_Widget.BP_CapsuleBtnChild_Widget_C.ExecuteUbergraph_BP_CapsuleBtnChild_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtnChild_Widget_C::ExecuteUbergraph_BP_CapsuleBtnChild_Widget(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtnChild_Widget_C", "ExecuteUbergraph_BP_CapsuleBtnChild_Widget");

	Params::UBP_CapsuleBtnChild_Widget_C_ExecuteUbergraph_BP_CapsuleBtnChild_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


