#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CannonHUD.CannonHUD_C
// (None)

class UClass* UCannonHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CannonHUD_C");

	return Clss;
}


// CannonHUD_C CannonHUD.Default__CannonHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCannonHUD_C* UCannonHUD_C::GetDefaultObj()
{
	static class UCannonHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCannonHUD_C*>(UCannonHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CannonHUD.CannonHUD_C.SetAffordanceRichText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URichTextBlock*              RichTextWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Affordance                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCannonHUD_C::SetAffordanceRichText(class URichTextBlock* RichTextWidget, class FText Affordance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "SetAffordanceRichText");

	Params::UCannonHUD_C_SetAffordanceRichText_Params Parms{};

	Parms.RichTextWidget = RichTextWidget;
	Parms.Affordance = Affordance;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CannonHUD.CannonHUD_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCannonHUD_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CannonHUD.CannonHUD_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCannonHUD_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "OnInputUsageChange");

	Params::UCannonHUD_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CannonHUD.CannonHUD_C.Anim_Fired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCannonHUD_C::Anim_Fired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "Anim_Fired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CannonHUD.CannonHUD_C.FireDispatcherBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAimableCannonPawn_C*        Cannon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WantBound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCannonHUD_C::FireDispatcherBinding(class AAimableCannonPawn_C* Cannon, bool WantBound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "FireDispatcherBinding");

	Params::UCannonHUD_C_FireDispatcherBinding_Params Parms{};

	Parms.Cannon = Cannon;
	Parms.WantBound = WantBound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CannonHUD.CannonHUD_C.ExecuteUbergraph_CannonHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAimableCannonPawn_C*        K2Node_CustomEvent_Cannon                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantBound                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCannonHUD_C::ExecuteUbergraph_CannonHUD(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_isUsingMouseAndKeyboard, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AAimableCannonPawn_C* K2Node_CustomEvent_Cannon, bool K2Node_CustomEvent_WantBound, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CannonHUD_C", "ExecuteUbergraph_CannonHUD");

	Params::UCannonHUD_C_ExecuteUbergraph_CannonHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Cannon = K2Node_CustomEvent_Cannon;
	Parms.K2Node_CustomEvent_WantBound = K2Node_CustomEvent_WantBound;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


