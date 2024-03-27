#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UnlockMenu_Widget.UnlockMenu_Widget_C
// (None)

class UClass* UUnlockMenu_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockMenu_Widget_C");

	return Clss;
}


// UnlockMenu_Widget_C UnlockMenu_Widget.Default__UnlockMenu_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnlockMenu_Widget_C* UUnlockMenu_Widget_C::GetDefaultObj()
{
	static class UUnlockMenu_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockMenu_Widget_C*>(UUnlockMenu_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "RequestCurrencyVisibilities");

	Params::UUnlockMenu_Widget_C_RequestCurrencyVisibilities_Params Parms{};

	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnUnlockListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnUnlockListEntryPressed");

	Params::UUnlockMenu_Widget_C_OnUnlockListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.SequenceEvent__ENTRYPOINTUnlockMenu_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::SequenceEvent__ENTRYPOINTUnlockMenu_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "SequenceEvent__ENTRYPOINTUnlockMenu_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.UpdateGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::UpdateGamepadFocus(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "UpdateGamepadFocus");

	Params::UUnlockMenu_Widget_C_UpdateGamepadFocus_Params Parms{};

	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.HideTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::HideTooltip(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "HideTooltip");

	Params::UUnlockMenu_Widget_C_HideTooltip_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.CheckForHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LOCAL_HoveredFound                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::CheckForHover(bool LOCAL_HoveredFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "CheckForHover");

	Params::UUnlockMenu_Widget_C_CheckForHover_Params Parms{};

	Parms.LOCAL_HoveredFound = LOCAL_HoveredFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.CreateTooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            TooltipCanvasPanelSlot                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_GetCanvasPanelSlot_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUnlockTooltip_Widget_C*     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::CreateTooltip(class UCanvasPanelSlot** TooltipCanvasPanelSlot, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUnlockTooltip_Widget_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "CreateTooltip");

	Params::UUnlockMenu_Widget_C_CreateTooltip_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCanvasPanelSlot_ReturnValue = CallFunc_GetCanvasPanelSlot_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TooltipCanvasPanelSlot != nullptr)
		*TooltipCanvasPanelSlot = Parms.TooltipCanvasPanelSlot;

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.AddUnlockToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Unlock_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUnlocksComponent*        OwningUnlockComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUnlockData_O_C*             CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::AddUnlockToList(class FName Unlock_ID, class UQtnUnlocksComponent* OwningUnlockComponent, class UUnlockData_O_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "AddUnlockToList");

	Params::UUnlockMenu_Widget_C_AddUnlockToList_Params Parms{};

	Parms.Unlock_ID = Unlock_ID;
	Parms.OwningUnlockComponent = OwningUnlockComponent;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.GenerateUnlockList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UQtnUnlocksComponent*        LOCAL_UnlocksComponent                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                LOCAL_UnlockNameIDs                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUnlockData_O_C*             CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockInfo_displayName                               (None)
// class FText                        CallFunc_GetUnlockInfo_description                               (None)
// bool                               CallFunc_GetUnlockInfo_isSecret                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetUnlockInfo_icon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockKey                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockCategory                            (NoDestructor, HasGetValueTypeHash)
// struct FQtnUnlockRewards           CallFunc_GetUnlockInfo_unlockRewards                             (None)
// class FText                        CallFunc_GetUnlockInfo_rewardName                                (None)
// TSubclassOf<class UQtnDLCInfo>     CallFunc_GetUnlockInfo_requiredDLC                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::GenerateUnlockList(TArray<class FName>& Array, class UQtnUnlocksComponent* LOCAL_UnlocksComponent, const TArray<class FName>& LOCAL_UnlockNameIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, class UUnlockData_O_C* CallFunc_SpawnObject_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "GenerateUnlockList");

	Params::UUnlockMenu_Widget_C_GenerateUnlockList_Params Parms{};

	Parms.Array = Array;
	Parms.LOCAL_UnlocksComponent = LOCAL_UnlocksComponent;
	Parms.LOCAL_UnlockNameIDs = LOCAL_UnlockNameIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUnlockInfo_displayName = CallFunc_GetUnlockInfo_displayName;
	Parms.CallFunc_GetUnlockInfo_description = CallFunc_GetUnlockInfo_description;
	Parms.CallFunc_GetUnlockInfo_isSecret = CallFunc_GetUnlockInfo_isSecret;
	Parms.CallFunc_GetUnlockInfo_icon = CallFunc_GetUnlockInfo_icon;
	Parms.CallFunc_GetUnlockInfo_unlockKey = CallFunc_GetUnlockInfo_unlockKey;
	Parms.CallFunc_GetUnlockInfo_unlockCategory = CallFunc_GetUnlockInfo_unlockCategory;
	Parms.CallFunc_GetUnlockInfo_unlockRewards = CallFunc_GetUnlockInfo_unlockRewards;
	Parms.CallFunc_GetUnlockInfo_rewardName = CallFunc_GetUnlockInfo_rewardName;
	Parms.CallFunc_GetUnlockInfo_requiredDLC = CallFunc_GetUnlockInfo_requiredDLC;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.UpdateAffordance
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

void UUnlockMenu_Widget_C::UpdateAffordance(bool IsUsingMouseKeyboard, bool LOCAL_MouseKeyboard, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "UpdateAffordance");

	Params::UUnlockMenu_Widget_C_UpdateAffordance_Params Parms{};

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


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "UpdateGlobalNavAffordances");

	Params::UUnlockMenu_Widget_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.IntroRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::IntroRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "IntroRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.AnimSeq_ToggleMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::AnimSeq_ToggleMenu(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "AnimSeq_ToggleMenu");

	Params::UUnlockMenu_Widget_C_AnimSeq_ToggleMenu_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnQtnWidgetResumed");

	Params::UUnlockMenu_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.InputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::InputChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "InputChange");

	Params::UUnlockMenu_Widget_C_InputChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnUIScroll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::OnUIScroll(float ScrollDelta, bool FromStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnUIScroll");

	Params::UUnlockMenu_Widget_C_OnUIScroll_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;
	Parms.FromStick = FromStick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnUIScreenActionPressed");

	Params::UUnlockMenu_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnQtnWidgetUnInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::OnQtnWidgetUnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnQtnWidgetUnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockMenu_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "PreConstruct");

	Params::UUnlockMenu_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnUnlockListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnUnlockListEntryHovered");

	Params::UUnlockMenu_Widget_C_OnUnlockListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::ItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "ItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.OnQtnWidgetHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUnlockMenu_Widget_C::OnQtnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "OnQtnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockMenu_Widget.UnlockMenu_Widget_C.ExecuteUbergraph_UnlockMenu_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UDataTable*                  CallFunc_GetUnlocksDataTable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   K2Node_Event_Affordances                                         (ConstParm)
// class UClass*                      K2Node_Event_myClass                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               K2Node_CustomEvent_WantShown                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_scrollDelta                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_fromStick                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               K2Node_Event_IsHovered                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    K2Node_Event_UnlockLineItem                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockMenu_Widget_C::ExecuteUbergraph_UnlockMenu_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDataTable* CallFunc_GetUnlocksDataTable_ReturnValue, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool K2Node_CustomEvent_WantShown, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_Event_IsHovered, class UUnlockLineItem_Widget_C* K2Node_Event_UnlockLineItem, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockMenu_Widget_C", "ExecuteUbergraph_UnlockMenu_Widget");

	Params::UUnlockMenu_Widget_C_ExecuteUbergraph_UnlockMenu_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUnlocksDataTable_ReturnValue = CallFunc_GetUnlocksDataTable_ReturnValue;
	Parms.K2Node_Event_Affordances = K2Node_Event_Affordances;
	Parms.K2Node_Event_myClass = K2Node_Event_myClass;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.K2Node_CustomEvent_WantShown = K2Node_CustomEvent_WantShown;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.CallFunc_GetOwningScreen_ReturnValue_1 = CallFunc_GetOwningScreen_ReturnValue_1;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.K2Node_Event_scrollDelta = K2Node_Event_scrollDelta;
	Parms.K2Node_Event_fromStick = K2Node_Event_fromStick;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Event_IsHovered = K2Node_Event_IsHovered;
	Parms.K2Node_Event_UnlockLineItem = K2Node_Event_UnlockLineItem;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


