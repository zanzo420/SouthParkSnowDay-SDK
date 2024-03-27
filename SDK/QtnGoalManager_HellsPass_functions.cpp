#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C
// (None)

class UClass* UQtnGoalManager_HellsPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_HellsPass_C");

	return Clss;
}


// QtnGoalManager_HellsPass_C QtnGoalManager_HellsPass.Default__QtnGoalManager_HellsPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_HellsPass_C* UQtnGoalManager_HellsPass_C::GetDefaultObj()
{
	static class UQtnGoalManager_HellsPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_HellsPass_C*>(UQtnGoalManager_HellsPass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.ShouldPlayCutscenes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_cutscenes                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        LOCAL_TrialTag                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConsoleVariableBoolValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_FindMarkedActors_ServerOnly_foundActors                 (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_Tribunal_Manager_Actor_C>K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoGetRunInEditor_runInEditor                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_HellsPass_C::ShouldPlayCutscenes(bool* Play_cutscenes, class FName LOCAL_TrialTag, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsPlayingInEditor_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_FindMarkedActors_ServerOnly_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoGetRunInEditor_runInEditor, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "ShouldPlayCutscenes");

	Params::UQtnGoalManager_HellsPass_C_ShouldPlayCutscenes_Params Parms{};

	Parms.LOCAL_TrialTag = LOCAL_TrialTag;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue = CallFunc_SyncLoadActorClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_FindMarkedActors_ServerOnly_foundActors = CallFunc_FindMarkedActors_ServerOnly_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor = K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoGetRunInEditor_runInEditor = CallFunc_DoGetRunInEditor_runInEditor;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Play_cutscenes != nullptr)
		*Play_cutscenes = Parms.Play_cutscenes;

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.GetScriptedVOScene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_HellsPass_C::GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "GetScriptedVOScene");

	Params::UQtnGoalManager_HellsPass_C_GetScriptedVOScene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScriptedVOScene != nullptr)
		*ScriptedVOScene = std::move(Parms.ScriptedVOScene);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.Roll Day Toggle Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_HellsPass_C::Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "Roll Day Toggle Setup");

	Params::UQtnGoalManager_HellsPass_C_Roll_Day_Toggle_Setup_Params Parms{};

	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceSpokes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                New_Spokes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQtnGoalManager_HellsPass_C::DEBUGONLY_ForceSpokes(TArray<class FName>& New_Spokes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "DEBUGONLY_ForceSpokes");

	Params::UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceSpokes_Params Parms{};

	Parms.New_Spokes = New_Spokes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceCharacterEncounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQtnGoalManager_HellsPass_C::DEBUGONLY_ForceCharacterEncounter(const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "DEBUGONLY_ForceCharacterEncounter");

	Params::UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceCharacterEncounter_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceAmbush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_HellsPass_C::DEBUGONLY_ForceAmbush(const class FString& Selection, bool Teleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "DEBUGONLY_ForceAmbush");

	Params::UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceAmbush_Params Parms{};

	Parms.Selection = Selection;
	Parms.Teleport = Teleport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_HellsPass_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.ExecuteUbergraph_QtnGoalManager_HellsPass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayCutscenes_play_cutscenes                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_HellsPass_C::ExecuteUbergraph_QtnGoalManager_HellsPass(int32 EntryPoint, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_ShouldPlayCutscenes_play_cutscenes, bool K2Node_SwitchInteger_CmpSuccess, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, int32 CallFunc_GetCurrentArc_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_HellsPass_C", "ExecuteUbergraph_QtnGoalManager_HellsPass");

	Params::UQtnGoalManager_HellsPass_C_ExecuteUbergraph_QtnGoalManager_HellsPass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_ShouldPlayCutscenes_play_cutscenes = CallFunc_ShouldPlayCutscenes_play_cutscenes;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;
	Parms.CallFunc_GetCurrentArc_ReturnValue_1 = CallFunc_GetCurrentArc_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


