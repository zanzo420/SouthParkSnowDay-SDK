#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HordeModeManager.HordeModeManager_C
// (None)

class UClass* UHordeModeManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HordeModeManager_C");

	return Clss;
}


// HordeModeManager_C HordeModeManager.Default__HordeModeManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHordeModeManager_C* UHordeModeManager_C::GetDefaultObj()
{
	static class UHordeModeManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHordeModeManager_C*>(UHordeModeManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HordeModeManager.HordeModeManager_C.CacheHordeModeMaps
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                MapHandles                                                       (Parm, OutParm)
// TArray<struct FSHordeMissionUnlock>HordeModeMissions                                                (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHordeMissionUnlock        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::CacheHordeModeMaps(TArray<class FName>* MapHandles, TArray<struct FSHordeMissionUnlock>* HordeModeMissions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FSHordeMissionUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "CacheHordeModeMaps");

	Params::UHordeModeManager_C_CacheHordeModeMaps_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MapHandles != nullptr)
		*MapHandles = std::move(Parms.MapHandles);

	if (HordeModeMissions != nullptr)
		*HordeModeMissions = std::move(Parms.HordeModeMissions);

}


// Function HordeModeManager.HordeModeManager_C.MakeErrorMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// bool                               NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        StringSum                                                        (Edit, BlueprintVisible)
// TArray<class FText>                NewLocalVar_0                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ListPlayersWithoutHordeMode_ServerOnly_EveryoneHasDLC   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_ListPlayersWithoutHordeMode_ServerOnly_PlayersToBlame   (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)

void UHordeModeManager_C::MakeErrorMessage(class FText* Result, bool NewLocalVar_1, class FText StringSum, const TArray<class FText>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ListPlayersWithoutHordeMode_ServerOnly_EveryoneHasDLC, TArray<int32>& CallFunc_ListPlayersWithoutHordeMode_ServerOnly_PlayersToBlame, int32 CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "MakeErrorMessage");

	Params::UHordeModeManager_C_MakeErrorMessage_Params Parms{};

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.StringSum = StringSum;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ListPlayersWithoutHordeMode_ServerOnly_EveryoneHasDLC = CallFunc_ListPlayersWithoutHordeMode_ServerOnly_EveryoneHasDLC;
	Parms.CallFunc_ListPlayersWithoutHordeMode_ServerOnly_PlayersToBlame = CallFunc_ListPlayersWithoutHordeMode_ServerOnly_PlayersToBlame;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function HordeModeManager.HordeModeManager_C.Horde DLCReplication Refresh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DlcOwned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::Horde_DLCReplication_Refresh(class AQtnPlayerPawn* PlayerPawn, bool* DlcOwned, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "Horde DLCReplication Refresh");

	Params::UHordeModeManager_C_Horde_DLCReplication_Refresh_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC = CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DlcOwned != nullptr)
		*DlcOwned = Parms.DlcOwned;

}


// Function HordeModeManager.HordeModeManager_C.CheckMapHordeMode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHordeMap                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  HordeMissionsDataTable                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CacheHordeModeMaps_MapHandles                           (ReferenceParm)
// TArray<struct FSHordeMissionUnlock>CallFunc_CacheHordeModeMaps_HordeModeMissions                    (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::CheckMapHordeMode(class FName B, bool* IsHordeMap, class UDataTable* HordeMissionsDataTable, TArray<class FName>& CallFunc_CacheHordeModeMaps_MapHandles, TArray<struct FSHordeMissionUnlock>& CallFunc_CacheHordeModeMaps_HordeModeMissions, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "CheckMapHordeMode");

	Params::UHordeModeManager_C_CheckMapHordeMode_Params Parms{};

	Parms.B = B;
	Parms.HordeMissionsDataTable = HordeMissionsDataTable;
	Parms.CallFunc_CacheHordeModeMaps_MapHandles = CallFunc_CacheHordeModeMaps_MapHandles;
	Parms.CallFunc_CacheHordeModeMaps_HordeModeMissions = CallFunc_CacheHordeModeMaps_HordeModeMissions;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHordeMap != nullptr)
		*IsHordeMap = Parms.IsHordeMap;

}


// Function HordeModeManager.HordeModeManager_C.ListPlayersWithoutHordeMode_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EveryoneHasDLC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      PlayersToBlame                                                   (Parm, OutParm)
// TArray<int32>                      WithoutHordeMode                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::ListPlayersWithoutHordeMode_ServerOnly(bool* EveryoneHasDLC, TArray<int32>* PlayersToBlame, const TArray<int32>& WithoutHordeMode, int32 Temp_int_Array_Index_Variable, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 Temp_int_Loop_Counter_Variable, class AQtnPlayerPawn* CallFunc_Array_Get_Item, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ListPlayersWithoutHordeMode_ServerOnly");

	Params::UHordeModeManager_C_ListPlayersWithoutHordeMode_ServerOnly_Params Parms{};

	Parms.WithoutHordeMode = WithoutHordeMode;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EveryoneHasDLC != nullptr)
		*EveryoneHasDLC = Parms.EveryoneHasDLC;

	if (PlayersToBlame != nullptr)
		*PlayersToBlame = std::move(Parms.PlayersToBlame);

}


// Function HordeModeManager.HordeModeManager_C.CheckAllPlayersHaveHordeMode_ServerOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EveryoneHasDLC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// class AQtnPlayerPawn*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::CheckAllPlayersHaveHordeMode_ServerOnly(bool* EveryoneHasDLC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "CheckAllPlayersHaveHordeMode_ServerOnly");

	Params::UHordeModeManager_C_CheckAllPlayersHaveHordeMode_ServerOnly_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EveryoneHasDLC != nullptr)
		*EveryoneHasDLC = Parms.EveryoneHasDLC;

}


// Function HordeModeManager.HordeModeManager_C.Check Has Local Purchased Horde Mode DLC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasPurchasedDLC                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::Check_Has_Local_Purchased_Horde_Mode_DLC(bool* HasPurchasedDLC, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "Check Has Local Purchased Horde Mode DLC");

	Params::UHordeModeManager_C_Check_Has_Local_Purchased_Horde_Mode_DLC_Params Parms{};

	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasPurchasedDLC != nullptr)
		*HasPurchasedDLC = Parms.HasPurchasedDLC;

}


// Function HordeModeManager.HordeModeManager_C.ResetUpgradeOccurences_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::ResetUpgradeOccurences_ServerOnly(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ResetUpgradeOccurences_ServerOnly");

	Params::UHordeModeManager_C_ResetUpgradeOccurences_ServerOnly_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.AddUpgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           LateJoiner                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumUpgradesToDeduct                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumUpgradesToAdd                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHordeLateJoinUpgrades     CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::AddUpgrades(class ABodyPawnPlayer_C* LateJoiner, int32 NumUpgradesToDeduct, int32 NumUpgradesToAdd, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, const struct FSHordeLateJoinUpgrades& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "AddUpgrades");

	Params::UHordeModeManager_C_AddUpgrades_Params Parms{};

	Parms.LateJoiner = LateJoiner;
	Parms.NumUpgradesToDeduct = NumUpgradesToDeduct;
	Parms.NumUpgradesToAdd = NumUpgradesToAdd;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.AwardRandomUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           LatePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     RolledUpgrade                                                    (Edit, BlueprintVisible)
// TArray<struct FQtnRolledUpgradeResult>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// TArray<struct FQtnReactionToTag>   K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_ReturnValue                                (ReferenceParm)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)

void UHordeModeManager_C::AwardRandomUpgrade(class ABodyPawnPlayer_C* LatePlayer, const struct FQtnRolledUpgradeResult& RolledUpgrade, TArray<struct FQtnRolledUpgradeResult>& K2Node_MakeArray_Array, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, TArray<struct FQtnReactionToTag>& K2Node_MakeArray_Array_1, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "AwardRandomUpgrade");

	Params::UHordeModeManager_C_AwardRandomUpgrade_Params Parms{};

	Parms.LatePlayer = LatePlayer;
	Parms.RolledUpgrade = RolledUpgrade;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_RollUpgrades_ReturnValue = CallFunc_RollUpgrades_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.Debug Display Horde Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            HordeDebugWrapper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UHordeModeManager_C::Debug_Display_Horde_Mode(class UQtnDebugWrapper* HordeDebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "Debug Display Horde Mode");

	Params::UHordeModeManager_C_Debug_Display_Horde_Mode_Params Parms{};

	Parms.HordeDebugWrapper = HordeDebugWrapper;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.IncrementUpgradeOccurences_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::IncrementUpgradeOccurences_ServerOnly(bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "IncrementUpgradeOccurences_ServerOnly");

	Params::UHordeModeManager_C_IncrementUpgradeOccurences_ServerOnly_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.EjectFromHordeMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeModeManager_C::EjectFromHordeMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "EjectFromHordeMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HordeModeManager.HordeModeManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ReceiveTick");

	Params::UHordeModeManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.ErrorMessageDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::ErrorMessageDisplay(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ErrorMessageDisplay");

	Params::UHordeModeManager_C_ErrorMessageDisplay_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.OnInviteAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnAcceptInviteResult  Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnOnlineErrorCode         ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UHordeModeManager_C::OnInviteAccepted(enum class EQtnAcceptInviteResult Result, const struct FQtnOnlineErrorCode& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "OnInviteAccepted");

	Params::UHordeModeManager_C_OnInviteAccepted_Params Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.RetriggerDLCRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeModeManager_C::RetriggerDLCRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "RetriggerDLCRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HordeModeManager.HordeModeManager_C.HordeModeUpgradeLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::HordeModeUpgradeLogic(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "HordeModeUpgradeLogic");

	Params::UHordeModeManager_C_HordeModeUpgradeLogic_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.TriggerAutoUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeModeManager_C::TriggerAutoUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "TriggerAutoUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HordeModeManager.HordeModeManager_C.PlayerEnterWorld_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::PlayerEnterWorld_Event(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "PlayerEnterWorld_Event");

	Params::UHordeModeManager_C_PlayerEnterWorld_Event_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.ForceDLCReplicationRefresh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHordeModeManager_C::ForceDLCReplicationRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ForceDLCReplicationRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HordeModeManager.HordeModeManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UHordeModeManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HordeModeManager.HordeModeManager_C.AddTheUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           LatePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHordeModeManager_C::AddTheUpgrades(class ABodyPawnPlayer_C* LatePlayer, int32 A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "AddTheUpgrades");

	Params::UHordeModeManager_C_AddTheUpgrades_Params Parms{};

	Parms.LatePlayer = LatePlayer;
	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HordeModeManager.HordeModeManager_C.ExecuteUbergraph_HordeModeManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerPawn_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerPawn_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeErrorMessage_Result                                 (None)
// class AQtnPlayerUI*                CallFunc_GetPlayerUI_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMessagingHUDScreen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMessagingHUD_C*             CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAcceptInviteResult  K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnOnlineErrorCode         K2Node_CustomEvent_ErrorCode                                     (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Horde_DLCReplication_Refresh_DlcOwned                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentUpgrades_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameModeSocialHubArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameModeSocialHubArchetype_C*K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype_1        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ConsumeFailedToJoinHordeModeMap_Result                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapForHordeMode_outputPin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_CacheHordeModeMaps_MapHandles                           (ReferenceParm)
// TArray<struct FSHordeMissionUnlock>CallFunc_CacheHordeModeMaps_HordeModeMissions                    (ReferenceParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerPawn_outputPin_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerPawn_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Horde_DLCReplication_Refresh_DlcOwned_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_LatePlayer                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_A                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeModeManager_C::ExecuteUbergraph_HordeModeManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_show, bool CallFunc_Greater_IntInt_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, class FText CallFunc_MakeErrorMessage_Result, class AQtnPlayerUI* CallFunc_GetPlayerUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC_1, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue, enum class EQtnAcceptInviteResult K2Node_CustomEvent_Result, const struct FQtnOnlineErrorCode& K2Node_CustomEvent_ErrorCode, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Horde_DLCReplication_Refresh_DlcOwned, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentUpgrades_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype, bool K2Node_DynamicCast_bSuccess_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AQtnGameModeSocialHubArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype, bool K2Node_DynamicCast_bSuccess_3, class AQtnGameModeSocialHubArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype_1, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_ConsumeFailedToJoinHordeModeMap_Result, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, TArray<class FName>& CallFunc_CacheHordeModeMaps_MapHandles, TArray<struct FSHordeMissionUnlock>& CallFunc_CacheHordeModeMaps_HordeModeMissions, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue_1, bool CallFunc_Horde_DLCReplication_Refresh_DlcOwned_1, bool K2Node_SwitchEnum_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_LatePlayer, int32 K2Node_CustomEvent_A, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HordeModeManager_C", "ExecuteUbergraph_HordeModeManager");

	Params::UHordeModeManager_C_ExecuteUbergraph_HordeModeManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC = CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_show = K2Node_CustomEvent_show;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerPawn_outputPin = CallFunc_GetLocalPlayerPawn_outputPin;
	Parms.CallFunc_GetLocalPlayerPawn_ReturnValue = CallFunc_GetLocalPlayerPawn_ReturnValue;
	Parms.CallFunc_MakeErrorMessage_Result = CallFunc_MakeErrorMessage_Result;
	Parms.CallFunc_GetPlayerUI_ReturnValue = CallFunc_GetPlayerUI_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC_1 = CallFunc_Check_Has_Local_Purchased_Horde_Mode_DLC_HasPurchasedDLC_1;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Horde_DLCReplication_Refresh_DlcOwned = CallFunc_Horde_DLCReplication_Refresh_DlcOwned;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentUpgrades_ReturnValue = CallFunc_GetCurrentUpgrades_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_Instance_Archetype = K2Node_DynamicCast_AsQtn_Game_Instance_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype = K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_Mode_Social_Hub_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_Instance_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_Instance_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_ConsumeFailedToJoinHordeModeMap_Result = CallFunc_ConsumeFailedToJoinHordeModeMap_Result;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.CallFunc_IsThisMapForHordeMode_outputPin = CallFunc_IsThisMapForHordeMode_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_CacheHordeModeMaps_MapHandles = CallFunc_CacheHordeModeMaps_MapHandles;
	Parms.CallFunc_CacheHordeModeMaps_HordeModeMissions = CallFunc_CacheHordeModeMaps_HordeModeMissions;
	Parms.CallFunc_GetLocalPlayerPawn_outputPin_1 = CallFunc_GetLocalPlayerPawn_outputPin_1;
	Parms.CallFunc_GetLocalPlayerPawn_ReturnValue_1 = CallFunc_GetLocalPlayerPawn_ReturnValue_1;
	Parms.CallFunc_Horde_DLCReplication_Refresh_DlcOwned_1 = CallFunc_Horde_DLCReplication_Refresh_DlcOwned_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_LatePlayer = K2Node_CustomEvent_LatePlayer;
	Parms.K2Node_CustomEvent_A = K2Node_CustomEvent_A;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


