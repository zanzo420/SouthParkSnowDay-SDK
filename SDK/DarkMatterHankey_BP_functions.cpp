#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkMatterHankey_BP.DarkMatterHankey_BP_C
// (Actor)

class UClass* ADarkMatterHankey_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkMatterHankey_BP_C");

	return Clss;
}


// DarkMatterHankey_BP_C DarkMatterHankey_BP.Default__DarkMatterHankey_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkMatterHankey_BP_C* ADarkMatterHankey_BP_C::GetDefaultObj()
{
	static class ADarkMatterHankey_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkMatterHankey_BP_C*>(ADarkMatterHankey_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.Is Safe to Prompt Dark Matter UI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADarkMatterHankey_BP_C::Is_Safe_to_Prompt_Dark_Matter_UI(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "Is Safe to Prompt Dark Matter UI");

	Params::ADarkMatterHankey_BP_C_Is_Safe_to_Prompt_Dark_Matter_UI_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.Should Auto Prompt Dark Matter UI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CurrentDarkMatter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DarkMatterBeforeLastMission                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevelFromPerks_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDarkMatterCost_Struct      CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevelFromPerks_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADarkMatterHankey_BP_C::Should_Auto_Prompt_Dark_Matter_UI(int32 CurrentDarkMatter, int32 DarkMatterBeforeLastMission, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FDarkMatterCost_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "Should Auto Prompt Dark Matter UI");

	Params::ADarkMatterHankey_BP_C_Should_Auto_Prompt_Dark_Matter_UI_Params Parms{};

	Parms.CurrentDarkMatter = CurrentDarkMatter;
	Parms.DarkMatterBeforeLastMission = DarkMatterBeforeLastMission;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevelFromPerks_ReturnValue = CallFunc_CalculatePlayerLevelFromPerks_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevelFromPerks_ReturnValue_1 = CallFunc_CalculatePlayerLevelFromPerks_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.GetSocialHubDataBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USocialHubDataBag_C*         SocialHubDBag                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USocialHubDataBag_C*         CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADarkMatterHankey_BP_C::GetSocialHubDataBag(class USocialHubDataBag_C** SocialHubDBag, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "GetSocialHubDataBag");

	Params::ADarkMatterHankey_BP_C_GetSocialHubDataBag_Params Parms{};

	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SocialHubDBag != nullptr)
		*SocialHubDBag = Parms.SocialHubDBag;

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.ShowPerksUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGlobalNav_Screen_C*         CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenu_DarkMatterPerks_C*     CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADarkMatterHankey_BP_C::ShowPerksUI(class UGlobalNav_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMenu_DarkMatterPerks_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "ShowPerksUI");

	Params::ADarkMatterHankey_BP_C_ShowPerksUI_Params Parms{};

	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADarkMatterHankey_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "ReceiveTick");

	Params::ADarkMatterHankey_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.EvaluateAutomaticDMPScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayingCutscene                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADarkMatterHankey_BP_C::EvaluateAutomaticDMPScreen(bool PlayingCutscene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "EvaluateAutomaticDMPScreen");

	Params::ADarkMatterHankey_BP_C_EvaluateAutomaticDMPScreen_Params Parms{};

	Parms.PlayingCutscene = PlayingCutscene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.multicast_EvaluateAutomaticDMPScreen
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADarkMatterHankey_BP_C::Multicast_EvaluateAutomaticDMPScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "multicast_EvaluateAutomaticDMPScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.EvaluateDarkMatterBeckon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADarkMatterHankey_BP_C::EvaluateDarkMatterBeckon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "EvaluateDarkMatterBeckon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.QtnReadyForGameplayEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADarkMatterHankey_BP_C::QtnReadyForGameplayEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "QtnReadyForGameplayEvent_Event_0");

	Params::ADarkMatterHankey_BP_C_QtnReadyForGameplayEvent_Event_0_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.BndEvt__DarkMatterButters_BP_ThinkersThroneFrobbable_K2Node_ComponentBoundEvent_1_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADarkMatterHankey_BP_C::BndEvt__DarkMatterButters_BP_ThinkersThroneFrobbable_K2Node_ComponentBoundEvent_1_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "BndEvt__DarkMatterButters_BP_ThinkersThroneFrobbable_K2Node_ComponentBoundEvent_1_QtnOnFrobEvent__DelegateSignature");

	Params::ADarkMatterHankey_BP_C_BndEvt__DarkMatterButters_BP_ThinkersThroneFrobbable_K2Node_ComponentBoundEvent_1_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADarkMatterHankey_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.CheckForDemo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADarkMatterHankey_BP_C::CheckForDemo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "CheckForDemo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DarkMatterHankey_BP.DarkMatterHankey_BP_C.ExecuteUbergraph_DarkMatterHankey_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USocialHubDataBag_C*         CallFunc_GetSocialHubDataBag_socialHubDBag                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Safe_to_Prompt_Dark_Matter_UI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Auto_Prompt_Dark_Matter_UI_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_PlayingCutscene                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_localOccupiedBodyPawn                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnTargetableInterface>CallFunc_CanBeInteractedWith_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CanBeInteractedWith_affordancePrompt                    (None)
// bool                               CallFunc_CanBeInteractedWith_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADarkMatterHankey_BP_C::ExecuteUbergraph_DarkMatterHankey_BP(int32 EntryPoint, class USocialHubDataBag_C* CallFunc_GetSocialHubDataBag_socialHubDBag, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Is_Safe_to_Prompt_Dark_Matter_UI_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_Should_Auto_Prompt_Dark_Matter_UI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_PlayingCutscene, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnTargetableInterface> CallFunc_CanBeInteractedWith_self_CastInput, class FText CallFunc_CanBeInteractedWith_affordancePrompt, bool CallFunc_CanBeInteractedWith_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsTradeshowDemo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkMatterHankey_BP_C", "ExecuteUbergraph_DarkMatterHankey_BP");

	Params::ADarkMatterHankey_BP_C_ExecuteUbergraph_DarkMatterHankey_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSocialHubDataBag_socialHubDBag = CallFunc_GetSocialHubDataBag_socialHubDBag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Is_Safe_to_Prompt_Dark_Matter_UI_ReturnValue = CallFunc_Is_Safe_to_Prompt_Dark_Matter_UI_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_Should_Auto_Prompt_Dark_Matter_UI_ReturnValue = CallFunc_Should_Auto_Prompt_Dark_Matter_UI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PlayingCutscene = K2Node_CustomEvent_PlayingCutscene;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_CustomEvent_localOccupiedBodyPawn = K2Node_CustomEvent_localOccupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanBeInteractedWith_self_CastInput = CallFunc_CanBeInteractedWith_self_CastInput;
	Parms.CallFunc_CanBeInteractedWith_affordancePrompt = CallFunc_CanBeInteractedWith_affordancePrompt;
	Parms.CallFunc_CanBeInteractedWith_ReturnValue = CallFunc_CanBeInteractedWith_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


