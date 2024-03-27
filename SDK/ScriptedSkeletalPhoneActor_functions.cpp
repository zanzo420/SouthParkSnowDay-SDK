#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C
// (Actor)

class UClass* AScriptedSkeletalPhoneActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSkeletalPhoneActor_C");

	return Clss;
}


// ScriptedSkeletalPhoneActor_C ScriptedSkeletalPhoneActor.Default__ScriptedSkeletalPhoneActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSkeletalPhoneActor_C* AScriptedSkeletalPhoneActor_C::GetDefaultObj()
{
	static class AScriptedSkeletalPhoneActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSkeletalPhoneActor_C*>(AScriptedSkeletalPhoneActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.GetRelevantHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlayerHUD                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                PlayerHUD                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       CutsceneHUD                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       K2Node_DynamicCast_AsCutscene_HUD_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::GetRelevantHUD(bool* IsPlayerHUD, class UPlayerHUD_C** PlayerHUD, class UCutsceneHUD_Widget_C** CutsceneHUD, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UCutsceneHUD_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "GetRelevantHUD");

	Params::AScriptedSkeletalPhoneActor_C_GetRelevantHUD_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_1 = CallFunc_GetScreen_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCutscene_HUD_Widget = K2Node_DynamicCast_AsCutscene_HUD_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMainWidget_ReturnValue_1 = CallFunc_GetMainWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerHUD != nullptr)
		*IsPlayerHUD = Parms.IsPlayerHUD;

	if (PlayerHUD != nullptr)
		*PlayerHUD = Parms.PlayerHUD;

	if (CutsceneHUD != nullptr)
		*CutsceneHUD = Parms.CutsceneHUD;

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.GetVOAmplitude
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              VoAmplitude                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalPhoneActor_C::GetVOAmplitude(float* VoAmplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "GetVOAmplitude");

	Params::AScriptedSkeletalPhoneActor_C_GetVOAmplitude_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VoAmplitude != nullptr)
		*VoAmplitude = Parms.VoAmplitude;

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.SetWasSpawnedOnDemand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalPhoneActor_C::SetWasSpawnedOnDemand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "SetWasSpawnedOnDemand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalPhoneActor_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "UserConstructionScript");

	Params::AScriptedSkeletalPhoneActor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.ToggleCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::ToggleCapture(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "ToggleCapture");

	Params::AScriptedSkeletalPhoneActor_C_ToggleCapture_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCurveFloat*                 FacialAnimCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeadIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NeedsLeadIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoClosePhone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForCutsceneHUD                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature");

	Params::AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature_Params Parms{};

	Parms.FacialAnimCurve = FacialAnimCurve;
	Parms.AnimMontage = AnimMontage;
	Parms.IsLeadIn = IsLeadIn;
	Parms.NeedsLeadIn = NeedsLeadIn;
	Parms.IsEmpty = IsEmpty;
	Parms.AutoClosePhone = AutoClosePhone;
	Parms.ForCutsceneHUD = ForCutsceneHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature(bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature");

	Params::AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature_Params Parms{};

	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature(bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature");

	Params::AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature_Params Parms{};

	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AScriptedSkeletalPhoneActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              EnvelopeValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalPhoneActor_C::BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature(float EnvelopeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature");

	Params::AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature_Params Parms{};

	Parms.EnvelopeValue = EnvelopeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.ExecuteUbergraph_ScriptedSkeletalPhoneActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveFloat*                 K2Node_ComponentBoundEvent_facialAnimCurve                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_ComponentBoundEvent_animMontage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isLeadIn                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_needsLeadIn                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_isEmpty_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_autoClosePhone                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_forCutsceneHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_isEmpty_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_isEmpty                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EnvelopeValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRelevantHUD_isPlayerHUD                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                CallFunc_GetRelevantHUD_playerHUD                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       CallFunc_GetRelevantHUD_cutsceneHUD                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRelevantHUD_isPlayerHUD_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                CallFunc_GetRelevantHUD_playerHUD_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       CallFunc_GetRelevantHUD_cutsceneHUD_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRelevantHUD_isPlayerHUD_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                CallFunc_GetRelevantHUD_playerHUD_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCutsceneHUD_Widget_C*       CallFunc_GetRelevantHUD_cutsceneHUD_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalPhoneActor_C::ExecuteUbergraph_ScriptedSkeletalPhoneActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty_2, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, bool K2Node_ComponentBoundEvent_isEmpty_1, bool K2Node_ComponentBoundEvent_isEmpty, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, float K2Node_ComponentBoundEvent_EnvelopeValue, bool CallFunc_GetRelevantHUD_isPlayerHUD, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD, bool CallFunc_GetRelevantHUD_isPlayerHUD_1, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD_1, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD_1, bool CallFunc_GetRelevantHUD_isPlayerHUD_2, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD_2, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD_2, bool K2Node_CustomEvent_On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "ExecuteUbergraph_ScriptedSkeletalPhoneActor");

	Params::AScriptedSkeletalPhoneActor_C_ExecuteUbergraph_ScriptedSkeletalPhoneActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_facialAnimCurve = K2Node_ComponentBoundEvent_facialAnimCurve;
	Parms.K2Node_ComponentBoundEvent_animMontage = K2Node_ComponentBoundEvent_animMontage;
	Parms.K2Node_ComponentBoundEvent_isLeadIn = K2Node_ComponentBoundEvent_isLeadIn;
	Parms.K2Node_ComponentBoundEvent_needsLeadIn = K2Node_ComponentBoundEvent_needsLeadIn;
	Parms.K2Node_ComponentBoundEvent_isEmpty_2 = K2Node_ComponentBoundEvent_isEmpty_2;
	Parms.K2Node_ComponentBoundEvent_autoClosePhone = K2Node_ComponentBoundEvent_autoClosePhone;
	Parms.K2Node_ComponentBoundEvent_forCutsceneHUD = K2Node_ComponentBoundEvent_forCutsceneHUD;
	Parms.K2Node_ComponentBoundEvent_isEmpty_1 = K2Node_ComponentBoundEvent_isEmpty_1;
	Parms.K2Node_ComponentBoundEvent_isEmpty = K2Node_ComponentBoundEvent_isEmpty;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_EnvelopeValue = K2Node_ComponentBoundEvent_EnvelopeValue;
	Parms.CallFunc_GetRelevantHUD_isPlayerHUD = CallFunc_GetRelevantHUD_isPlayerHUD;
	Parms.CallFunc_GetRelevantHUD_playerHUD = CallFunc_GetRelevantHUD_playerHUD;
	Parms.CallFunc_GetRelevantHUD_cutsceneHUD = CallFunc_GetRelevantHUD_cutsceneHUD;
	Parms.CallFunc_GetRelevantHUD_isPlayerHUD_1 = CallFunc_GetRelevantHUD_isPlayerHUD_1;
	Parms.CallFunc_GetRelevantHUD_playerHUD_1 = CallFunc_GetRelevantHUD_playerHUD_1;
	Parms.CallFunc_GetRelevantHUD_cutsceneHUD_1 = CallFunc_GetRelevantHUD_cutsceneHUD_1;
	Parms.CallFunc_GetRelevantHUD_isPlayerHUD_2 = CallFunc_GetRelevantHUD_isPlayerHUD_2;
	Parms.CallFunc_GetRelevantHUD_playerHUD_2 = CallFunc_GetRelevantHUD_playerHUD_2;
	Parms.CallFunc_GetRelevantHUD_cutsceneHUD_2 = CallFunc_GetRelevantHUD_cutsceneHUD_2;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.OnVOAmplitudeUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              VoAmplitude                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalPhoneActor_C::OnVOAmplitudeUpdate__DelegateSignature(float VoAmplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalPhoneActor_C", "OnVOAmplitudeUpdate__DelegateSignature");

	Params::AScriptedSkeletalPhoneActor_C_OnVOAmplitudeUpdate__DelegateSignature_Params Parms{};

	Parms.VoAmplitude = VoAmplitude;

	UObject::ProcessEvent(Func, &Parms);

}

}


