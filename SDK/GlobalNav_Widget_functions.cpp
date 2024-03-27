#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GlobalNav_Widget.GlobalNav_Widget_C
// (None)

class UClass* UGlobalNav_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalNav_Widget_C");

	return Clss;
}


// GlobalNav_Widget_C GlobalNav_Widget.Default__GlobalNav_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalNav_Widget_C* UGlobalNav_Widget_C::GetDefaultObj()
{
	static class UGlobalNav_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalNav_Widget_C*>(UGlobalNav_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RequestCurrencyVisibilities");

	Params::UGlobalNav_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.SequenceEvent__ENTRYPOINTGlobalNav_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::SequenceEvent__ENTRYPOINTGlobalNav_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "SequenceEvent__ENTRYPOINTGlobalNav_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.GetGateTimerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_GateTimer_Widget_C*      BP_GateTimer_Widget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUDScreen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::GetGateTimerWidget(class UBP_GateTimer_Widget_C** BP_GateTimer_Widget, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "GetGateTimerWidget");

	Params::UGlobalNav_Widget_C_GetGateTimerWidget_Params Parms{};

	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BP_GateTimer_Widget != nullptr)
		*BP_GateTimer_Widget = Parms.BP_GateTimer_Widget;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.IsGlobalNavInputBlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBlocked_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::IsGlobalNavInputBlocked_(bool* IsBlocked_, class UObject* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "IsGlobalNavInputBlocked?");

	Params::UGlobalNav_Widget_C_IsGlobalNavInputBlocked__Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBlocked_ != nullptr)
		*IsBlocked_ = Parms.IsBlocked_;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RemoveGlobalNavInputBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     RequesterUnblock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::RemoveGlobalNavInputBlocker(class UObject* RequesterUnblock, class UObject* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RemoveGlobalNavInputBlocker");

	Params::UGlobalNav_Widget_C_RemoveGlobalNavInputBlocker_Params Parms{};

	Parms.RequesterUnblock = RequesterUnblock;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.AddGlobalNavInputBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     RequestingObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::AddGlobalNavInputBlocker(class UObject* RequestingObject, class UObject* Temp_object_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "AddGlobalNavInputBlocker");

	Params::UGlobalNav_Widget_C_AddGlobalNavInputBlocker_Params Parms{};

	Parms.RequestingObject = RequestingObject;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RefreshWalletVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::RefreshWalletVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RefreshWalletVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.SetIsDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetTo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::SetIsDisabled(bool SetTo, bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "SetIsDisabled");

	Params::UGlobalNav_Widget_C_SetIsDisabled_Params Parms{};

	Parms.SetTo = SetTo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.CheckForRequiredDataBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDataBag*                 DataBagPtr                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasDataBag                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 DataBag                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::CheckForRequiredDataBag(class UClass* Class, class UQtnDataBag* DataBagPtr, bool* HasDataBag, class UQtnDataBag** DataBag, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnDataBag* CallFunc_GetCustomDataBag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "CheckForRequiredDataBag");

	Params::UGlobalNav_Widget_C_CheckForRequiredDataBag_Params Parms{};

	Parms.Class = Class;
	Parms.DataBagPtr = DataBagPtr;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasDataBag != nullptr)
		*HasDataBag = Parms.HasDataBag;

	if (DataBag != nullptr)
		*DataBag = Parms.DataBag;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.UnregisterArmoryVOActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::UnregisterArmoryVOActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "UnregisterArmoryVOActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RegisterArmoryVOActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewArmoryVOActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      GlobalArmoryVOActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::RegisterArmoryVOActor(class AActor* NewArmoryVOActor, class AActor* GlobalArmoryVOActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RegisterArmoryVOActor");

	Params::UGlobalNav_Widget_C_RegisterArmoryVOActor_Params Parms{};

	Parms.NewArmoryVOActor = NewArmoryVOActor;
	Parms.GlobalArmoryVOActor = GlobalArmoryVOActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.CheckForTrainingMoment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RequestingMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InTrainingMoment                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 LOCAL_RequestingMenu                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class UMenu_DarkMatterPerks_C*     K2Node_DynamicCast_AsMenu_Dark_Matter_Perks                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class UMenuMatchmaking_Widget_C*   K2Node_DynamicCast_AsMenu_Matchmaking_Widget                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_5                            (ZeroConstructor, HasGetValueTypeHash)
// class UMenuEquipment_Widget_C*     K2Node_DynamicCast_AsMenu_Equipment_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_6                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_7                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_8                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_9                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_23                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_24                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_25                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_26                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_27                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_28                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::CheckForTrainingMoment(class UUserWidget* RequestingMenu, bool* InTrainingMoment, class UUserWidget* LOCAL_RequestingMenu, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class UMenu_DarkMatterPerks_C* K2Node_DynamicCast_AsMenu_Dark_Matter_Perks, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UMenuMatchmaking_Widget_C* K2Node_DynamicCast_AsMenu_Matchmaking_Widget, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue_5, class UMenuEquipment_Widget_C* K2Node_DynamicCast_AsMenu_Equipment_Widget, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetDisplayName_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_GetDisplayName_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_GetDisplayName_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, const class FString& CallFunc_Concat_StrStr_ReturnValue_28, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "CheckForTrainingMoment");

	Params::UGlobalNav_Widget_C_CheckForTrainingMoment_Params Parms{};

	Parms.RequestingMenu = RequestingMenu;
	Parms.LOCAL_RequestingMenu = LOCAL_RequestingMenu;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMenu_Dark_Matter_Perks = K2Node_DynamicCast_AsMenu_Dark_Matter_Perks;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsMenu_Matchmaking_Widget = K2Node_DynamicCast_AsMenu_Matchmaking_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_4 = CallFunc_GetDisplayName_ReturnValue_4;
	Parms.CallFunc_GetDisplayName_ReturnValue_5 = CallFunc_GetDisplayName_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsMenu_Equipment_Widget = K2Node_DynamicCast_AsMenu_Equipment_Widget;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetDisplayName_ReturnValue_6 = CallFunc_GetDisplayName_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_7 = CallFunc_GetDisplayName_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_GetDisplayName_ReturnValue_8 = CallFunc_GetDisplayName_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_GetDisplayName_ReturnValue_9 = CallFunc_GetDisplayName_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;
	Parms.CallFunc_Concat_StrStr_ReturnValue_23 = CallFunc_Concat_StrStr_ReturnValue_23;
	Parms.CallFunc_Concat_StrStr_ReturnValue_24 = CallFunc_Concat_StrStr_ReturnValue_24;
	Parms.CallFunc_Concat_StrStr_ReturnValue_25 = CallFunc_Concat_StrStr_ReturnValue_25;
	Parms.CallFunc_Concat_StrStr_ReturnValue_26 = CallFunc_Concat_StrStr_ReturnValue_26;
	Parms.CallFunc_Concat_StrStr_ReturnValue_27 = CallFunc_Concat_StrStr_ReturnValue_27;
	Parms.CallFunc_Concat_StrStr_ReturnValue_28 = CallFunc_Concat_StrStr_ReturnValue_28;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld;

	UObject::ProcessEvent(Func, &Parms);

	if (InTrainingMoment != nullptr)
		*InTrainingMoment = Parms.InTrainingMoment;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnDebugDisplay");

	Params::UGlobalNav_Widget_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.TrainingMoment_NotifyPowerTrainingAccessSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuEquipment_Widget_C*     K2Node_DynamicCast_AsMenu_Equipment_Widget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::TrainingMoment_NotifyPowerTrainingAccessSource(class UWidget* Widget, class UMenuEquipment_Widget_C* K2Node_DynamicCast_AsMenu_Equipment_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "TrainingMoment_NotifyPowerTrainingAccessSource");

	Params::UGlobalNav_Widget_C_TrainingMoment_NotifyPowerTrainingAccessSource_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_DynamicCast_AsMenu_Equipment_Widget = K2Node_DynamicCast_AsMenu_Equipment_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.CanPlayPerkVO
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanPlay                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForRequiredDataBag_HasDataBag                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 CallFunc_CheckForRequiredDataBag_DataBag                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              K2Node_DynamicCast_AsFTUXData_Bag                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::CanPlayPerkVO(bool* CanPlay, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CheckForRequiredDataBag_HasDataBag, class UQtnDataBag* CallFunc_CheckForRequiredDataBag_DataBag, class UFTUXDataBag_C* K2Node_DynamicCast_AsFTUXData_Bag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "CanPlayPerkVO");

	Params::UGlobalNav_Widget_C_CanPlayPerkVO_Params Parms{};

	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CheckForRequiredDataBag_HasDataBag = CallFunc_CheckForRequiredDataBag_HasDataBag;
	Parms.CallFunc_CheckForRequiredDataBag_DataBag = CallFunc_CheckForRequiredDataBag_DataBag;
	Parms.K2Node_DynamicCast_AsFTUXData_Bag = K2Node_DynamicCast_AsFTUXData_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CanPlay != nullptr)
		*CanPlay = Parms.CanPlay;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.DispatchPerkVOEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForRequiredDataBag_HasDataBag                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 CallFunc_CheckForRequiredDataBag_DataBag                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayPerkVO_canPlay                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionDataBag_C*           K2Node_DynamicCast_AsMission_Data_Bag                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UGlobalNav_Widget_C::DispatchPerkVOEvent(const struct FGameplayTag& EventType, float Scale, bool CallFunc_CheckForRequiredDataBag_HasDataBag, class UQtnDataBag* CallFunc_CheckForRequiredDataBag_DataBag, bool CallFunc_CanPlayPerkVO_canPlay, class UMissionDataBag_C* K2Node_DynamicCast_AsMission_Data_Bag, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "DispatchPerkVOEvent");

	Params::UGlobalNav_Widget_C_DispatchPerkVOEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.Scale = Scale;
	Parms.CallFunc_CheckForRequiredDataBag_HasDataBag = CallFunc_CheckForRequiredDataBag_HasDataBag;
	Parms.CallFunc_CheckForRequiredDataBag_DataBag = CallFunc_CheckForRequiredDataBag_DataBag;
	Parms.CallFunc_CanPlayPerkVO_canPlay = CallFunc_CanPlayPerkVO_canPlay;
	Parms.K2Node_DynamicCast_AsMission_Data_Bag = K2Node_DynamicCast_AsMission_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.UnregisterPerkVOActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::UnregisterPerkVOActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "UnregisterPerkVOActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RegisterPerkVOActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewPerkVOActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::RegisterPerkVOActor(class AActor* NewPerkVOActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RegisterPerkVOActor");

	Params::UGlobalNav_Widget_C_RegisterPerkVOActor_Params Parms{};

	Parms.NewPerkVOActor = NewPerkVOActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Find Unlocked Category
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              StartingCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GoBackwards                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              UnlockedIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LastIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumAttemptsRemaining                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GoingBackwards                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FoundSomething                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              WorkingIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QtnWrapInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCategoryUnlocked_isUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_QtnWrapInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCategoryUnlocked_isUnlocked_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::Find_Unlocked_Category(int32 StartingCategory, bool GoBackwards, int32* UnlockedIndex, bool* Success, int32 LastIndex, int32 NumAttemptsRemaining, bool GoingBackwards, bool FoundSomething, int32 WorkingIndex, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_QtnWrapInt_ReturnValue, bool CallFunc_IsCategoryUnlocked_isUnlocked, int32 CallFunc_QtnWrapInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsCategoryUnlocked_isUnlocked_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Find Unlocked Category");

	Params::UGlobalNav_Widget_C_Find_Unlocked_Category_Params Parms{};

	Parms.StartingCategory = StartingCategory;
	Parms.GoBackwards = GoBackwards;
	Parms.LastIndex = LastIndex;
	Parms.NumAttemptsRemaining = NumAttemptsRemaining;
	Parms.GoingBackwards = GoingBackwards;
	Parms.FoundSomething = FoundSomething;
	Parms.WorkingIndex = WorkingIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_QtnWrapInt_ReturnValue = CallFunc_QtnWrapInt_ReturnValue;
	Parms.CallFunc_IsCategoryUnlocked_isUnlocked = CallFunc_IsCategoryUnlocked_isUnlocked;
	Parms.CallFunc_QtnWrapInt_ReturnValue_1 = CallFunc_QtnWrapInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsCategoryUnlocked_isUnlocked_1 = CallFunc_IsCategoryUnlocked_isUnlocked_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UnlockedIndex != nullptr)
		*UnlockedIndex = Parms.UnlockedIndex;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.IsCategoryUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnlocked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_CurrentArc                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForRequiredDataBag_HasDataBag                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 CallFunc_CheckForRequiredDataBag_DataBag                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionDataBag_C*           K2Node_DynamicCast_AsMission_Data_Bag                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForRequiredDataBag_HasDataBag_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDataBag*                 CallFunc_CheckForRequiredDataBag_DataBag_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              K2Node_DynamicCast_AsFTUXData_Bag                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::IsCategoryUnlocked(int32 CategoryIndex, bool* IsUnlocked, bool Result, class FName CallFunc_MakeLiteralName_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_GetTutorialBoolValue_ReturnValue, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue_1, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_GetTutorialBoolValue_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_GetCurrentArc_CurrentArc, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_CheckForRequiredDataBag_HasDataBag, class UQtnDataBag* CallFunc_CheckForRequiredDataBag_DataBag, bool CallFunc_BooleanAND_ReturnValue, class UMissionDataBag_C* K2Node_DynamicCast_AsMission_Data_Bag, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CheckForRequiredDataBag_HasDataBag_1, class UQtnDataBag* CallFunc_CheckForRequiredDataBag_DataBag_1, class UFTUXDataBag_C* K2Node_DynamicCast_AsFTUXData_Bag, bool K2Node_DynamicCast_bSuccess_1, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_2, bool CallFunc_BooleanOR_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "IsCategoryUnlocked");

	Params::UGlobalNav_Widget_C_IsCategoryUnlocked_Params Parms{};

	Parms.CategoryIndex = CategoryIndex;
	Parms.Result = Result;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue_1 = CallFunc_GetTutorialBoolValue_ReturnValue_1;
	Parms.CallFunc_GetTutorialState_ReturnValue_1 = CallFunc_GetTutorialState_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue_2 = CallFunc_GetTutorialBoolValue_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetTutorialState_ReturnValue_2 = CallFunc_GetTutorialState_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetCurrentArc_CurrentArc = CallFunc_GetCurrentArc_CurrentArc;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_CheckForRequiredDataBag_HasDataBag = CallFunc_CheckForRequiredDataBag_HasDataBag;
	Parms.CallFunc_CheckForRequiredDataBag_DataBag = CallFunc_CheckForRequiredDataBag_DataBag;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Data_Bag = K2Node_DynamicCast_AsMission_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CheckForRequiredDataBag_HasDataBag_1 = CallFunc_CheckForRequiredDataBag_HasDataBag_1;
	Parms.CallFunc_CheckForRequiredDataBag_DataBag_1 = CallFunc_CheckForRequiredDataBag_DataBag_1;
	Parms.K2Node_DynamicCast_AsFTUXData_Bag = K2Node_DynamicCast_AsFTUXData_Bag;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_1 = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_2 = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnlocked != nullptr)
		*IsUnlocked = Parms.IsUnlocked;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.UpdateBottomAffordance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             AffordanceWidgets                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAffordance_Widget_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::UpdateBottomAffordance(const TArray<class UWidget*>& AffordanceWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UAffordance_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "UpdateBottomAffordance");

	Params::UGlobalNav_Widget_C_UpdateBottomAffordance_Params Parms{};

	Parms.AffordanceWidgets = AffordanceWidgets;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.UpdateLocalAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseKB                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::UpdateLocalAffordance(bool IsUsingMouseKB, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "UpdateLocalAffordance");

	Params::UGlobalNav_Widget_C_UpdateLocalAffordance_Params Parms{};

	Parms.IsUsingMouseKB = IsUsingMouseKB;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Update All Global Nav Buttons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RequestingMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGlobalNavButton_Widget_C*>ButtonArray                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForTrainingMoment_InTrainingMoment                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGlobalNavButton_Widget_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCategoryUnlocked_isUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::Update_All_Global_Nav_Buttons(class UUserWidget* RequestingMenu, const TArray<class UGlobalNavButton_Widget_C*>& ButtonArray, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_CheckForTrainingMoment_InTrainingMoment, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld, class UGlobalNavButton_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsCategoryUnlocked_isUnlocked, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Update All Global Nav Buttons");

	Params::UGlobalNav_Widget_C_Update_All_Global_Nav_Buttons_Params Parms{};

	Parms.RequestingMenu = RequestingMenu;
	Parms.ButtonArray = ButtonArray;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CheckForTrainingMoment_InTrainingMoment = CallFunc_CheckForTrainingMoment_InTrainingMoment;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsCategoryUnlocked_isUnlocked = CallFunc_IsCategoryUnlocked_isUnlocked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.CheckIfMapIsAMissionWorld?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               MissionWorld                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MapIsMissionWorld                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::CheckIfMapIsAMissionWorld_(bool* MissionWorld, bool MapIsMissionWorld, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "CheckIfMapIsAMissionWorld?");

	Params::UGlobalNav_Widget_C_CheckIfMapIsAMissionWorld__Params Parms{};

	Parms.MapIsMissionWorld = MapIsMissionWorld;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MissionWorld != nullptr)
		*MissionWorld = Parms.MissionWorld;

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.LoadRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::LoadRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "LoadRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Anim_MenuOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::Anim_MenuOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Anim_MenuOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Anim_MenuClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::Anim_MenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Anim_MenuClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnQtnWidgetResumed");

	Params::UGlobalNav_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnUIScreenActionPressed");

	Params::UGlobalNav_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Event_ShowMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::Event_ShowMenu(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Event_ShowMenu");

	Params::UGlobalNav_Widget_C_Event_ShowMenu_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.Event_CycleMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::Event_CycleMenu(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "Event_CycleMenu");

	Params::UGlobalNav_Widget_C_Event_CycleMenu_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.InputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::InputChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "InputChange");

	Params::UGlobalNav_Widget_C_InputChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalNav_Widget_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "UpdateGlobalNavAffordances");

	Params::UGlobalNav_Widget_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.ResetPerkIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::ResetPerkIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "ResetPerkIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnPerkIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::OnPerkIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnPerkIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.OnCurrencyChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalNav_Widget_C::OnCurrencyChangedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "OnCurrencyChangedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.SetupCurrencyVisibilities_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::SetupCurrencyVisibilities_1(bool ShowTP, bool ShowDM, bool ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "SetupCurrencyVisibilities_1");

	Params::UGlobalNav_Widget_C_SetupCurrencyVisibilities_1_Params Parms{};

	Parms.ShowTP = ShowTP;
	Parms.ShowDM = ShowDM;
	Parms.ShowPP = ShowPP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalNav_Widget.GlobalNav_Widget_C.ExecuteUbergraph_GlobalNav_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfMapIsAMissionWorld__MissionWorld                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UUserWidget>     Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Unlocked_Category_unlockedIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Unlocked_Category_success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         CallFunc_ShowUserWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_HideUserWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Unlocked_Category_unlockedIndex_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Unlocked_Category_success_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FText>   K2Node_Event_Affordances                                         (ConstParm)
// class UClass*                      K2Node_Event_myClass                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAffordance_Widget_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Unlocked_Category_unlockedIndex_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Unlocked_Category_success_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UUserWidget>     Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// TSubclassOf<class UUserWidget>     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCurrencyEntry           K2Node_MakeStruct_QtnCurrencyEntry                               (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShowTP                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShowDM                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShowPP                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_ShowUserWidget_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlobalNavAffordance_Interface_C>K2Node_DynamicCast_AsGlobal_Nav_Affordance_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGlobalNavWallet_BPI_C>K2Node_DynamicCast_AsGlobal_Nav_Wallet_BPI                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestCurrencyVisibilities_ShowTP                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestCurrencyVisibilities_ShowDM                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestCurrencyVisibilities_ShowPP                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGlobalNavInputBlocked__IsBlocked_                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalNav_Widget_C::ExecuteUbergraph_GlobalNav_Widget(int32 EntryPoint, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, int32 K2Node_CustomEvent_CurrentIndex, bool CallFunc_CheckIfMapIsAMissionWorld__MissionWorld, TSubclassOf<class UUserWidget> Temp_class_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Find_Unlocked_Category_unlockedIndex, bool CallFunc_Find_Unlocked_Category_success, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_2, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_3, class UGlobalNav_Widget_C* CallFunc_ShowUserWidget_ReturnValue, int32 K2Node_CustomEvent_NewIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUserWidget* CallFunc_HideUserWidget_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Find_Unlocked_Category_unlockedIndex_1, bool CallFunc_Find_Unlocked_Category_success_1, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, class UClass* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TArray<class UAffordance_Widget_C*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Find_Unlocked_Category_unlockedIndex_2, bool CallFunc_Find_Unlocked_Category_success_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, TSubclassOf<class UUserWidget> Temp_class_Variable_1, bool CallFunc_MakeLiteralBool_ReturnValue, bool Temp_bool_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, TSubclassOf<class UUserWidget> K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, const struct FQtnCurrencyEntry& K2Node_MakeStruct_QtnCurrencyEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UClass* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool K2Node_Event_ShowTP, bool K2Node_Event_ShowDM, bool K2Node_Event_ShowPP, class UUserWidget* CallFunc_ShowUserWidget_ReturnValue_1, TScriptInterface<class IGlobalNavAffordance_Interface_C> K2Node_DynamicCast_AsGlobal_Nav_Affordance_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGlobalNavWallet_BPI_C> K2Node_DynamicCast_AsGlobal_Nav_Wallet_BPI, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_RequestCurrencyVisibilities_ShowTP, bool CallFunc_RequestCurrencyVisibilities_ShowDM, bool CallFunc_RequestCurrencyVisibilities_ShowPP, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsGlobalNavInputBlocked__IsBlocked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNav_Widget_C", "ExecuteUbergraph_GlobalNav_Widget");

	Params::UGlobalNav_Widget_C_ExecuteUbergraph_GlobalNav_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentIndex = K2Node_CustomEvent_CurrentIndex;
	Parms.CallFunc_CheckIfMapIsAMissionWorld__MissionWorld = CallFunc_CheckIfMapIsAMissionWorld__MissionWorld;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Unlocked_Category_unlockedIndex = CallFunc_Find_Unlocked_Category_unlockedIndex;
	Parms.CallFunc_Find_Unlocked_Category_success = CallFunc_Find_Unlocked_Category_success;
	Parms.CallFunc_GetOwningScreen_ReturnValue_1 = CallFunc_GetOwningScreen_ReturnValue_1;
	Parms.CallFunc_GetOwningScreen_ReturnValue_2 = CallFunc_GetOwningScreen_ReturnValue_2;
	Parms.CallFunc_GetOwningScreen_ReturnValue_3 = CallFunc_GetOwningScreen_ReturnValue_3;
	Parms.CallFunc_ShowUserWidget_ReturnValue = CallFunc_ShowUserWidget_ReturnValue;
	Parms.K2Node_CustomEvent_NewIndex = K2Node_CustomEvent_NewIndex;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_HideUserWidget_ReturnValue = CallFunc_HideUserWidget_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Find_Unlocked_Category_unlockedIndex_1 = CallFunc_Find_Unlocked_Category_unlockedIndex_1;
	Parms.CallFunc_Find_Unlocked_Category_success_1 = CallFunc_Find_Unlocked_Category_success_1;
	Parms.K2Node_Event_Affordances = K2Node_Event_Affordances;
	Parms.K2Node_Event_myClass = K2Node_Event_myClass;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Find_Unlocked_Category_unlockedIndex_2 = CallFunc_Find_Unlocked_Category_unlockedIndex_2;
	Parms.CallFunc_Find_Unlocked_Category_success_2 = CallFunc_Find_Unlocked_Category_success_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.K2Node_MakeStruct_QtnCurrencyEntry = K2Node_MakeStruct_QtnCurrencyEntry;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_Event_ShowTP = K2Node_Event_ShowTP;
	Parms.K2Node_Event_ShowDM = K2Node_Event_ShowDM;
	Parms.K2Node_Event_ShowPP = K2Node_Event_ShowPP;
	Parms.CallFunc_ShowUserWidget_ReturnValue_1 = CallFunc_ShowUserWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Affordance_Interface = K2Node_DynamicCast_AsGlobal_Nav_Affordance_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Wallet_BPI = K2Node_DynamicCast_AsGlobal_Nav_Wallet_BPI;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_RequestCurrencyVisibilities_ShowTP = CallFunc_RequestCurrencyVisibilities_ShowTP;
	Parms.CallFunc_RequestCurrencyVisibilities_ShowDM = CallFunc_RequestCurrencyVisibilities_ShowDM;
	Parms.CallFunc_RequestCurrencyVisibilities_ShowPP = CallFunc_RequestCurrencyVisibilities_ShowPP;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_2 = CallFunc_GetOwningPlayerUI_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsGlobalNavInputBlocked__IsBlocked_ = CallFunc_IsGlobalNavInputBlocked__IsBlocked_;

	UObject::ProcessEvent(Func, &Parms);

}

}


