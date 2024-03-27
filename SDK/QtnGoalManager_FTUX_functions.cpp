#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_FTUX.QtnGoalManager_FTUX_C
// (None)

class UClass* UQtnGoalManager_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_FTUX_C");

	return Clss;
}


// QtnGoalManager_FTUX_C QtnGoalManager_FTUX.Default__QtnGoalManager_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_FTUX_C* UQtnGoalManager_FTUX_C::GetDefaultObj()
{
	static class UQtnGoalManager_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_FTUX_C*>(UQtnGoalManager_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.CheckForDeepSnowPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUX_DeepSnow_Screen_C*     CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::CheckForDeepSnowPopup(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_DeepSnow_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "CheckForDeepSnowPopup");

	Params::UQtnGoalManager_FTUX_C_CheckForDeepSnowPopup_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To Bullshit Boss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To_Bullshit_Boss(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To Bullshit Boss");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Bullshit_Boss_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.FlushTutorials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_FTUX_MeetButters_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Meet_Butters                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::FlushTutorials(class UQtnGoal_FTUX_MeetButters_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Meet_Butters, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "FlushTutorials");

	Params::UQtnGoalManager_FTUX_C_FlushTutorials_Params Parms{};

	Parms.K2Node_DynamicCast_AsQtn_Goal_FTUX_Meet_Butters = K2Node_DynamicCast_AsQtn_Goal_FTUX_Meet_Butters;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To Trail Combat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To_Trail_Combat(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To Trail Combat");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Trail_Combat_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To Healing Totem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To_Healing_Totem(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To Healing Totem");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Healing_Totem_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To Chase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To_Chase(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To Chase");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Chase_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY_SkipToRangedFight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_SkipToRangedFight(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY_SkipToRangedFight");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_SkipToRangedFight_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY_SkipToSwarmerFight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_SkipToSwarmerFight(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY_SkipToSwarmerFight");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_SkipToSwarmerFight_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY_SkipToFartEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_SkipToFartEscape(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY_SkipToFartEscape");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_SkipToFartEscape_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To Mantle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGoal_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To_Mantle(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To Mantle");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Mantle_Params Parms{};

	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGoal_Base = K2Node_ClassDynamicCast_AsGoal_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.DEBUGONLY Skip To
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      TodaysGoalClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    Skip_to_goal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysGoal                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::DEBUGONLY_Skip_To(class UClass* TodaysGoalClass, class UQtnGoal* Skip_to_goal, class UClass* LOCAL_TodaysGoal, int32 Temp_int_Loop_Counter_Variable, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class UQtnGoal* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "DEBUGONLY Skip To");

	Params::UQtnGoalManager_FTUX_C_DEBUGONLY_Skip_To_Params Parms{};

	Parms.TodaysGoalClass = TodaysGoalClass;
	Parms.Skip_to_goal = Skip_to_goal;
	Parms.LOCAL_TodaysGoal = LOCAL_TodaysGoal;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.GetScriptedVOScene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_FTUX_C::GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "GetScriptedVOScene");

	Params::UQtnGoalManager_FTUX_C_GetScriptedVOScene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScriptedVOScene != nullptr)
		*ScriptedVOScene = std::move(Parms.ScriptedVOScene);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.KickPlayerWhoTriedToJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_FTUX_C::KickPlayerWhoTriedToJoin(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "KickPlayerWhoTriedToJoin");

	Params::UQtnGoalManager_FTUX_C_KickPlayerWhoTriedToJoin_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.bindInviteAcceptEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_FTUX_C::bindInviteAcceptEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "bindInviteAcceptEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.OnJoinPendingInviteReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_FTUX_C::OnJoinPendingInviteReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "OnJoinPendingInviteReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_FTUX_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_FTUX.QtnGoalManager_FTUX_C.ExecuteUbergraph_QtnGoalManager_FTUX
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_14                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_15                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_16                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_17                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_18                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_19                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_20                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_21                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_22                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_23                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_24                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_25                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_26                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_27                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_28                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_29                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_30                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_31                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_32                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_FTUX_C::ExecuteUbergraph_QtnGoalManager_FTUX(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsPlayingInEditor_ReturnValue, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_14, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_15, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_16, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_17, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_18, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_19, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_20, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_21, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_22, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_23, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_24, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_25, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_26, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_27, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_28, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_29, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_30, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_31, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_32)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_FTUX_C", "ExecuteUbergraph_QtnGoalManager_FTUX");

	Params::UQtnGoalManager_FTUX_C_ExecuteUbergraph_QtnGoalManager_FTUX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue_1 = CallFunc_GetQtnGameInstance_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_14 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_14;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_15 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_15;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_16 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_16;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_17 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_17;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_18 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_18;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_19 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_19;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_20 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_20;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_21 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_21;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_22 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_22;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_23 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_23;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_24 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_24;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_25 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_25;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_26 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_26;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_27 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_27;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_28 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_28;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_29 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_29;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_30 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_30;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_31 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_31;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_32 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_32;

	UObject::ProcessEvent(Func, &Parms);

}

}


