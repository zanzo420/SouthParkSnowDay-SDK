#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C
// (None)

class UClass* UQtnGoal_FTUX_TrailCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_FTUX_TrailCombat_C");

	return Clss;
}


// QtnGoal_FTUX_TrailCombat_C QtnGoal_FTUX_TrailCombat.Default__QtnGoal_FTUX_TrailCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_FTUX_TrailCombat_C* UQtnGoal_FTUX_TrailCombat_C::GetDefaultObj()
{
	static class UQtnGoal_FTUX_TrailCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_FTUX_TrailCombat_C*>(UQtnGoal_FTUX_TrailCombat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.DEBUGONLY Start Goal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                HealingTotemData                                                 (Edit, BlueprintVisible)
// struct FQtnItemData                FartEscapeData                                                   (Edit, BlueprintVisible)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_MakeStruct_QtnItemData                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerControllerArchetype_C*K2Node_DynamicCast_AsQtn_Player_Controller_Archetype             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_2            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AThornBlockage_BP_C*         K2Node_DynamicCast_AsThorn_Blockage_BP                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_3            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_4            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_4                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// struct FQtnItemData                K2Node_MakeStruct_QtnItemData_1                                  (None)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_5            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_5                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_6            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_6                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_6                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDodgeVerb_C*                CallFunc_AddVerb_ServerOnly_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_TrailCombat_C::DEBUGONLY_Start_Goal(const struct FQtnItemData& HealingTotemData, const struct FQtnItemData& FartEscapeData, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_2, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_2, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_2, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_2, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_2, bool CallFunc_GetLocalPlayerInformation_isHosting_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_2, class AActor* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess_2, class AThornBlockage_BP_C* K2Node_DynamicCast_AsThorn_Blockage_BP, bool K2Node_DynamicCast_bSuccess_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_3, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_3, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_3, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_3, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_3, bool CallFunc_GetLocalPlayerInformation_isHosting_3, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_3, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_4, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_4, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_4, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_4, bool CallFunc_GetLocalPlayerInformation_isHosting_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_4, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_6, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_5, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_5, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_5, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_5, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_5, bool CallFunc_GetLocalPlayerInformation_isHosting_5, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_5, bool K2Node_SwitchEnum_CmpSuccess_5, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_7, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_6, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_6, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_6, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_6, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_6, bool CallFunc_GetLocalPlayerInformation_isHosting_6, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_6, bool K2Node_SwitchEnum_CmpSuccess_6, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_5, bool K2Node_DynamicCast_bSuccess_8, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class UDodgeVerb_C* CallFunc_AddVerb_ServerOnly_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_FTUX_TrailCombat_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.HealingTotemData = HealingTotemData;
	Parms.FartEscapeData = FartEscapeData;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_MakeStruct_QtnItemData = K2Node_MakeStruct_QtnItemData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_1 = CallFunc_GetLocalPlayerInformation_playerPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_1 = CallFunc_GetLocalPlayerInformation_playerController_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_1 = CallFunc_GetLocalPlayerInformation_playerUI_1;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_1 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_1;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_1 = CallFunc_GetLocalPlayerInformation_isHosting_1;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_1 = CallFunc_GetLocalPlayerInformation_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_Controller_Archetype = K2Node_DynamicCast_AsQtn_Player_Controller_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_2 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_2;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_2 = CallFunc_GetLocalPlayerInformation_playerPawn_2;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_2 = CallFunc_GetLocalPlayerInformation_playerController_2;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_2 = CallFunc_GetLocalPlayerInformation_playerUI_2;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_2 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_2;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_2 = CallFunc_GetLocalPlayerInformation_isHosting_2;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_2 = CallFunc_GetLocalPlayerInformation_outputPin_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_DynamicCast_AsThorn_Blockage_BP = K2Node_DynamicCast_AsThorn_Blockage_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_3 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_3;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_3 = CallFunc_GetLocalPlayerInformation_playerPawn_3;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_3 = CallFunc_GetLocalPlayerInformation_playerController_3;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_3 = CallFunc_GetLocalPlayerInformation_playerUI_3;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_3 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_3;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_3 = CallFunc_GetLocalPlayerInformation_isHosting_3;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_3 = CallFunc_GetLocalPlayerInformation_outputPin_3;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_4 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_4;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_4 = CallFunc_GetLocalPlayerInformation_playerPawn_4;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_4 = CallFunc_GetLocalPlayerInformation_playerController_4;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_4 = CallFunc_GetLocalPlayerInformation_playerUI_4;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_4 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_4;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_4 = CallFunc_GetLocalPlayerInformation_isHosting_4;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_4 = CallFunc_GetLocalPlayerInformation_outputPin_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_3 = K2Node_DynamicCast_AsBody_Pawn_Player_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetBodyInventory_ReturnValue_2 = CallFunc_GetBodyInventory_ReturnValue_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_QtnItemData_1 = K2Node_MakeStruct_QtnItemData_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_5 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_5;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_5 = CallFunc_GetLocalPlayerInformation_playerPawn_5;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_5 = CallFunc_GetLocalPlayerInformation_playerController_5;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_5 = CallFunc_GetLocalPlayerInformation_playerUI_5;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_5 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_5;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_5 = CallFunc_GetLocalPlayerInformation_isHosting_5;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_5 = CallFunc_GetLocalPlayerInformation_outputPin_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_4 = K2Node_DynamicCast_AsBody_Pawn_Player_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_6 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_6;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_6 = CallFunc_GetLocalPlayerInformation_playerPawn_6;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_6 = CallFunc_GetLocalPlayerInformation_playerController_6;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_6 = CallFunc_GetLocalPlayerInformation_playerUI_6;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_6 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_6;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_6 = CallFunc_GetLocalPlayerInformation_isHosting_6;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_6 = CallFunc_GetLocalPlayerInformation_outputPin_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_5 = K2Node_DynamicCast_AsBody_Pawn_Player_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetBodyInventory_ReturnValue_3 = CallFunc_GetBodyInventory_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddVerb_ServerOnly_ReturnValue = CallFunc_AddVerb_ServerOnly_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue_4 = CallFunc_GetBodyInventory_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.EndSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_TrailCombat_C::EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "EndSequence");

	Params::UQtnGoal_FTUX_TrailCombat_C_EndSequence_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.Post VOConversation Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_TrailCombat_C::Post_VOConversation_Server_Only()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "Post VOConversation Server Only");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.getQuestMarker
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

void UQtnGoal_FTUX_TrailCombat_C::GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "getQuestMarker");

	Params::UQtnGoal_FTUX_TrailCombat_C_GetQuestMarker_Params Parms{};

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


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_TrailCombat_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "Receive Skirmish Notify");

	Params::UQtnGoal_FTUX_TrailCombat_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.DisallowDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_TrailCombat_C::DisallowDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "DisallowDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_TrailCombat_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "OnGoalStart");

	Params::UQtnGoal_FTUX_TrailCombat_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_FTUX_TrailCombat_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount_Decreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         Attribute_Taking_Damage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_FTUX_TrailCombat_C::UpdateHealth(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "UpdateHealth");

	Params::UQtnGoal_FTUX_TrailCombat_C_UpdateHealth_Params Parms{};

	Parms.Amount_Decreased = Amount_Decreased;
	Parms.Attribute_Taking_Damage = Attribute_Taking_Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_FTUX_TrailCombat.QtnGoal_FTUX_TrailCombat_C.ExecuteUbergraph_QtnGoal_FTUX_TrailCombat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Amount_Decreased                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         K2Node_CustomEvent_Attribute_Taking_Damage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_FTUX_TrailCombat_C::ExecuteUbergraph_QtnGoal_FTUX_TrailCombat(int32 EntryPoint, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_willEndImmediatelyFromLateJoin, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_FTUX_TrailCombat_C", "ExecuteUbergraph_QtnGoal_FTUX_TrailCombat");

	Params::UQtnGoal_FTUX_TrailCombat_C_ExecuteUbergraph_QtnGoal_FTUX_TrailCombat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.K2Node_CustomEvent_Amount_Decreased = K2Node_CustomEvent_Amount_Decreased;
	Parms.K2Node_CustomEvent_Attribute_Taking_Damage = K2Node_CustomEvent_Attribute_Taking_Damage;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_1 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


