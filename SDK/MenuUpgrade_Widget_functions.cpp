#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuUpgrade_Widget.MenuUpgrade_Widget_C
// (None)

class UClass* UMenuUpgrade_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuUpgrade_Widget_C");

	return Clss;
}


// MenuUpgrade_Widget_C MenuUpgrade_Widget.Default__MenuUpgrade_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuUpgrade_Widget_C* UMenuUpgrade_Widget_C::GetDefaultObj()
{
	static class UMenuUpgrade_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuUpgrade_Widget_C*>(UMenuUpgrade_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RequestCurrencyVisibilities");

	Params::UMenuUpgrade_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.SearchForEnemyUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      EnemyUpgradeToFind                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UpgradeFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LOCAL_UpgradeIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_UpgradeClass                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::SearchForEnemyUpgrade(class UClass*& EnemyUpgradeToFind, bool* UpgradeFound, int32 LOCAL_UpgradeIndex, class UClass* LOCAL_UpgradeClass, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "SearchForEnemyUpgrade");

	Params::UMenuUpgrade_Widget_C_SearchForEnemyUpgrade_Params Parms{};

	Parms.EnemyUpgradeToFind = EnemyUpgradeToFind;
	Parms.LOCAL_UpgradeIndex = LOCAL_UpgradeIndex;
	Parms.LOCAL_UpgradeClass = LOCAL_UpgradeClass;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeFound != nullptr)
		*UpgradeFound = Parms.UpgradeFound;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.GetMenuUpgradeSpeaker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AScriptedSkeletalActor_Trial_C*Speaker                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::GetMenuUpgradeSpeaker(class AScriptedSkeletalActor_Trial_C** Speaker, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "GetMenuUpgradeSpeaker");

	Params::UMenuUpgrade_Widget_C_GetMenuUpgradeSpeaker_Params Parms{};

	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Speaker != nullptr)
		*Speaker = Parms.Speaker;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.AdjustTutorialPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClosingMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::AdjustTutorialPosition(bool ClosingMenu, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "AdjustTutorialPosition");

	Params::UMenuUpgrade_Widget_C_AdjustTutorialPosition_Params Parms{};

	Parms.ClosingMenu = ClosingMenu;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen = CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Has Cards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasCards                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Has_Cards(bool* HasCards, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, bool CallFunc_IsValid_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Has Cards");

	Params::UMenuUpgrade_Widget_C_Has_Cards_Params Parms{};

	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasCards != nullptr)
		*HasCards = Parms.HasCards;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Focus Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToFocus                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABS_Choice_Card_C*>   ChoiceCards                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::Focus_Card(int32 Index, int32 IndexToFocus, const TArray<class ABS_Choice_Card_C*>& ChoiceCards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Focus Card");

	Params::UMenuUpgrade_Widget_C_Focus_Card_Params Parms{};

	Parms.Index = Index;
	Parms.IndexToFocus = IndexToFocus;
	Parms.ChoiceCards = ChoiceCards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.GetFocusedCard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABS_Choice_Card_C*           FocusedCard                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABS_Choice_Card_C*>   ChoiceCards                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABS_Choice_Card_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::GetFocusedCard(class ABS_Choice_Card_C** FocusedCard, const TArray<class ABS_Choice_Card_C*>& ChoiceCards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "GetFocusedCard");

	Params::UMenuUpgrade_Widget_C_GetFocusedCard_Params Parms{};

	Parms.ChoiceCards = ChoiceCards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue = CallFunc_HasUserFocusedDescendants_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusedCard != nullptr)
		*FocusedCard = Parms.FocusedCard;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.InAnyFTUX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_FTUX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::InAnyFTUX(bool* In_FTUX, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "InAnyFTUX");

	Params::UMenuUpgrade_Widget_C_InAnyFTUX_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (In_FTUX != nullptr)
		*In_FTUX = Parms.In_FTUX;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Rarity FTUX Level Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUX_LevelRarity_Screen_C*  CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUX_Upgrade_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::Rarity_FTUX_Level_Popup(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UFTUX_LevelRarity_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_Upgrade_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Rarity FTUX Level Popup");

	Params::UMenuUpgrade_Widget_C_Rarity_FTUX_Level_Popup_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Rarity FTUX Delay Selection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Delay                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Rarity_FTUX_Delay_Selection(bool* Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Rarity FTUX Delay Selection");

	Params::UMenuUpgrade_Widget_C_Rarity_FTUX_Delay_Selection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Delay != nullptr)
		*Delay = Parms.Delay;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Rarity FTUX Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Rarity_FTUX_Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Rarity FTUX Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Check For Play Joker FTUX  No Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Check_For_Play_Joker_FTUX__No_Start(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Check For Play Joker FTUX  No Start");

	Params::UMenuUpgrade_Widget_C_Check_For_Play_Joker_FTUX__No_Start_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Healing Totem FTUX Selection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Healing_Totem_FTUX_Selection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Healing Totem FTUX Selection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.AnimateInScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollAnnounce_Widget_C*    Scroll_Announce_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::AnimateInScroll(class UScrollAnnounce_Widget_C* Scroll_Announce_Widget, bool CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape, bool CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem, bool CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "AnimateInScroll");

	Params::UMenuUpgrade_Widget_C_AnimateInScroll_Params Parms{};

	Parms.Scroll_Announce_Widget = Scroll_Announce_Widget;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape = CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem = CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem;
	Parms.CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX = CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Check for Healing Totem FTUX
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Healing_Totem_FTUX                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses                    (ReferenceParm)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_FTUX_HealingTotem_C*K2Node_DynamicCast_AsQtn_Goal_FTUX_Healing_Totem                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Check_for_Healing_Totem_FTUX(bool* In_Healing_Totem_FTUX, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, class UClass* Temp_class_Variable, class UQtnGoal* CallFunc_Array_Get_Item, class UQtnGoal_FTUX_HealingTotem_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Healing_Totem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Check for Healing Totem FTUX");

	Params::UMenuUpgrade_Widget_C_Check_for_Healing_Totem_FTUX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Current_Goals_activeGoals = CallFunc_Get_Current_Goals_activeGoals;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses = CallFunc_Get_Current_Goals_activeGoalClassses;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Healing_Totem = K2Node_DynamicCast_AsQtn_Goal_FTUX_Healing_Totem;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (In_Healing_Totem_FTUX != nullptr)
		*In_Healing_Totem_FTUX = Parms.In_Healing_Totem_FTUX;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Healing Totem FTUX Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Healing_Totem_FTUX_Exit(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Healing Totem FTUX Exit");

	Params::UMenuUpgrade_Widget_C_Healing_Totem_FTUX_Exit_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.FTUX_CheckForPowerGranter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Fart_Escape                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               In_Healing_Totem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Not_in_Power_Granting_FTUX                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_for_Healing_Totem_FTUX_in_Healing_Totem_FTUX      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::FTUX_CheckForPowerGranter(bool* In_Fart_Escape, bool* In_Healing_Totem, bool* Not_in_Power_Granting_FTUX, bool CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX, bool CallFunc_Check_for_Healing_Totem_FTUX_in_Healing_Totem_FTUX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "FTUX_CheckForPowerGranter");

	Params::UMenuUpgrade_Widget_C_FTUX_CheckForPowerGranter_Params Parms{};

	Parms.CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX = CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX;
	Parms.CallFunc_Check_for_Healing_Totem_FTUX_in_Healing_Totem_FTUX = CallFunc_Check_for_Healing_Totem_FTUX_in_Healing_Totem_FTUX;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (In_Fart_Escape != nullptr)
		*In_Fart_Escape = Parms.In_Fart_Escape;

	if (In_Healing_Totem != nullptr)
		*In_Healing_Totem = Parms.In_Healing_Totem;

	if (Not_in_Power_Granting_FTUX != nullptr)
		*Not_in_Power_Granting_FTUX = Parms.Not_in_Power_Granting_FTUX;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.FTUXExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::FTUXExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "FTUXExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.FTUX_IsPowerGranting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Grants_a_Power                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::FTUX_IsPowerGranting(bool* Grants_a_Power, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "FTUX_IsPowerGranting");

	Params::UMenuUpgrade_Widget_C_FTUX_IsPowerGranting_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Grants_a_Power != nullptr)
		*Grants_a_Power = Parms.Grants_a_Power;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.FartEscapeFTUX_Selection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::FartEscapeFTUX_Selection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "FartEscapeFTUX_Selection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.On Widget Start FTUXCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::On_Widget_Start_FTUXCheck(bool CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape, bool CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem, bool CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX, bool CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX, bool CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "On Widget Start FTUXCheck");

	Params::UMenuUpgrade_Widget_C_On_Widget_Start_FTUXCheck_Params Parms{};

	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape = CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem = CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem;
	Parms.CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX = CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX;
	Parms.CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX = CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX;
	Parms.CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX = CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Fart Escape FTUX Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Fart_Escape_FTUX_Exit(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Fart Escape FTUX Exit");

	Params::UMenuUpgrade_Widget_C_Fart_Escape_FTUX_Exit_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Check for Fart Escape FTUX
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Fart_Escape_FTUX                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses                    (ReferenceParm)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_FTUX_FartEscapeTutorial_C*K2Node_DynamicCast_AsQtn_Goal_FTUX_Fart_Escape_Tutorial          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Check_for_Fart_Escape_FTUX(bool* In_Fart_Escape_FTUX, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, class UQtnGoal* CallFunc_Array_Get_Item, class UQtnGoal_FTUX_FartEscapeTutorial_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Fart_Escape_Tutorial, bool K2Node_DynamicCast_bSuccess, class UClass* Temp_class_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Check for Fart Escape FTUX");

	Params::UMenuUpgrade_Widget_C_Check_for_Fart_Escape_FTUX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Current_Goals_activeGoals = CallFunc_Get_Current_Goals_activeGoals;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses = CallFunc_Get_Current_Goals_activeGoalClassses;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Fart_Escape_Tutorial = K2Node_DynamicCast_AsQtn_Goal_FTUX_Fart_Escape_Tutorial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (In_Fart_Escape_FTUX != nullptr)
		*In_Fart_Escape_FTUX = Parms.In_Fart_Escape_FTUX;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Toggle Reshuffle Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_Blocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Want_Collapsed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Toggle_Reshuffle_Vis(bool Want_Blocked, bool Want_Collapsed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Toggle Reshuffle Vis");

	Params::UMenuUpgrade_Widget_C_Upgrade_FTUX_Toggle_Reshuffle_Vis_Params Parms{};

	Parms.Want_Blocked = Want_Blocked;
	Parms.Want_Collapsed = Want_Collapsed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Select Allowed?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selection_Allowed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Select_Allowed_(bool* Selection_Allowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Select Allowed?");

	Params::UMenuUpgrade_Widget_C_Upgrade_FTUX_Select_Allowed__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Selection_Allowed != nullptr)
		*Selection_Allowed = Parms.Selection_Allowed;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Complete Selection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Complete_Selection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Complete Selection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Rarity FTUX Complete Reshuffle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Rarity_FTUX_Complete_Reshuffle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Rarity FTUX Complete Reshuffle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Rarity FTUX Complete Rarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Rarity_FTUX_Complete_Rarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Rarity FTUX Complete Rarity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Reshuffle Allowed?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reroll_Allowed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Reshuffle_Allowed_(bool* Reroll_Allowed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Reshuffle Allowed?");

	Params::UMenuUpgrade_Widget_C_Upgrade_FTUX_Reshuffle_Allowed__Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Reroll_Allowed != nullptr)
		*Reroll_Allowed = Parms.Reroll_Allowed;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Upgrade FTUX Check
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Upgrade_FTUX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               In_Rarity_FTUX                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses                    (ReferenceParm)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_FTUX_RarityAndReshuffle_C*K2Node_DynamicCast_AsQtn_Goal_FTUX_Rarity_and_Reshuffle          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals_1                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses_1                  (ReferenceParm)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_FTUX_Upgrades_C*    K2Node_DynamicCast_AsQtn_Goal_FTUX_Upgrades                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Upgrade_FTUX_Check(bool* In_Upgrade_FTUX, bool* In_Rarity_FTUX, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, class UQtnGoal* CallFunc_Array_Get_Item, class UQtnGoal_FTUX_RarityAndReshuffle_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Rarity_and_Reshuffle, bool K2Node_DynamicCast_bSuccess, class UClass* Temp_class_Variable, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals_1, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses_1, class UQtnGoal* CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue, class UQtnGoal_FTUX_Upgrades_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Upgrades, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UClass* Temp_class_Variable_1, bool CallFunc_Array_Contains_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Upgrade FTUX Check");

	Params::UMenuUpgrade_Widget_C_Upgrade_FTUX_Check_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Current_Goals_activeGoals = CallFunc_Get_Current_Goals_activeGoals;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses = CallFunc_Get_Current_Goals_activeGoalClassses;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Rarity_and_Reshuffle = K2Node_DynamicCast_AsQtn_Goal_FTUX_Rarity_and_Reshuffle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Get_Current_Goals_activeGoals_1 = CallFunc_Get_Current_Goals_activeGoals_1;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses_1 = CallFunc_Get_Current_Goals_activeGoalClassses_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Upgrades = K2Node_DynamicCast_AsQtn_Goal_FTUX_Upgrades;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (In_Upgrade_FTUX != nullptr)
		*In_Upgrade_FTUX = Parms.In_Upgrade_FTUX;

	if (In_Rarity_FTUX != nullptr)
		*In_Rarity_FTUX = Parms.In_Rarity_FTUX;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.DispatchUpgradeMenuEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                UpgradeContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UMenuUpgrade_Widget_C::DispatchUpgradeMenuEvent(const struct FGameplayTag& EventType, const struct FGameplayTag& UpgradeContext, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "DispatchUpgradeMenuEvent");

	Params::UMenuUpgrade_Widget_C_DispatchUpgradeMenuEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.UpgradeContext = UpgradeContext;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker = CallFunc_GetMenuUpgradeSpeaker_speaker;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Check Exit Joker FTUX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Check_Exit_Joker_FTUX(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Check Exit Joker FTUX");

	Params::UMenuUpgrade_Widget_C_Check_Exit_Joker_FTUX_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Joker FTUX Toggle Reshuffle Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_Blocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Joker_FTUX_Toggle_Reshuffle_Vis(bool Want_Blocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Joker FTUX Toggle Reshuffle Vis");

	Params::UMenuUpgrade_Widget_C_Joker_FTUX_Toggle_Reshuffle_Vis_Params Parms{};

	Parms.Want_Blocked = Want_Blocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Check For Play Joker FTUX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHenrietta_Actor_BP_C*       K2Node_DynamicCast_AsHenrietta_Actor_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Check_For_Play_Joker_FTUX(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class AHenrietta_Actor_BP_C* K2Node_DynamicCast_AsHenrietta_Actor_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Check For Play Joker FTUX");

	Params::UMenuUpgrade_Widget_C_Check_For_Play_Joker_FTUX_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP = K2Node_DynamicCast_AsUpgrade_Station_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsHenrietta_Actor_BP = K2Node_DynamicCast_AsHenrietta_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.UpdateReshuffleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LOCAL_WiperInflation                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*LOCAL_PlayerUpgradeSessionState                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasFreeReroll_Has_Free_Reroll                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_SearchForEnemyUpgrade_UpgradeFound                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCurrencyForReroll_Has_Currency                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCurrencyForReroll_Has_Currency_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCurrencyForReroll_Has_Currency_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_Calculate_Reroll_Cost_WasModified                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Reroll_Cost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Reroll_Cost_OriginalCost                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// class FText                        K2Node_Select_Default_6                                          (None)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_7                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_13                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)

void UMenuUpgrade_Widget_C::UpdateReshuffleText(class UClass* LOCAL_WiperInflation, class UPlayerUpgradeSessionState_C* LOCAL_PlayerUpgradeSessionState, class FText Temp_text_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFreeReroll_Has_Free_Reroll, bool Temp_bool_Variable_4, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_SearchForEnemyUpgrade_UpgradeFound, class FText Temp_text_Variable_5, bool CallFunc_IsPerkActive_ReturnValue, bool CallFunc_HasCurrencyForReroll_Has_Currency, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCurrencyForReroll_Has_Currency_1, bool CallFunc_HasCurrencyForReroll_Has_Currency_2, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable_5, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText Temp_text_Variable_6, bool Temp_bool_Variable_6, class FText K2Node_Select_Default_2, bool CallFunc_Calculate_Reroll_Cost_WasModified, int32 CallFunc_Calculate_Reroll_Cost_Cost, int32 CallFunc_Calculate_Reroll_Cost_OriginalCost, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class FText K2Node_Select_Default_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Format_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText Temp_text_Variable_7, class FText CallFunc_Format_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_6, class FText K2Node_Select_Default_6, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, bool Temp_bool_Variable_7, class FText K2Node_Select_Default_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "UpdateReshuffleText");

	Params::UMenuUpgrade_Widget_C_UpdateReshuffleText_Params Parms{};

	Parms.LOCAL_WiperInflation = LOCAL_WiperInflation;
	Parms.LOCAL_PlayerUpgradeSessionState = LOCAL_PlayerUpgradeSessionState;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasFreeReroll_Has_Free_Reroll = CallFunc_HasFreeReroll_Has_Free_Reroll;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_SearchForEnemyUpgrade_UpgradeFound = CallFunc_SearchForEnemyUpgrade_UpgradeFound;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.CallFunc_HasCurrencyForReroll_Has_Currency = CallFunc_HasCurrencyForReroll_Has_Currency;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasCurrencyForReroll_Has_Currency_1 = CallFunc_HasCurrencyForReroll_Has_Currency_1;
	Parms.CallFunc_HasCurrencyForReroll_Has_Currency_2 = CallFunc_HasCurrencyForReroll_Has_Currency_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Calculate_Reroll_Cost_WasModified = CallFunc_Calculate_Reroll_Cost_WasModified;
	Parms.CallFunc_Calculate_Reroll_Cost_Cost = CallFunc_Calculate_Reroll_Cost_Cost;
	Parms.CallFunc_Calculate_Reroll_Cost_OriginalCost = CallFunc_Calculate_Reroll_Cost_OriginalCost;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_13 = K2Node_MakeStruct_FormatArgumentData_13;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.CheckIfTimerApplicable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_UpgradeStation_BP_C>K2Node_DynamicCast_AsInterface_Upgrade_Station_BP                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::CheckIfTimerApplicable(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue, TScriptInterface<class IInterface_UpgradeStation_BP_C> K2Node_DynamicCast_AsInterface_Upgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape, bool CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem, bool CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX, bool CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "CheckIfTimerApplicable");

	Params::UMenuUpgrade_Widget_C_CheckIfTimerApplicable_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Upgrade_Station_BP = K2Node_DynamicCast_AsInterface_Upgrade_Station_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter = CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape = CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem = CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem;
	Parms.CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX = CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX = CallFunc_Upgrade_FTUX_Check_in_Upgrade_FTUX;
	Parms.CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX = CallFunc_Upgrade_FTUX_Check_in_Rarity_FTUX;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Has Card Upgraded Rarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*SessionState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has_Upgraded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Has_Card_Upgraded_Rarity(int32 CardIndex, class UPlayerUpgradeSessionState_C* SessionState, bool* Has_Upgraded, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Has Card Upgraded Rarity");

	Params::UMenuUpgrade_Widget_C_Has_Card_Upgraded_Rarity_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.SessionState = SessionState;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Upgraded != nullptr)
		*Has_Upgraded = Parms.Has_Upgraded;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.GetPlayerUpgradeSessionData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  UpgradeStationComponent_LOCAL                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::GetPlayerUpgradeSessionData(class UPlayerUpgradeSessionState_C** UpgradeSession, class UUpgradeStationComponent_C* UpgradeStationComponent_LOCAL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUpgradeStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "GetPlayerUpgradeSessionData");

	Params::UMenuUpgrade_Widget_C_GetPlayerUpgradeSessionData_Params Parms{};

	Parms.UpgradeStationComponent_LOCAL = UpgradeStationComponent_LOCAL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeSession != nullptr)
		*UpgradeSession = Parms.UpgradeSession;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.CreateDiscountDetailWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnPerk>        PerkClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      IconName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUpgradeDetail_Widget_C*     OutCard                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeDetail_Widget_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPerk*                    CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPerkSettings            CallFunc_GetPerkSettings_ReturnValue                             (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::CreateDiscountDetailWidgets(TSubclassOf<class UQtnPerk> PerkClass, const class FString& IconName, class UUpgradeDetail_Widget_C** OutCard, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UUpgradeDetail_Widget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsPerkActive_ReturnValue, class UQtnPerk* CallFunc_FindPerk_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_Format_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "CreateDiscountDetailWidgets");

	Params::UMenuUpgrade_Widget_C_CreateDiscountDetailWidgets_Params Parms{};

	Parms.PerkClass = PerkClass;
	Parms.IconName = IconName;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_GetPerkSettings_ReturnValue = CallFunc_GetPerkSettings_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCard != nullptr)
		*OutCard = Parms.OutCard;

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Update Affordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMKB                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::Update_Affordance(bool IsUsingMKB, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Update Affordance");

	Params::UMenuUpgrade_Widget_C_Update_Affordance_Params Parms{};

	Parms.IsUsingMKB = IsUsingMKB;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.GetBodyPawnCurrencyEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABodyPawnBase_C*             Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrencyTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FQtnCurrencyEntry           QtnCurrencyEntry                                                 (Parm, OutParm, NoDestructor)
// int32                              CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCurrencyEntry           K2Node_MakeStruct_QtnCurrencyEntry                               (NoDestructor)

void UMenuUpgrade_Widget_C::GetBodyPawnCurrencyEntry(class ABodyPawnBase_C* Self2, struct FGameplayTag& CurrencyTag, struct FQtnCurrencyEntry* QtnCurrencyEntry, int32 CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount, const struct FQtnCurrencyEntry& K2Node_MakeStruct_QtnCurrencyEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "GetBodyPawnCurrencyEntry");

	Params::UMenuUpgrade_Widget_C_GetBodyPawnCurrencyEntry_Params Parms{};

	Parms.Self2 = Self2;
	Parms.CurrencyTag = CurrencyTag;
	Parms.CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount = CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount;
	Parms.K2Node_MakeStruct_QtnCurrencyEntry = K2Node_MakeStruct_QtnCurrencyEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (QtnCurrencyEntry != nullptr)
		*QtnCurrencyEntry = std::move(Parms.QtnCurrencyEntry);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.UpdateAffordanceVis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Vis                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LOCAL_FocusedIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeAffordance_Widget_C* CurWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_IsPowerGranting_Grants_a_Power                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_HasCurrencyForImproveRarity_Has_Currency                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OutCost                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Calculate_Improve_Rarity_Cost_wasModified               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::UpdateAffordanceVis(int32 Index, bool Vis, int32 LOCAL_FocusedIndex, class UUpgradeAffordance_Widget_C* CurWidget, bool CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_FTUX_IsPowerGranting_Grants_a_Power, enum class ESlateVisibility Temp_byte_Variable, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, bool CallFunc_HasCurrencyForImproveRarity_Has_Currency, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Calculate_Improve_Rarity_Cost_OutCost, int32 CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost, bool CallFunc_Calculate_Improve_Rarity_Cost_wasModified, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "UpdateAffordanceVis");

	Params::UMenuUpgrade_Widget_C_UpdateAffordanceVis_Params Parms{};

	Parms.Index = Index;
	Parms.Vis = Vis;
	Parms.LOCAL_FocusedIndex = LOCAL_FocusedIndex;
	Parms.CurWidget = CurWidget;
	Parms.CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed = CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_FTUX_IsPowerGranting_Grants_a_Power = CallFunc_FTUX_IsPowerGranting_Grants_a_Power;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasCurrencyForImproveRarity_Has_Currency = CallFunc_HasCurrencyForImproveRarity_Has_Currency;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OutCost = CallFunc_Calculate_Improve_Rarity_Cost_OutCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost = CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_wasModified = CallFunc_Calculate_Improve_Rarity_Cost_wasModified;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.Event_CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::Event_CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "Event_CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetResumed");

	Params::UMenuUpgrade_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnUIScreenActionPressed");

	Params::UMenuUpgrade_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.BndEvt__MenuUpgrade_Widget_BtnWidget_Reroll_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::BndEvt__MenuUpgrade_Widget_BtnWidget_Reroll_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "BndEvt__MenuUpgrade_Widget_BtnWidget_Reroll_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.CardHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::CardHovered(bool IsHovered, int32 CardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "CardHovered");

	Params::UMenuUpgrade_Widget_C_CardHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CardIndex = CardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnUIScreenActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnUIScreenActionReleased");

	Params::UMenuUpgrade_Widget_C_OnUIScreenActionReleased_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetTicked");

	Params::UMenuUpgrade_Widget_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.UpgradeCurrentCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::UpgradeCurrentCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "UpgradeCurrentCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.UpgradeCardSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UpgradeVOContextTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::UpgradeCardSelected(const struct FGameplayTag& UpgradeVOContextTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "UpgradeCardSelected");

	Params::UMenuUpgrade_Widget_C_UpgradeCardSelected_Params Parms{};

	Parms.UpgradeVOContextTag = UpgradeVOContextTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RerollUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::RerollUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RerollUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.InputMethodChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::InputMethodChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "InputMethodChange");

	Params::UMenuUpgrade_Widget_C_InputMethodChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetOccupied
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetOccupied");

	Params::UMenuUpgrade_Widget_C_OnQtnWidgetOccupied_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.CreateDiscountCallouts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::CreateDiscountCallouts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "CreateDiscountCallouts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.ActivateRerollCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::ActivateRerollCard(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "ActivateRerollCard");

	Params::UMenuUpgrade_Widget_C_ActivateRerollCard_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "PreConstruct");

	Params::UMenuUpgrade_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.ResetIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::ResetIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "ResetIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.CheckPerks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::CheckPerks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "CheckPerks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.AceInTheHoleFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::AceInTheHoleFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "AceInTheHoleFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.ToggleInteractivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::ToggleInteractivity(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "ToggleInteractivity");

	Params::UMenuUpgrade_Widget_C_ToggleInteractivity_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnlyTheBestFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnlyTheBestFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnlyTheBestFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.JokerFTUX_ExitVOAndSpeaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::JokerFTUX_ExitVOAndSpeaker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "JokerFTUX_ExitVOAndSpeaker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.JokerFTUX_PlayEntryVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::JokerFTUX_PlayEntryVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "JokerFTUX_PlayEntryVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.UpgradeFTUX_PlayIntroVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::UpgradeFTUX_PlayIntroVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "UpgradeFTUX_PlayIntroVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RarityFTUX_PlayRarityVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::RarityFTUX_PlayRarityVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RarityFTUX_PlayRarityVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RarityFTUX_PlayUpgradeOpenVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::RarityFTUX_PlayUpgradeOpenVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RarityFTUX_PlayUpgradeOpenVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.FartEscapeFTUX_PlayIntroVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::FartEscapeFTUX_PlayIntroVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "FartEscapeFTUX_PlayIntroVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.DelayedDeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::DelayedDeal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "DelayedDeal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.HealingTotemFTUX_PlayIntroVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::HealingTotemFTUX_PlayIntroVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "HealingTotemFTUX_PlayIntroVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.forceExitWithoutUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::ForceExitWithoutUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "forceExitWithoutUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RarityFTUX_PlayIntroVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::RarityFTUX_PlayIntroVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RarityFTUX_PlayIntroVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RarityFTUX_bindLevelPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFTUX_Upgrade_ModalWidget_C* This_widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuUpgrade_Widget_C::RarityFTUX_bindLevelPopup(class UFTUX_Upgrade_ModalWidget_C* This_widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RarityFTUX_bindLevelPopup");

	Params::UMenuUpgrade_Widget_C_RarityFTUX_bindLevelPopup_Params Parms{};

	Parms.This_widget = This_widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.RarityFTUX_LevelPopupDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::RarityFTUX_LevelPopupDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "RarityFTUX_LevelPopupDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnCurrencyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnCurrencyChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnCurrencyChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.OnUpgradeCardsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuUpgrade_Widget_C::OnUpgradeCardsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "OnUpgradeCardsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuUpgrade_Widget.MenuUpgrade_Widget_C.ExecuteUbergraph_MenuUpgrade_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetScreenThatOwnsThisWidget_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_CardIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_upgradeVOContextTag                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_firstTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeDetail_Widget_C*     CallFunc_CreateDiscountDetailWidgets_OutCard                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hovered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeDetail_Widget_C*     CallFunc_CreateDiscountDetailWidgets_OutCard_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeDetail_Widget_C*     CallFunc_CreateDiscountDetailWidgets_OutCard_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeDetail_Widget_C*     CallFunc_CreateDiscountDetailWidgets_OutCard_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Calculate_Reroll_Cost_WasModified                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Reroll_Cost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Reroll_Cost_OriginalCost                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCurrencyForReroll_Has_Currency                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasFreeReroll_Has_Free_Reroll                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OutCost                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Calculate_Improve_Rarity_Cost_wasModified               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCurrencyForImproveRarity_Has_Currency                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeModificationHistoryK2Node_MakeStruct_QtnUpgradeModificationHistory                  (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCurrencyForImproveRarity_Has_Currency_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeDetail_Widget_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHenrietta_Actor_BP_C*       K2Node_DynamicCast_AsHenrietta_Actor_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Upgrade_FTUX_Reshuffle_Allowed__Reroll_Allowed          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_FTUX_IsPowerGranting_Grants_a_Power                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetScreenThatOwnsThisWidget_ReturnValue_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_4                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUX_Upgrade_ModalWidget_C* K2Node_CustomEvent_this_widget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialSubgoalState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialSubgoalState_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InAnyFTUX_In_FTUX                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InAnyFTUX_In_FTUX_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_5                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cards_HasCards                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Cards_HasCards_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_6                                        (None)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_7                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FText                        K2Node_Select_Default_4                                          (None)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_GetFocusedCard_FocusedCard_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_Henrietta_BP_C*K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_GetMenuUpgradeSpeaker_speaker_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThisHenrietta_IsHenrietta                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuUpgrade_Widget_C::ExecuteUbergraph_MenuUpgrade_Widget(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsHovered, int32 K2Node_CustomEvent_CardIndex, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_upgradeVOContextTag, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_2, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, class UUpgradeDetail_Widget_C* CallFunc_CreateDiscountDetailWidgets_OutCard, bool K2Node_CustomEvent_Hovered, class UUpgradeDetail_Widget_C* CallFunc_CreateDiscountDetailWidgets_OutCard_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UUpgradeDetail_Widget_C* CallFunc_CreateDiscountDetailWidgets_OutCard_2, float CallFunc_GetEndTime_ReturnValue, class UUpgradeDetail_Widget_C* CallFunc_CreateDiscountDetailWidgets_OutCard_3, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession, bool CallFunc_Calculate_Reroll_Cost_WasModified, int32 CallFunc_Calculate_Reroll_Cost_Cost, int32 CallFunc_Calculate_Reroll_Cost_OriginalCost, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasCurrencyForReroll_Has_Currency, bool CallFunc_HasFreeReroll_Has_Free_Reroll, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_1, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_2, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_3, int32 CallFunc_Calculate_Improve_Rarity_Cost_OutCost, int32 CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost, bool CallFunc_Calculate_Improve_Rarity_Cost_wasModified, bool CallFunc_HasCurrencyForImproveRarity_Has_Currency, const struct FQtnUpgradeModificationHistory& K2Node_MakeStruct_QtnUpgradeModificationHistory, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasCurrencyForImproveRarity_Has_Currency_1, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Array_Index_Variable, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_4, int32 Temp_int_Array_Index_Variable_1, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_5, class UUpgradeDetail_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, int32 CallFunc_GetCurrencyQuantity_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_6, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_CustomEvent_On, bool CallFunc_IsValid_ReturnValue_6, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_2, class AHenrietta_Actor_BP_C* K2Node_DynamicCast_AsHenrietta_Actor_BP, bool K2Node_DynamicCast_bSuccess_7, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Upgrade_FTUX_Reshuffle_Allowed__Reroll_Allowed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_FTUX_IsPowerGranting_Grants_a_Power, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape, bool CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem, bool CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_2, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape_1, bool CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem_1, bool CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_8, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue_1, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class UFTUX_Upgrade_ModalWidget_C* K2Node_CustomEvent_this_widget, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText K2Node_Select_Default, enum class EQtnTutorialStatus CallFunc_GetTutorialSubgoalState_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialSubgoalState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_InAnyFTUX_In_FTUX, bool CallFunc_InAnyFTUX_In_FTUX_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard, bool CallFunc_IsValid_ReturnValue_9, int32 Temp_int_Array_Index_Variable_5, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_5, bool CallFunc_Has_Cards_HasCards, bool CallFunc_Has_Cards_HasCards_1, bool CallFunc_BooleanAND_ReturnValue_1, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_3, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_4, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_5, bool Temp_bool_Variable_1, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_5, bool K2Node_DynamicCast_bSuccess_12, class FText K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_12, int32 Temp_int_Array_Index_Variable_6, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_6, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_6, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, int32 Temp_int_Array_Index_Variable_7, int32 Temp_int_Loop_Counter_Variable_6, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_7, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_7, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_7, bool K2Node_DynamicCast_bSuccess_14, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_14, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_8, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_IsValid_ReturnValue_15, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_9, bool K2Node_DynamicCast_bSuccess_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Variable, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP_10, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsValid_ReturnValue_17, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard_1, bool CallFunc_IsValid_ReturnValue_18, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6, class ABS_Choice_Card_C* CallFunc_GetFocusedCard_FocusedCard_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_2, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_1, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_2, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_3, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_4, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_5, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_19, class AUpgradeStation_Henrietta_BP_C* K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP, bool K2Node_DynamicCast_bSuccess_18, class AScriptedSkeletalActor_Trial_C* CallFunc_GetMenuUpgradeSpeaker_speaker_6, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_7, class UPlayerUpgradeSessionState_C* CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_8, bool CallFunc_IsThisHenrietta_IsHenrietta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuUpgrade_Widget_C", "ExecuteUbergraph_MenuUpgrade_Widget");

	Params::UMenuUpgrade_Widget_C_ExecuteUbergraph_MenuUpgrade_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_GetScreenThatOwnsThisWidget_ReturnValue = CallFunc_GetScreenThatOwnsThisWidget_ReturnValue;
	Parms.K2Node_Event_screenAction_1 = K2Node_Event_screenAction_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_CustomEvent_CardIndex = K2Node_CustomEvent_CardIndex;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface = K2Node_DynamicCast_AsUpgrade_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface_1 = K2Node_DynamicCast_AsUpgrade_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_upgradeVOContextTag = K2Node_CustomEvent_upgradeVOContextTag;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface_2 = K2Node_DynamicCast_AsUpgrade_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_firstTime = K2Node_Event_firstTime;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_CreateDiscountDetailWidgets_OutCard = CallFunc_CreateDiscountDetailWidgets_OutCard;
	Parms.K2Node_CustomEvent_Hovered = K2Node_CustomEvent_Hovered;
	Parms.CallFunc_CreateDiscountDetailWidgets_OutCard_1 = CallFunc_CreateDiscountDetailWidgets_OutCard_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateDiscountDetailWidgets_OutCard_2 = CallFunc_CreateDiscountDetailWidgets_OutCard_2;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_CreateDiscountDetailWidgets_OutCard_3 = CallFunc_CreateDiscountDetailWidgets_OutCard_3;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession;
	Parms.CallFunc_Calculate_Reroll_Cost_WasModified = CallFunc_Calculate_Reroll_Cost_WasModified;
	Parms.CallFunc_Calculate_Reroll_Cost_Cost = CallFunc_Calculate_Reroll_Cost_Cost;
	Parms.CallFunc_Calculate_Reroll_Cost_OriginalCost = CallFunc_Calculate_Reroll_Cost_OriginalCost;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasCurrencyForReroll_Has_Currency = CallFunc_HasCurrencyForReroll_Has_Currency;
	Parms.CallFunc_HasFreeReroll_Has_Free_Reroll = CallFunc_HasFreeReroll_Has_Free_Reroll;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_1 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_1;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_2 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_2;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_3 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_3;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OutCost = CallFunc_Calculate_Improve_Rarity_Cost_OutCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost = CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_wasModified = CallFunc_Calculate_Improve_Rarity_Cost_wasModified;
	Parms.CallFunc_HasCurrencyForImproveRarity_Has_Currency = CallFunc_HasCurrencyForImproveRarity_Has_Currency;
	Parms.K2Node_MakeStruct_QtnUpgradeModificationHistory = K2Node_MakeStruct_QtnUpgradeModificationHistory;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasCurrencyForImproveRarity_Has_Currency_1 = CallFunc_HasCurrencyForImproveRarity_Has_Currency_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_4 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_5 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_6 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_6;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP = K2Node_DynamicCast_AsUpgrade_Station_BP;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsHenrietta_Actor_BP = K2Node_DynamicCast_AsHenrietta_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Upgrade_FTUX_Reshuffle_Allowed__Reroll_Allowed = CallFunc_Upgrade_FTUX_Reshuffle_Allowed__Reroll_Allowed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed = CallFunc_Upgrade_FTUX_Select_Allowed__Selection_Allowed;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_FTUX_IsPowerGranting_Grants_a_Power = CallFunc_FTUX_IsPowerGranting_Grants_a_Power;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX = CallFunc_Check_for_Fart_Escape_FTUX_in_Fart_Escape_FTUX;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_1 = K2Node_DynamicCast_AsUpgrade_Station_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape = CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem = CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem;
	Parms.CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX = CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_2 = K2Node_DynamicCast_AsUpgrade_Station_BP_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape_1 = CallFunc_FTUX_CheckForPowerGranter_in_Fart_Escape_1;
	Parms.CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem_1 = CallFunc_FTUX_CheckForPowerGranter_in_Healing_Totem_1;
	Parms.CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX_1 = CallFunc_FTUX_CheckForPowerGranter_not_in_Power_Granting_FTUX_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetScreenThatOwnsThisWidget_ReturnValue_1 = CallFunc_GetScreenThatOwnsThisWidget_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_this_widget = K2Node_CustomEvent_this_widget;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTutorialSubgoalState_ReturnValue = CallFunc_GetTutorialSubgoalState_ReturnValue;
	Parms.CallFunc_GetTutorialSubgoalState_ReturnValue_1 = CallFunc_GetTutorialSubgoalState_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_InAnyFTUX_In_FTUX = CallFunc_InAnyFTUX_In_FTUX;
	Parms.CallFunc_InAnyFTUX_In_FTUX_1 = CallFunc_InAnyFTUX_In_FTUX_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetFocusedCard_FocusedCard = CallFunc_GetFocusedCard_FocusedCard;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Has_Cards_HasCards = CallFunc_Has_Cards_HasCards;
	Parms.CallFunc_Has_Cards_HasCards_1 = CallFunc_Has_Cards_HasCards_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_3 = K2Node_DynamicCast_AsUpgrade_Station_BP_3;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_4 = K2Node_DynamicCast_AsUpgrade_Station_BP_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_5 = K2Node_DynamicCast_AsUpgrade_Station_BP_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_6 = K2Node_DynamicCast_AsUpgrade_Station_BP_6;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue_1 = CallFunc_MatchesAnyTags_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_7 = K2Node_DynamicCast_AsUpgrade_Station_BP_7;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_8 = K2Node_DynamicCast_AsUpgrade_Station_BP_8;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_9 = K2Node_DynamicCast_AsUpgrade_Station_BP_9;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP_10 = K2Node_DynamicCast_AsUpgrade_Station_BP_10;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetFocusedCard_FocusedCard_1 = CallFunc_GetFocusedCard_FocusedCard_1;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetFocusedCard_FocusedCard_2 = CallFunc_GetFocusedCard_FocusedCard_2;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6;
	Parms.CallFunc_GetFocusedCard_FocusedCard_3 = CallFunc_GetFocusedCard_FocusedCard_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue_2 = CallFunc_GetBodyInventory_ReturnValue_2;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker = CallFunc_GetMenuUpgradeSpeaker_speaker;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_1 = CallFunc_GetMenuUpgradeSpeaker_speaker_1;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_2 = CallFunc_GetMenuUpgradeSpeaker_speaker_2;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_3 = CallFunc_GetMenuUpgradeSpeaker_speaker_3;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_4 = CallFunc_GetMenuUpgradeSpeaker_speaker_4;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_5 = CallFunc_GetMenuUpgradeSpeaker_speaker_5;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP = K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetMenuUpgradeSpeaker_speaker_6 = CallFunc_GetMenuUpgradeSpeaker_speaker_6;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_7 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_7;
	Parms.CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_8 = CallFunc_GetPlayerUpgradeSessionData_UpgradeSession_8;
	Parms.CallFunc_IsThisHenrietta_IsHenrietta = CallFunc_IsThisHenrietta_IsHenrietta;

	UObject::ProcessEvent(Func, &Parms);

}

}


