#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeStation_BP.UpgradeStation_BP_C
// (Actor)

class UClass* AUpgradeStation_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeStation_BP_C");

	return Clss;
}


// UpgradeStation_BP_C UpgradeStation_BP.Default__UpgradeStation_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradeStation_BP_C* AUpgradeStation_BP_C::GetDefaultObj()
{
	static class AUpgradeStation_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradeStation_BP_C*>(AUpgradeStation_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeStation_BP.UpgradeStation_BP_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void AUpgradeStation_BP_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "GetIndicatorData");

	Params::AUpgradeStation_BP_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.DoGetSpawnedUpgradeCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalActor_Trial_C*SpawnedUpgradeCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::DoGetSpawnedUpgradeCharacter(class AScriptedSkeletalActor_Trial_C** SpawnedUpgradeCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "DoGetSpawnedUpgradeCharacter");

	Params::AUpgradeStation_BP_C_DoGetSpawnedUpgradeCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedUpgradeCharacter != nullptr)
		*SpawnedUpgradeCharacter = Parms.SpawnedUpgradeCharacter;

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.PrimeNecessarySounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundWaveRefs              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PrimeSoundWaves_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PrimeSoundCues_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::PrimeNecessarySounds(const struct FSoundWaveRefs& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue, bool CallFunc_PrimeSoundWaves_ReturnValue, bool CallFunc_PrimeSoundCues_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "PrimeNecessarySounds");

	Params::AUpgradeStation_BP_C_PrimeNecessarySounds_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue = CallFunc_ShouldPrimeSoundsOnPlatform_ReturnValue;
	Parms.CallFunc_PrimeSoundWaves_ReturnValue = CallFunc_PrimeSoundWaves_ReturnValue;
	Parms.CallFunc_PrimeSoundCues_ReturnValue = CallFunc_PrimeSoundCues_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.RefreshStandaloneShrineVis_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::RefreshStandaloneShrineVis_ServerOnly(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "RefreshStandaloneShrineVis_ServerOnly");

	Params::AUpgradeStation_BP_C_RefreshStandaloneShrineVis_ServerOnly_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Reset Upgrade Station Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::Reset_Upgrade_Station_Server_Only()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Reset Upgrade Station Server Only");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Play Level Up FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           UpgradedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UObject>       RefillBullshit                                                   (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::Play_Level_Up_FX(class ABodyPawnPlayer_C* UpgradedPlayer, class UQtnUpgradeSession* UpgradeSession, int32 ChoiceIndex, TSoftClassPtr<class UObject> RefillBullshit, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Play Level Up FX");

	Params::AUpgradeStation_BP_C_Play_Level_Up_FX_Params Parms{};

	Parms.UpgradedPlayer = UpgradedPlayer;
	Parms.UpgradeSession = UpgradeSession;
	Parms.ChoiceIndex = ChoiceIndex;
	Parms.RefillBullshit = RefillBullshit;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue = CallFunc_EqualEqual_SoftClassReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.DoRangedGreet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreBotsOrPlayersInCombat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::DoRangedGreet(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_AreBotsOrPlayersInCombat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "DoRangedGreet");

	Params::AUpgradeStation_BP_C_DoRangedGreet_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_AreBotsOrPlayersInCombat_ReturnValue = CallFunc_AreBotsOrPlayersInCombat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.setOpenForBusiness_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenForBusiness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShrine_Parent_BP_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::SetOpenForBusiness_ServerOnly(bool OpenForBusiness, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AShrine_Parent_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "setOpenForBusiness_ServerOnly");

	Params::AUpgradeStation_BP_C_SetOpenForBusiness_ServerOnly_Params Parms{};

	Parms.OpenForBusiness = OpenForBusiness;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Update Shrine Music Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShrine_Parent_BP_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::Update_Shrine_Music_Server_Only(class ABodyPawnPlayer_C* Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AShrine_Parent_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Update Shrine Music Server Only");

	Params::AUpgradeStation_BP_C_Update_Shrine_Music_Server_Only_Params Parms{};

	Parms.Player = Player;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.MakeIndicatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::MakeIndicatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "MakeIndicatorData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.FTUXHideCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnScreenState         CallFunc_GetScreenState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::FTUXHideCheck(bool* Hide, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnScreenState CallFunc_GetScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "FTUXHideCheck");

	Params::AUpgradeStation_BP_C_FTUXHideCheck_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScreenState_ReturnValue = CallFunc_GetScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Hide != nullptr)
		*Hide = Parms.Hide;

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.checkForJokerFTUXFrob
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Frobber                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Play_Frob_Line                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::CheckForJokerFTUXFrob(class ABodyPawnPlayer_C* Frobber, bool* Play_Frob_Line, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "checkForJokerFTUXFrob");

	Params::AUpgradeStation_BP_C_CheckForJokerFTUXFrob_Params Parms{};

	Parms.Frobber = Frobber;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Play_Frob_Line != nullptr)
		*Play_Frob_Line = Parms.Play_Frob_Line;

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.playJokerFTUXGreet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::PlayJokerFTUXGreet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "playJokerFTUXGreet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.CheckForJokerFTUXGreet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_FTUX                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::CheckForJokerFTUXGreet(bool* Play_FTUX, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "CheckForJokerFTUXGreet");

	Params::AUpgradeStation_BP_C_CheckForJokerFTUXGreet_Params Parms{};

	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Play_FTUX != nullptr)
		*Play_FTUX = Parms.Play_FTUX;

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DTime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::UpdateTimer(float DTime, int32 CallFunc_Round_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "UpdateTimer");

	Params::AUpgradeStation_BP_C_UpdateTimer_Params Parms{};

	Parms.DTime = DTime;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.DispatchOnPostUpgradeEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyPawnPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void AUpgradeStation_BP_C::DispatchOnPostUpgradeEvent(class ABodyPawnPlayer_C* BodyPawnPlayer, class UQtnUpgradeSession* UpgradeSession, int32 ChoiceIndex, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "DispatchOnPostUpgradeEvent");

	Params::AUpgradeStation_BP_C_DispatchOnPostUpgradeEvent_Params Parms{};

	Parms.BodyPawnPlayer = BodyPawnPlayer;
	Parms.UpgradeSession = UpgradeSession;
	Parms.ChoiceIndex = ChoiceIndex;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.EmptyOutVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::EmptyOutVO(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "EmptyOutVO");

	Params::AUpgradeStation_BP_C_EmptyOutVO_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Setup Widget for Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Widget_C*       K2Node_DynamicCast_AsMenu_Upgrade_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::Setup_Widget_for_Player(class AQtnBodyPawn* PlayerBodyPawn, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuUpgrade_Widget_C* K2Node_DynamicCast_AsMenu_Upgrade_Widget, bool K2Node_DynamicCast_bSuccess, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Setup Widget for Player");

	Params::AUpgradeStation_BP_C_Setup_Widget_for_Player_Params Parms{};

	Parms.PlayerBodyPawn = PlayerBodyPawn;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMenu_Upgrade_Widget = K2Node_DynamicCast_AsMenu_Upgrade_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.DispatchUpgradeCharacterEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void AUpgradeStation_BP_C::DispatchUpgradeCharacterEvent(const struct FGameplayTag& EventType, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "DispatchUpgradeCharacterEvent");

	Params::AUpgradeStation_BP_C_DispatchUpgradeCharacterEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Snap PlayerSpotsToGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::Snap_PlayerSpotsToGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Snap PlayerSpotsToGround");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ConvertReplicatedUpgradeSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnUpgradeSettings         RepUpgradeSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnUpgradeSettings         OutValidUpgradeSettings                                          (Parm, OutParm)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetUpgradeSettings_ReturnValue                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::ConvertReplicatedUpgradeSettings(const struct FQtnUpgradeSettings& RepUpgradeSettings, struct FQtnUpgradeSettings* OutValidUpgradeSettings, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ConvertReplicatedUpgradeSettings");

	Params::AUpgradeStation_BP_C_ConvertReplicatedUpgradeSettings_Params Parms{};

	Parms.RepUpgradeSettings = RepUpgradeSettings;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetUpgradeSettings_ReturnValue = CallFunc_GetUpgradeSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValidUpgradeSettings != nullptr)
		*OutValidUpgradeSettings = std::move(Parms.OutValidUpgradeSettings);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.GetCard_LOCALONLY
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     OutRolledResult                                                  (Parm, OutParm)
// struct FQtnRolledUpgradeResult     RolledUpgrade                                                    (Edit, BlueprintVisible)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::GetCard_LOCALONLY(int32 CardIndex, struct FQtnRolledUpgradeResult* OutRolledResult, const struct FQtnRolledUpgradeResult& RolledUpgrade, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "GetCard_LOCALONLY");

	Params::AUpgradeStation_BP_C_GetCard_LOCALONLY_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.RolledUpgrade = RolledUpgrade;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRolledResult != nullptr)
		*OutRolledResult = std::move(Parms.OutRolledResult);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.SetUpSlotVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerTribunalSlot_BP_C*    Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTribunal_CharacterResponse>TEMPEmpty                                                        (Edit, BlueprintVisible)

void AUpgradeStation_BP_C::SetUpSlotVO(class APlayerTribunalSlot_BP_C* Slot, const TArray<struct FTribunal_CharacterResponse>& TEMPEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "SetUpSlotVO");

	Params::AUpgradeStation_BP_C_SetUpSlotVO_Params Parms{};

	Parms.Slot = Slot;
	Parms.TEMPEmpty = TEMPEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.checkForAllPlayersUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::CheckForAllPlayersUpgraded(bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "checkForAllPlayersUpgraded");

	Params::AUpgradeStation_BP_C_CheckForAllPlayersUpgraded_Params Parms{};

	Parms.CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded = CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Unhide Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::Unhide_Station()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Unhide Station");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Hide Station
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::Hide_Station(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Hide Station");

	Params::AUpgradeStation_BP_C_Hide_Station_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ImproveUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CardNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ImprovedClass                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewRarity                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradingPlayerIndex                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceToReplace                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>RolledNewUpgrade                                                 (Edit, BlueprintVisible)
// class ABodyPawnPlayer_C*           RequestingPlayer                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>UpgradesToUpdate                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ImproveUpgrade(class ABodyPawnPlayer_C* Player, int32 CardNum, int32 OldCurrency, int32 UpgradeCost, class UClass* ImprovedClass, const struct FGameplayTag& NewRarity, int32 UpgradingPlayerIndex, int32 ChoiceToReplace, const TArray<struct FQtnRolledUpgradeResult>& RolledNewUpgrade, class ABodyPawnPlayer_C* RequestingPlayer, const TArray<struct FQtnRolledUpgradeResult>& UpgradesToUpdate, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ImproveUpgrade");

	Params::AUpgradeStation_BP_C_ImproveUpgrade_Params Parms{};

	Parms.Player = Player;
	Parms.CardNum = CardNum;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;
	Parms.ImprovedClass = ImprovedClass;
	Parms.NewRarity = NewRarity;
	Parms.UpgradingPlayerIndex = UpgradingPlayerIndex;
	Parms.ChoiceToReplace = ChoiceToReplace;
	Parms.RolledNewUpgrade = RolledNewUpgrade;
	Parms.RequestingPlayer = RequestingPlayer;
	Parms.UpgradesToUpdate = UpgradesToUpdate;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ApplyUpgrades_Client
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     ChosenRolledUpgrade                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class AQtnItem*                    LOCAL_TargetItem                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       LOCAL_RolledData                                                 (Edit, BlueprintVisible)
// struct FQtnUpgradeSettings         LOCAL_UpgradeSettings                                            (Edit, BlueprintVisible)
// bool                               LOCAL_HasSlotted                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           LOCAL_PlayerBodyPawn                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::ApplyUpgrades_Client(const struct FQtnRolledUpgradeResult& ChosenRolledUpgrade, class AQtnItem* LOCAL_TargetItem, const struct FQtnRolledUpgradeData& LOCAL_RolledData, const struct FQtnUpgradeSettings& LOCAL_UpgradeSettings, bool LOCAL_HasSlotted, class ABodyPawnPlayer_C* LOCAL_PlayerBodyPawn, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ApplyUpgrades_Client");

	Params::AUpgradeStation_BP_C_ApplyUpgrades_Client_Params Parms{};

	Parms.ChosenRolledUpgrade = ChosenRolledUpgrade;
	Parms.LOCAL_TargetItem = LOCAL_TargetItem;
	Parms.LOCAL_RolledData = LOCAL_RolledData;
	Parms.LOCAL_UpgradeSettings = LOCAL_UpgradeSettings;
	Parms.LOCAL_HasSlotted = LOCAL_HasSlotted;
	Parms.LOCAL_PlayerBodyPawn = LOCAL_PlayerBodyPawn;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.MakeUpgradeChoice_Client
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceNum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>RolledChoiceArray                                                (Edit, BlueprintVisible)
// int32                              ActiveSlot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              ChoiceArray                                                      (Edit, BlueprintVisible)
// struct FQtnUpgradeSettings         CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings(None)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::MakeUpgradeChoice_Client(int32 ChoiceNum, const TArray<struct FQtnRolledUpgradeResult>& RolledChoiceArray, int32 ActiveSlot, const TArray<class UClass*>& ChoiceArray, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "MakeUpgradeChoice_Client");

	Params::AUpgradeStation_BP_C_MakeUpgradeChoice_Client_Params Parms{};

	Parms.ChoiceNum = ChoiceNum;
	Parms.RolledChoiceArray = RolledChoiceArray;
	Parms.ActiveSlot = ActiveSlot;
	Parms.ChoiceArray = ChoiceArray;
	Parms.CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings = CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.HideOtherPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hiding                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             CurBody                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHiding                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPlayerNameplateManagerComponent*CallFunc_GetQtnNameplateManagerComponent_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1               (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::HideOtherPlayers(bool Hiding, class ABodyPawnBase_C* CurBody, bool IsHiding, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UQtnPlayerNameplateManagerComponent* CallFunc_GetQtnNameplateManagerComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1, int32 Temp_int_Loop_Counter_Variable_2, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, class ABodyPawnBase_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "HideOtherPlayers");

	Params::AUpgradeStation_BP_C_HideOtherPlayers_Params Parms{};

	Parms.Hiding = Hiding;
	Parms.CurBody = CurBody;
	Parms.IsHiding = IsHiding;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetQtnNameplateManagerComponent_ReturnValue = CallFunc_GetQtnNameplateManagerComponent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1 = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.SortPlacementArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorPlacementComp_C*>PlayerSlots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UActorPlacementComp_C*>SortedArray                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Inserted                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UActorPlacementComp_C*>TempArray                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorPlacementComp_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorPlacementComp_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::SortPlacementArray(TArray<class UActorPlacementComp_C*>& PlayerSlots, const TArray<class UActorPlacementComp_C*>& SortedArray, bool Inserted, const TArray<class UActorPlacementComp_C*>& TempArray, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UActorPlacementComp_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UActorPlacementComp_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "SortPlacementArray");

	Params::AUpgradeStation_BP_C_SortPlacementArray_Params Parms{};

	Parms.PlayerSlots = PlayerSlots;
	Parms.SortedArray = SortedArray;
	Parms.Inserted = Inserted;
	Parms.TempArray = TempArray;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.RecordUpgradeForTribunal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AUpgradeStation_BP_C::RecordUpgradeForTribunal(const struct FQtnRolledUpgradeResult& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "RecordUpgradeForTribunal");

	Params::AUpgradeStation_BP_C_RecordUpgradeForTribunal_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.SetupUpgradeStationComponentEventListeners
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::SetupUpgradeStationComponentEventListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "SetupUpgradeStationComponentEventListeners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnUpgradeProcessBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::OnUpgradeProcessBegin(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnUpgradeProcessBegin");

	Params::AUpgradeStation_BP_C_OnUpgradeProcessBegin_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnUpgradeProcessComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::OnUpgradeProcessComplete(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnUpgradeProcessComplete");

	Params::AUpgradeStation_BP_C_OnUpgradeProcessComplete_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnUpgradeRerollEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::OnUpgradeRerollEvent(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnUpgradeRerollEvent");

	Params::AUpgradeStation_BP_C_OnUpgradeRerollEvent_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnUpgradeCardsArrayUpdatedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::OnUpgradeCardsArrayUpdatedEvent(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnUpgradeCardsArrayUpdatedEvent");

	Params::AUpgradeStation_BP_C_OnUpgradeCardsArrayUpdatedEvent_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.FTUX_RetryDelayedDeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::FTUX_RetryDelayedDeal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "FTUX_RetryDelayedDeal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.BndEvt__UpgradeStation_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::BndEvt__UpgradeStation_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "BndEvt__UpgradeStation_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::AUpgradeStation_BP_C_BndEvt__UpgradeStation_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.SetUpPlayerSlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::SetUpPlayerSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "SetUpPlayerSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.PlayerFinishedImplement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyPawnPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::PlayerFinishedImplement(class ABodyPawnPlayer_C* BodyPawnPlayer, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "PlayerFinishedImplement");

	Params::AUpgradeStation_BP_C_PlayerFinishedImplement_Params Parms{};

	Parms.BodyPawnPlayer = BodyPawnPlayer;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.PlayerReleased_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           bodyPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::PlayerReleased_MULTI(class ABodyPawnPlayer_C* bodyPlayer, class UQtnUpgradeSession* UpgradeSession, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "PlayerReleased_MULTI");

	Params::AUpgradeStation_BP_C_PlayerReleased_MULTI_Params Parms{};

	Parms.bodyPlayer = bodyPlayer;
	Parms.UpgradeSession = UpgradeSession;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUpgradeStation_BP_C::BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AUpgradeStation_BP_C_BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.spawnCharacterActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::SpawnCharacterActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "spawnCharacterActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.bindPlayerCountChangedEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::bindPlayerCountChangedEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "bindPlayerCountChangedEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.PlayerExitWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::PlayerExitWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "PlayerExitWorld");

	Params::AUpgradeStation_BP_C_PlayerExitWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.unbindPlayerCounterEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::UnbindPlayerCounterEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "unbindPlayerCounterEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.multicast_Hide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::Multicast_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "multicast_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.multicast_Unhide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::Multicast_Unhide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "multicast_Unhide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.PlayerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::PlayerFinished(class ABodyPawnPlayer_C* PlayerBody, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "PlayerFinished");

	Params::AUpgradeStation_BP_C_PlayerFinished_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ImproveCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ImproveCard(int32 CardIndex, class ABodyPawnPlayer_C* PlayerBody, int32 OldCurrency, int32 UpgradeCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ImproveCard");

	Params::AUpgradeStation_BP_C_ImproveCard_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.PlayerBody = PlayerBody;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.SetCardToReplaceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::SetCardToReplaceLocal(int32 CardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "SetCardToReplaceLocal");

	Params::AUpgradeStation_BP_C_SetCardToReplaceLocal_Params Parms{};

	Parms.CardIndex = CardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.MakeUpgradeChoiceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::MakeUpgradeChoiceLocal(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "MakeUpgradeChoiceLocal");

	Params::AUpgradeStation_BP_C_MakeUpgradeChoiceLocal_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnPlayerStatesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::OnPlayerStatesChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnPlayerStatesChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ReceiveTick");

	Params::AUpgradeStation_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ForceEject
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::ForceEject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ForceEject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.UpdateShrineVis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::UpdateShrineVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "UpdateShrineVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ToggleCardsUnselectableForTutorial_Local
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unselectable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_BP_C::ToggleCardsUnselectableForTutorial_Local(bool Unselectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ToggleCardsUnselectableForTutorial_Local");

	Params::AUpgradeStation_BP_C_ToggleCardsUnselectableForTutorial_Local_Params Parms{};

	Parms.Unselectable = Unselectable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ResetSpecificPlayer_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ResetSpecificPlayer_ServerOnly(class ABodyPawnPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ResetSpecificPlayer_ServerOnly");

	Params::AUpgradeStation_BP_C_ResetSpecificPlayer_ServerOnly_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.AddIdleVOPawn_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           IdleVOPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::AddIdleVOPawn_ServerOnly(class ABodyPawnPlayer_C* IdleVOPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "AddIdleVOPawn_ServerOnly");

	Params::AUpgradeStation_BP_C_AddIdleVOPawn_ServerOnly_Params Parms{};

	Parms.IdleVOPawn = IdleVOPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.RemoveIdleVOPawn_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           IdleVOPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::RemoveIdleVOPawn_ServerOnly(class ABodyPawnPlayer_C* IdleVOPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "RemoveIdleVOPawn_ServerOnly");

	Params::AUpgradeStation_BP_C_RemoveIdleVOPawn_ServerOnly_Params Parms{};

	Parms.IdleVOPawn = IdleVOPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.OnIdleVOTimer_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::OnIdleVOTimer_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "OnIdleVOTimer_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.Multicast_PlayIdleVO
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Variant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::Multicast_PlayIdleVO(int32 Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "Multicast_PlayIdleVO");

	Params::AUpgradeStation_BP_C_Multicast_PlayIdleVO_Params Parms{};

	Parms.Variant = Variant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::AUpgradeStation_BP_C_BndEvt__UpgradeStation_BP_BeckonTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.ExecuteUbergraph_UpgradeStation_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnBSChoice>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SnapToGround_foundGround                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SnapToGround_hitNormal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_SnapToGround_physicalSurface                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SnapToGround_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetSessionBodyPawn_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetSessionBodyPawn_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_CustomEvent_UpgradeSession_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetSessionBodyPawn_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_BP_C*        K2Node_DynamicCast_AsUpgrade_Station_BP                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetSessionBodyPawn_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetSessionBodyPawn_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FTUXHideCheck_hide                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnBSChoice>        K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_Event_Upgrade                                             (None)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPlayerPlacementComp_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_bodypawnPlayer                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_choiceIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_bodyPlayer                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSession*          K2Node_CustomEvent_UpgradeSession                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_choiceIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_Event_PlayerBody_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChoiceIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CardIndex_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_Event_PlayerBody                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_oldCurrency                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_upgradeCost                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CardIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChoiceIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AScriptedSkeletalActor_Trial_C>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CheckForJokerFTUXGreet_Play_FTUX                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABS_Choice_Card_C*           CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Screen_C*       CallFunc_GetScreen_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnScreenState         CallFunc_GetScreenState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuUpgrade_Widget_C*       K2Node_DynamicCast_AsMenu_Upgrade_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShrine_Parent_BP_C*         CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReactionToTag           CallFunc_Array_Get_Item_4                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Unselectable                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSession*          CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerTribunalSlot_BP_C*    K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_idleVOPawn_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_idleVOPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_variant                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class AQtnGameState*               CallFunc_WaitForReadyForGameplay_readyGameState                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ExecuteUbergraph_UpgradeStation_BP(int32 EntryPoint, TArray<struct FQtnBSChoice>& K2Node_MakeArray_Array, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_1, bool CallFunc_IsValid_ReturnValue_1, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_2, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_3, class AQtnBodyPawn* CallFunc_GetSessionBodyPawn_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnBodyPawn* CallFunc_GetSessionBodyPawn_ReturnValue_1, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, class UPlayerUpgradeSessionState_C* K2Node_CustomEvent_UpgradeSession_4, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnBodyPawn* CallFunc_GetSessionBodyPawn_ReturnValue_2, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot_1, class AQtnBodyPawn* CallFunc_GetSessionBodyPawn_ReturnValue_3, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetSessionBodyPawn_ReturnValue_4, bool CallFunc_FTUXHideCheck_hide, TArray<struct FQtnBSChoice>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnRolledUpgradeResult& K2Node_Event_Upgrade, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsServer_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, TArray<class UPlayerPlacementComp_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_CustomEvent_bodypawnPlayer, int32 K2Node_CustomEvent_choiceIndex_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_bodyPlayer, class UQtnUpgradeSession* K2Node_CustomEvent_UpgradeSession, int32 K2Node_CustomEvent_choiceIndex, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer_1, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_1, int32 CallFunc_FindPlayerData____PlayerIndex_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_FindPlayerData____FoundPlayer_2, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_2, int32 CallFunc_FindPlayerData____PlayerIndex_2, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_FindPlayerData____FoundPlayer_3, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_3, int32 CallFunc_FindPlayerData____PlayerIndex_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class ABodyPawnPlayer_C* K2Node_Event_PlayerBody_1, int32 K2Node_Event_ChoiceIndex_1, int32 K2Node_Event_CardIndex_1, class ABodyPawnPlayer_C* K2Node_Event_PlayerBody, int32 K2Node_Event_oldCurrency, int32 K2Node_Event_upgradeCost, int32 K2Node_Event_CardIndex, int32 K2Node_Event_ChoiceIndex, bool CallFunc_IsServer_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess_3, int32 Temp_int_Array_Index_Variable_3, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, TSoftClassPtr<class AScriptedSkeletalActor_Trial_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_CheckForJokerFTUXGreet_Play_FTUX, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_2, class ABS_Choice_Card_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UMenuUpgrade_Screen_C* CallFunc_GetScreen_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, enum class EQtnScreenState CallFunc_GetScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_7, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UMenuUpgrade_Widget_C* K2Node_DynamicCast_AsMenu_Upgrade_Widget, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsServer_ReturnValue_8, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AScriptedSkeletalActor_Trial_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AShrine_Parent_BP_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_7, const struct FQtnReactionToTag& CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item_5, bool K2Node_CustomEvent_Unselectable, class UQtnUpgradeSession* CallFunc_Array_Get_Item_6, bool CallFunc_IsValid_ReturnValue_8, class APlayerTribunalSlot_BP_C* K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_9, class ABodyPawnPlayer_C* K2Node_CustomEvent_player, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_8, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_FindPlayerData____FoundPlayer_4, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_4, int32 CallFunc_FindPlayerData____PlayerIndex_4, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot_3, bool K2Node_SwitchEnum_CmpSuccess_8, bool K2Node_SwitchEnum_CmpSuccess_9, bool CallFunc_IsServer_ReturnValue_10, class ABodyPawnPlayer_C* K2Node_CustomEvent_idleVOPawn_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_idleVOPawn, bool CallFunc_IsServer_ReturnValue_11, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Greater_IntInt_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Array_RemoveItem_ReturnValue, int32 K2Node_CustomEvent_variant, int32 CallFunc_RandomInteger_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_5, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_IsServer_ReturnValue_12, bool CallFunc_IsServer_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsServer_ReturnValue_14, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState, bool CallFunc_IsShippingBuild_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "ExecuteUbergraph_UpgradeStation_BP");

	Params::AUpgradeStation_BP_C_ExecuteUbergraph_UpgradeStation_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SnapToGround_foundGround = CallFunc_SnapToGround_foundGround;
	Parms.CallFunc_SnapToGround_hitNormal = CallFunc_SnapToGround_hitNormal;
	Parms.CallFunc_SnapToGround_physicalSurface = CallFunc_SnapToGround_physicalSurface;
	Parms.CallFunc_SnapToGround_ReturnValue = CallFunc_SnapToGround_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_UpgradeSession_1 = K2Node_CustomEvent_UpgradeSession_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_UpgradeSession_2 = K2Node_CustomEvent_UpgradeSession_2;
	Parms.K2Node_CustomEvent_UpgradeSession_3 = K2Node_CustomEvent_UpgradeSession_3;
	Parms.CallFunc_GetSessionBodyPawn_ReturnValue = CallFunc_GetSessionBodyPawn_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetSessionBodyPawn_ReturnValue_1 = CallFunc_GetSessionBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.K2Node_CustomEvent_UpgradeSession_4 = K2Node_CustomEvent_UpgradeSession_4;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetSessionBodyPawn_ReturnValue_2 = CallFunc_GetSessionBodyPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_BP = K2Node_DynamicCast_AsUpgrade_Station_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTribunalSlot_TribSlot_1 = CallFunc_GetTribunalSlot_TribSlot_1;
	Parms.CallFunc_GetSessionBodyPawn_ReturnValue_3 = CallFunc_GetSessionBodyPawn_ReturnValue_3;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_2 = CallFunc_IsLocallyControlledPlayer_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_3 = CallFunc_IsLocallyControlledPlayer_ReturnValue_3;
	Parms.CallFunc_GetSessionBodyPawn_ReturnValue_4 = CallFunc_GetSessionBodyPawn_ReturnValue_4;
	Parms.CallFunc_FTUXHideCheck_hide = CallFunc_FTUXHideCheck_hide;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_Upgrade = K2Node_Event_Upgrade;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_bodypawnPlayer = K2Node_CustomEvent_bodypawnPlayer;
	Parms.K2Node_CustomEvent_choiceIndex_1 = K2Node_CustomEvent_choiceIndex_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_CustomEvent_bodyPlayer = K2Node_CustomEvent_bodyPlayer;
	Parms.K2Node_CustomEvent_UpgradeSession = K2Node_CustomEvent_UpgradeSession;
	Parms.K2Node_CustomEvent_choiceIndex = K2Node_CustomEvent_choiceIndex;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_4 = CallFunc_IsLocallyControlledPlayer_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_1 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_1 = CallFunc_GetLocalPlayerControllerBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FindPlayerData____FoundPlayer_1 = CallFunc_FindPlayerData____FoundPlayer_1;
	Parms.CallFunc_FindPlayerData____PlayerSession_1 = CallFunc_FindPlayerData____PlayerSession_1;
	Parms.CallFunc_FindPlayerData____PlayerIndex_1 = CallFunc_FindPlayerData____PlayerIndex_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_FindPlayerData____FoundPlayer_2 = CallFunc_FindPlayerData____FoundPlayer_2;
	Parms.CallFunc_FindPlayerData____PlayerSession_2 = CallFunc_FindPlayerData____PlayerSession_2;
	Parms.CallFunc_FindPlayerData____PlayerIndex_2 = CallFunc_FindPlayerData____PlayerIndex_2;
	Parms.CallFunc_GetTribunalSlot_TribSlot_2 = CallFunc_GetTribunalSlot_TribSlot_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_FindPlayerData____FoundPlayer_3 = CallFunc_FindPlayerData____FoundPlayer_3;
	Parms.CallFunc_FindPlayerData____PlayerSession_3 = CallFunc_FindPlayerData____PlayerSession_3;
	Parms.CallFunc_FindPlayerData____PlayerIndex_3 = CallFunc_FindPlayerData____PlayerIndex_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_3 = CallFunc_GetQtnGameState_ReturnValue_3;
	Parms.K2Node_Event_PlayerBody_1 = K2Node_Event_PlayerBody_1;
	Parms.K2Node_Event_ChoiceIndex_1 = K2Node_Event_ChoiceIndex_1;
	Parms.K2Node_Event_CardIndex_1 = K2Node_Event_CardIndex_1;
	Parms.K2Node_Event_PlayerBody = K2Node_Event_PlayerBody;
	Parms.K2Node_Event_oldCurrency = K2Node_Event_oldCurrency;
	Parms.K2Node_Event_upgradeCost = K2Node_Event_upgradeCost;
	Parms.K2Node_Event_CardIndex = K2Node_Event_CardIndex;
	Parms.K2Node_Event_ChoiceIndex = K2Node_Event_ChoiceIndex;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_CheckForJokerFTUXGreet_Play_FTUX = CallFunc_CheckForJokerFTUXGreet_Play_FTUX;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI_1 = CallFunc_GetLocalPlayerUIBP_localPlayerUI_1;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin_1 = CallFunc_GetLocalPlayerUIBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetScreen_ReturnValue_1 = CallFunc_GetScreen_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetScreenState_ReturnValue = CallFunc_GetScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsMenu_Upgrade_Widget = K2Node_DynamicCast_AsMenu_Upgrade_Widget;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_CustomEvent_Unselectable = K2Node_CustomEvent_Unselectable;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP = K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin_1 = CallFunc_GetLocalPlayerOccupiedBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1 = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_3 = K2Node_DynamicCast_AsBody_Pawn_Player_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_4 = K2Node_DynamicCast_AsBody_Pawn_Player_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_FindPlayerData____FoundPlayer_4 = CallFunc_FindPlayerData____FoundPlayer_4;
	Parms.CallFunc_FindPlayerData____PlayerSession_4 = CallFunc_FindPlayerData____PlayerSession_4;
	Parms.CallFunc_FindPlayerData____PlayerIndex_4 = CallFunc_FindPlayerData____PlayerIndex_4;
	Parms.CallFunc_GetTribunalSlot_TribSlot_3 = CallFunc_GetTribunalSlot_TribSlot_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.K2Node_CustomEvent_idleVOPawn_1 = K2Node_CustomEvent_idleVOPawn_1;
	Parms.K2Node_CustomEvent_idleVOPawn = K2Node_CustomEvent_idleVOPawn;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CustomEvent_variant = K2Node_CustomEvent_variant;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_5 = K2Node_DynamicCast_AsBody_Pawn_Player_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.CallFunc_IsServer_ReturnValue_13 = CallFunc_IsServer_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsServer_ReturnValue_14 = CallFunc_IsServer_ReturnValue_14;
	Parms.CallFunc_GetQtnGameState_ReturnValue_4 = CallFunc_GetQtnGameState_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_WaitForReadyForGameplay_readyGameState = CallFunc_WaitForReadyForGameplay_readyGameState;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.thisPlayerStartedUpgrade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ThisPlayerStartedUpgrade__DelegateSignature(class ABodyPawnPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "thisPlayerStartedUpgrade__DelegateSignature");

	Params::AUpgradeStation_BP_C_ThisPlayerStartedUpgrade__DelegateSignature_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.thisPlayerUpgraded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_BP_C::ThisPlayerUpgraded__DelegateSignature(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "thisPlayerUpgraded__DelegateSignature");

	Params::AUpgradeStation_BP_C_ThisPlayerUpgraded__DelegateSignature_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_BP.UpgradeStation_BP_C.AllExpectedPlayersUpgraded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_BP_C::AllExpectedPlayersUpgraded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_BP_C", "AllExpectedPlayersUpgraded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


