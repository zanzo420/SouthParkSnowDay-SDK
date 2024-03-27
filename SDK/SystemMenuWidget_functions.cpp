#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SystemMenuWidget.SystemMenuWidget_C
// (None)

class UClass* USystemMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SystemMenuWidget_C");

	return Clss;
}


// SystemMenuWidget_C SystemMenuWidget.Default__SystemMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USystemMenuWidget_C* USystemMenuWidget_C::GetDefaultObj()
{
	static class USystemMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USystemMenuWidget_C*>(USystemMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SystemMenuWidget.SystemMenuWidget_C.ToggleTutorialInhibitors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantInhibited                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_WantInhibited                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::ToggleTutorialInhibitors(bool WantInhibited, bool LOCAL_WantInhibited, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "ToggleTutorialInhibitors");

	Params::USystemMenuWidget_C_ToggleTutorialInhibitors_Params Parms{};

	Parms.WantInhibited = WantInhibited;
	Parms.LOCAL_WantInhibited = LOCAL_WantInhibited;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.GetMessagingHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessagingHUD_C*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUDScreen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMessagingHUD_C* USystemMenuWidget_C::GetMessagingHUD(class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "GetMessagingHUD");

	Params::USystemMenuWidget_C_GetMessagingHUD_Params Parms{};

	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SystemMenuWidget.SystemMenuWidget_C.RefreshPauseStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Paused                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void USystemMenuWidget_C::RefreshPauseStatus(bool Paused, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "RefreshPauseStatus");

	Params::USystemMenuWidget_C_RefreshPauseStatus_Params Parms{};

	Parms.Paused = Paused;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.FTUXEarlyExit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left_early                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::FTUXEarlyExit(bool* Left_early, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "FTUXEarlyExit");

	Params::USystemMenuWidget_C_FTUXEarlyExit_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Left_early != nullptr)
		*Left_early = Parms.Left_early;

}


// Function SystemMenuWidget.SystemMenuWidget_C.QuitToDesktopConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               YesQuit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::QuitToDesktopConfirm(bool YesQuit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "QuitToDesktopConfirm");

	Params::USystemMenuWidget_C_QuitToDesktopConfirm_Params Parms{};

	Parms.YesQuit = YesQuit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CheckNavIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuButtonWidget_C*  SelectedButton                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuButtonWidget_C*  K2Node_DynamicCast_AsOptions_Menu_Button_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::CheckNavIndex(int32 Index, class UOptionsMenuButtonWidget_C** SelectedButton, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOptionsMenuButtonWidget_C* K2Node_DynamicCast_AsOptions_Menu_Button_Widget, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CheckNavIndex");

	Params::USystemMenuWidget_C_CheckNavIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Button_Widget = K2Node_DynamicCast_AsOptions_Menu_Button_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedButton != nullptr)
		*SelectedButton = Parms.SelectedButton;

}


// Function SystemMenuWidget.SystemMenuWidget_C.ButtonNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Up                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Increment                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToCheck                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuButtonWidget_C*  CallFunc_CheckNavIndex_SelectedButton                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::ButtonNavigation(bool Up, int32 Increment, int32 IndexToCheck, int32 CallFunc_GetChildrenCount_ReturnValue, class UOptionsMenuButtonWidget_C* CallFunc_CheckNavIndex_SelectedButton, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "ButtonNavigation");

	Params::USystemMenuWidget_C_ButtonNavigation_Params Parms{};

	Parms.Up = Up;
	Parms.Increment = Increment;
	Parms.IndexToCheck = IndexToCheck;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_CheckNavIndex_SelectedButton = CallFunc_CheckNavIndex_SelectedButton;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.InitButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TEXT_FourFingerDebugMenu                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPlatform            Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnSessionState        CallFunc_QtnGetSessionState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_DoesThisMapSpawnBodiesBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::InitButtons(const class FString& TEXT_FourFingerDebugMenu, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EQtnPlatform Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class EQtnPlatform Temp_byte_Variable_8, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnSessionState CallFunc_QtnGetSessionState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsShippingBuild_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Select_Default_1, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "InitButtons");

	Params::USystemMenuWidget_C_InitButtons_Params Parms{};

	Parms.TEXT_FourFingerDebugMenu = TEXT_FourFingerDebugMenu;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_QtnGetSessionState_ReturnValue = CallFunc_QtnGetSessionState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_DoesThisMapSpawnBodiesBP_outputPin = CallFunc_DoesThisMapSpawnBodiesBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin_1 = CallFunc_IsThisMapAMissionWorldBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.ActiveButtonConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::ActiveButtonConfirmed(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "ActiveButtonConfirmed");

	Params::USystemMenuWidget_C_ActiveButtonConfirmed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.SystemMenuWidgetStartup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::SystemMenuWidgetStartup(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "SystemMenuWidgetStartup");

	Params::USystemMenuWidget_C_SystemMenuWidgetStartup_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnFailure_63490CC74114D467DF2E2C94D45CCA1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnFailure_63490CC74114D467DF2E2C94D45CCA1D(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnFailure_63490CC74114D467DF2E2C94D45CCA1D");

	Params::USystemMenuWidget_C_OnFailure_63490CC74114D467DF2E2C94D45CCA1D_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnSuccess_63490CC74114D467DF2E2C94D45CCA1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnSuccess_63490CC74114D467DF2E2C94D45CCA1D(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnSuccess_63490CC74114D467DF2E2C94D45CCA1D");

	Params::USystemMenuWidget_C_OnSuccess_63490CC74114D467DF2E2C94D45CCA1D_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnFailure_63490CC74114D467DF2E2C947B6D04EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnFailure_63490CC74114D467DF2E2C947B6D04EF(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnFailure_63490CC74114D467DF2E2C947B6D04EF");

	Params::USystemMenuWidget_C_OnFailure_63490CC74114D467DF2E2C947B6D04EF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnSuccess_63490CC74114D467DF2E2C947B6D04EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnSuccess_63490CC74114D467DF2E2C947B6D04EF(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnSuccess_63490CC74114D467DF2E2C947B6D04EF");

	Params::USystemMenuWidget_C_OnSuccess_63490CC74114D467DF2E2C947B6D04EF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnFailure_63490CC74114D467DF2E2C94ACDA58E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnFailure_63490CC74114D467DF2E2C94ACDA58E7(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnFailure_63490CC74114D467DF2E2C94ACDA58E7");

	Params::USystemMenuWidget_C_OnFailure_63490CC74114D467DF2E2C94ACDA58E7_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnSuccess_63490CC74114D467DF2E2C94ACDA58E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnDisbandPartyResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnSuccess_63490CC74114D467DF2E2C94ACDA58E7(enum class EQtnDisbandPartyResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnSuccess_63490CC74114D467DF2E2C94ACDA58E7");

	Params::USystemMenuWidget_C_OnSuccess_63490CC74114D467DF2E2C94ACDA58E7_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnUIScreenActionPressed");

	Params::USystemMenuWidget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CloseThisMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CloseThisMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CloseThisMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CallOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CallOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CallOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CallQuitToDesktop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CallQuitToDesktop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CallQuitToDesktop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CallQuitToMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CallQuitToMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CallQuitToMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnQtnWidgetResumed");

	Params::USystemMenuWidget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.RefreshButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::RefreshButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "RefreshButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.Event_ConfirmQuitSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::Event_ConfirmQuitSession(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "Event_ConfirmQuitSession");

	Params::USystemMenuWidget_C_Event_ConfirmQuitSession_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.SetSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionsMenuButtonWidget_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMenuWidget_C::SetSelection(class UOptionsMenuButtonWidget_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "SetSelection");

	Params::USystemMenuWidget_C_SetSelection_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.DisconnectConfirmEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::DisconnectConfirmEvent(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "DisconnectConfirmEvent");

	Params::USystemMenuWidget_C_DisconnectConfirmEvent_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CallRemapButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CallRemapButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CallRemapButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.CallCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::CallCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "CallCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_Options_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_Options_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_Options_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_Quit_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_Quit_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_Quit_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_Remap_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_Remap_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_Remap_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_GoToHub_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_GoToHub_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_GoToHub_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_Credits_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_Credits_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_Credits_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "PreConstruct");

	Params::USystemMenuWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Btn_MainMenu_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Btn_MainMenu_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Btn_MainMenu_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.BndEvt__SystemMenuWidget_Button_Close_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::BndEvt__SystemMenuWidget_Button_Close_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "BndEvt__SystemMenuWidget_Button_Close_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.LeaveFTUXEarly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::LeaveFTUXEarly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "LeaveFTUXEarly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.ReturnToHubParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::ReturnToHubParty(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "ReturnToHubParty");

	Params::USystemMenuWidget_C_ReturnToHubParty_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.SimPauseEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Paused                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::SimPauseEvent_Event_0(bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "SimPauseEvent_Event_0");

	Params::USystemMenuWidget_C_SimPauseEvent_Event_0_Params Parms{};

	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void USystemMenuWidget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SystemMenuWidget.SystemMenuWidget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "OnInputUsageChange");

	Params::USystemMenuWidget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SystemMenuWidget.SystemMenuWidget_C.ExecuteUbergraph_SystemMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapForHordeMode_outputPin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EQtnDisbandPartyResult  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDisbandParty*            CallFunc_QtnDisbandParty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_2                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_3                    (None)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDisbandParty*            CallFunc_QtnDisbandParty_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDisbandPartyResult  Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDisbandParty*            CallFunc_QtnDisbandParty_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDisbandPartyResult  Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombinedOptionsMenuScreen_C*CallFunc_RegisterScreen_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBuildLabel_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_accepted_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UOptionsMenuButtonWidget_C*  K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_MapAffectsPlayerProgress_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDisbandPartyResult  K2Node_CustomEvent_Result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_accepted_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_5                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControlRemappingScreen_C*   CallFunc_RegisterScreen_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGlobalRunProgress*       CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_6                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreditsScreen_C*            CallFunc_RegisterScreen_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_FTUXEarlyExit_left_early                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UQtnGlobalRunProgress*       CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_1           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPartySessionExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesPartySessionExist_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_7                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_8                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_accepted                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_paused                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGlobalRunProgress*       CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_2           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimPaused_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlobalRunProgress_C*        K2Node_DynamicCast_AsGlobal_Run_Progress                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_4                    (None)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMessagingHUD_C*             CallFunc_GetMessagingHUD_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetMessagingHUD_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_9                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_10                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnPlatform            CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_DoesThisMapSpawnBodiesBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_11                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMenuWidget_C::ExecuteUbergraph_SystemMenuWidget(int32 EntryPoint, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EQtnDisbandPartyResult Temp_byte_Variable, class UQtnDisbandParty* CallFunc_QtnDisbandParty_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_3, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnDisbandParty* CallFunc_QtnDisbandParty_ReturnValue_1, enum class EQtnDisbandPartyResult Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class UQtnDisbandParty* CallFunc_QtnDisbandParty_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue, enum class EQtnDisbandPartyResult Temp_byte_Variable_2, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result_4, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UCombinedOptionsMenuScreen_C* CallFunc_RegisterScreen_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class UQtnScreen* K2Node_Event_previousScreen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName CallFunc_MakeLiteralName_ReturnValue_1, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result_2, const class FString& CallFunc_GetBuildLabel_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_CustomEvent_accepted_2, class FText CallFunc_Conv_StringToText_ReturnValue, class UOptionsMenuButtonWidget_C* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_MapAffectsPlayerProgress_ReturnValue, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result_3, enum class EQtnDisbandPartyResult K2Node_CustomEvent_Result_5, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_4, bool K2Node_CustomEvent_accepted_1, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_5, class UControlRemappingScreen_C* CallFunc_RegisterScreen_ReturnValue_1, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_6, class UCreditsScreen_C* CallFunc_RegisterScreen_ReturnValue_2, bool K2Node_Event_IsDesignTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_FTUXEarlyExit_left_early, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_3, bool CallFunc_DoesPartySessionExist_ReturnValue, bool CallFunc_DoesPartySessionExist_ReturnValue_1, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_8, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue_3, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue_4, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue_5, bool K2Node_CustomEvent_accepted, class FName CallFunc_MakeLiteralName_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_CustomEvent_paused, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_2, bool CallFunc_IsSimPaused_ReturnValue, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_4, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue_1, bool K2Node_Event_isUsingMouseAndKeyboard, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_9, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_10, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_2, bool K2Node_DynamicCast_bSuccess_3, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_4, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_IsShippingBuild_ReturnValue, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_6, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_7, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_11, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SystemMenuWidget_C", "ExecuteUbergraph_SystemMenuWidget");

	Params::USystemMenuWidget_C_ExecuteUbergraph_SystemMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsThisMapForHordeMode_outputPin = CallFunc_IsThisMapForHordeMode_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_QtnDisbandParty_ReturnValue = CallFunc_QtnDisbandParty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_2 = CallFunc_StaticMakeEventMessage_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_3 = CallFunc_StaticMakeEventMessage_ReturnValue_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_QtnDisbandParty_ReturnValue_1 = CallFunc_QtnDisbandParty_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_QtnDisbandParty_ReturnValue_2 = CallFunc_QtnDisbandParty_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.CallFunc_RegisterScreen_ReturnValue = CallFunc_RegisterScreen_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_2 = CallFunc_GetOwningPlayerUI_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.CallFunc_GetBuildLabel_ReturnValue = CallFunc_GetBuildLabel_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_3 = CallFunc_GetOwningPlayerUI_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_QueueModalDialog_ReturnValue = CallFunc_QueueModalDialog_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_accepted_2 = K2Node_CustomEvent_accepted_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_MapAffectsPlayerProgress_ReturnValue = CallFunc_MapAffectsPlayerProgress_ReturnValue;
	Parms.CallFunc_QueueModalDialog_ReturnValue_1 = CallFunc_QueueModalDialog_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_4 = CallFunc_GetOwningPlayerUI_ReturnValue_4;
	Parms.K2Node_CustomEvent_accepted_1 = K2Node_CustomEvent_accepted_1;
	Parms.CallFunc_QueueModalDialog_ReturnValue_2 = CallFunc_QueueModalDialog_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_5 = CallFunc_GetOwningPlayerUI_ReturnValue_5;
	Parms.CallFunc_RegisterScreen_ReturnValue_1 = CallFunc_RegisterScreen_ReturnValue_1;
	Parms.CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue = CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_6 = CallFunc_GetOwningPlayerUI_ReturnValue_6;
	Parms.CallFunc_RegisterScreen_ReturnValue_2 = CallFunc_RegisterScreen_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_FTUXEarlyExit_left_early = CallFunc_FTUXEarlyExit_left_early;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_1 = CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_DoesPartySessionExist_ReturnValue = CallFunc_DoesPartySessionExist_ReturnValue;
	Parms.CallFunc_DoesPartySessionExist_ReturnValue_1 = CallFunc_DoesPartySessionExist_ReturnValue_1;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_7 = CallFunc_GetOwningPlayerUI_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_8 = CallFunc_GetOwningPlayerUI_ReturnValue_8;
	Parms.CallFunc_QueueModalDialog_ReturnValue_3 = CallFunc_QueueModalDialog_ReturnValue_3;
	Parms.CallFunc_QueueModalDialog_ReturnValue_4 = CallFunc_QueueModalDialog_ReturnValue_4;
	Parms.CallFunc_QueueModalDialog_ReturnValue_5 = CallFunc_QueueModalDialog_ReturnValue_5;
	Parms.K2Node_CustomEvent_accepted = K2Node_CustomEvent_accepted;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_paused = K2Node_CustomEvent_paused;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_2 = CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue_2;
	Parms.CallFunc_IsSimPaused_ReturnValue = CallFunc_IsSimPaused_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Run_Progress = K2Node_DynamicCast_AsGlobal_Run_Progress;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_4 = CallFunc_StaticMakeEventMessage_ReturnValue_4;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetMessagingHUD_ReturnValue = CallFunc_GetMessagingHUD_ReturnValue;
	Parms.CallFunc_GetMessagingHUD_ReturnValue_1 = CallFunc_GetMessagingHUD_ReturnValue_1;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_9 = CallFunc_GetOwningPlayerUI_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_10 = CallFunc_GetOwningPlayerUI_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_2 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin_1 = CallFunc_IsThisMapAMissionWorldBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin_2 = CallFunc_IsThisMapAMissionWorldBP_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_DoesThisMapSpawnBodiesBP_outputPin = CallFunc_DoesThisMapSpawnBodiesBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_11 = CallFunc_GetOwningPlayerUI_ReturnValue_11;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


