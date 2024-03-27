#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeStationComponent.UpgradeStationComponent_C
// (None)

class UClass* UUpgradeStationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeStationComponent_C");

	return Clss;
}


// UpgradeStationComponent_C UpgradeStationComponent.Default__UpgradeStationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgradeStationComponent_C* UUpgradeStationComponent_C::GetDefaultObj()
{
	static class UUpgradeStationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgradeStationComponent_C*>(UUpgradeStationComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeStationComponent.UpgradeStationComponent_C.ResetSpecificPlayer_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerToReset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSession*>  NewPlayerSessionArray                                            (Edit, BlueprintVisible)
// class UQtnUpgradeSession*          CallFunc_FindAssociatedUpgradeSession_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::ResetSpecificPlayer_ServerOnly(class AQtnBodyPawn* PlayerToReset, const TArray<class UQtnUpgradeSession*>& NewPlayerSessionArray, class UQtnUpgradeSession* CallFunc_FindAssociatedUpgradeSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "ResetSpecificPlayer_ServerOnly");

	Params::UUpgradeStationComponent_C_ResetSpecificPlayer_ServerOnly_Params Parms{};

	Parms.PlayerToReset = PlayerToReset;
	Parms.NewPlayerSessionArray = NewPlayerSessionArray;
	Parms.CallFunc_FindAssociatedUpgradeSession_ReturnValue = CallFunc_FindAssociatedUpgradeSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.CalculatePlayerBonusQuantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_AceInTheHole_C*        CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::CalculatePlayerBonusQuantity(class AQtnBodyPawn* bodyPawn, int32* Value, class UPerk_AceInTheHole_C* CallFunc_FindPerk_ReturnValue, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "CalculatePlayerBonusQuantity");

	Params::UUpgradeStationComponent_C_CalculatePlayerBonusQuantity_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.CalculatePlayerRollQuantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_OnlyTheBest_C*         CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::CalculatePlayerRollQuantity(class AQtnBodyPawn* bodyPawn, int32* Value, class UPerk_OnlyTheBest_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsPerkActive_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "CalculatePlayerRollQuantity");

	Params::UUpgradeStationComponent_C_CalculatePlayerRollQuantity_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.RollUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>RollHistory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowRerolls                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnRolledUpgradeResult>Results                                                          (Parm, OutParm)
// int32                              RollQuantity                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BonusQuantity                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BonusQuant                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RollQuant                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculatePlayerBonusQuantity_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculatePlayerRollQuantity_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_ReturnValue                                (ReferenceParm)

void UUpgradeStationComponent_C::RollUpgrades(class AQtnBodyPawn* TargetPawn, TArray<struct FQtnRolledUpgradeResult>& RollHistory, bool AllowRerolls, TArray<struct FQtnRolledUpgradeResult>* Results, int32* RollQuantity, int32* BonusQuantity, int32 BonusQuant, int32 RollQuant, int32 CallFunc_CalculatePlayerBonusQuantity_Value, int32 CallFunc_CalculatePlayerRollQuantity_Value, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "RollUpgrades");

	Params::UUpgradeStationComponent_C_RollUpgrades_Params Parms{};

	Parms.TargetPawn = TargetPawn;
	Parms.RollHistory = RollHistory;
	Parms.AllowRerolls = AllowRerolls;
	Parms.BonusQuant = BonusQuant;
	Parms.RollQuant = RollQuant;
	Parms.CallFunc_CalculatePlayerBonusQuantity_Value = CallFunc_CalculatePlayerBonusQuantity_Value;
	Parms.CallFunc_CalculatePlayerRollQuantity_Value = CallFunc_CalculatePlayerRollQuantity_Value;
	Parms.CallFunc_RollUpgrades_ReturnValue = CallFunc_RollUpgrades_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Results != nullptr)
		*Results = std::move(Parms.Results);

	if (RollQuantity != nullptr)
		*RollQuantity = Parms.RollQuantity;

	if (BonusQuantity != nullptr)
		*BonusQuantity = Parms.BonusQuantity;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.ResetCurrentPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnUpgradeSession*>  LOCAL_EmptyArray                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::ResetCurrentPlayers(const TArray<class UQtnUpgradeSession*>& LOCAL_EmptyArray, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "ResetCurrentPlayers");

	Params::UUpgradeStationComponent_C_ResetCurrentPlayers_Params Parms{};

	Parms.LOCAL_EmptyArray = LOCAL_EmptyArray;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.HaveExpectedPlayersUpgraded =Q
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HaveAllUpgraded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              UpgradedPlayers                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExpectedUpgradingPlayersCount____Count               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::HaveExpectedPlayersUpgraded__Q(bool* HaveAllUpgraded, int32 UpgradedPlayers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetExpectedUpgradingPlayersCount____Count, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "HaveExpectedPlayersUpgraded =Q");

	Params::UUpgradeStationComponent_C_HaveExpectedPlayersUpgraded__Q_Params Parms{};

	Parms.UpgradedPlayers = UpgradedPlayers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetExpectedUpgradingPlayersCount____Count = CallFunc_GetExpectedUpgradingPlayersCount____Count;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HaveAllUpgraded != nullptr)
		*HaveAllUpgraded = Parms.HaveAllUpgraded;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.GetExpectedUpgradingPlayersCount =Ë
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfPlayers_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::GetExpectedUpgradingPlayersCount___(int32* Count, int32 CallFunc_GetNumberOfPlayers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "GetExpectedUpgradingPlayersCount =Ë");

	Params::UUpgradeStationComponent_C_GetExpectedUpgradingPlayersCount____Params Parms{};

	Parms.CallFunc_GetNumberOfPlayers_ReturnValue = CallFunc_GetNumberOfPlayers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.IsServer =»
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsServer                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::IsServer___(bool* IsServer, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "IsServer =»");

	Params::UUpgradeStationComponent_C_IsServer____Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsServer != nullptr)
		*IsServer = Parms.IsServer;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.GetActiveUpgradingPlayers =h=h=f=f
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::GetActiveUpgradingPlayers__h__h__f__f(int32* Count, int32 ValueCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "GetActiveUpgradingPlayers =h=h=f=f");

	Params::UUpgradeStationComponent_C_GetActiveUpgradingPlayers__h__h__f__f_Params Parms{};

	Parms.ValueCount = ValueCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.FindPlayerData >Ð
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundPlayer                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*PlayerSession                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer____IsServer                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_DynamicCast_AsPlayer_Upgrade_Session_State                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesQtnUniqueId_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgradeStationComponent_C::FindPlayerData___(class ABodyPawnPlayer_C* TargetPlayer, bool* FoundPlayer, class UPlayerUpgradeSessionState_C** PlayerSession, int32* PlayerIndex, int32 Temp_int_Array_Index_Variable, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer____IsServer, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPlayerUpgradeSessionState_C* K2Node_DynamicCast_AsPlayer_Upgrade_Session_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesQtnUniqueId_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "FindPlayerData >Ð");

	Params::UUpgradeStationComponent_C_FindPlayerData____Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer____IsServer = CallFunc_IsServer____IsServer;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Upgrade_Session_State = K2Node_DynamicCast_AsPlayer_Upgrade_Session_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MatchesQtnUniqueId_ReturnValue = CallFunc_MatchesQtnUniqueId_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundPlayer != nullptr)
		*FoundPlayer = Parms.FoundPlayer;

	if (PlayerSession != nullptr)
		*PlayerSession = Parms.PlayerSession;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.RegisterNewPlayer =(
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      PlacementSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    TribunalSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnUpgradeSession*>  LocalPlayerArray                                                 (Edit, BlueprintVisible)
// class UPlayerUpgradeSessionState_C*TargetPlayerState                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_UpgradeStation_BP_C>K2Node_DynamicCast_AsInterface_Upgrade_Station_BP                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::RegisterNewPlayer___(class ABodyPawnPlayer_C* TargetBodyPawn, class UPlayerPlacementComp_C* PlacementSlot, class APlayerTribunalSlot_BP_C* TribunalSlot, const TArray<class UQtnUpgradeSession*>& LocalPlayerArray, class UPlayerUpgradeSessionState_C* TargetPlayerState, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IInterface_UpgradeStation_BP_C> K2Node_DynamicCast_AsInterface_Upgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class AScriptedSkeletalActor_Trial_C* CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerUpgradeSessionState_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "RegisterNewPlayer =(");

	Params::UUpgradeStationComponent_C_RegisterNewPlayer____Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;
	Parms.PlacementSlot = PlacementSlot;
	Parms.TribunalSlot = TribunalSlot;
	Parms.LocalPlayerArray = LocalPlayerArray;
	Parms.TargetPlayerState = TargetPlayerState;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Upgrade_Station_BP = K2Node_DynamicCast_AsInterface_Upgrade_Station_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter = CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.OnUpgradeRerollEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::OnUpgradeRerollEvent__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "OnUpgradeRerollEvent__DelegateSignature");

	Params::UUpgradeStationComponent_C_OnUpgradeRerollEvent__DelegateSignature_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.OnUpgradeProcessComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::OnUpgradeProcessComplete__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "OnUpgradeProcessComplete__DelegateSignature");

	Params::UUpgradeStationComponent_C_OnUpgradeProcessComplete__DelegateSignature_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.OnUpgradeProcessBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::OnUpgradeProcessBegin__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "OnUpgradeProcessBegin__DelegateSignature");

	Params::UUpgradeStationComponent_C_OnUpgradeProcessBegin__DelegateSignature_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStationComponent.UpgradeStationComponent_C.OnUpgradeCardsArrayUpdatedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpgradeStationComponent_C::OnUpgradeCardsArrayUpdatedEvent__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStationComponent_C", "OnUpgradeCardsArrayUpdatedEvent__DelegateSignature");

	Params::UUpgradeStationComponent_C_OnUpgradeCardsArrayUpdatedEvent__DelegateSignature_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}

}


