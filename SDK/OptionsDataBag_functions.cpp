#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OptionsDataBag.OptionsDataBag_C
// (None)

class UClass* UOptionsDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsDataBag_C");

	return Clss;
}


// OptionsDataBag_C OptionsDataBag.Default__OptionsDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsDataBag_C* UOptionsDataBag_C::GetDefaultObj()
{
	static class UOptionsDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsDataBag_C*>(UOptionsDataBag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsDataBag.OptionsDataBag_C.SetMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MotionBlurEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::SetMotionBlur(bool MotionBlurEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SetMotionBlur");

	Params::UOptionsDataBag_C_SetMotionBlur_Params Parms{};

	Parms.MotionBlurEnabled = MotionBlurEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.ResetVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsDataBag_C::ResetVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "ResetVideo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsDataBag.OptionsDataBag_C.GetFloatingHealthBarsScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              OutScale                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsDataBag_C::GetFloatingHealthBarsScale(float* OutScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "GetFloatingHealthBarsScale");

	Params::UOptionsDataBag_C_GetFloatingHealthBarsScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutScale != nullptr)
		*OutScale = Parms.OutScale;

}


// Function OptionsDataBag.OptionsDataBag_C.GetFloatingHealthBarsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEnabled_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::GetFloatingHealthBarsEnabled(bool* IsEnabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "GetFloatingHealthBarsEnabled");

	Params::UOptionsDataBag_C_GetFloatingHealthBarsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled_ != nullptr)
		*IsEnabled_ = Parms.IsEnabled_;

}


// Function OptionsDataBag.OptionsDataBag_C.SetFloatingHealthBarsScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BarScale                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsDataBag_C::SetFloatingHealthBarsScale(float BarScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SetFloatingHealthBarsScale");

	Params::UOptionsDataBag_C_SetFloatingHealthBarsScale_Params Parms{};

	Parms.BarScale = BarScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.SetFloatingHealthBarsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HealthBarsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::SetFloatingHealthBarsEnabled(bool HealthBarsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SetFloatingHealthBarsEnabled");

	Params::UOptionsDataBag_C_SetFloatingHealthBarsEnabled_Params Parms{};

	Parms.HealthBarsEnabled = HealthBarsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.SetSubtitlesEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StandardSubtitles                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CombatSubtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::SetSubtitlesEnabled(bool StandardSubtitles, bool CombatSubtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SetSubtitlesEnabled");

	Params::UOptionsDataBag_C_SetSubtitlesEnabled_Params Parms{};

	Parms.StandardSubtitles = StandardSubtitles;
	Parms.CombatSubtitle = CombatSubtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.ResetAccessibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsDataBag_C::ResetAccessibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "ResetAccessibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsDataBag.OptionsDataBag_C.SetMultiplayerGameType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnSessionPrivacy      MultiplayerGameType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::SetMultiplayerGameType(enum class EQtnSessionPrivacy MultiplayerGameType, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SetMultiplayerGameType");

	Params::UOptionsDataBag_C_SetMultiplayerGameType_Params Parms{};

	Parms.MultiplayerGameType = MultiplayerGameType;
	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UOptionsDataBag_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "OnDebugDisplay");

	Params::UOptionsDataBag_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.PostLoadDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnSaveData*                SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                LocalOriginalBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsDataBag_C::PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "PostLoadDataBP");

	Params::UOptionsDataBag_C_PostLoadDataBP_Params Parms{};

	Parms.SaveData = SaveData;
	Parms.Success = Success;
	Parms.LocalOriginalBody = LocalOriginalBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.OnReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsDataBag_C::OnReadyForGameplay(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "OnReadyForGameplay");

	Params::UOptionsDataBag_C_OnReadyForGameplay_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.ExecuteUbergraph_OptionsDataBag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSaveData*                K2Node_Event_saveData                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_localOriginalBody                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ExecuteConsoleCommand_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ExecuteConsoleCommand_ReturnValue_1                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ExecuteConsoleCommand_ReturnValue_2                     (ZeroConstructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_Event_localPlayerController                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_Event_localPlayerUI                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_localOccupiedBodyPawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::ExecuteUbergraph_OptionsDataBag(int32 EntryPoint, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue_1, const class FString& CallFunc_ExecuteConsoleCommand_ReturnValue_2, class AQtnPlayerController* K2Node_Event_localPlayerController, class AQtnPlayerUI* K2Node_Event_localPlayerUI, class AQtnBodyPawn* K2Node_Event_localOccupiedBodyPawn, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "ExecuteUbergraph_OptionsDataBag");

	Params::UOptionsDataBag_C_ExecuteUbergraph_OptionsDataBag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_saveData = K2Node_Event_saveData;
	Parms.K2Node_Event_success = K2Node_Event_success;
	Parms.K2Node_Event_localOriginalBody = K2Node_Event_localOriginalBody;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ExecuteConsoleCommand_ReturnValue = CallFunc_ExecuteConsoleCommand_ReturnValue;
	Parms.CallFunc_ExecuteConsoleCommand_ReturnValue_1 = CallFunc_ExecuteConsoleCommand_ReturnValue_1;
	Parms.CallFunc_ExecuteConsoleCommand_ReturnValue_2 = CallFunc_ExecuteConsoleCommand_ReturnValue_2;
	Parms.K2Node_Event_localPlayerController = K2Node_Event_localPlayerController;
	Parms.K2Node_Event_localPlayerUI = K2Node_Event_localPlayerUI;
	Parms.K2Node_Event_localOccupiedBodyPawn = K2Node_Event_localOccupiedBodyPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.FloatingHealthBarSettingsChangedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHealthBarsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              HealthBarScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsDataBag_C::FloatingHealthBarSettingsChangedEvent__DelegateSignature(bool IsHealthBarsEnabled, float HealthBarScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "FloatingHealthBarSettingsChangedEvent__DelegateSignature");

	Params::UOptionsDataBag_C_FloatingHealthBarSettingsChangedEvent__DelegateSignature_Params Parms{};

	Parms.IsHealthBarsEnabled = IsHealthBarsEnabled;
	Parms.HealthBarScale = HealthBarScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsDataBag.OptionsDataBag_C.SubtitlesEnabledEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsDataBag_C::SubtitlesEnabledEvent__DelegateSignature(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsDataBag_C", "SubtitlesEnabledEvent__DelegateSignature");

	Params::UOptionsDataBag_C_SubtitlesEnabledEvent__DelegateSignature_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}

}


