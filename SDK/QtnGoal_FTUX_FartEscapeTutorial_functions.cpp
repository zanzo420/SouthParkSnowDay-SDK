#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C
// (None)

class UClass* UQtnGoal_FTUX_FartEscapeTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_FTUX_FartEscapeTutorial_C");

	return Clss;
}


// QtnGoal_FTUX_FartEscapeTutorial_C QtnGoal_FTUX_FartEscapeTutorial.Default__QtnGoal_FTUX_FartEscapeTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_FTUX_FartEscapeTutorial_C* UQtnGoal_FTUX_FartEscapeTutorial_C::GetDefaultObj()
{
	static class UQtnGoal_FTUX_FartEscapeTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_FTUX_FartEscapeTutorial_C*>(UQtnGoal_FTUX_FartEscapeTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.VO Play Ridge Reminder Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::VO_Play_Ridge_Reminder_Server_Only(const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "VO Play Ridge Reminder Server Only");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_VO_Play_Ridge_Reminder_Server_Only_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUX_Powers_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUX_Powers_ModalWidget_C*  CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_FartEscapeTutorial_C::Popup(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UFTUX_Powers_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_Powers_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "Popup");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_Popup_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.PostPowerSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::PostPowerSelection(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "PostPowerSelection");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_PostPowerSelection_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.VO Jimmy Beckon Reminder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::VO_Jimmy_Beckon_Reminder(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "VO Jimmy Beckon Reminder");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_VO_Jimmy_Beckon_Reminder_Params Parms{};

	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.Is Player Combat Proven?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Proven                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_FTUX_KillSnowMen_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Kill_Snow_Men                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::Is_Player_Combat_Proven_(bool* Proven, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_FTUX_KillSnowMen_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Kill_Snow_Men, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "Is Player Combat Proven?");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_Is_Player_Combat_Proven__Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Kill_Snow_Men = K2Node_DynamicCast_AsQtn_Goal_FTUX_Kill_Snow_Men;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Proven != nullptr)
		*Proven = Parms.Proven;

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.doesPlayerHaveDaggers?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Has_daggers                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Player_Combat_Proven__proven                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::DoesPlayerHaveDaggers_(bool* Has_daggers, class UClass* Temp_class_Variable, bool CallFunc_Is_Player_Combat_Proven__proven, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "doesPlayerHaveDaggers?");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_DoesPlayerHaveDaggers__Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Is_Player_Combat_Proven__proven = CallFunc_Is_Player_Combat_Proven__proven;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_daggers != nullptr)
		*Has_daggers = Parms.Has_daggers;

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.getQuestMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "getQuestMarker");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_GetQuestMarker_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.DEBUGONLY Start Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::DEBUGONLY_Start_Goal(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_1 = CallFunc_GetLocalPlayerInformation_playerPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_1 = CallFunc_GetLocalPlayerInformation_playerController_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_1 = CallFunc_GetLocalPlayerInformation_playerUI_1;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_1 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_1;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_1 = CallFunc_GetLocalPlayerInformation_isHosting_1;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_1 = CallFunc_GetLocalPlayerInformation_outputPin_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.enableFartEscape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                FartEscapeData                                                   (Edit, BlueprintVisible)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FQtnItemData                K2Node_MakeStruct_QtnItemData                                    (None)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_FartEscapeTutorial_C::EnableFartEscape(const struct FQtnItemData& FartEscapeData, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "enableFartEscape");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_EnableFartEscape_Params Parms{};

	Parms.FartEscapeData = FartEscapeData;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_QtnItemData = K2Node_MakeStruct_QtnItemData;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.FartEscapeTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::FartEscapeTutorial(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "FartEscapeTutorial");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_FartEscapeTutorial_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.VO Play Power Reminder Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_FartEscapeTutorial_C::VO_Play_Power_Reminder_Server_Only(bool CallFunc_IsServer_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "VO Play Power Reminder Server Only");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_VO_Play_Power_Reminder_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.Post VOConversation Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::Post_VOConversation_Server_Only(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "Post VOConversation Server Only");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_Post_VOConversation_Server_Only_Params Parms{};

	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGoalStatus_ReturnValue_1 = CallFunc_GetGoalStatus_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.Get Jimmy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors_1            (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_GrantFartEscape_C*K2Node_DynamicCast_AsUpgrade_Station_Grant_Fart_Escape           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::Get_Jimmy(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AUpgradeStation_GrantFartEscape_C* K2Node_DynamicCast_AsUpgrade_Station_Grant_Fart_Escape, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "Get Jimmy");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_Get_Jimmy_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors_1 = CallFunc_Find_Marked_Actors_Server_Only_foundActors_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_Grant_Fart_Escape = K2Node_DynamicCast_AsUpgrade_Station_Grant_Fart_Escape;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.EndSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "EndSequence");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_EndSequence_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.GetTargetLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetLocationVolume_C*     K2Node_DynamicCast_AsTarget_Location_Volume                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::GetTargetLocation(class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "GetTargetLocation");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_GetTargetLocation_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTarget_Location_Volume = K2Node_DynamicCast_AsTarget_Location_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "OnGoalStart");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.bindWindowVolumeEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::bindWindowVolumeEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "bindWindowVolumeEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.PlayerEnteredWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::PlayerEnteredWindow(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "PlayerEnteredWindow");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_PlayerEnteredWindow_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.unbindVolumeEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::UnbindVolumeEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "unbindVolumeEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.bindReachedLedgeVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::bindReachedLedgeVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "bindReachedLedgeVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.JumpSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::JumpSuccess(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "JumpSuccess");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_JumpSuccess_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.unbindJumpSuccessVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::UnbindJumpSuccessVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "unbindJumpSuccessVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.delayAndFartEscapeTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::DelayAndFartEscapeTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "delayAndFartEscapeTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.bindNearbyJimmyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::bindNearbyJimmyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "bindNearbyJimmyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.playerNearJimmy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::PlayerNearJimmy(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "playerNearJimmy");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_PlayerNearJimmy_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.BindFartEscapeUsedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::BindFartEscapeUsedEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "BindFartEscapeUsedEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.OnFartEscapeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb*                    Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_FartEscapeTutorial_C::OnFartEscapeDone(class UQtnVerb* Verb, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "OnFartEscapeDone");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_OnFartEscapeDone_Params Parms{};

	Parms.Verb = Verb;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.unbindFartEscapeUsedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::UnbindFartEscapeUsedEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "unbindFartEscapeUsedEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.bindJimmyFrobEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::bindJimmyFrobEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "bindJimmyFrobEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.JimmyGrantedFartEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_FartEscapeTutorial_C::JimmyGrantedFartEscape(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "JimmyGrantedFartEscape");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_JimmyGrantedFartEscape_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.GetJimmyWhenAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::GetJimmyWhenAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "GetJimmyWhenAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.bindModalEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::bindModalEndEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "bindModalEndEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.PlayerLeftModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_FartEscapeTutorial_C::PlayerLeftModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "PlayerLeftModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C.ExecuteUbergraph_QtnGoal_FTUX_FartEscapeTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_doesPlayerHaveDaggers__has_daggers                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Player_Combat_Proven__proven                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    K2Node_CustomEvent_verb                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_who_upgraded                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_FartEscapeTutorial_C::ExecuteUbergraph_QtnGoal_FTUX_FartEscapeTutorial(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_2, bool K2Node_CustomEvent_onExit_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_1, bool K2Node_CustomEvent_onExit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_doesPlayerHaveDaggers__has_daggers, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, bool CallFunc_Is_Player_Combat_Proven__proven, class UQtnVerb* K2Node_CustomEvent_verb, bool K2Node_CustomEvent_isServer, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_FartEscapeTutorial_C", "ExecuteUbergraph_QtnGoal_FTUX_FartEscapeTutorial");

	Params::UQtnGoal_FTUX_FartEscapeTutorial_C_ExecuteUbergraph_QtnGoal_FTUX_FartEscapeTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_playerWhoEntered_2 = K2Node_CustomEvent_playerWhoEntered_2;
	Parms.K2Node_CustomEvent_onExit_2 = K2Node_CustomEvent_onExit_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_playerWhoEntered_1 = K2Node_CustomEvent_playerWhoEntered_1;
	Parms.K2Node_CustomEvent_onExit_1 = K2Node_CustomEvent_onExit_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_playerWhoEntered = K2Node_CustomEvent_playerWhoEntered;
	Parms.K2Node_CustomEvent_onExit = K2Node_CustomEvent_onExit;
	Parms.CallFunc_doesPlayerHaveDaggers__has_daggers = CallFunc_doesPlayerHaveDaggers__has_daggers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Is_Player_Combat_Proven__proven = CallFunc_Is_Player_Combat_Proven__proven;
	Parms.K2Node_CustomEvent_verb = K2Node_CustomEvent_verb;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_1 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_player_who_upgraded = K2Node_CustomEvent_player_who_upgraded;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


