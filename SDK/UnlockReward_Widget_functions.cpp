#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UnlockReward_Widget.UnlockReward_Widget_C
// (None)

class UClass* UUnlockReward_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockReward_Widget_C");

	return Clss;
}


// UnlockReward_Widget_C UnlockReward_Widget.Default__UnlockReward_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnlockReward_Widget_C* UUnlockReward_Widget_C::GetDefaultObj()
{
	static class UUnlockReward_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockReward_Widget_C*>(UUnlockReward_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UnlockReward_Widget.UnlockReward_Widget_C.SetupIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    RewardIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockReward_Widget_C::SetupIcon(class UTexture* RewardIcon, bool Unlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockReward_Widget_C", "SetupIcon");

	Params::UUnlockReward_Widget_C_SetupIcon_Params Parms{};

	Parms.RewardIcon = RewardIcon;
	Parms.Unlocked = Unlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockReward_Widget.UnlockReward_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUnlockReward_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockReward_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockReward_Widget.UnlockReward_Widget_C.ExecuteUbergraph_UnlockReward_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_RewardIcon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Unlocked                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockReward_Widget_C::ExecuteUbergraph_UnlockReward_Widget(int32 EntryPoint, class UTexture* K2Node_CustomEvent_RewardIcon, bool K2Node_CustomEvent_Unlocked, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockReward_Widget_C", "ExecuteUbergraph_UnlockReward_Widget");

	Params::UUnlockReward_Widget_C_ExecuteUbergraph_UnlockReward_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RewardIcon = K2Node_CustomEvent_RewardIcon;
	Parms.K2Node_CustomEvent_Unlocked = K2Node_CustomEvent_Unlocked;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


