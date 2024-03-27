#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C
// (None)

class UClass* UBP_QtnPlayerNameplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QtnPlayerNameplate_C");

	return Clss;
}


// BP_QtnPlayerNameplate_C BP_QtnPlayerNameplate.Default__BP_QtnPlayerNameplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QtnPlayerNameplate_C* UBP_QtnPlayerNameplate_C::GetDefaultObj()
{
	static class UBP_QtnPlayerNameplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QtnPlayerNameplate_C*>(UBP_QtnPlayerNameplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnInitializeNameplateWidgetEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QtnPlayerNameplate_C::OnInitializeNameplateWidgetEvent(class AQtnPawn* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QtnPlayerNameplate_C", "OnInitializeNameplateWidgetEvent");

	Params::UBP_QtnPlayerNameplate_C_OnInitializeNameplateWidgetEvent_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnUpdateNameplateScale
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              WidgetScale                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QtnPlayerNameplate_C::OnUpdateNameplateScale(float WidgetScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QtnPlayerNameplate_C", "OnUpdateNameplateScale");

	Params::UBP_QtnPlayerNameplate_C_OnUpdateNameplateScale_Params Parms{};

	Parms.WidgetScale = WidgetScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnDisplayNameChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewDisplayName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_QtnPlayerNameplate_C::OnDisplayNameChanged(class FText NewDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QtnPlayerNameplate_C", "OnDisplayNameChanged");

	Params::UBP_QtnPlayerNameplate_C_OnDisplayNameChanged_Params Parms{};

	Parms.NewDisplayName = NewDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.ExecuteUbergraph_BP_QtnPlayerNameplate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_Target                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_WidgetScale                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (ConstParm)
// class AQtnPlayerPawn*              CallFunc_GetControllingPlayerPawn_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetQtnPlayerState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewDisplayName                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_QtnPlayerNameplate_C::ExecuteUbergraph_BP_QtnPlayerNameplate(int32 EntryPoint, class AQtnPawn* K2Node_Event_Target, float K2Node_Event_WidgetScale, class FText CallFunc_GetDisplayName_ReturnValue, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class AQtnPlayerState* CallFunc_GetQtnPlayerState_ReturnValue, class FText K2Node_CustomEvent_NewDisplayName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QtnPlayerNameplate_C", "ExecuteUbergraph_BP_QtnPlayerNameplate");

	Params::UBP_QtnPlayerNameplate_C_ExecuteUbergraph_BP_QtnPlayerNameplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_WidgetScale = K2Node_Event_WidgetScale;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetControllingPlayerPawn_ReturnValue = CallFunc_GetControllingPlayerPawn_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetQtnPlayerState_ReturnValue = CallFunc_GetQtnPlayerState_ReturnValue;
	Parms.K2Node_CustomEvent_NewDisplayName = K2Node_CustomEvent_NewDisplayName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


