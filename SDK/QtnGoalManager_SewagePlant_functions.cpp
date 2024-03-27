#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C
// (None)

class UClass* UQtnGoalManager_SewagePlant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_SewagePlant_C");

	return Clss;
}


// QtnGoalManager_SewagePlant_C QtnGoalManager_SewagePlant.Default__QtnGoalManager_SewagePlant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_SewagePlant_C* UQtnGoalManager_SewagePlant_C::GetDefaultObj()
{
	static class UQtnGoalManager_SewagePlant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_SewagePlant_C*>(UQtnGoalManager_SewagePlant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.DEBUGONLY_Sewage_KillHankey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_SewagePlant_C::DEBUGONLY_Sewage_KillHankey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "DEBUGONLY_Sewage_KillHankey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.DEBUGONLY_KillHankey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LOCAL_Length                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHankeyWorm_hankeyWorm                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn_ShizaHulud_C*       K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C>K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_SewagePlant_C::DEBUGONLY_KillHankey(int32 LOCAL_Length, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetHankeyWorm_hankeyWorm, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "DEBUGONLY_KillHankey");

	Params::UQtnGoalManager_SewagePlant_C_DEBUGONLY_KillHankey_Params Parms{};

	Parms.LOCAL_Length = LOCAL_Length;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle = K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetHankeyWorm_hankeyWorm = CallFunc_GetHankeyWorm_hankeyWorm;
	Parms.K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud = K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_2 = K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1 = K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.GetScriptedVOScene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_SewagePlant_C::GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "GetScriptedVOScene");

	Params::UQtnGoalManager_SewagePlant_C_GetScriptedVOScene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScriptedVOScene != nullptr)
		*ScriptedVOScene = std::move(Parms.ScriptedVOScene);

}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.Roll Day Toggle Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_SewagePlant_C::Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "Roll Day Toggle Setup");

	Params::UQtnGoalManager_SewagePlant_C_Roll_Day_Toggle_Setup_Params Parms{};

	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_SewagePlant_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_SewagePlant.QtnGoalManager_SewagePlant_C.ExecuteUbergraph_QtnGoalManager_SewagePlant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_SewagePlant_Arc5_HankeyBattle_C*K2Node_DynamicCast_AsQtn_Goal_Sewage_Plant_Arc_5_Hankey_Battle   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UQtnGoalManager_SewagePlant_C::ExecuteUbergraph_QtnGoalManager_SewagePlant(int32 EntryPoint, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal_SewagePlant_Arc5_HankeyBattle_C* K2Node_DynamicCast_AsQtn_Goal_Sewage_Plant_Arc_5_Hankey_Battle, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_SewagePlant_C", "ExecuteUbergraph_QtnGoalManager_SewagePlant");

	Params::UQtnGoalManager_SewagePlant_C_ExecuteUbergraph_QtnGoalManager_SewagePlant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Sewage_Plant_Arc_5_Hankey_Battle = K2Node_DynamicCast_AsQtn_Goal_Sewage_Plant_Arc_5_Hankey_Battle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_GetCurrentArc_ReturnValue_1 = CallFunc_GetCurrentArc_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


