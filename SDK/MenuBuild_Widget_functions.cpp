#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuBuild_Widget.MenuBuild_Widget_C
// (None)

class UClass* UMenuBuild_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuBuild_Widget_C");

	return Clss;
}


// MenuBuild_Widget_C MenuBuild_Widget.Default__MenuBuild_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuBuild_Widget_C* UMenuBuild_Widget_C::GetDefaultObj()
{
	static class UMenuBuild_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuBuild_Widget_C*>(UMenuBuild_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuBuild_Widget.MenuBuild_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "RequestCurrencyVisibilities");

	Params::UMenuBuild_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.SequenceEvent__ENTRYPOINTMenuBuild_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::SequenceEvent__ENTRYPOINTMenuBuild_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "SequenceEvent__ENTRYPOINTMenuBuild_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.RefreshCardTooltipDataUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BullshitCard_Widget_C*   TooltipToRefresh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::RefreshCardTooltipDataUI(class UUI_BullshitCard_Widget_C* TooltipToRefresh, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "RefreshCardTooltipDataUI");

	Params::UMenuBuild_Widget_C_RefreshCardTooltipDataUI_Params Parms{};

	Parms.TooltipToRefresh = TooltipToRefresh;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.ResetPlayerCardTooltipPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::ResetPlayerCardTooltipPosition(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "ResetPlayerCardTooltipPosition");

	Params::UMenuBuild_Widget_C_ResetPlayerCardTooltipPosition_Params Parms{};

	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.ResetEnemyCardTooltipPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::ResetEnemyCardTooltipPosition(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "ResetEnemyCardTooltipPosition");

	Params::UMenuBuild_Widget_C_ResetEnemyCardTooltipPosition_Params Parms{};

	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.GetBullshitClassFromCheatVerb
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyCheatActivationVerbBase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      QtnBullshitBPBaseArchetype                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::GetBullshitClassFromCheatVerb(class UClass* EnemyCheatActivationVerbBase, class UClass** QtnBullshitBPBaseArchetype, bool* Found, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "GetBullshitClassFromCheatVerb");

	Params::UMenuBuild_Widget_C_GetBullshitClassFromCheatVerb_Params Parms{};

	Parms.EnemyCheatActivationVerbBase = EnemyCheatActivationVerbBase;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QtnBullshitBPBaseArchetype != nullptr)
		*QtnBullshitBPBaseArchetype = Parms.QtnBullshitBPBaseArchetype;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Create Activation Verb to Bullshit Archetype Map
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalCombatSettings_C*     K2Node_DynamicCast_AsGlobal_Combat_Settings                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>CallFunc_Map_Values_Values                                       (ReferenceParm)
// TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::Create_Activation_Verb_to_Bullshit_Archetype_Map(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess, TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>& CallFunc_Map_Keys_Keys, TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>& CallFunc_Map_Values_Values, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Array_Get_Item_1, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Create Activation Verb to Bullshit Archetype Map");

	Params::UMenuBuild_Widget_C_Create_Activation_Verb_to_Bullshit_Archetype_Map_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Combat_Settings = K2Node_DynamicCast_AsGlobal_Combat_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base = K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.CONTENTLOCK_CreateCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BullshitCard_Widget_C*   CardWidgetToRefresh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         UpgradeSettings                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       UpgradeRolledData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      EnemyBullshitBPBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  PlayerBullshitVerbArchetype                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 LOCAL_UpgradeObject                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::CONTENTLOCK_CreateCard(class UUI_BullshitCard_Widget_C* CardWidgetToRefresh, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, class UQtnUpgradeSlot* NewLocalVar_0, class UQtnUpgrade* LOCAL_UpgradeObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "CONTENTLOCK_CreateCard");

	Params::UMenuBuild_Widget_C_CONTENTLOCK_CreateCard_Params Parms{};

	Parms.CardWidgetToRefresh = CardWidgetToRefresh;
	Parms.UpgradeSettings = UpgradeSettings;
	Parms.UpgradeRolledData = UpgradeRolledData;
	Parms.EnemyBullshitBPBase = EnemyBullshitBPBase;
	Parms.PlayerBullshitVerbArchetype = PlayerBullshitVerbArchetype;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.LOCAL_UpgradeObject = LOCAL_UpgradeObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Gamepad Navigation Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UMenuBuild_Widget_C::Gamepad_Navigation_Left(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Gamepad Navigation Left");

	Params::UMenuBuild_Widget_C_Gamepad_Navigation_Left_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Gamepad Navigation Binder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Get_Focus_Target_FocusTarget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Focus_Target_FocusTarget_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMenuBuild_Widget_C::Gamepad_Navigation_Binder(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Get_Focus_Target_FocusTarget, class UWidget* CallFunc_Get_Focus_Target_FocusTarget_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Gamepad Navigation Binder");

	Params::UMenuBuild_Widget_C_Gamepad_Navigation_Binder_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Focus_Target_FocusTarget = CallFunc_Get_Focus_Target_FocusTarget;
	Parms.CallFunc_Get_Focus_Target_FocusTarget_1 = CallFunc_Get_Focus_Target_FocusTarget_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.ScanForRulebookUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              AppliedRules                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UClass*>              LOCAL_RulebookUpgrades                                           (Edit, BlueprintVisible)

void UMenuBuild_Widget_C::ScanForRulebookUpgrades(TArray<class UClass*>& AppliedRules, const TArray<class UClass*>& LOCAL_RulebookUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "ScanForRulebookUpgrades");

	Params::UMenuBuild_Widget_C_ScanForRulebookUpgrades_Params Parms{};

	Parms.AppliedRules = AppliedRules;
	Parms.LOCAL_RulebookUpgrades = LOCAL_RulebookUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Show or Hide Level UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BullshitCardSmall_Widget_C*TargetCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCardSmall_Widget_C*LOCAL_TargetCardSmall                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::Show_or_Hide_Level_UI(class UUI_BullshitCardSmall_Widget_C* TargetCard, bool Show_, class UUI_BullshitCardSmall_Widget_C* LOCAL_TargetCardSmall)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Show or Hide Level UI");

	Params::UMenuBuild_Widget_C_Show_or_Hide_Level_UI_Params Parms{};

	Parms.TargetCard = TargetCard;
	Parms.Show_ = Show_;
	Parms.LOCAL_TargetCardSmall = LOCAL_TargetCardSmall;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.BETA Hide or Show Card?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BullshitCard_Widget_C*   CardWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowCard                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::BETA_Hide_or_Show_Card_(class UUI_BullshitCard_Widget_C* CardWidget, bool ShowCard, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "BETA Hide or Show Card?");

	Params::UMenuBuild_Widget_C_BETA_Hide_or_Show_Card__Params Parms{};

	Parms.CardWidget = CardWidget;
	Parms.ShowCard = ShowCard;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.BETA_CreateEnemyBullshit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      EnemyCheatActivationVerbBase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TypeIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BullshitCardSmall_Widget_C*Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BullshitCardSmall_Widget_C*LOCAL_TargetCard                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_TypeIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::BETA_CreateEnemyBullshit(class UClass* EnemyCheatActivationVerbBase, int32 TypeIndex, class UUI_BullshitCardSmall_Widget_C* Target, class UUI_BullshitCardSmall_Widget_C* LOCAL_TargetCard, int32 LOCAL_TypeIndex, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>& CallFunc_Map_Values_Values, TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "BETA_CreateEnemyBullshit");

	Params::UMenuBuild_Widget_C_BETA_CreateEnemyBullshit_Params Parms{};

	Parms.EnemyCheatActivationVerbBase = EnemyCheatActivationVerbBase;
	Parms.TypeIndex = TypeIndex;
	Parms.Target = Target;
	Parms.LOCAL_TargetCard = LOCAL_TargetCard;
	Parms.LOCAL_TypeIndex = LOCAL_TypeIndex;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.BETA_CreateUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BullshitCardSmall_Widget_C*CardWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 UpgradeObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       EnemyUpgradeRolledData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UQtnUpgrade*                 LOCAL_UpgradeObject                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeIcon_Widget_C*       LOCAL_NewIconWidget                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_IsEnemyBullshit                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_IsEnemyUpgrade                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)

void UMenuBuild_Widget_C::BETA_CreateUpgrade(class UUI_BullshitCardSmall_Widget_C* CardWidget, class UQtnUpgrade* UpgradeObject, const struct FQtnRolledUpgradeData& EnemyUpgradeRolledData, class UQtnUpgrade* LOCAL_UpgradeObject, class UUpgradeIcon_Widget_C* LOCAL_NewIconWidget, int32 LOCAL_Index, bool LOCAL_IsEnemyBullshit, bool LOCAL_IsEnemyUpgrade, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "BETA_CreateUpgrade");

	Params::UMenuBuild_Widget_C_BETA_CreateUpgrade_Params Parms{};

	Parms.CardWidget = CardWidget;
	Parms.UpgradeObject = UpgradeObject;
	Parms.EnemyUpgradeRolledData = EnemyUpgradeRolledData;
	Parms.LOCAL_UpgradeObject = LOCAL_UpgradeObject;
	Parms.LOCAL_NewIconWidget = LOCAL_NewIconWidget;
	Parms.LOCAL_Index = LOCAL_Index;
	Parms.LOCAL_IsEnemyBullshit = LOCAL_IsEnemyBullshit;
	Parms.LOCAL_IsEnemyUpgrade = LOCAL_IsEnemyUpgrade;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.IndexToUniformGridPlacement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::IndexToUniformGridPlacement(int32 Index, int32* Row, int32* Column, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "IndexToUniformGridPlacement");

	Params::UMenuBuild_Widget_C_IndexToUniformGridPlacement_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Row != nullptr)
		*Row = Parms.Row;

	if (Column != nullptr)
		*Column = Parms.Column;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.TopNavUpdateContents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_3                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::TopNavUpdateContents(int32 NewParam, int32 NewLocalVar_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "TopNavUpdateContents");

	Params::UMenuBuild_Widget_C_TopNavUpdateContents_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.NewLocalVar_3 = NewLocalVar_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.AppendUpgradeArrays
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnUpgradeSlot*>     TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     SourceArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     AppendedArray                                                    (ConstParm, Parm, OutParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     NewLocalVar_2                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class UQtnUpgradeSlot*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotFilled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::AppendUpgradeArrays(TArray<class UQtnUpgradeSlot*>& TargetArray, TArray<class UQtnUpgradeSlot*>& SourceArray, TArray<class UQtnUpgradeSlot*>* AppendedArray, const TArray<class UQtnUpgradeSlot*>& NewLocalVar_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, bool CallFunc_IsSlotFilled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "AppendUpgradeArrays");

	Params::UMenuBuild_Widget_C_AppendUpgradeArrays_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.SourceArray = SourceArray;
	Parms.NewLocalVar_2 = NewLocalVar_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsSlotFilled_ReturnValue = CallFunc_IsSlotFilled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AppendedArray != nullptr)
		*AppendedArray = std::move(Parms.AppendedArray);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.GetAllUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UQtnUpgradeSlot*>     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     LOCAL_UpgradeSlots                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs                                          (ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue                             (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnVerb*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_1                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_2                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs_1                                        (ReferenceParm, ContainsInstancedReference)
// class UQtnVerb*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_3                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_GetUpgradeSlots_ReturnValue_4                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_AppendUpgradeArrays_AppendedArray                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_AppendUpgradeArrays_AppendedArray_1                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_AppendUpgradeArrays_AppendedArray_2                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_AppendUpgradeArrays_AppendedArray_3                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UQtnUpgradeSlot*>     CallFunc_AppendUpgradeArrays_AppendedArray_4                     (ReferenceParm, ContainsInstancedReference)

TArray<class UQtnUpgradeSlot*> UMenuBuild_Widget_C::GetAllUpgrades(const TArray<class UQtnUpgradeSlot*>& LOCAL_UpgradeSlots, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs_1, class UQtnVerb* CallFunc_Array_Get_Item_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_4, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_1, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_2, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_3, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "GetAllUpgrades");

	Params::UMenuBuild_Widget_C_GetAllUpgrades_Params Parms{};

	Parms.LOCAL_UpgradeSlots = LOCAL_UpgradeSlots;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.CallFunc_GetVerbs_verbs = CallFunc_GetVerbs_verbs;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue = CallFunc_GetUpgradeSlots_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_1 = CallFunc_GetUpgradeSlots_ReturnValue_1;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_2 = CallFunc_GetUpgradeSlots_ReturnValue_2;
	Parms.CallFunc_GetVerbs_verbs_1 = CallFunc_GetVerbs_verbs_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_3 = CallFunc_GetUpgradeSlots_ReturnValue_3;
	Parms.CallFunc_GetUpgradeSlots_ReturnValue_4 = CallFunc_GetUpgradeSlots_ReturnValue_4;
	Parms.CallFunc_AppendUpgradeArrays_AppendedArray = CallFunc_AppendUpgradeArrays_AppendedArray;
	Parms.CallFunc_AppendUpgradeArrays_AppendedArray_1 = CallFunc_AppendUpgradeArrays_AppendedArray_1;
	Parms.CallFunc_AppendUpgradeArrays_AppendedArray_2 = CallFunc_AppendUpgradeArrays_AppendedArray_2;
	Parms.CallFunc_AppendUpgradeArrays_AppendedArray_3 = CallFunc_AppendUpgradeArrays_AppendedArray_3;
	Parms.CallFunc_AppendUpgradeArrays_AppendedArray_4 = CallFunc_AppendUpgradeArrays_AppendedArray_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.UpdateAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseKeyboard                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_MouseKeyboard                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlobalNavAffordance_Interface_C>CallFunc_UpdateGlobalNavAffordances_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGlobalNavAffordance_Interface_C>CallFunc_UpdateGlobalNavAffordances_self_CastInput_1             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::UpdateAffordance(bool IsUsingMouseKeyboard, bool LOCAL_MouseKeyboard, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "UpdateAffordance");

	Params::UMenuBuild_Widget_C_UpdateAffordance_Params Parms{};

	Parms.IsUsingMouseKeyboard = IsUsingMouseKeyboard;
	Parms.LOCAL_MouseKeyboard = LOCAL_MouseKeyboard;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_UpdateGlobalNavAffordances_self_CastInput = CallFunc_UpdateGlobalNavAffordances_self_CastInput;
	Parms.CallFunc_UpdateGlobalNavAffordances_self_CastInput_1 = CallFunc_UpdateGlobalNavAffordances_self_CastInput_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "UpdateGlobalNavAffordances");

	Params::UMenuBuild_Widget_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Upgrade Hover Repeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::Upgrade_Hover_Repeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Upgrade Hover Repeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Upgrade Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             MyCardInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMenuBuild_Widget_C::Upgrade_Hovered(bool IsHovered_, int32 HoveredIndex, const struct FUI_Card_Struct& MyCardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Upgrade Hovered");

	Params::UMenuBuild_Widget_C_Upgrade_Hovered_Params Parms{};

	Parms.IsHovered_ = IsHovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.MyCardInfo = MyCardInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.PerkButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkBookmarkButton_Widget_C*HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StackCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::PerkButtonHovered(bool IsHovered_, int32 HoveredIndex, class UPerkBookmarkButton_Widget_C* HoveredButton, int32 StackCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "PerkButtonHovered");

	Params::UMenuBuild_Widget_C_PerkButtonHovered_Params Parms{};

	Parms.IsHovered_ = IsHovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.HoveredButton = HoveredButton;
	Parms.StackCount = StackCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.Reset Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::Reset_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "Reset Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.ExitMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::ExitMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "ExitMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnUIScreenActionPressed");

	Params::UMenuBuild_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuBuild_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnQtnWidgetResumed");

	Params::UMenuBuild_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.InputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::InputChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "InputChange");

	Params::UMenuBuild_Widget_C_InputChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "PreConstruct");

	Params::UMenuBuild_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.SetPerkBindingTooltip
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPerkBookmarkButton_Widget_C*>PerkBookmarkButtons                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UMenuBuild_Widget_C::SetPerkBindingTooltip(TArray<class UPerkBookmarkButton_Widget_C*>& PerkBookmarkButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "SetPerkBindingTooltip");

	Params::UMenuBuild_Widget_C_SetPerkBindingTooltip_Params Parms{};

	Parms.PerkBookmarkButtons = PerkBookmarkButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnQtnWidgetHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::OnQtnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnQtnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.RebuildEnemyUpgradesEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::RebuildEnemyUpgradesEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "RebuildEnemyUpgradesEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnCutsceneEndedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCutsceneActive                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DoWorldCleanup                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::OnCutsceneEndedEvent(bool IsCutsceneActive, bool DoWorldCleanup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnCutsceneEndedEvent");

	Params::UMenuBuild_Widget_C_OnCutsceneEndedEvent_Params Parms{};

	Parms.IsCutsceneActive = IsCutsceneActive;
	Parms.DoWorldCleanup = DoWorldCleanup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.OnQtnWidgetShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::OnQtnWidgetShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "OnQtnWidgetShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.ExecuteUbergraph_MenuBuild_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   K2Node_Event_Affordances                                         (ConstParm)
// class UClass*                      K2Node_Event_myClass                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered__1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_CustomEvent_MyCardInfo                                    (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_Select_Default                                            (NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkBookmarkButton_Widget_C*K2Node_CustomEvent_HoveredButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StackCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPerkSettings            CallFunc_GetPerkSettings_ReturnValue                             (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetScreenThatOwnsThisWidget_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// struct FAnchors                    K2Node_Select_Default_5                                          (NoDestructor)
// TArray<class UQtnUpgrade*>         CallFunc_GetCurrentUpgradesArray_ReturnValue                     (ReferenceParm)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBullshitClassFromCheatVerb_Found                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs                                          (ReferenceParm, ContainsInstancedReference)
// class UQtnVerb*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_8                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   K2Node_Select_Default_9                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   K2Node_Select_Default_10                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_BullshitCard_Widget_C*   K2Node_Select_Default_11                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// TArray<class UPerkBookmarkButton_Widget_C*>K2Node_CustomEvent_PerkBookmarkButtons                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnRolledUpgradeData       CallFunc_GetRolledUpgradeData_ReturnValue                        (ConstParm)
// class UPerkBookmarkButton_Widget_C*CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalCombatSettings_C*     K2Node_DynamicCast_AsGlobal_Combat_Settings                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_BullshitCard_Widget_C*   K2Node_Select_Default_12                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_BullshitCard_Widget_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default_13                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       CallFunc_Array_Get_Item_9                                        (None)
// class UUI_BullshitCard_Widget_C*   CallFunc_Array_Get_Item_10                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBorder*                     K2Node_Select_Default_14                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue_1                        (None)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_15                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// float                              CallFunc_BreakVector2D_X_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeData>CallFunc_GetEnemyUpgradeLevels_ReturnValue                       (ConstParm, ReferenceParm)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_isCutsceneActive                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_doWorldCleanup                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetLocalProgressDataBag_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuBuild_Widget_C::ExecuteUbergraph_MenuBuild_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable_2, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, bool K2Node_CustomEvent_IsHovered__1, int32 K2Node_CustomEvent_HoveredIndex_1, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, bool Temp_bool_Variable_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_4, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FAnchors& K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UWidget* K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, class UWidget* K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_3, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_CustomEvent_IsHovered_, int32 K2Node_CustomEvent_HoveredIndex, class UPerkBookmarkButton_Widget_C* K2Node_CustomEvent_HoveredButton, int32 K2Node_CustomEvent_StackCount, bool Temp_bool_Variable_5, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* K2Node_Event_previousScreen, bool Temp_bool_Variable_6, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, const struct FVector2D& K2Node_Select_Default_4, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_7, TArray<class UButton*>& K2Node_MakeArray_Array, const struct FAnchors& K2Node_Select_Default_5, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype, bool CallFunc_GetBullshitClassFromCheatVerb_Found, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, class UQtnVerb* CallFunc_Array_Get_Item_2, enum class ESlateVisibility K2Node_Select_Default_6, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Greater_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_7, bool Temp_bool_Variable_8, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_3, class UWidget* K2Node_Select_Default_8, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_5, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool Temp_bool_Variable_9, bool CallFunc_Array_IsValidIndex_ReturnValue_3, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_10, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_11, class UQtnUpgrade* CallFunc_Array_Get_Item_5, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, TArray<class UPerkBookmarkButton_Widget_C*>& K2Node_CustomEvent_PerkBookmarkButtons, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, class UPerkBookmarkButton_Widget_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable_12, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_12, TArray<class UUI_BullshitCard_Widget_C*>& K2Node_MakeArray_Array_2, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_13, const struct FVector2D& K2Node_Select_Default_13, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, bool CallFunc_IsVisible_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, const struct FQtnRolledUpgradeData& CallFunc_Array_Get_Item_9, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_7, bool Temp_bool_Variable_14, bool CallFunc_Less_IntInt_ReturnValue_5, class UBorder* K2Node_Select_Default_14, class UClass* CallFunc_Array_Get_Item_11, bool CallFunc_Array_IsValidIndex_ReturnValue_4, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue_1, bool Temp_bool_Variable_15, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, const struct FVector2D& K2Node_Select_Default_15, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, TArray<struct FQtnRolledUpgradeData>& CallFunc_GetEnemyUpgradeLevels_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnTutorialStatus CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "ExecuteUbergraph_MenuBuild_Widget");

	Params::UMenuBuild_Widget_C_ExecuteUbergraph_MenuBuild_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_Event_Affordances = K2Node_Event_Affordances;
	Parms.K2Node_Event_myClass = K2Node_Event_myClass;
	Parms.K2Node_CustomEvent_IsHovered__1 = K2Node_CustomEvent_IsHovered__1;
	Parms.K2Node_CustomEvent_HoveredIndex_1 = K2Node_CustomEvent_HoveredIndex_1;
	Parms.K2Node_CustomEvent_MyCardInfo = K2Node_CustomEvent_MyCardInfo;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_1 = CallFunc_GetCanvasPanelSlot_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_IsHovered_ = K2Node_CustomEvent_IsHovered_;
	Parms.K2Node_CustomEvent_HoveredIndex = K2Node_CustomEvent_HoveredIndex;
	Parms.K2Node_CustomEvent_HoveredButton = K2Node_CustomEvent_HoveredButton;
	Parms.K2Node_CustomEvent_StackCount = K2Node_CustomEvent_StackCount;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetPerkSettings_ReturnValue = CallFunc_GetPerkSettings_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_2 = CallFunc_GetCanvasPanelSlot_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetScreenThatOwnsThisWidget_ReturnValue = CallFunc_GetScreenThatOwnsThisWidget_ReturnValue;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetCurrentUpgradesArray_ReturnValue = CallFunc_GetCurrentUpgradesArray_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype = CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype;
	Parms.CallFunc_GetBullshitClassFromCheatVerb_Found = CallFunc_GetBullshitClassFromCheatVerb_Found;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_GetVerbs_verbs = CallFunc_GetVerbs_verbs;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype = K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_3 = CallFunc_GetCanvasPanelSlot_ReturnValue_3;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_4 = CallFunc_GetCanvasPanelSlot_ReturnValue_4;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue_5 = CallFunc_GetCanvasPanelSlot_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.K2Node_CustomEvent_PerkBookmarkButtons = K2Node_CustomEvent_PerkBookmarkButtons;
	Parms.CallFunc_GetRolledUpgradeData_ReturnValue = CallFunc_GetRolledUpgradeData_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Combat_Settings = K2Node_DynamicCast_AsGlobal_Combat_Settings;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_4 = CallFunc_Array_IsValidIndex_ReturnValue_4;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue_1 = CallFunc_GetUpgradeSettings_ReturnValue_1;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_7 = CallFunc_BreakVector2D_X_7;
	Parms.CallFunc_BreakVector2D_Y_7 = CallFunc_BreakVector2D_Y_7;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_GetEnemyUpgradeLevels_ReturnValue = CallFunc_GetEnemyUpgradeLevels_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_isCutsceneActive = K2Node_CustomEvent_isCutsceneActive;
	Parms.K2Node_CustomEvent_doWorldCleanup = K2Node_CustomEvent_doWorldCleanup;
	Parms.CallFunc_GetLocalProgressDataBag_ReturnValue = CallFunc_GetLocalProgressDataBag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State = CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuBuild_Widget.MenuBuild_Widget_C.CreateCard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuBuild_Widget_C::CreateCard__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuBuild_Widget_C", "CreateCard__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


