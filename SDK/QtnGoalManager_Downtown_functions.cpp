#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_Downtown.QtnGoalManager_Downtown_C
// (None)

class UClass* UQtnGoalManager_Downtown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_Downtown_C");

	return Clss;
}


// QtnGoalManager_Downtown_C QtnGoalManager_Downtown.Default__QtnGoalManager_Downtown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_Downtown_C* UQtnGoalManager_Downtown_C::GetDefaultObj()
{
	static class UQtnGoalManager_Downtown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_Downtown_C*>(UQtnGoalManager_Downtown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.Reroute Rulebook FTUX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_Day1_CE_RulebookFTUX_C*K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal_Day1_CE_RulebookFTUX_C*K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX_1           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::Reroute_Rulebook_FTUX(class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX, bool K2Node_DynamicCast_bSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_2, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX_1, bool K2Node_DynamicCast_bSuccess_3, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_4, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "Reroute Rulebook FTUX");

	Params::UQtnGoalManager_Downtown_C_Reroute_Rulebook_FTUX_Params Parms{};

	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX = K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX_1 = K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.Insert Rulebook FTUXGoal Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_DT_Arc3_FOSParent_C*K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_DT_Arc3_FOSParent_C*K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1          (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal_Day1_CE_RulebookFTUX_C*K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::Insert_Rulebook_FTUXGoal_Server_Only(class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_DT_Arc3_FOSParent_C* K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnGoal_DT_Arc3_FOSParent_C* K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent_1, bool K2Node_DynamicCast_bSuccess_3, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Add_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "Insert Rulebook FTUXGoal Server Only");

	Params::UQtnGoalManager_Downtown_C_Insert_Rulebook_FTUXGoal_Server_Only_Params Parms{};

	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent = K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent_1 = K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX = K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_RemoveGoalFromIgnoreList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UQtnGoal>      DesiredGoalClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UQtnGoal*                    LOCAL_RemoveThisGoal                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Goal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_RemoveGoalFromIgnoreList(TSoftClassPtr<class UQtnGoal> DesiredGoalClass, class UQtnGoal* LOCAL_RemoveThisGoal, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32 Temp_int_Array_Index_Variable, class UClass* K2Node_ClassDynamicCast_AsQtn_Goal, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_RemoveGoalFromIgnoreList");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_RemoveGoalFromIgnoreList_Params Parms{};

	Parms.DesiredGoalClass = DesiredGoalClass;
	Parms.LOCAL_RemoveThisGoal = LOCAL_RemoveThisGoal;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ClassDynamicCast_AsQtn_Goal = K2Node_ClassDynamicCast_AsQtn_Goal;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_GetGoalClassFromDebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DebugStringID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      GoalClass                                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                               No_Class                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_GetGoalClassFromDebugInfo(const class FString& DebugStringID, TSoftClassPtr<class UQtnGoal>* GoalClass, bool* No_Class, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_GetGoalClassFromDebugInfo");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_GetGoalClassFromDebugInfo_Params Parms{};

	Parms.DebugStringID = DebugStringID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (GoalClass != nullptr)
		*GoalClass = Parms.GoalClass;

	if (No_Class != nullptr)
		*No_Class = Parms.No_Class;

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_Teleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Feat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 LOCAL_GoalToStart                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_Teleport(bool To_Feat, class UGoalBase_C* LOCAL_GoalToStart, int32 Temp_int_Array_Index_Variable, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_Teleport");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_Teleport_Params Parms{};

	Parms.To_Feat = To_Feat;
	Parms.LOCAL_GoalToStart = LOCAL_GoalToStart;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.ReassignGateTeleportPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Gate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeadPlayerTeleportLoc_C* New_Destination                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::ReassignGateTeleportPoint(class ATravelVolume_BP_C* Gate, class ABP_DeadPlayerTeleportLoc_C* New_Destination, bool CallFunc_IsOnServer_ReturnValue, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "ReassignGateTeleportPoint");

	Params::UQtnGoalManager_Downtown_C_ReassignGateTeleportPoint_Params Parms{};

	Parms.Gate = Gate;
	Parms.New_Destination = New_Destination;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.RollBonusZone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ambush_Exists                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Chosen_Ambush                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_Selection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              LOCAL_StartingGoals                                              (Edit, BlueprintVisible)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_CE_Parent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_DT_Arc3_FOSParent_C*K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses           (ReferenceParm)
// class ATravelVolume_BP_C*          CallFunc_DoGetExitGate_exitGate                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue                             (ReferenceParm)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::RollBonusZone(bool* Ambush_Exists, class UClass** Chosen_Ambush, class UClass* LOCAL_Selection, const TArray<class UClass*>& LOCAL_StartingGoals, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_CE_Parent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGoal_DT_Arc3_FOSParent_C* K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_3, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, class UClass* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "RollBonusZone");

	Params::UQtnGoalManager_Downtown_C_RollBonusZone_Params Parms{};

	Parms.LOCAL_Selection = LOCAL_Selection;
	Parms.LOCAL_StartingGoals = LOCAL_StartingGoals;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent = K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses;
	Parms.CallFunc_DoGetExitGate_exitGate = CallFunc_DoGetExitGate_exitGate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_LoadGoalClasses_ReturnValue = CallFunc_LoadGoalClasses_ReturnValue;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ambush_Exists != nullptr)
		*Ambush_Exists = Parms.Ambush_Exists;

	if (Chosen_Ambush != nullptr)
		*Chosen_Ambush = Parms.Chosen_Ambush;

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.SaveGoalAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_Description                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_GoalClass                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::SaveGoalAsSeen(class UQtnGoal* Goal, const class FString& Description, const class FString& LOCAL_Description, class UClass* LOCAL_GoalClass, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "SaveGoalAsSeen");

	Params::UQtnGoalManager_Downtown_C_SaveGoalAsSeen_Params Parms{};

	Parms.Goal = Goal;
	Parms.Description = Description;
	Parms.LOCAL_Description = LOCAL_Description;
	Parms.LOCAL_GoalClass = LOCAL_GoalClass;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_MS_SkipToCentral
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_Downtown_C::DEBUGONLY_MS_SkipToCentral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_MS_SkipToCentral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_SkipToDump
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      DesiredLocations                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGoalBase_C*                 LOCAL_SpawnedGoal                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysDumpGoal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_2  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_3  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_SkipToDump(TArray<int32>& DesiredLocations, class UGoalBase_C* LOCAL_SpawnedGoal, class UClass* LOCAL_TodaysDumpGoal, int32 CallFunc_GetCurrentArc_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_3, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_5, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_6, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_SkipToDump");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_SkipToDump_Params Parms{};

	Parms.DesiredLocations = DesiredLocations;
	Parms.LOCAL_SpawnedGoal = LOCAL_SpawnedGoal;
	Parms.LOCAL_TodaysDumpGoal = LOCAL_TodaysDumpGoal;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_2 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_3 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_FOS_Magazine_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY Move Player Starts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Locations                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      LOCAL_REF                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LOCAL_Length                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerStart*>     LOCAL_HoldingArray                                               (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AQtnPlayerStart*>     LOCAL_GoodLocations                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              LOCAL_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerStart*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPlayerStart*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerStart*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::DEBUGONLY_Move_Player_Starts(TArray<class AActor*>& Locations, class AActor* LOCAL_REF, int32 LOCAL_Length, const TArray<class AQtnPlayerStart*>& LOCAL_HoldingArray, const TArray<class AQtnPlayerStart*>& LOCAL_GoodLocations, int32 LOCAL_Index, class FName Temp_name_Variable, class AQtnPlayerStart* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsPlayingInEditor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPlayerStart* CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY Move Player Starts");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_Move_Player_Starts_Params Parms{};

	Parms.Locations = Locations;
	Parms.LOCAL_REF = LOCAL_REF;
	Parms.LOCAL_Length = LOCAL_Length;
	Parms.LOCAL_HoldingArray = LOCAL_HoldingArray;
	Parms.LOCAL_GoodLocations = LOCAL_GoodLocations;
	Parms.LOCAL_Index = LOCAL_Index;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.GetScriptedVOScene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "GetScriptedVOScene");

	Params::UQtnGoalManager_Downtown_C_GetScriptedVOScene_Params Parms{};

	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ScriptedVOScene != nullptr)
		*ScriptedVOScene = std::move(Parms.ScriptedVOScene);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.ShouldPlayCutscenes
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

void UQtnGoalManager_Downtown_C::ShouldPlayCutscenes(bool* Play_cutscenes, class FName LOCAL_TrialTag, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsPlayingInEditor_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_FindMarkedActors_ServerOnly_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoGetRunInEditor_runInEditor, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "ShouldPlayCutscenes");

	Params::UQtnGoalManager_Downtown_C_ShouldPlayCutscenes_Params Parms{};

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


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_ForceShiTpaTownLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Item1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item3                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item1_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item2_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item3_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    LOCAL_TodaysGoal                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ALocationMarker_BP_C*>LOCAL_TodaysLocations                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// class ALocationMarker_BP_C*        Local_3                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        Local_2                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        Local_1                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ALocationMarker_BP_C*>LOCAL_FoundLocs                                                  (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ALocationMarker_BP_C*>LOCAL_HoldingArray                                               (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ALocationMarker_BP_C*>CallFunc_GetInitialAllLocations_initialAllLocations              (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_2  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALocationMarker_BP_C*        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALocationMarker_BP_C*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ALocationMarker_BP_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_ForceShiTpaTownLocations(const class FString& Item1, const class FString& Item2, const class FString& Item3, const class FString& Item1_Loc, const class FString& Item2_Loc, const class FString& Item3_Loc, class UQtnGoal* LOCAL_TodaysGoal, const TArray<class ALocationMarker_BP_C*>& LOCAL_TodaysLocations, class ALocationMarker_BP_C* Local_3, class ALocationMarker_BP_C* Local_2, class ALocationMarker_BP_C* Local_1, const TArray<class ALocationMarker_BP_C*>& LOCAL_FoundLocs, const TArray<class ALocationMarker_BP_C*>& LOCAL_HoldingArray, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ALocationMarker_BP_C*>& CallFunc_GetInitialAllLocations_initialAllLocations, bool CallFunc_BooleanAND_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_True_if_break_was_hit_Variable_3, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_3, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_2, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ALocationMarker_BP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ALocationMarker_BP_C* CallFunc_Array_Get_Item_2, class ALocationMarker_BP_C* CallFunc_Array_Get_Item_3, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class ALocationMarker_BP_C*>& K2Node_MakeArray_Array_1, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_ForceShiTpaTownLocations");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_ForceShiTpaTownLocations_Params Parms{};

	Parms.Item1 = Item1;
	Parms.Item2 = Item2;
	Parms.Item3 = Item3;
	Parms.Item1_Loc = Item1_Loc;
	Parms.Item2_Loc = Item2_Loc;
	Parms.Item3_Loc = Item3_Loc;
	Parms.LOCAL_TodaysGoal = LOCAL_TodaysGoal;
	Parms.LOCAL_TodaysLocations = LOCAL_TodaysLocations;
	Parms.Local_3 = Local_3;
	Parms.Local_2 = Local_2;
	Parms.Local_1 = Local_1;
	Parms.LOCAL_FoundLocs = LOCAL_FoundLocs;
	Parms.LOCAL_HoldingArray = LOCAL_HoldingArray;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInitialAllLocations_initialAllLocations = CallFunc_GetInitialAllLocations_initialAllLocations;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_2 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_SkipToShiTpaTown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 LOCAL_SpawnedGoal                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysShitpatownGoal                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_SkipToShiTpaTown(class UGoalBase_C* LOCAL_SpawnedGoal, class UClass* LOCAL_TodaysShitpatownGoal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_GetCurrentArc_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, class AQtnBodyPawn* CallFunc_Array_Get_Item, class UQtnGoal* CallFunc_Array_Get_Item_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_SkipToShiTpaTown");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_SkipToShiTpaTown_Params Parms{};

	Parms.LOCAL_SpawnedGoal = LOCAL_SpawnedGoal;
	Parms.LOCAL_TodaysShitpatownGoal = LOCAL_TodaysShitpatownGoal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Shi_Tpa_Town;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.Roll Day Toggle Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "Roll Day Toggle Setup");

	Params::UQtnGoalManager_Downtown_C_Roll_Day_Toggle_Setup_Params Parms{};

	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_SkipToTheatre
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LOCAL_TodaysTheatreGoal                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnGoalStatus          CallFunc_GetGoalStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_5                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_SkipToTheatre(class UClass* LOCAL_TodaysTheatreGoal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_2, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_4, bool K2Node_DynamicCast_bSuccess_4, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_5, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_SkipToTheatre");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_SkipToTheatre_Params Parms{};

	Parms.LOCAL_TodaysTheatreGoal = LOCAL_TodaysTheatreGoal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGoalStatus_ReturnValue = CallFunc_GetGoalStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGoal_Base_3 = K2Node_DynamicCast_AsGoal_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_4 = K2Node_DynamicCast_AsGoal_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_5 = K2Node_DynamicCast_AsGoal_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.setUpExitGate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FOSIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          CallFunc_DoGetExitGate_exitGate                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::SetUpExitGate(class UQtnGoal* Goal, int32 FOSIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "setUpExitGate");

	Params::UQtnGoalManager_Downtown_C_SetUpExitGate_Params Parms{};

	Parms.Goal = Goal;
	Parms.FOSIndex = FOSIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_DoGetExitGate_exitGate = CallFunc_DoGetExitGate_exitGate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.SetUpTeleportPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FOSIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          CallFunc_DoGetExitGate_exitGate                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::SetUpTeleportPoints(class UQtnGoal* Goal, int32 FOSIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1, bool K2Node_DynamicCast_bSuccess_3, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "SetUpTeleportPoints");

	Params::UQtnGoalManager_Downtown_C_SetUpTeleportPoints_Params Parms{};

	Parms.Goal = Goal;
	Parms.FOSIndex = FOSIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.CallFunc_DoGetExitGate_exitGate = CallFunc_DoGetExitGate_exitGate;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_WinRun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_Downtown_C::DEBUGONLY_WinRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_WinRun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_ForceSpokes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                New_Spokes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      LOCAL_TodaysExitGoal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysWytchfireGoal                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysShitpatownGoal                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysDumpGoal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    LOCAL_CurrentIndexGoal                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_3     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_4     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_5     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2            (UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_4            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_5            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_6            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_7            (UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_8            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::DEBUGONLY_ForceSpokes(TArray<class FName>& New_Spokes, class UClass* LOCAL_TodaysExitGoal, class UClass* LOCAL_TodaysWytchfireGoal, class UClass* LOCAL_TodaysShitpatownGoal, class UClass* LOCAL_TodaysDumpGoal, class UQtnGoal* LOCAL_CurrentIndexGoal, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item_1, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_2, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_3, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_4, bool K2Node_DynamicCast_bSuccess_6, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_4, bool K2Node_SwitchEnum_CmpSuccess_4, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_5, bool K2Node_DynamicCast_bSuccess_7, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_5, bool K2Node_SwitchEnum_CmpSuccess_5, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue_1, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue_2, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue_3, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_6, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_7, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_8, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_ForceSpokes");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_ForceSpokes_Params Parms{};

	Parms.New_Spokes = New_Spokes;
	Parms.LOCAL_TodaysExitGoal = LOCAL_TodaysExitGoal;
	Parms.LOCAL_TodaysWytchfireGoal = LOCAL_TodaysWytchfireGoal;
	Parms.LOCAL_TodaysShitpatownGoal = LOCAL_TodaysShitpatownGoal;
	Parms.LOCAL_TodaysDumpGoal = LOCAL_TodaysDumpGoal;
	Parms.LOCAL_CurrentIndexGoal = LOCAL_CurrentIndexGoal;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_3 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_4 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsObjectOfType_outputPin_3 = CallFunc_IsObjectOfType_outputPin_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsObjectOfType_outputPin_4 = CallFunc_IsObjectOfType_outputPin_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_5 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsObjectOfType_outputPin_5 = CallFunc_IsObjectOfType_outputPin_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_LoadGoalClass_ReturnValue_1 = CallFunc_LoadGoalClass_ReturnValue_1;
	Parms.CallFunc_LoadGoalClass_ReturnValue_2 = CallFunc_LoadGoalClass_ReturnValue_2;
	Parms.CallFunc_LoadGoalClass_ReturnValue_3 = CallFunc_LoadGoalClass_ReturnValue_3;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_4 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_4;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_5 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_5;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_6 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_6;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_7 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_7;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_8 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_8;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_ForceCharacterEncounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGoalBase_C*                 LOCAL_SecondFeat                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 LOCAL_FirstFeat                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass           (HasGetValueTypeHash)
// bool                               CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_CE_Parent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          CallFunc_DoGetExitGate_exitGate                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          CallFunc_DoGetExitGate_exitGate_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::DEBUGONLY_ForceCharacterEncounter(const class FString& Selection, class UGoalBase_C* LOCAL_SecondFeat, class UGoalBase_C* LOCAL_FirstFeat, TSoftClassPtr<class UQtnGoal> CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass, bool CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class, class UQtnGoal_SP_Day1_CE_Parent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent, bool K2Node_DynamicCast_bSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_3, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_4, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1, bool K2Node_DynamicCast_bSuccess_5, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_ForceCharacterEncounter");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_ForceCharacterEncounter_Params Parms{};

	Parms.Selection = Selection;
	Parms.LOCAL_SecondFeat = LOCAL_SecondFeat;
	Parms.LOCAL_FirstFeat = LOCAL_FirstFeat;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_DoGetExitGate_exitGate = CallFunc_DoGetExitGate_exitGate;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue = CallFunc_EqualEqual_SoftClassReference_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_DoGetExitGate_exitGate_1 = CallFunc_DoGetExitGate_exitGate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_ForceAmbush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::DEBUGONLY_ForceAmbush(const class FString& Selection, bool Teleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_ForceAmbush");

	Params::UQtnGoalManager_Downtown_C_DEBUGONLY_ForceAmbush_Params Parms{};

	Parms.Selection = Selection;
	Parms.Teleport = Teleport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.RollFeatsOfStrength
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Unique_Rolled_Goals                                              (Parm, OutParm)
// TArray<class UClass*>              LOCAL_Chosen                                                     (Edit, BlueprintVisible)
// TArray<class UClass*>              LOCAL_Feats                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue                             (ReferenceParm)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue_1                           (ReferenceParm)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses           (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1         (ReferenceParm)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::RollFeatsOfStrength(TArray<class UClass*>* Unique_Rolled_Goals, const TArray<class UClass*>& LOCAL_Chosen, const TArray<class UClass*>& LOCAL_Feats, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses, class UClass* CallFunc_Array_Get_Item, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1, bool CallFunc_Array_RemoveItem_ReturnValue, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "RollFeatsOfStrength");

	Params::UQtnGoalManager_Downtown_C_RollFeatsOfStrength_Params Parms{};

	Parms.LOCAL_Chosen = LOCAL_Chosen;
	Parms.LOCAL_Feats = LOCAL_Feats;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LoadGoalClasses_ReturnValue = CallFunc_LoadGoalClasses_ReturnValue;
	Parms.CallFunc_LoadGoalClasses_ReturnValue_1 = CallFunc_LoadGoalClasses_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1 = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unique_Rolled_Goals != nullptr)
		*Unique_Rolled_Goals = std::move(Parms.Unique_Rolled_Goals);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.serverSetUpFeatGates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_Downtown_C::ServerSetUpFeatGates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "serverSetUpFeatGates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_Downtown_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.GoalReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_Downtown_C::GoalReady(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "GoalReady");

	Params::UQtnGoalManager_Downtown_C_GoalReady_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.ExecuteUbergraph_QtnGoalManager_Downtown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_RollFeatsOfStrength_Unique_Rolled_Goals                 (ReferenceParm)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_localOccupiedBodyPawn                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RollBonusZone_Ambush_Exists                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_RollBonusZone_Chosen_Ambush                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_Downtown_C::ExecuteUbergraph_QtnGoalManager_Downtown(int32 EntryPoint, int32 CallFunc_GetCurrentArc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<class UClass*>& CallFunc_RollFeatsOfStrength_Unique_Rolled_Goals, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Array_Get_Item, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UClass* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, bool CallFunc_RollBonusZone_Ambush_Exists, class UClass* CallFunc_RollBonusZone_Chosen_Ambush, int32 CallFunc_GetCurrentArc_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "ExecuteUbergraph_QtnGoalManager_Downtown");

	Params::UQtnGoalManager_Downtown_C_ExecuteUbergraph_QtnGoalManager_Downtown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_RollFeatsOfStrength_Unique_Rolled_Goals = CallFunc_RollFeatsOfStrength_Unique_Rolled_Goals;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_CustomEvent_localOccupiedBodyPawn = K2Node_CustomEvent_localOccupiedBodyPawn;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_RollBonusZone_Ambush_Exists = CallFunc_RollBonusZone_Ambush_Exists;
	Parms.CallFunc_RollBonusZone_Chosen_Ambush = CallFunc_RollBonusZone_Chosen_Ambush;
	Parms.CallFunc_GetCurrentArc_ReturnValue_1 = CallFunc_GetCurrentArc_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_Downtown.QtnGoalManager_Downtown_C.DEBUGONLY_DevChangeFeats__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_Downtown_C::DEBUGONLY_DevChangeFeats__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_Downtown_C", "DEBUGONLY_DevChangeFeats__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


