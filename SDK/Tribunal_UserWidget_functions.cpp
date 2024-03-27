#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Tribunal_UserWidget.Tribunal_UserWidget_C
// (None)

class UClass* UTribunal_UserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tribunal_UserWidget_C");

	return Clss;
}


// Tribunal_UserWidget_C Tribunal_UserWidget.Default__Tribunal_UserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribunal_UserWidget_C* UTribunal_UserWidget_C::GetDefaultObj()
{
	static class UTribunal_UserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribunal_UserWidget_C*>(UTribunal_UserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.Has Cards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasCards                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::Has_Cards(bool* HasCards, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "Has Cards");

	Params::UTribunal_UserWidget_C_Has_Cards_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasCards != nullptr)
		*HasCards = Parms.HasCards;

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.FocusAnyCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABS_Choice_Card_C*>   ChoiceCards                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTribunal_UserWidget_C::FocusAnyCard(const TArray<class ABS_Choice_Card_C*>& ChoiceCards, int32 CallFunc_Array_Length_ReturnValue, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "FocusAnyCard");

	Params::UTribunal_UserWidget_C_FocusAnyCard_Params Parms{};

	Parms.ChoiceCards = ChoiceCards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.GetFocusedCard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABS_Choice_Card_C*           FocusedCard                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABS_Choice_Card_C*>   ChoiceCards                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::GetFocusedCard(class ABS_Choice_Card_C** FocusedCard, const TArray<class ABS_Choice_Card_C*>& ChoiceCards, int32 Temp_int_Array_Index_Variable, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasUserFocusedDescendants_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "GetFocusedCard");

	Params::UTribunal_UserWidget_C_GetFocusedCard_Params Parms{};

	Parms.ChoiceCards = ChoiceCards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue = CallFunc_HasUserFocusedDescendants_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusedCard != nullptr)
		*FocusedCard = Parms.FocusedCard;

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.UpdateChoicesInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::UpdateChoicesInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "UpdateChoicesInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.UpdateRoundInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::UpdateRoundInfo(int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "UpdateRoundInfo");

	Params::UTribunal_UserWidget_C_UpdateRoundInfo_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.InitializeTribunalVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerTribunalComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTribunal_UserWidget_C::InitializeTribunalVariables(class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UPlayerTribunalComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "InitializeTribunalVariables");

	Params::UTribunal_UserWidget_C_InitializeTribunalVariables_Params Parms{};

	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.RoundSizzle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Round_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTribunal_UserWidget_C::RoundSizzle(class FText Round_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "RoundSizzle");

	Params::UTribunal_UserWidget_C_RoundSizzle_Params Parms{};

	Parms.Round_Text = Round_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.PlayerTurnSizzle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTribunal_UserWidget_C::PlayerTurnSizzle(class FText PlayerText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "PlayerTurnSizzle");

	Params::UTribunal_UserWidget_C_PlayerTurnSizzle_Params Parms{};

	Parms.PlayerText = PlayerText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.HidePlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::HidePlayerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "HidePlayerInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.BullshitPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::BullshitPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "BullshitPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.Event_ExitTribunal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::Event_ExitTribunal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "Event_ExitTribunal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTribunal_UserWidget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "OnQtnWidgetResumed");

	Params::UTribunal_UserWidget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.ChooseBullshitToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::ChooseBullshitToggle(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "ChooseBullshitToggle");

	Params::UTribunal_UserWidget_C_ChooseBullshitToggle_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTribunal_UserWidget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTribunal_UserWidget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "OnUIScreenActionPressed");

	Params::UTribunal_UserWidget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "OnInputUsageChange");

	Params::UTribunal_UserWidget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tribunal_UserWidget.Tribunal_UserWidget_C.ExecuteUbergraph_Tribunal_UserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PlayerText                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Round_Text                                    (None)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Cards_HasCards                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Cards_HasCards_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTribunal_UserWidget_C::ExecuteUbergraph_Tribunal_UserWidget(int32 EntryPoint, class FText K2Node_CustomEvent_PlayerText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_CustomEvent_Round_Text, class UQtnScreen* K2Node_Event_previousScreen, bool K2Node_CustomEvent_On, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_isUsingMouseAndKeyboard, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Has_Cards_HasCards, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Has_Cards_HasCards_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tribunal_UserWidget_C", "ExecuteUbergraph_Tribunal_UserWidget");

	Params::UTribunal_UserWidget_C_ExecuteUbergraph_Tribunal_UserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PlayerText = K2Node_CustomEvent_PlayerText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Round_Text = K2Node_CustomEvent_Round_Text;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFocusedCard_FocusedCard = CallFunc_GetFocusedCard_FocusedCard;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_GetFocusedCard_FocusedCard_1 = CallFunc_GetFocusedCard_FocusedCard_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Has_Cards_HasCards = CallFunc_Has_Cards_HasCards;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Has_Cards_HasCards_1 = CallFunc_Has_Cards_HasCards_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


