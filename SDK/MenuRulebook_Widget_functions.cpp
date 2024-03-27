#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuRulebook_Widget.MenuRulebook_Widget_C
// (None)

class UClass* UMenuRulebook_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuRulebook_Widget_C");

	return Clss;
}


// MenuRulebook_Widget_C MenuRulebook_Widget.Default__MenuRulebook_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuRulebook_Widget_C* UMenuRulebook_Widget_C::GetDefaultObj()
{
	static class UMenuRulebook_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuRulebook_Widget_C*>(UMenuRulebook_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.SequenceEvent__ENTRYPOINTMenuRulebook_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::SequenceEvent__ENTRYPOINTMenuRulebook_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "SequenceEvent__ENTRYPOINTMenuRulebook_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.GetQtnPlayerUIArchetype
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerUIArchetype_C*     QtnPlayerUI_Archetype                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::GetQtnPlayerUIArchetype(class AQtnPlayerUIArchetype_C** QtnPlayerUI_Archetype, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "GetQtnPlayerUIArchetype");

	Params::UMenuRulebook_Widget_C_GetQtnPlayerUIArchetype_Params Parms{};

	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (QtnPlayerUI_Archetype != nullptr)
		*QtnPlayerUI_Archetype = Parms.QtnPlayerUI_Archetype;

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.Refresh Signatures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URulebookSignature_Widget_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class URulebookSignature_Widget_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class URulebookSignature_Widget_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerState*>     CallFunc_GetAuthoritativePlayerArray_ReturnValue                 (ConstParm, ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::Refresh_Signatures(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Array_Contains_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array_1, TArray<class URulebookSignature_Widget_C*>& K2Node_MakeArray_Array_2, bool CallFunc_Array_Contains_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "Refresh Signatures");

	Params::UMenuRulebook_Widget_C_Refresh_Signatures_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetAuthoritativePlayerArray_ReturnValue = CallFunc_GetAuthoritativePlayerArray_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.InitTooltipOnResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LOCAL_HoveredIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_HoverFound                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_CardIcon_Widget_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::InitTooltipOnResume(int32 LOCAL_HoveredIndex, bool LOCAL_HoverFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UUI_CardIcon_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "InitTooltipOnResume");

	Params::UMenuRulebook_Widget_C_InitTooltipOnResume_Params Parms{};

	Parms.LOCAL_HoveredIndex = LOCAL_HoveredIndex;
	Parms.LOCAL_HoverFound = LOCAL_HoverFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshTooltipCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexToShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_CardMini_Widget_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::RefreshTooltipCard(int32 IndexToShow, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshTooltipCard");

	Params::UMenuRulebook_Widget_C_RefreshTooltipCard_Params Parms{};

	Parms.IndexToShow = IndexToShow;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.GetMessagingHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessagingHUD_C*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUDScreen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMessagingHUD_C* UMenuRulebook_Widget_C::GetMessagingHUD(class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "GetMessagingHUD");

	Params::UMenuRulebook_Widget_C_GetMessagingHUD_Params Parms{};

	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshVoteInputText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingMouse                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_Activated                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_Activated_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasLocalPlayerVoted__LocalVoteCast                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_HasLocalPlayerVoted__LocalVoteCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UMenuRulebook_Widget_C::RefreshVoteInputText(bool UsingMouse, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsActivated_Activated, bool CallFunc_IsActivated_Activated_1, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshVoteInputText");

	Params::UMenuRulebook_Widget_C_RefreshVoteInputText_Params Parms{};

	Parms.UsingMouse = UsingMouse;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsActivated_Activated = CallFunc_IsActivated_Activated;
	Parms.CallFunc_IsActivated_Activated_1 = CallFunc_IsActivated_Activated_1;
	Parms.CallFunc_HasLocalPlayerVoted__LocalVoteCast = CallFunc_HasLocalPlayerVoted__LocalVoteCast;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasLocalPlayerVoted__LocalVoteCast_1 = CallFunc_HasLocalPlayerVoted__LocalVoteCast_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.HasLocalPlayerVoted?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               LocalVoteCast                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             CallFunc_StaticGetLocalPlayerState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::HasLocalPlayerVoted_(bool* LocalVoteCast, class AQtnPlayerState* CallFunc_StaticGetLocalPlayerState_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "HasLocalPlayerVoted?");

	Params::UMenuRulebook_Widget_C_HasLocalPlayerVoted__Params Parms{};

	Parms.CallFunc_StaticGetLocalPlayerState_ReturnValue = CallFunc_StaticGetLocalPlayerState_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalVoteCast != nullptr)
		*LocalVoteCast = Parms.LocalVoteCast;

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.End FTUX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::End_FTUX(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "End FTUX");

	Params::UMenuRulebook_Widget_C_End_FTUX_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.needFTUX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InFTUX                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_DidMapSetupFTUX                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::NeedFTUX(bool* InFTUX, bool Local_DidMapSetupFTUX, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "needFTUX");

	Params::UMenuRulebook_Widget_C_NeedFTUX_Params Parms{};

	Parms.Local_DidMapSetupFTUX = Local_DidMapSetupFTUX;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InFTUX != nullptr)
		*InFTUX = Parms.InFTUX;

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.FTUX_SaveComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::FTUX_SaveComplete(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "FTUX_SaveComplete");

	Params::UMenuRulebook_Widget_C_FTUX_SaveComplete_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.UpdateConditionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// TArray<class AQtnPlayerState*>     CallFunc_GetAuthoritativePlayerArray_ReturnValue                 (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UMenuRulebook_Widget_C::UpdateConditionText(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class FText CallFunc_Format_ReturnValue_2, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "UpdateConditionText");

	Params::UMenuRulebook_Widget_C_UpdateConditionText_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_GetAuthoritativePlayerArray_ReturnValue = CallFunc_GetAuthoritativePlayerArray_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnDebugDisplay");

	Params::UMenuRulebook_Widget_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshVotes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerState*             LOCAL_NewQtnPlayerState                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URulebookSignature_Widget_C* LOCAL_EmptySignature                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerState*>     LOCAL_RulebooksYesVotes                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URulebookSignature_Widget_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URulebookSignature_Widget_C* CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::RefreshVotes(class AQtnPlayerState* LOCAL_NewQtnPlayerState, class URulebookSignature_Widget_C* LOCAL_EmptySignature, const TArray<class AQtnPlayerState*>& LOCAL_RulebooksYesVotes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AQtnPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class URulebookSignature_Widget_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class URulebookSignature_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshVotes");

	Params::UMenuRulebook_Widget_C_RefreshVotes_Params Parms{};

	Parms.LOCAL_NewQtnPlayerState = LOCAL_NewQtnPlayerState;
	Parms.LOCAL_EmptySignature = LOCAL_EmptySignature;
	Parms.LOCAL_RulebooksYesVotes = LOCAL_RulebooksYesVotes;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.Clear Child Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::Clear_Child_Widgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "Clear Child Widgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.FindPlayersByPlayernumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AQtnPlayerState*>     LOCAL_QtnPlayerStates                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              LOCAL_NextPlayerNumber                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerState*>     CallFunc_GetAuthoritativePlayerArray_ReturnValue                 (ConstParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::FindPlayersByPlayernumber(const TArray<class AQtnPlayerState*>& LOCAL_QtnPlayerStates, int32 LOCAL_NextPlayerNumber, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerState* CallFunc_Array_Get_Item, TArray<class AQtnPlayerState*>& CallFunc_GetAuthoritativePlayerArray_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "FindPlayersByPlayernumber");

	Params::UMenuRulebook_Widget_C_FindPlayersByPlayernumber_Params Parms{};

	Parms.LOCAL_QtnPlayerStates = LOCAL_QtnPlayerStates;
	Parms.LOCAL_NextPlayerNumber = LOCAL_NextPlayerNumber;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAuthoritativePlayerArray_ReturnValue = CallFunc_GetAuthoritativePlayerArray_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.MoveCardRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::MoveCardRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "MoveCardRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.AnimSeq_CardHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::AnimSeq_CardHovered(bool IsHovered_, int32 HoveredIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "AnimSeq_CardHovered");

	Params::UMenuRulebook_Widget_C_AnimSeq_CardHovered_Params Parms{};

	Parms.IsHovered_ = IsHovered_;
	Parms.HoveredIndex = HoveredIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.SetupRulebookUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::SetupRulebookUI(class ALoot_Rulebook_Parent_Frob_C* Rulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "SetupRulebookUI");

	Params::UMenuRulebook_Widget_C_SetupRulebookUI_Params Parms{};

	Parms.Rulebook = Rulebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.PreviewNewCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             CardInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::PreviewNewCard(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "PreviewNewCard");

	Params::UMenuRulebook_Widget_C_PreviewNewCard_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.HoveredIndex = HoveredIndex;
	Parms.CardInfo = CardInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetOccupied
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetOccupied");

	Params::UMenuRulebook_Widget_C_OnQtnWidgetOccupied_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnUIScreenActionPressed");

	Params::UMenuRulebook_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetResumed");

	Params::UMenuRulebook_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnRulebookUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*UpdatedRulebook                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::OnRulebookUpdated(class ALoot_Rulebook_Parent_Frob_C* UpdatedRulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnRulebookUpdated");

	Params::UMenuRulebook_Widget_C_OnRulebookUpdated_Params Parms{};

	Parms.UpdatedRulebook = UpdatedRulebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.PlayerEnteredOrLeftWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::PlayerEnteredOrLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "PlayerEnteredOrLeftWorld");

	Params::UMenuRulebook_Widget_C_PlayerEnteredOrLeftWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.PlayerLeftWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::PlayerLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "PlayerLeftWorld");

	Params::UMenuRulebook_Widget_C_PlayerLeftWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "PreConstruct");

	Params::UMenuRulebook_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.ResetIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::ResetIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "ResetIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::OnIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.FTUX_IntroVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::FTUX_IntroVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "FTUX_IntroVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::RefreshInputs(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshInputs");

	Params::UMenuRulebook_Widget_C_RefreshInputs_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.BndEvt__MenuRulebook_Widget_Btn_VoteYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::BndEvt__MenuRulebook_Widget_Btn_VoteYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "BndEvt__MenuRulebook_Widget_Btn_VoteYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.AddLocalSignature
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::AddLocalSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "AddLocalSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshActivationState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuRulebook_Widget_C::RefreshActivationState(class ALoot_Rulebook_Parent_Frob_C* Rulebook)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshActivationState");

	Params::UMenuRulebook_Widget_C_RefreshActivationState_Params Parms{};

	Parms.Rulebook = Rulebook;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.DelayedCloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::DelayedCloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "DelayedCloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "OnInputUsageChange");

	Params::UMenuRulebook_Widget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.Gamepad Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuRulebook_Widget_C::Gamepad_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "Gamepad Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.RefreshTeamPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::RefreshTeamPanel(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "RefreshTeamPanel");

	Params::UMenuRulebook_Widget_C_RefreshTeamPanel_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuRulebook_Widget.MenuRulebook_Widget_C.ExecuteUbergraph_MenuRulebook_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_rulebook_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hovered_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_CustomEvent_CardInfo                                      (HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsReward_Unlock_Base                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_firstTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             CallFunc_GetOwningQtnPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_updatedRulebook                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_1                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_1                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_needFTUX_inFTUX                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_Activated                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLocalPlayerVoted__LocalVoteCast                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasLocalPlayerVoted__LocalVoteCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_rulebook                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetMessagingHUD_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessagingHUD_C*             CallFunc_GetMessagingHUD_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_CardMini_Widget_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_CardMini_Widget_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERulebookTypes_Enum     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantShown                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERulebookTypes_Enum     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_CardMini_Widget_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERulebookTypes_Enum     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// enum class ERulebookTypes_Enum     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuRulebook_Widget_C::ExecuteUbergraph_MenuRulebook_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable, bool K2Node_CustomEvent_IsHovered_, int32 K2Node_CustomEvent_HoveredIndex_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_Ease_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Ease_ReturnValue_1, float CallFunc_Ease_ReturnValue_2, float CallFunc_Ease_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool K2Node_CustomEvent_Hovered_, int32 K2Node_CustomEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_CustomEvent_CardInfo, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsReward_Unlock_Base, bool K2Node_ClassDynamicCast_bSuccess, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* CallFunc_GetOwningQtnPlayerState_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* K2Node_Event_previousScreen, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_updatedRulebook, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_Event_IsDesignTime, bool CallFunc_needFTUX_inFTUX, bool CallFunc_IsActivated_Activated, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast, class UClass* CallFunc_Array_Get_Item, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_HasLocalPlayerVoted__LocalVoteCast_1, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Loop_Counter_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue, class UMessagingHUD_C* CallFunc_GetMessagingHUD_ReturnValue_1, bool K2Node_Event_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Create_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ERulebookTypes_Enum Temp_byte_Variable, int32 CallFunc_Array_Add_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_WantShown, class AQtnPlayerUIArchetype_C* CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype, class AQtnPlayerUIArchetype_C* CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype_1, enum class ERulebookTypes_Enum Temp_byte_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UUI_CardMini_Widget_C* CallFunc_Array_Get_Item_2, enum class ERulebookTypes_Enum Temp_byte_Variable_2, int32 Temp_int_Variable_1, const struct FGameplayTag& CallFunc_Array_Get_Item_3, enum class ERulebookTypes_Enum K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuRulebook_Widget_C", "ExecuteUbergraph_MenuRulebook_Widget");

	Params::UMenuRulebook_Widget_C_ExecuteUbergraph_MenuRulebook_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_IsHovered_ = K2Node_CustomEvent_IsHovered_;
	Parms.K2Node_CustomEvent_HoveredIndex_1 = K2Node_CustomEvent_HoveredIndex_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_CustomEvent_rulebook_1 = K2Node_CustomEvent_rulebook_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue_1 = CallFunc_Ease_ReturnValue_1;
	Parms.CallFunc_Ease_ReturnValue_2 = CallFunc_Ease_ReturnValue_2;
	Parms.CallFunc_Ease_ReturnValue_3 = CallFunc_Ease_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_CustomEvent_Hovered_ = K2Node_CustomEvent_Hovered_;
	Parms.K2Node_CustomEvent_HoveredIndex = K2Node_CustomEvent_HoveredIndex;
	Parms.K2Node_CustomEvent_CardInfo = K2Node_CustomEvent_CardInfo;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsReward_Unlock_Base = K2Node_ClassDynamicCast_AsReward_Unlock_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_firstTime = K2Node_Event_firstTime;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningQtnPlayerState_ReturnValue = CallFunc_GetOwningQtnPlayerState_ReturnValue;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.K2Node_CustomEvent_updatedRulebook = K2Node_CustomEvent_updatedRulebook;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_playerPawnSoul_1 = K2Node_CustomEvent_playerPawnSoul_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_1 = K2Node_CustomEvent_occupiedBodyPawn_1;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_needFTUX_inFTUX = CallFunc_needFTUX_inFTUX;
	Parms.CallFunc_IsActivated_Activated = CallFunc_IsActivated_Activated;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_HasLocalPlayerVoted__LocalVoteCast = CallFunc_HasLocalPlayerVoted__LocalVoteCast;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_HasLocalPlayerVoted__LocalVoteCast_1 = CallFunc_HasLocalPlayerVoted__LocalVoteCast_1;
	Parms.K2Node_CustomEvent_rulebook = K2Node_CustomEvent_rulebook;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetMessagingHUD_ReturnValue = CallFunc_GetMessagingHUD_ReturnValue;
	Parms.CallFunc_GetMessagingHUD_ReturnValue_1 = CallFunc_GetMessagingHUD_ReturnValue_1;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_WantShown = K2Node_CustomEvent_WantShown;
	Parms.CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype = CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype;
	Parms.CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype_1 = CallFunc_GetQtnPlayerUIArchetype_QtnPlayerUI_Archetype_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


