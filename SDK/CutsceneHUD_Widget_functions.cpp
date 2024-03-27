#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CutsceneHUD_Widget.CutsceneHUD_Widget_C
// (None)

class UClass* UCutsceneHUD_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutsceneHUD_Widget_C");

	return Clss;
}


// CutsceneHUD_Widget_C CutsceneHUD_Widget.Default__CutsceneHUD_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCutsceneHUD_Widget_C* UCutsceneHUD_Widget_C::GetDefaultObj()
{
	static class UCutsceneHUD_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutsceneHUD_Widget_C*>(UCutsceneHUD_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.SequenceEvent__ENTRYPOINTCutsceneHUD_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::SequenceEvent__ENTRYPOINTCutsceneHUD_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "SequenceEvent__ENTRYPOINTCutsceneHUD_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.UpdateCharacterCommunicationToAutoClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::UpdateCharacterCommunicationToAutoClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "UpdateCharacterCommunicationToAutoClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.FinishCharacterCommunicationFromVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalPhoneActor_C*PhoneActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::FinishCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "FinishCharacterCommunicationFromVO");

	Params::UCutsceneHUD_Widget_C_FinishCharacterCommunicationFromVO_Params Parms{};

	Parms.PhoneActor = PhoneActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.StartCharacterCommunicationFromVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalPhoneActor_C*PhoneActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AutoClose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::StartCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor, bool AutoClose, class UAnimMontage* AnimMontage, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "StartCharacterCommunicationFromVO");

	Params::UCutsceneHUD_Widget_C_StartCharacterCommunicationFromVO_Params Parms{};

	Parms.PhoneActor = PhoneActor;
	Parms.AutoClose = AutoClose;
	Parms.AnimMontage = AnimMontage;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.ResetSkipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::ResetSkipWidget(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "ResetSkipWidget");

	Params::UCutsceneHUD_Widget_C_ResetSkipWidget_Params Parms{};

	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.UpdateSkipRequest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num_requesting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num_needed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipRequested_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumNeededLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumReady                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::UpdateSkipRequest(int32 Num_requesting, int32 Num_needed, bool* SkipRequested_, int32 NumNeededLocal, int32 NumReady, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "UpdateSkipRequest");

	Params::UCutsceneHUD_Widget_C_UpdateSkipRequest_Params Parms{};

	Parms.Num_requesting = Num_requesting;
	Parms.Num_needed = Num_needed;
	Parms.NumNeededLocal = NumNeededLocal;
	Parms.NumReady = NumReady;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SkipRequested_ != nullptr)
		*SkipRequested_ = Parms.SkipRequested_;

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.UpdateShotInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NewShot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::UpdateShotInfo(class FText Text, bool NewShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "UpdateShotInfo");

	Params::UCutsceneHUD_Widget_C_UpdateShotInfo_Params Parms{};

	Parms.Text = Text;
	Parms.NewShot = NewShot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.AddSkipRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::AddSkipRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "AddSkipRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.AnimSeq_AddSkipWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::AnimSeq_AddSkipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "AnimSeq_AddSkipWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.Local_StartSkipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::Local_StartSkipRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "Local_StartSkipRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.AnimSeq_RemoveSkipWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::AnimSeq_RemoveSkipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "AnimSeq_RemoveSkipWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.Local_CancelSkipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::Local_CancelSkipRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "Local_CancelSkipRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.HideSkipWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::HideSkipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "HideSkipWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.Start SkipRequestWidget Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InitialStartDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::Start_SkipRequestWidget_Timer(float InitialStartDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "Start SkipRequestWidget Timer");

	Params::UCutsceneHUD_Widget_C_Start_SkipRequestWidget_Timer_Params Parms{};

	Parms.InitialStartDelay = InitialStartDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.SkipRequested_Teammate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num_requesting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num_needed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::SkipRequested_Teammate(int32 Num_requesting, int32 Num_needed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "SkipRequested_Teammate");

	Params::UCutsceneHUD_Widget_C_SkipRequested_Teammate_Params Parms{};

	Parms.Num_requesting = Num_requesting;
	Parms.Num_needed = Num_needed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.ResetVisGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::ResetVisGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "ResetVisGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.BannerAnnouncement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowReward                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::BannerAnnouncement(class FText Announcement, bool ShowReward, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "BannerAnnouncement");

	Params::UCutsceneHUD_Widget_C_BannerAnnouncement_Params Parms{};

	Parms.Announcement = Announcement;
	Parms.ShowReward = ShowReward;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnUIScreenActionPressed");

	Params::UCutsceneHUD_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetResumed");

	Params::UCutsceneHUD_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetTicked");

	Params::UCutsceneHUD_Widget_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnUIScreenActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnUIScreenActionReleased");

	Params::UCutsceneHUD_Widget_C_OnUIScreenActionReleased_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.StopSkipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::StopSkipRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "StopSkipRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnUIBodyActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    BodyAction                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCutsceneHUD_Widget_C::OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnUIBodyActionPressed");

	Params::UCutsceneHUD_Widget_C_OnUIBodyActionPressed_Params Parms{};

	Parms.BodyAction = BodyAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.Local_SkipRequestComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::Local_SkipRequestComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "Local_SkipRequestComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "PreConstruct");

	Params::UCutsceneHUD_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.ResetInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::ResetInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "ResetInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.LateJoinScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LateJoining                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::LateJoinScene(bool LateJoining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "LateJoinScene");

	Params::UCutsceneHUD_Widget_C_LateJoinScene_Params Parms{};

	Parms.LateJoining = LateJoining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.ExecuteUbergraph_CutsceneHUD_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Ease_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InitialStartDelay                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_num_requesting                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_num_needed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSkipRequest_SkipRequested_                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStartTime_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateSkipRequest_SkipRequested__1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Announcement                                  (None)
// bool                               K2Node_CustomEvent_showReward                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateSkipRequest_SkipRequested__2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    K2Node_Event_bodyAction                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_lateJoining                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneHUD_Widget_C::ExecuteUbergraph_CutsceneHUD_Widget(int32 EntryPoint, float CallFunc_Ease_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_CustomEvent_InitialStartDelay, int32 K2Node_CustomEvent_num_requesting, int32 K2Node_CustomEvent_num_needed, float CallFunc_GetEndTime_ReturnValue_1, bool CallFunc_UpdateSkipRequest_SkipRequested_, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_UpdateSkipRequest_SkipRequested__1, bool Temp_bool_Variable, class FText K2Node_CustomEvent_Announcement, bool K2Node_CustomEvent_showReward, float K2Node_CustomEvent_Speed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, class UQtnScreen* K2Node_Event_previousScreen, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESlateVisibility K2Node_Select_Default, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_UpdateSkipRequest_SkipRequested__2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UImage*>& K2Node_MakeArray_Array, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const class FString& CallFunc_TimeSecondsToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_lateJoining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "ExecuteUbergraph_CutsceneHUD_Widget");

	Params::UCutsceneHUD_Widget_C_ExecuteUbergraph_CutsceneHUD_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue_1 = CallFunc_Ease_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_InitialStartDelay = K2Node_CustomEvent_InitialStartDelay;
	Parms.K2Node_CustomEvent_num_requesting = K2Node_CustomEvent_num_requesting;
	Parms.K2Node_CustomEvent_num_needed = K2Node_CustomEvent_num_needed;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_UpdateSkipRequest_SkipRequested_ = CallFunc_UpdateSkipRequest_SkipRequested_;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue_1 = CallFunc_GetStartTime_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_UpdateSkipRequest_SkipRequested__1 = CallFunc_UpdateSkipRequest_SkipRequested__1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Announcement = K2Node_CustomEvent_Announcement;
	Parms.K2Node_CustomEvent_showReward = K2Node_CustomEvent_showReward;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_screenAction_1 = K2Node_Event_screenAction_1;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_UpdateSkipRequest_SkipRequested__2 = CallFunc_UpdateSkipRequest_SkipRequested__2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_bodyAction = K2Node_Event_bodyAction;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_TimeSecondsToString_ReturnValue_1 = CallFunc_TimeSecondsToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_lateJoining = K2Node_CustomEvent_lateJoining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneHUD_Widget.CutsceneHUD_Widget_C.CancelCalled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneHUD_Widget_C::CancelCalled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneHUD_Widget_C", "CancelCalled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


