#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C
// (None)

class UClass* UFTUX_EnemyBS_ModalWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_EnemyBS_ModalWidget_C");

	return Clss;
}


// FTUX_EnemyBS_ModalWidget_C FTUX_EnemyBS_ModalWidget.Default__FTUX_EnemyBS_ModalWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_EnemyBS_ModalWidget_C* UFTUX_EnemyBS_ModalWidget_C::GetDefaultObj()
{
	static class UFTUX_EnemyBS_ModalWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_EnemyBS_ModalWidget_C*>(UFTUX_EnemyBS_ModalWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.SetupImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUX_PissedOff_Image_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_EnemyBS_ModalWidget_C::SetupImage(class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UFTUX_PissedOff_Image_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "SetupImage");

	Params::UFTUX_EnemyBS_ModalWidget_C_SetupImage_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUserIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UFTUX_EnemyBS_ModalWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetUserIndex_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnKeyDown");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetUserIndex_ReturnValue = CallFunc_GetUserIndex_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_EnemyBS_ModalWidget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnUIScreenActionPressed");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnUIBodyActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    BodyAction                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_EnemyBS_ModalWidget_C::OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnUIBodyActionPressed");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnUIBodyActionPressed_Params Parms{};

	Parms.BodyAction = BodyAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFTUX_EnemyBS_ModalWidget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.ModalComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_EnemyBS_ModalWidget_C::ModalComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "ModalComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_EnemyBS_ModalWidget_C::OnInputChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnInputChange");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnInputChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_EnemyBS_ModalWidget_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnQtnWidgetTicked");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnUIScroll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_EnemyBS_ModalWidget_C::OnUIScroll(float ScrollDelta, bool FromStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnUIScroll");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnUIScroll_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;
	Parms.FromStick = FromStick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_EnemyBS_ModalWidget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "OnQtnWidgetResumed");

	Params::UFTUX_EnemyBS_ModalWidget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.GamepadScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_EnemyBS_ModalWidget_C::GamepadScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "GamepadScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.ExecuteUbergraph_FTUX_EnemyBS_ModalWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetCurrentFocusedWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    K2Node_Event_bodyAction                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_scrollDelta                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_fromStick                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRightStickInput_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearlyZero2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUX_EnemyBS_ModalWidget_C::ExecuteUbergraph_FTUX_EnemyBS_ModalWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_GetCurrentFocusedWidget_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, float K2Node_Event_DeltaSeconds, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, class UQtnScreen* K2Node_Event_previousScreen, const struct FVector2D& CallFunc_GetRightStickInput_ReturnValue, bool CallFunc_IsNearlyZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "ExecuteUbergraph_FTUX_EnemyBS_ModalWidget");

	Params::UFTUX_EnemyBS_ModalWidget_C_ExecuteUbergraph_FTUX_EnemyBS_ModalWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCurrentFocusedWidget_ReturnValue = CallFunc_GetCurrentFocusedWidget_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_bodyAction = K2Node_Event_bodyAction;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_scrollDelta = K2Node_Event_scrollDelta;
	Parms.K2Node_Event_fromStick = K2Node_Event_fromStick;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_GetRightStickInput_ReturnValue = CallFunc_GetRightStickInput_ReturnValue;
	Parms.CallFunc_IsNearlyZero2D_ReturnValue = CallFunc_IsNearlyZero2D_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUX_EnemyBS_ModalWidget.FTUX_EnemyBS_ModalWidget_C.ModalOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUX_EnemyBS_ModalWidget_C::ModalOver__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_EnemyBS_ModalWidget_C", "ModalOver__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


