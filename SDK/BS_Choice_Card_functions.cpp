#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BS_Choice_Card.BS_Choice_Card_C
// (Actor)

class UClass* ABS_Choice_Card_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BS_Choice_Card_C");

	return Clss;
}


// BS_Choice_Card_C BS_Choice_Card.Default__BS_Choice_Card_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABS_Choice_Card_C* ABS_Choice_Card_C::GetDefaultObj()
{
	static class ABS_Choice_Card_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABS_Choice_Card_C*>(ABS_Choice_Card_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BS_Choice_Card.BS_Choice_Card_C.ForceStreamTextures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::ForceStreamTextures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ForceStreamTextures");

	Params::ABS_Choice_Card_C_ForceStreamTextures_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SetRarityText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ChosenText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_Choice_Widget_C*   K2Node_DynamicCast_AsTribunal_Choice_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::SetRarityText(class FText ChosenText, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SetRarityText");

	Params::ABS_Choice_Card_C_SetRarityText_Params Parms{};

	Parms.ChosenText = ChosenText;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTribunal_Choice_Widget = K2Node_DynamicCast_AsTribunal_Choice_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Is in Tribunal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::Is_in_Tribunal(bool* Result, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Is in Tribunal");

	Params::ABS_Choice_Card_C_Is_in_Tribunal_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BS_Choice_Card.BS_Choice_Card_C.UpgradeFTUX_InFTUX?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allow_selection                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_Get_Current_Goals_activeGoals                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UClass*>              CallFunc_Get_Current_Goals_activeGoalClassses                    (ReferenceParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::UpgradeFTUX_InFTUX_(bool* Allow_selection, class UClass* Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* Temp_class_Variable_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "UpgradeFTUX_InFTUX?");

	Params::ABS_Choice_Card_C_UpgradeFTUX_InFTUX__Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Get_Current_Goals_activeGoals = CallFunc_Get_Current_Goals_activeGoals;
	Parms.CallFunc_Get_Current_Goals_activeGoalClassses = CallFunc_Get_Current_Goals_activeGoalClassses;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Allow_selection != nullptr)
		*Allow_selection = Parms.Allow_selection;

}


// Function BS_Choice_Card.BS_Choice_Card_C.ConvertReplicatedUpgradeSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnUpgradeSettings         ReplicatedSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnUpgradeSettings         ValidUpgradeSettings                                             (Parm, OutParm)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 K2Node_DynamicCast_AsQtn_Upgrade                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)

void ABS_Choice_Card_C::ConvertReplicatedUpgradeSettings(const struct FQtnUpgradeSettings& ReplicatedSettings, struct FQtnUpgradeSettings* ValidUpgradeSettings, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnUpgrade* K2Node_DynamicCast_AsQtn_Upgrade, bool K2Node_DynamicCast_bSuccess, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ConvertReplicatedUpgradeSettings");

	Params::ABS_Choice_Card_C_ConvertReplicatedUpgradeSettings_Params Parms{};

	Parms.ReplicatedSettings = ReplicatedSettings;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Upgrade = K2Node_DynamicCast_AsQtn_Upgrade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidUpgradeSettings != nullptr)
		*ValidUpgradeSettings = std::move(Parms.ValidUpgradeSettings);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Toggle Interactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanIneract                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_Choice_Widget_C*   K2Node_DynamicCast_AsTribunal_Choice_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::Toggle_Interactive(bool CanIneract, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Toggle Interactive");

	Params::ABS_Choice_Card_C_Toggle_Interactive_Params Parms{};

	Parms.CanIneract = CanIneract;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTribunal_Choice_Widget = K2Node_DynamicCast_AsTribunal_Choice_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SetUpCard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnBSChoice                Choice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    Player_Slot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUpgrade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AllowInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerChoice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ChosenRarityText                                                 (Edit, BlueprintVisible)
// bool                               IsPlayerChoice                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                RarityText                                                       (Edit, BlueprintVisible)
// int32                              RarityEntry                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        RarityColorTable                                                 (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    CardColor                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUpgradeChoice                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_ValidUpgradeSettings   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AJoker_Choice_Card_C*        K2Node_DynamicCast_AsJoker_Choice_Card                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_DecorateWithRichTextStyle_ReturnValue                   (None)
// class UJoker_Description_Widget_C* K2Node_DynamicCast_AsJoker_Description_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCardLevel_Widget_C*         K2Node_DynamicCast_AsCard_Level_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FLinearColor>        K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_DecorateWithRichTextStyle_ReturnValue_1                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Widget_C*       K2Node_DynamicCast_AsMenu_Upgrade_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTribunalCardTitle_Widget_C* K2Node_DynamicCast_AsTribunal_Card_Title_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_Choice_Widget_C*   K2Node_DynamicCast_AsTribunal_Choice_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::SetUpCard(const struct FQtnBSChoice& Choice, class APlayerTribunalSlot_BP_C* Player_Slot, bool IsUpgrade, bool AllowInteraction, int32 Index, bool PlayerChoice, int32 Seed, const struct FQtnUpgradeSettings& Upgrade, const struct FQtnRolledUpgradeData& RolledUpgradeData, class FText ChosenRarityText, bool IsPlayerChoice, const TArray<class FText>& RarityText, int32 RarityEntry, const TArray<struct FLinearColor>& RarityColorTable, class UMaterialInstanceDynamic* CardColor, bool IsUpgradeChoice, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_ValidUpgradeSettings, bool CallFunc_Not_PreBool_ReturnValue, class AJoker_Choice_Card_C* K2Node_DynamicCast_AsJoker_Choice_Card, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue, class UJoker_Description_Widget_C* K2Node_DynamicCast_AsJoker_Description_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCardLevel_Widget_C* K2Node_DynamicCast_AsCard_Level_Widget, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_MatchesAnyTags_ReturnValue_1, TArray<struct FLinearColor>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UTexture2D* CallFunc_Array_Get_Item_1, TArray<class FText>& K2Node_MakeArray_Array_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuUpgrade_Widget_C* K2Node_DynamicCast_AsMenu_Upgrade_Widget, bool K2Node_DynamicCast_bSuccess_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool Temp_bool_Variable, class UTribunalCardTitle_Widget_C* K2Node_DynamicCast_AsTribunal_Card_Title_Widget, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayTag& K2Node_Select_Default, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SetUpCard");

	Params::ABS_Choice_Card_C_SetUpCard_Params Parms{};

	Parms.Choice = Choice;
	Parms.Player_Slot = Player_Slot;
	Parms.IsUpgrade = IsUpgrade;
	Parms.AllowInteraction = AllowInteraction;
	Parms.Index = Index;
	Parms.PlayerChoice = PlayerChoice;
	Parms.Seed = Seed;
	Parms.Upgrade = Upgrade;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.ChosenRarityText = ChosenRarityText;
	Parms.IsPlayerChoice = IsPlayerChoice;
	Parms.RarityText = RarityText;
	Parms.RarityEntry = RarityEntry;
	Parms.RarityColorTable = RarityColorTable;
	Parms.CardColor = CardColor;
	Parms.IsUpgradeChoice = IsUpgradeChoice;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_ValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_ValidUpgradeSettings;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsJoker_Choice_Card = K2Node_DynamicCast_AsJoker_Choice_Card;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.CallFunc_DecorateWithRichTextStyle_ReturnValue = CallFunc_DecorateWithRichTextStyle_ReturnValue;
	Parms.K2Node_DynamicCast_AsJoker_Description_Widget = K2Node_DynamicCast_AsJoker_Description_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCard_Level_Widget = K2Node_DynamicCast_AsCard_Level_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_MatchesAnyTags_ReturnValue_1 = CallFunc_MatchesAnyTags_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DecorateWithRichTextStyle_ReturnValue_1 = CallFunc_DecorateWithRichTextStyle_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMenu_Upgrade_Widget = K2Node_DynamicCast_AsMenu_Upgrade_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsTribunal_Card_Title_Widget = K2Node_DynamicCast_AsTribunal_Card_Title_Widget;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_2 = CallFunc_GetUserWidgetObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsTribunal_Choice_Widget = K2Node_DynamicCast_AsTribunal_Choice_Widget;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SlamCard__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::SlamCard__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SlamCard__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SlamCard__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::SlamCard__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SlamCard__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.CardFly__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::CardFly__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "CardFly__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.CardFly__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::CardFly__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "CardFly__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Rotate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Rotate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Rotate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Rotate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Rotate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Rotate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.FloatUpDown__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::FloatUpDown__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "FloatUpDown__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.FloatUpDown__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::FloatUpDown__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "FloatUpDown__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Flair__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Flair__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Flair__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Flair__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Flair__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Flair__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.LevelFlair__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::LevelFlair__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "LevelFlair__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.LevelFlair__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::LevelFlair__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "LevelFlair__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_4__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_4__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.Timeline_4__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "Timeline_4__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.OnLoaded_D715DC5C44C563108BD63580F56B9BC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::OnLoaded_D715DC5C44C563108BD63580F56B9BC2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "OnLoaded_D715DC5C44C563108BD63580F56B9BC2");

	Params::ABS_Choice_Card_C_OnLoaded_D715DC5C44C563108BD63580F56B9BC2_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.OnLoaded_EC2D170642A690298D64B384B4F70BE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::OnLoaded_EC2D170642A690298D64B384B4F70BE4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "OnLoaded_EC2D170642A690298D64B384B4F70BE4");

	Params::ABS_Choice_Card_C_OnLoaded_EC2D170642A690298D64B384B4F70BE4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.CardSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::CardSelected(bool WasSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "CardSelected");

	Params::ABS_Choice_Card_C_CardSelected_Params Parms{};

	Parms.WasSelected = WasSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.PlayCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::PlayCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "PlayCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.CardFlyIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DelayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*Cman                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::CardFlyIn(float DelayTime, class AScriptedSkeletalActor_Trial_C* Cman, bool Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "CardFlyIn");

	Params::ABS_Choice_Card_C_CardFlyIn_Params Parms{};

	Parms.DelayTime = DelayTime;
	Parms.Cman = Cman;
	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.CardSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnemy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::CardSkin(bool IsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "CardSkin");

	Params::ABS_Choice_Card_C_CardSkin_Params Parms{};

	Parms.IsEnemy = IsEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BndEvt__CardWidget_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::BndEvt__CardWidget_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BndEvt__CardWidget_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");

	Params::ABS_Choice_Card_C_BndEvt__CardWidget_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BndEvt__CardWidget_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::BndEvt__CardWidget_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BndEvt__CardWidget_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");

	Params::ABS_Choice_Card_C_BndEvt__CardWidget_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnBSChoice                Choice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUpgrade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         UpgradeChoice                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABS_Choice_Card_C::SetImage(const struct FQtnBSChoice& Choice, bool IsUpgrade, const struct FQtnUpgradeSettings& UpgradeChoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SetImage");

	Params::ABS_Choice_Card_C_SetImage_Params Parms{};

	Parms.Choice = Choice;
	Parms.IsUpgrade = IsUpgrade;
	Parms.UpgradeChoice = UpgradeChoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BurnCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::BurnCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BurnCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.AceInTheHole
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::AceInTheHole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "AceInTheHole");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BonusLevels
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::BonusLevels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BonusLevels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.OnForceHoverBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::OnForceHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "OnForceHoverBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.OnForceHoverEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::OnForceHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "OnForceHoverEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.GamepadClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::GamepadClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "GamepadClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.ToggleUnselectableForTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unselectable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::ToggleUnselectableForTutorial(bool Unselectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ToggleUnselectableForTutorial");

	Params::ABS_Choice_Card_C_ToggleUnselectableForTutorial_Params Parms{};

	Parms.Unselectable = Unselectable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.FloatCardsSelectable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::FloatCardsSelectable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "FloatCardsSelectable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.FloatCardsUnselectable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::FloatCardsUnselectable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "FloatCardsUnselectable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABS_Choice_Card_C::BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature");

	Params::ABS_Choice_Card_C_BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature");

	Params::ABS_Choice_Card_C_BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Choice_Card_C::BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature");

	Params::ABS_Choice_Card_C_BndEvt__BS_Choice_Card_ButtonWidget_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Choice_Card.BS_Choice_Card_C.HoverOnFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::HoverOnFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "HoverOnFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.HoverOffFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::HoverOffFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "HoverOffFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.OnFlyInComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::OnFlyInComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "OnFlyInComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.FlyOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::FlyOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "FlyOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.SacrificeVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Choice_Card_C::SacrificeVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "SacrificeVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Choice_Card.BS_Choice_Card_C.ExecuteUbergraph_BS_Choice_Card
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wasSelected                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_CustomEvent_delayTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*K2Node_CustomEvent_Cman                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Interactable                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_Choice_Widget_C*   K2Node_DynamicCast_AsTribunal_Choice_Widget                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVectorAtDistanceAlongSpline_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZY_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_isEnemy                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnBSChoice                K2Node_CustomEvent_choice                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUpgrade                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnUpgradeSettings         K2Node_CustomEvent_upgradeChoice                                 (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTribunal_Choice_Widget_C*   K2Node_DynamicCast_AsTribunal_Choice_Widget_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCardLevel_Widget_C*         K2Node_DynamicCast_AsCard_Level_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpgradeFTUX_InFTUX__Allow_selection                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_in_Tribunal_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Unselectable                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed                         (HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseSwitchQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABS_Choice_Card_C::ExecuteUbergraph_BS_Choice_Card(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, const struct FRotator& Temp_struct_Variable, const struct FRotator& K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool K2Node_CustomEvent_wasSelected, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float K2Node_CustomEvent_delayTime, class AScriptedSkeletalActor_Trial_C* K2Node_CustomEvent_Cman, bool K2Node_CustomEvent_Interactable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetRightVectorAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZY_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, bool K2Node_CustomEvent_isEnemy, bool Temp_bool_IsClosed_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FQtnBSChoice& K2Node_CustomEvent_choice, bool K2Node_CustomEvent_isUpgrade, const struct FQtnUpgradeSettings& K2Node_CustomEvent_upgradeChoice, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_3, bool K2Node_DynamicCast_bSuccess_4, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, class UQtnBullshitBPBaseArchetype_C* K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_DynamicCast_bSuccess_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UTribunal_Choice_Widget_C* K2Node_DynamicCast_AsTribunal_Choice_Widget_1, bool K2Node_DynamicCast_bSuccess_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCardLevel_Widget_C* K2Node_DynamicCast_AsCard_Level_Widget, bool K2Node_DynamicCast_bSuccess_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, bool CallFunc_UpgradeFTUX_InFTUX__Allow_selection, bool CallFunc_Is_in_Tribunal_Result, bool K2Node_CustomEvent_Unselectable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_2, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, bool CallFunc_UseSwitchQuality_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Choice_Card_C", "ExecuteUbergraph_BS_Choice_Card");

	Params::ABS_Choice_Card_C_ExecuteUbergraph_BS_Choice_Card_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CustomEvent_wasSelected = K2Node_CustomEvent_wasSelected;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.K2Node_CustomEvent_delayTime = K2Node_CustomEvent_delayTime;
	Parms.K2Node_CustomEvent_Cman = K2Node_CustomEvent_Cman;
	Parms.K2Node_CustomEvent_Interactable = K2Node_CustomEvent_Interactable;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTribunal_Choice_Widget = K2Node_DynamicCast_AsTribunal_Choice_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_GetRightVectorAtDistanceAlongSpline_ReturnValue = CallFunc_GetRightVectorAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_MakeRotFromZY_ReturnValue = CallFunc_MakeRotFromZY_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.K2Node_CustomEvent_isEnemy = K2Node_CustomEvent_isEnemy;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_4 = K2Node_ComponentBoundEvent_TouchedComponent_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_3 = K2Node_ComponentBoundEvent_TouchedComponent_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_choice = K2Node_CustomEvent_choice;
	Parms.K2Node_CustomEvent_isUpgrade = K2Node_CustomEvent_isUpgrade;
	Parms.K2Node_CustomEvent_upgradeChoice = K2Node_CustomEvent_upgradeChoice;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D_2 = K2Node_DynamicCast_AsTexture_2D_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D_3 = K2Node_DynamicCast_AsTexture_2D_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTribunal_Choice_Widget_1 = K2Node_DynamicCast_AsTribunal_Choice_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCard_Level_Widget = K2Node_DynamicCast_AsCard_Level_Widget;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_UpgradeFTUX_InFTUX__Allow_selection = CallFunc_UpgradeFTUX_InFTUX__Allow_selection;
	Parms.CallFunc_Is_in_Tribunal_Result = CallFunc_Is_in_Tribunal_Result;
	Parms.K2Node_CustomEvent_Unselectable = K2Node_CustomEvent_Unselectable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_2 = K2Node_ComponentBoundEvent_TouchedComponent_2;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed = K2Node_ComponentBoundEvent_ButtonPressed;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_1 = K2Node_ComponentBoundEvent_TouchedComponent_1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent = K2Node_ComponentBoundEvent_TouchedComponent;
	Parms.CallFunc_UseSwitchQuality_ReturnValue = CallFunc_UseSwitchQuality_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue_1 = CallFunc_Conv_FloatToVector_ReturnValue_1;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


