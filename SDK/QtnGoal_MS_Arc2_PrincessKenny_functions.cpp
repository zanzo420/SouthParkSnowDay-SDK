#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C
// (None)

class UClass* UQtnGoal_MS_Arc2_PrincessKenny_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_MS_Arc2_PrincessKenny_C");

	return Clss;
}


// QtnGoal_MS_Arc2_PrincessKenny_C QtnGoal_MS_Arc2_PrincessKenny.Default__QtnGoal_MS_Arc2_PrincessKenny_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_MS_Arc2_PrincessKenny_C* UQtnGoal_MS_Arc2_PrincessKenny_C::GetDefaultObj()
{
	static class UQtnGoal_MS_Arc2_PrincessKenny_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_MS_Arc2_PrincessKenny_C*>(UQtnGoal_MS_Arc2_PrincessKenny_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.GetDebugStartLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALocationMarker_BP_C*        DebugStartLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetDebugStartLocation(class ALocationMarker_BP_C** DebugStartLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "GetDebugStartLocation");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetDebugStartLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugStartLocation != nullptr)
		*DebugStartLocation = Parms.DebugStartLocation;

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.TryKennyHealthThresholdVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealthRatio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Threshold                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RandomChance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ScriptedId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               PreferToPlayOnBody                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::TryKennyHealthThresholdVO(float HealthRatio, float Threshold, float RandomChance, const struct FGameplayTag& ScriptedId, bool PreferToPlayOnBody, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "TryKennyHealthThresholdVO");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_TryKennyHealthThresholdVO_Params Parms{};

	Parms.HealthRatio = HealthRatio;
	Parms.Threshold = Threshold;
	Parms.RandomChance = RandomChance;
	Parms.ScriptedId = ScriptedId;
	Parms.PreferToPlayOnBody = PreferToPlayOnBody;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.OnRep_r_KennyActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionDataBag_C*           CallFunc_GetLocalProgressDataBag_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::OnRep_r_KennyActivated(class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "OnRep_r_KennyActivated");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_OnRep_r_KennyActivated_Params Parms{};

	Parms.CallFunc_GetLocalProgressDataBag_ReturnValue = CallFunc_GetLocalProgressDataBag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.getSkirmish
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetSkirmish(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, bool CallFunc_IsServer_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "getSkirmish");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetSkirmish_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Clear Leftover AI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSubclassOf<class AQtnPawn>>PawnTypesToIgnoreForCleanup                                      (Edit, BlueprintVisible)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class AQtnPawn>>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Clear_Leftover_AI(const TArray<TSubclassOf<class AQtnPawn>>& PawnTypesToIgnoreForCleanup, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AQtnSkirmish* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSubclassOf<class AQtnPawn>>& K2Node_MakeArray_Array, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Clear Leftover AI");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Clear_Leftover_AI_Params Parms{};

	Parms.PawnTypesToIgnoreForCleanup = PawnTypesToIgnoreForCleanup;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.LOCAL_UITextUpdate
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
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalHUD_C*                  CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::LOCAL_UITextUpdate(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "LOCAL_UITextUpdate");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_LOCAL_UITextUpdate_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.getKennyWaitPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetKennyWaitPoint(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "getKennyWaitPoint");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetKennyWaitPoint_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.KennyTaunt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::KennyTaunt(class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "KennyTaunt");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_KennyTaunt_Params Parms{};

	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Activate Kenny Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Activate_Kenny_Server_Only(bool CallFunc_IsValid_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Activate Kenny Server Only");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Activate_Kenny_Server_Only_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Post VOConversation Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Post_VOConversation_Server_Only(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Post VOConversation Server Only");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Post_VOConversation_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.GetRainbowWall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARainbowWall_BP_C*           K2Node_DynamicCast_AsRainbow_Wall_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetRainbowWall(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ARainbowWall_BP_C* K2Node_DynamicCast_AsRainbow_Wall_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "GetRainbowWall");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetRainbowWall_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsRainbow_Wall_BP = K2Node_DynamicCast_AsRainbow_Wall_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Get Cutscene Volume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATargetLocationVolume_C*     K2Node_DynamicCast_AsTarget_Location_Volume                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Get_Cutscene_Volume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Get Cutscene Volume");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Get_Cutscene_Volume_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTarget_Location_Volume = K2Node_DynamicCast_AsTarget_Location_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.getCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACine_KennyPreBoss_C*        K2Node_DynamicCast_AsCine_Kenny_Pre_Boss                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetCutscene(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ACine_KennyPreBoss_C* K2Node_DynamicCast_AsCine_Kenny_Pre_Boss, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "getCutscene");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetCutscene_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP = K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCine_Kenny_Pre_Boss = K2Node_DynamicCast_AsCine_Kenny_Pre_Boss;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.getDebugStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        K2Node_DynamicCast_AsLocation_Marker_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::GetDebugStart(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "getDebugStart");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_GetDebugStart_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsLocation_Marker_BP = K2Node_DynamicCast_AsLocation_Marker_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.EndSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnGoal*>            CallFunc_GetChildGoals_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::EndSequence(TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "EndSequence");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_EndSequence_Params Parms{};

	Parms.CallFunc_GetChildGoals_ReturnValue = CallFunc_GetChildGoals_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Setup Kenny Server Only
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundKenny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAI_PrincessKenny_C* K2Node_DynamicCast_AsBody_Pawn_AI_Princess_Kenny                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Setup_Kenny_Server_Only(bool* FoundKenny, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABodyPawnAI_PrincessKenny_C* K2Node_DynamicCast_AsBody_Pawn_AI_Princess_Kenny, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Setup Kenny Server Only");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Setup_Kenny_Server_Only_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI_Princess_Kenny = K2Node_DynamicCast_AsBody_Pawn_AI_Princess_Kenny;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundKenny != nullptr)
		*FoundKenny = Parms.FoundKenny;

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "Receive Skirmish Notify");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.bindKennyDeathEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::bindKennyDeathEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "bindKennyDeathEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.KennyDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DeadAI                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::KennyDeath(class AActor* DeadAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "KennyDeath");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_KennyDeath_Params Parms{};

	Parms.DeadAI = DeadAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.unbindKennyDeathEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::UnbindKennyDeathEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "unbindKennyDeathEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.bindCutsceneStartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::bindCutsceneStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "bindCutsceneStartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.PlayerReadyForCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerWhoEntered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnExit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::PlayerReadyForCutscene(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "PlayerReadyForCutscene");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_PlayerReadyForCutscene_Params Parms{};

	Parms.PlayerWhoEntered = PlayerWhoEntered;
	Parms.OnExit = OnExit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "OnGoalStart");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.CutsceneEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Goal_class                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cutscene_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::CutsceneEnded(class UClass* Goal_class, int32 Cutscene_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "CutsceneEnded");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_CutsceneEnded_Params Parms{};

	Parms.Goal_class = Goal_class;
	Parms.Cutscene_ID = Cutscene_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.OnTickActiveGoal
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::OnTickActiveGoal(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "OnTickActiveGoal");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_OnTickActiveGoal_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.PlayInterruptableVOLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnStruct_VOLine>   Convo                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQtnGoal_MS_Arc2_PrincessKenny_C::PlayInterruptableVOLoop(TArray<struct FQtnStruct_VOLine>& Convo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "PlayInterruptableVOLoop");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_PlayInterruptableVOLoop_Params Parms{};

	Parms.Convo = Convo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.EndOutroScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::EndOutroScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "EndOutroScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.bindKennyTookDamageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_MS_Arc2_PrincessKenny_C::bindKennyTookDamageEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "bindKennyTookDamageEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.KennyTookDamage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::KennyTookDamage(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "KennyTookDamage");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_KennyTookDamage_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.OnGoalEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               JustStartedFromLateJoin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_MS_Arc2_PrincessKenny_C::OnGoalEnd(bool JustStartedFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "OnGoalEnd");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_OnGoalEnd_Params Parms{};

	Parms.JustStartedFromLateJoin = JustStartedFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_MS_Arc2_PrincessKenny.QtnGoal_MS_Arc2_PrincessKenny_C.ExecuteUbergraph_QtnGoal_MS_Arc2_PrincessKenny
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_deadAI                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoEntered                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_onExit                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_goal_class                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cutscene_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Setup_Kenny_Server_Only_foundKenny                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnStruct_VOLine>   K2Node_CustomEvent_Convo                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_CustomEvent_damagedReceptor                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_CustomEvent_damageInfo                                    (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_CustomEvent_hitReactionInfo                               (ConstParm)
// bool                               K2Node_CustomEvent_isServer                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_FindKenny_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_justStartedFromLateJoin                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealthRatio_healthRatio                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_MS_Arc2_PrincessKenny_C::ExecuteUbergraph_QtnGoal_MS_Arc2_PrincessKenny(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_deadAI, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_Setup_Kenny_Server_Only_foundKenny, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Convo, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool CallFunc_IsServer_ReturnValue_8, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_CustomEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_CustomEvent_hitReactionInfo, bool K2Node_CustomEvent_isServer, bool CallFunc_IsServer_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UQtnGoal_MS_Act2_FindKenny_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_justStartedFromLateJoin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetHealthRatio_healthRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_MS_Arc2_PrincessKenny_C", "ExecuteUbergraph_QtnGoal_MS_Arc2_PrincessKenny");

	Params::UQtnGoal_MS_Arc2_PrincessKenny_C_ExecuteUbergraph_QtnGoal_MS_Arc2_PrincessKenny_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_deadAI = K2Node_CustomEvent_deadAI;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_playerWhoEntered = K2Node_CustomEvent_playerWhoEntered;
	Parms.K2Node_CustomEvent_onExit = K2Node_CustomEvent_onExit;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.K2Node_CustomEvent_goal_class = K2Node_CustomEvent_goal_class;
	Parms.K2Node_CustomEvent_Cutscene_ID = K2Node_CustomEvent_Cutscene_ID;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_Setup_Kenny_Server_Only_foundKenny = CallFunc_Setup_Kenny_Server_Only_foundKenny;
	Parms.K2Node_CustomEvent_Convo = K2Node_CustomEvent_Convo;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_damagedReceptor = K2Node_CustomEvent_damagedReceptor;
	Parms.K2Node_CustomEvent_damageInfo = K2Node_CustomEvent_damageInfo;
	Parms.K2Node_CustomEvent_hitReactionInfo = K2Node_CustomEvent_hitReactionInfo;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_justStartedFromLateJoin = K2Node_Event_justStartedFromLateJoin;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetHealthRatio_healthRatio = CallFunc_GetHealthRatio_healthRatio;

	UObject::ProcessEvent(Func, &Parms);

}

}


