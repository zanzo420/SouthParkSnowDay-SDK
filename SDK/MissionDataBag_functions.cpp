#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionDataBag.MissionDataBag_C
// (None)

class UClass* UMissionDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionDataBag_C");

	return Clss;
}


// MissionDataBag_C MissionDataBag.Default__MissionDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionDataBag_C* UMissionDataBag_C::GetDefaultObj()
{
	static class UMissionDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionDataBag_C*>(UMissionDataBag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionDataBag.MissionDataBag_C.SetHordeModeDifficulty
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EQtnDifficulty          Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::SetHordeModeDifficulty(enum class EQtnDifficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetHordeModeDifficulty");

	Params::UMissionDataBag_C_SetHordeModeDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.GetHordeModeDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EQtnDifficulty          NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::GetHordeModeDifficulty(enum class EQtnDifficulty* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "GetHordeModeDifficulty");

	Params::UMissionDataBag_C_GetHordeModeDifficulty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function MissionDataBag.MissionDataBag_C.SetIsHordeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHordeMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDataBag_C::SetIsHordeMode(bool IsHordeMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetIsHordeMode");

	Params::UMissionDataBag_C_SetIsHordeMode_Params Parms{};

	Parms.IsHordeMode = IsHordeMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.IsHordeMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDataBag_C::IsHordeMode(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "IsHordeMode");

	Params::UMissionDataBag_C_IsHordeMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MissionDataBag.MissionDataBag_C.ResetDemoValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDataBag_C::ResetDemoValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "ResetDemoValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionDataBag.MissionDataBag_C.HasUnlockedAllArcs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasUnlockedAllArcs                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDataBag_C::HasUnlockedAllArcs(bool* HasUnlockedAllArcs, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "HasUnlockedAllArcs");

	Params::UMissionDataBag_C_HasUnlockedAllArcs_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasUnlockedAllArcs != nullptr)
		*HasUnlockedAllArcs = Parms.HasUnlockedAllArcs;

}


// Function MissionDataBag.MissionDataBag_C.SetMaxUnlockedDifficultyForArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          DesiredDifficulty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::SetMaxUnlockedDifficultyForArc(int32 Arc, enum class EQtnDifficulty DesiredDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetMaxUnlockedDifficultyForArc");

	Params::UMissionDataBag_C_SetMaxUnlockedDifficultyForArc_Params Parms{};

	Parms.Arc = Arc;
	Parms.DesiredDifficulty = DesiredDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.SetSelectedDifficultyForArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          DesiredDifficulty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::SetSelectedDifficultyForArc(int32 Arc, enum class EQtnDifficulty DesiredDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetSelectedDifficultyForArc");

	Params::UMissionDataBag_C_SetSelectedDifficultyForArc_Params Parms{};

	Parms.Arc = Arc;
	Parms.DesiredDifficulty = DesiredDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.GetMaxUnlockedDifficultyForArc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          L_result                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::GetMaxUnlockedDifficultyForArc(int32 Arc, enum class EQtnDifficulty* Result, enum class EQtnDifficulty L_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "GetMaxUnlockedDifficultyForArc");

	Params::UMissionDataBag_C_GetMaxUnlockedDifficultyForArc_Params Parms{};

	Parms.Arc = Arc;
	Parms.L_result = L_result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MissionDataBag.MissionDataBag_C.GetSelectedDifficultyForArc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::GetSelectedDifficultyForArc(int32 Arc, enum class EQtnDifficulty* Result, enum class EQtnDifficulty CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "GetSelectedDifficultyForArc");

	Params::UMissionDataBag_C_GetSelectedDifficultyForArc_Params Parms{};

	Parms.Arc = Arc;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MissionDataBag.MissionDataBag_C.IncrementMaxUnlockedDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Arc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalArc                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          LocalCurrentDifficulty                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDifficulty          CallFunc_GetDifficulty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::IncrementMaxUnlockedDifficulty(int32 Arc, int32 LocalArc, enum class EQtnDifficulty LocalCurrentDifficulty, enum class EQtnDifficulty Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EQtnDifficulty CallFunc_Array_Get_Item, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, enum class EQtnDifficulty K2Node_Select_Default, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "IncrementMaxUnlockedDifficulty");

	Params::UMissionDataBag_C_IncrementMaxUnlockedDifficulty_Params Parms{};

	Parms.Arc = Arc;
	Parms.LocalArc = LocalArc;
	Parms.LocalCurrentDifficulty = LocalCurrentDifficulty;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetDifficulty_ReturnValue = CallFunc_GetDifficulty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.SetMaxUnlockedArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxUnlockedArc                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::SetMaxUnlockedArc(int32 MaxUnlockedArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetMaxUnlockedArc");

	Params::UMissionDataBag_C_SetMaxUnlockedArc_Params Parms{};

	Parms.MaxUnlockedArc = MaxUnlockedArc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.PopulateReplicatedStruct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnReplicatedSaveData      ReplicatedSaveData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedSaveData      ModifiedStruct                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::PopulateReplicatedStruct(struct FQtnReplicatedSaveData& ReplicatedSaveData, struct FQtnReplicatedSaveData* ModifiedStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "PopulateReplicatedStruct");

	Params::UMissionDataBag_C_PopulateReplicatedStruct_Params Parms{};

	Parms.ReplicatedSaveData = ReplicatedSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedStruct != nullptr)
		*ModifiedStruct = std::move(Parms.ModifiedStruct);

}


// Function MissionDataBag.MissionDataBag_C.SetCurrentArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentArc                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIEWorld_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StaticGetPIEArc_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StaticGetPIEArc_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPIEWorld_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDataBag_C::SetCurrentArc(int32 CurrentArc, const class FString& CallFunc_Conv_IntToString_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsInPIEWorld_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsInPIEWorld_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "SetCurrentArc");

	Params::UMissionDataBag_C_SetCurrentArc_Params Parms{};

	Parms.CurrentArc = CurrentArc;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsInPIEWorld_ReturnValue = CallFunc_IsInPIEWorld_ReturnValue;
	Parms.CallFunc_StaticGetPIEArc_ReturnValue = CallFunc_StaticGetPIEArc_ReturnValue;
	Parms.CallFunc_StaticGetPIEArc_ReturnValue_1 = CallFunc_StaticGetPIEArc_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsInPIEWorld_ReturnValue_1 = CallFunc_IsInPIEWorld_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.GetCurrentArc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CurrentArc                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRunningAutomatedReports_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StaticGetPIEArc_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StaticGetPIEArc_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPIEWorld_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::GetCurrentArc(int32* CurrentArc, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_IsRunningAutomatedReports_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsTradeshowDemo_ReturnValue, bool CallFunc_IsInPIEWorld_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "GetCurrentArc");

	Params::UMissionDataBag_C_GetCurrentArc_Params Parms{};

	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_IsRunningAutomatedReports_ReturnValue = CallFunc_IsRunningAutomatedReports_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_StaticGetPIEArc_ReturnValue = CallFunc_StaticGetPIEArc_ReturnValue;
	Parms.CallFunc_StaticGetPIEArc_ReturnValue_1 = CallFunc_StaticGetPIEArc_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;
	Parms.CallFunc_IsInPIEWorld_ReturnValue = CallFunc_IsInPIEWorld_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentArc != nullptr)
		*CurrentArc = Parms.CurrentArc;

}


// Function MissionDataBag.MissionDataBag_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_CurrentArc                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void UMissionDataBag_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetCurrentArc_CurrentArc, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "OnDebugDisplay");

	Params::UMissionDataBag_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCurrentArc_CurrentArc = CallFunc_GetCurrentArc_CurrentArc;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.OnReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::OnReadyForGameplay(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "OnReadyForGameplay");

	Params::UMissionDataBag_C_OnReadyForGameplay_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.PostLoadDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnSaveData*                SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                LocalOriginalBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDataBag_C::PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "PostLoadDataBP");

	Params::UMissionDataBag_C_PostLoadDataBP_Params Parms{};

	Parms.SaveData = SaveData;
	Parms.Success = Success;
	Parms.LocalOriginalBody = LocalOriginalBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDataBag.MissionDataBag_C.ExecuteUbergraph_MissionDataBag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerPawn_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerPawn_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_Event_localPlayerController                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_Event_localPlayerUI                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_localOccupiedBodyPawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawnArchetype_C*   K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_CurrentArc                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnSaveData*                K2Node_Event_saveData                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_localOriginalBody                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReplicatedArcDepthInfo     K2Node_MakeStruct_ReplicatedArcDepthInfo                         (HasGetValueTypeHash)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDataBag_C::ExecuteUbergraph_MissionDataBag(int32 EntryPoint, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, class AQtnPlayerController* K2Node_Event_localPlayerController, class AQtnPlayerUI* K2Node_Event_localPlayerUI, class AQtnBodyPawn* K2Node_Event_localOccupiedBodyPawn, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FReplicatedArcDepthInfo& K2Node_MakeStruct_ReplicatedArcDepthInfo, bool CallFunc_IsTradeshowDemo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDataBag_C", "ExecuteUbergraph_MissionDataBag");

	Params::UMissionDataBag_C_ExecuteUbergraph_MissionDataBag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerPawn_outputPin = CallFunc_GetLocalPlayerPawn_outputPin;
	Parms.CallFunc_GetLocalPlayerPawn_ReturnValue = CallFunc_GetLocalPlayerPawn_ReturnValue;
	Parms.K2Node_Event_localPlayerController = K2Node_Event_localPlayerController;
	Parms.K2Node_Event_localPlayerUI = K2Node_Event_localPlayerUI;
	Parms.K2Node_Event_localOccupiedBodyPawn = K2Node_Event_localOccupiedBodyPawn;
	Parms.K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype = K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetCurrentArc_CurrentArc = CallFunc_GetCurrentArc_CurrentArc;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_saveData = K2Node_Event_saveData;
	Parms.K2Node_Event_success = K2Node_Event_success;
	Parms.K2Node_Event_localOriginalBody = K2Node_Event_localOriginalBody;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_ReplicatedArcDepthInfo = K2Node_MakeStruct_ReplicatedArcDepthInfo;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


