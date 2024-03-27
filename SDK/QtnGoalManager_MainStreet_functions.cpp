#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C
// (None)

class UClass* UQtnGoalManager_MainStreet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoalManager_MainStreet_C");

	return Clss;
}


// QtnGoalManager_MainStreet_C QtnGoalManager_MainStreet.Default__QtnGoalManager_MainStreet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoalManager_MainStreet_C* UQtnGoalManager_MainStreet_C::GetDefaultObj()
{
	static class UQtnGoalManager_MainStreet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoalManager_MainStreet_C*>(UQtnGoalManager_MainStreet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.Insert Rulebook FTUXGoal Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_ReachEndOfStreet_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_Day1_CE_RulebookFTUX_C*K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::Insert_Rulebook_FTUXGoal_Server_Only(class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_MS_Act2_ReachEndOfStreet_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX, bool K2Node_DynamicCast_bSuccess_2, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_3, class FName CallFunc_Array_Get_Item, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "Insert Rulebook FTUXGoal Server Only");

	Params::UQtnGoalManager_MainStreet_C_Insert_Rulebook_FTUXGoal_Server_Only_Params Parms{};

	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX = K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.Reroute Rulebook FTUX
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

void UQtnGoalManager_MainStreet_C::Reroute_Rulebook_FTUX(class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX, bool K2Node_DynamicCast_bSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_2, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UQtnGoal_Day1_CE_RulebookFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Rulebook_FTUX_1, bool K2Node_DynamicCast_bSuccess_3, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_4, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "Reroute Rulebook FTUX");

	Params::UQtnGoalManager_MainStreet_C_Reroute_Rulebook_FTUX_Params Parms{};

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


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ResolveFirstAmbush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ResolveFirstAmbush(int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ResolveFirstAmbush");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ResolveFirstAmbush_Params Parms{};

	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ReslotAmbushExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 Ambush_Goal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 NextGoal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_Ambush_Parent_C*    K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_CE_Parent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ReslotAmbushExit(class UGoalBase_C* Ambush_Goal, class UGoalBase_C* NextGoal, class UQtnGoal_Ambush_Parent_C* K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_CE_Parent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ReslotAmbushExit");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ReslotAmbushExit_Params Parms{};

	Parms.Ambush_Goal = Ambush_Goal;
	Parms.NextGoal = NextGoal;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent = K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_RemoveGoalFromIgnoreList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SlotA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      DesiredGoalClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UQtnGoal*                    LOCAL_RemoveThisGoal                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Goal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Goal_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_RemoveGoalFromIgnoreList(bool SlotA, TSoftClassPtr<class UQtnGoal> DesiredGoalClass, class UQtnGoal* LOCAL_RemoveThisGoal, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Goal, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsQtn_Goal_1, bool K2Node_ClassDynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UQtnGoal* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_RemoveGoalFromIgnoreList");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_RemoveGoalFromIgnoreList_Params Parms{};

	Parms.SlotA = SlotA;
	Parms.DesiredGoalClass = DesiredGoalClass;
	Parms.LOCAL_RemoveThisGoal = LOCAL_RemoveThisGoal;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Goal = K2Node_ClassDynamicCast_AsQtn_Goal;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsQtn_Goal_1 = K2Node_ClassDynamicCast_AsQtn_Goal_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_GetGoalClassFromDebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DebugStringID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      GoalClass                                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                               No_Class                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_GetGoalClassFromDebugInfo(const class FString& DebugStringID, TSoftClassPtr<class UQtnGoal>* GoalClass, bool* No_Class, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_StrStr_ReturnValue_9, bool CallFunc_EqualEqual_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_StrStr_ReturnValue_11, bool CallFunc_EqualEqual_StrStr_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_GetGoalClassFromDebugInfo");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_GetGoalClassFromDebugInfo_Params Parms{};

	Parms.DebugStringID = DebugStringID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_5 = CallFunc_EqualEqual_StrStr_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_6 = CallFunc_EqualEqual_StrStr_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_7 = CallFunc_EqualEqual_StrStr_ReturnValue_7;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_8 = CallFunc_EqualEqual_StrStr_ReturnValue_8;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_9 = CallFunc_EqualEqual_StrStr_ReturnValue_9;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_10 = CallFunc_EqualEqual_StrStr_ReturnValue_10;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_11 = CallFunc_EqualEqual_StrStr_ReturnValue_11;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_12 = CallFunc_EqualEqual_StrStr_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

	if (GoalClass != nullptr)
		*GoalClass = Parms.GoalClass;

	if (No_Class != nullptr)
		*No_Class = Parms.No_Class;

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.RemoveAmbushesInSameSpace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGoalBase_C*                 As_this_Ambush                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      Temp_softclass_Variable                                          (ConstParm, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      Temp_softclass_Variable_1                                        (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::RemoveAmbushesInSameSpace(class UGoalBase_C* As_this_Ambush, TSoftClassPtr<class UQtnGoal> Temp_softclass_Variable, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, TSoftClassPtr<class UQtnGoal> Temp_softclass_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "RemoveAmbushesInSameSpace");

	Params::UQtnGoalManager_MainStreet_C_RemoveAmbushesInSameSpace_Params Parms{};

	Parms.As_this_Ambush = As_this_Ambush;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.Temp_softclass_Variable_1 = Temp_softclass_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.RollAmbush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SlotA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        LOCAL_Selection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UClass*>              LOCAL_StartingGoals                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_Ambush_Parent_C*    K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_ReachEndOfStreet_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_Ambush_Parent_C*    K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses           (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1            (UObjectWrapper, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2            (UObjectWrapper, HasGetValueTypeHash)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_SP_Day1_CE_Parent_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_ReachEndOfStreet_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street_1     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1         (ReferenceParm)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue_1                           (ReferenceParm)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue_2                           (ReferenceParm)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_5                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_2         (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSubclassOf<class UQtnGoal>>CallFunc_LoadGoalClasses_ReturnValue_3                           (ReferenceParm)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::RollAmbush(bool SlotA, TSubclassOf<class UQtnGoal> LOCAL_Selection, const TArray<class UClass*>& LOCAL_StartingGoals, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGoal_Ambush_Parent_C* K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_1, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_3, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_4, class UQtnGoal_MS_Act2_ReachEndOfStreet_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street, bool K2Node_DynamicCast_bSuccess_5, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_2, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class UClass* Temp_class_Variable, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UQtnGoal_Ambush_Parent_C* K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent_1, bool K2Node_DynamicCast_bSuccess_7, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_4, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Array_Length_ReturnValue_2, class UQtnGoal_SP_Day1_CE_Parent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent, bool K2Node_DynamicCast_bSuccess_9, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal_MS_Act2_ReachEndOfStreet_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street_1, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_3, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, class UClass* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_4, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UClass* CallFunc_Array_Get_Item_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_3, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue_2, bool CallFunc_RandomBool_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_5, bool K2Node_DynamicCast_bSuccess_11, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_2, class UClass* CallFunc_Array_Get_Item_4, bool CallFunc_Array_IsValidIndex_ReturnValue_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_5, TArray<TSubclassOf<class UQtnGoal>>& CallFunc_LoadGoalClasses_ReturnValue_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_2, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_6, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_Array_Get_Item_5, bool CallFunc_Array_RemoveItem_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "RollAmbush");

	Params::UQtnGoalManager_MainStreet_C_RollAmbush_Params Parms{};

	Parms.SlotA = SlotA;
	Parms.LOCAL_Selection = LOCAL_Selection;
	Parms.LOCAL_StartingGoals = LOCAL_StartingGoals;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent = K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LoadGoalClasses_ReturnValue = CallFunc_LoadGoalClasses_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGoal_Base_3 = K2Node_DynamicCast_AsGoal_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent_1 = K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_2;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_4 = K2Node_DynamicCast_AsGoal_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street_1 = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1 = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_1 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_1 = CallFunc_GetLocalPlayerControllerBP_outputPin_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_1 = CallFunc_GetSaveLoadDataBP_progressSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_1 = CallFunc_GetSaveLoadDataBP_outputPin_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_1 = CallFunc_GetCustomDataBag_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_LoadGoalClasses_ReturnValue_1 = CallFunc_LoadGoalClasses_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_LoadGoalClasses_ReturnValue_2 = CallFunc_LoadGoalClasses_ReturnValue_2;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base_5 = K2Node_DynamicCast_AsGoal_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_3 = CallFunc_Array_RemoveItem_ReturnValue_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_2 = CallFunc_SelectRandomGoalsByWeight_selectedGoalClasses_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_2 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_2 = CallFunc_GetLocalPlayerControllerBP_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_LoadGoalClasses_ReturnValue_3 = CallFunc_LoadGoalClasses_ReturnValue_3;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_2 = CallFunc_GetSaveLoadDataBP_progressSaveData_2;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_2 = CallFunc_GetSaveLoadDataBP_outputPin_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_GetCustomDataBag_ReturnValue_2 = CallFunc_GetCustomDataBag_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_4 = CallFunc_Array_RemoveItem_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.SaveGoalAsSeen
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
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::SaveGoalAsSeen(class UQtnGoal* Goal, const class FString& Description, const class FString& LOCAL_Description, class UClass* LOCAL_GoalClass, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "SaveGoalAsSeen");

	Params::UQtnGoalManager_MainStreet_C_SaveGoalAsSeen_Params Parms{};

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
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.ReassignGateTeleportPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Entrance_Gate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeadPlayerTeleportLoc_C* New_Destination                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::ReassignGateTeleportPoint(class ATravelVolume_BP_C* Entrance_Gate, class ABP_DeadPlayerTeleportLoc_C* New_Destination, bool CallFunc_IsOnServer_ReturnValue, TSoftObjectPtr<class ABP_DeadPlayerTeleportLoc_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "ReassignGateTeleportPoint");

	Params::UQtnGoalManager_MainStreet_C_ReassignGateTeleportPoint_Params Parms{};

	Parms.Entrance_Gate = Entrance_Gate;
	Parms.New_Destination = New_Destination;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ForceAmbushesWithTeleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotA                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SlotB                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport_A                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Teleport_B                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_FindKenny_C*LOCAL_PoliceStationGoal                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_MapEntry_C* LOCAL_PreAmbushGoal                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal_MS_Act2_ReachEndOfStreet_C*LOCAL_CentralGoal                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass           (HasGetValueTypeHash)
// bool                               CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UQtnGoal>      CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass_1         (HasGetValueTypeHash)
// bool                               CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_FindKenny_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_ReachEndOfStreet_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UQtnGoal>      CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1            (UObjectWrapper, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_SoftClassReference_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ForceAmbushesWithTeleport(const class FString& SlotA, const class FString& SlotB, bool Teleport_A, bool Teleport_B, class UQtnGoal_MS_Act2_FindKenny_C* LOCAL_PoliceStationGoal, class UQtnGoal_MS_Act2_MapEntry_C* LOCAL_PreAmbushGoal, class UQtnGoal_MS_Act2_ReachEndOfStreet_C* LOCAL_CentralGoal, TSoftClassPtr<class UQtnGoal> CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass, bool CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class, TSoftClassPtr<class UQtnGoal> CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass_1, bool CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_MS_Act2_FindKenny_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoal_MS_Act2_ReachEndOfStreet_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street, bool K2Node_DynamicCast_bSuccess_2, class UQtnGoal_MS_Act2_MapEntry_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry, bool K2Node_DynamicCast_bSuccess_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_4, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_5, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, TSoftClassPtr<class UQtnGoal> CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ForceAmbushesWithTeleport");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ForceAmbushesWithTeleport_Params Parms{};

	Parms.SlotA = SlotA;
	Parms.SlotB = SlotB;
	Parms.Teleport_A = Teleport_A;
	Parms.Teleport_B = Teleport_B;
	Parms.LOCAL_PoliceStationGoal = LOCAL_PoliceStationGoal;
	Parms.LOCAL_PreAmbushGoal = LOCAL_PreAmbushGoal;
	Parms.LOCAL_CentralGoal = LOCAL_CentralGoal;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass_1 = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_GoalClass_1;
	Parms.CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class_1 = CallFunc_DEBUGONLY_GetGoalClassFromDebugInfo_No_Class_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Reach_End_Of_Street;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Map_Entry;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue = CallFunc_EqualEqual_SoftClassReference_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1 = CallFunc_Conv_ClassToSoftClassReference_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_3 = K2Node_DynamicCast_AsGoal_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_EqualEqual_SoftClassReference_ReturnValue_1 = CallFunc_EqualEqual_SoftClassReference_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_SkipToKenny
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Arc2_PrincessKenny_C*K2Node_DynamicCast_AsQtn_Goal_MS_Arc_2_Princess_Kenny            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_SkipToKenny(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class UQtnGoal_MS_Arc2_PrincessKenny_C* K2Node_DynamicCast_AsQtn_Goal_MS_Arc_2_Princess_Kenny, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_SkipToKenny");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_SkipToKenny_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Arc_2_Princess_Kenny = K2Node_DynamicCast_AsQtn_Goal_MS_Arc_2_Princess_Kenny;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY Skip To Police
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LOCAL_TodaysTheatreGoal                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_MS_Act2_FindKenny_C*K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_Skip_To_Police(class UClass* LOCAL_TodaysTheatreGoal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoal_MS_Act2_FindKenny_C* K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY Skip To Police");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_Skip_To_Police_Params Parms{};

	Parms.LOCAL_TodaysTheatreGoal = LOCAL_TodaysTheatreGoal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny = K2Node_DynamicCast_AsQtn_Goal_MS_Act_2_Find_Kenny;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_MS_SkipToCentral
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_MainStreet_C::DEBUGONLY_MS_SkipToCentral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_MS_SkipToCentral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_DestroyBuddyCartman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_DestroyBuddyCartman(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_DestroyBuddyCartman");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_DestroyBuddyCartman_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.GetScriptedVOScene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ScriptedVOScene                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "GetScriptedVOScene");

	Params::UQtnGoalManager_MainStreet_C_GetScriptedVOScene_Params Parms{};

	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ScriptedVOScene != nullptr)
		*ScriptedVOScene = std::move(Parms.ScriptedVOScene);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.ShouldPlayCutscenes
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

void UQtnGoalManager_MainStreet_C::ShouldPlayCutscenes(bool* Play_cutscenes, class FName LOCAL_TrialTag, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsPlayingInEditor_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_FindMarkedActors_ServerOnly_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoGetRunInEditor_runInEditor, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "ShouldPlayCutscenes");

	Params::UQtnGoalManager_MainStreet_C_ShouldPlayCutscenes_Params Parms{};

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


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.Roll Day Toggle Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "Roll Day Toggle Setup");

	Params::UQtnGoalManager_MainStreet_C_Roll_Day_Toggle_Setup_Params Parms{};

	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_SkipToCentral
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LOCAL_TodaysCatapultGoal                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysCentralGoal                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnGoal>        CallFunc_LoadGoalClass_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_3                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_4                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllBodyPawns_foundBodyPawns_1                        (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base_5                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_SkipToCentral(class UClass* LOCAL_TodaysCatapultGoal, class UClass* LOCAL_TodaysCentralGoal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetCurrentArc_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue_1, TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue_2, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_2, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class UQtnGoal* CallFunc_Array_Get_Item, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_3, bool K2Node_DynamicCast_bSuccess_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class AQtnBodyPawn* CallFunc_Array_Get_Item_2, class UQtnGoal* CallFunc_Array_Get_Item_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_6, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_5, bool K2Node_DynamicCast_bSuccess_7, class UClass* CallFunc_GetObjectClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_SkipToCentral");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_SkipToCentral_Params Parms{};

	Parms.LOCAL_TodaysCatapultGoal = LOCAL_TodaysCatapultGoal;
	Parms.LOCAL_TodaysCentralGoal = LOCAL_TodaysCentralGoal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue_1 = CallFunc_GetCurrentArc_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LoadGoalClass_ReturnValue = CallFunc_LoadGoalClass_ReturnValue;
	Parms.CallFunc_LoadGoalClass_ReturnValue_1 = CallFunc_LoadGoalClass_ReturnValue_1;
	Parms.CallFunc_LoadGoalClass_ReturnValue_2 = CallFunc_LoadGoalClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGoal_Base_1 = K2Node_DynamicCast_AsGoal_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_2 = K2Node_DynamicCast_AsGoal_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns = CallFunc_GetAllBodyPawns_foundBodyPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGoal_Base_3 = K2Node_DynamicCast_AsGoal_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGoal_Base_4 = K2Node_DynamicCast_AsGoal_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAllBodyPawns_foundBodyPawns_1 = CallFunc_GetAllBodyPawns_foundBodyPawns_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsGoal_Base_5 = K2Node_DynamicCast_AsGoal_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.setUpExitGate
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

void UQtnGoalManager_MainStreet_C::SetUpExitGate(class UQtnGoal* Goal, int32 FOSIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "setUpExitGate");

	Params::UQtnGoalManager_MainStreet_C_SetUpExitGate_Params Parms{};

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


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.SetUpTeleportPoints
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

void UQtnGoalManager_MainStreet_C::SetUpTeleportPoints(class UQtnGoal* Goal, int32 FOSIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_1, bool K2Node_DynamicCast_bSuccess_3, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IInterface_QtnGoal_MS_Day1_FOSParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Day_1_FOSParent_2, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, class ATravelVolume_BP_C* CallFunc_DoGetExitGate_exitGate, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "SetUpTeleportPoints");

	Params::UQtnGoalManager_MainStreet_C_SetUpTeleportPoints_Params Parms{};

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


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_WinRun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_MainStreet_C::DEBUGONLY_WinRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_WinRun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ForceSpokes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                New_Spokes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      LOCAL_TodaysExitGoal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysWytchfireGoal                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysShitpatownGoal                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LOCAL_TodaysDumpGoal                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    LOCAL_CurrentIndexGoal                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ForceSpokes(TArray<class FName>& New_Spokes, class UClass* LOCAL_TodaysExitGoal, class UClass* LOCAL_TodaysWytchfireGoal, class UClass* LOCAL_TodaysShitpatownGoal, class UClass* LOCAL_TodaysDumpGoal, class UQtnGoal* LOCAL_CurrentIndexGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ForceSpokes");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ForceSpokes_Params Parms{};

	Parms.New_Spokes = New_Spokes;
	Parms.LOCAL_TodaysExitGoal = LOCAL_TodaysExitGoal;
	Parms.LOCAL_TodaysWytchfireGoal = LOCAL_TodaysWytchfireGoal;
	Parms.LOCAL_TodaysShitpatownGoal = LOCAL_TodaysShitpatownGoal;
	Parms.LOCAL_TodaysDumpGoal = LOCAL_TodaysDumpGoal;
	Parms.LOCAL_CurrentIndexGoal = LOCAL_CurrentIndexGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ForceCharacterEncounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ForceCharacterEncounter(const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ForceCharacterEncounter");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ForceCharacterEncounter_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_ForceAmbush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_ForceAmbush(const class FString& Selection, bool Teleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_ForceAmbush");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_ForceAmbush_Params Parms{};

	Parms.Selection = Selection;
	Parms.Teleport = Teleport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.serverSetUpFeatGates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoalManager_MainStreet_C::ServerSetUpFeatGates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "serverSetUpFeatGates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.GoalReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::GoalReady(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "GoalReady");

	Params::UQtnGoalManager_MainStreet_C_GoalReady_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.SetupSeedGoals_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoalManager_MainStreet_C::SetupSeedGoals_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "SetupSeedGoals_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.DEBUGONLY_BindAmbushAResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Gate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::DEBUGONLY_BindAmbushAResolve(class ATravelVolume_BP_C* Gate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "DEBUGONLY_BindAmbushAResolve");

	Params::UQtnGoalManager_MainStreet_C_DEBUGONLY_BindAmbushAResolve_Params Parms{};

	Parms.Gate = Gate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.ResolveAmbushConflict
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::ResolveAmbushConflict(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "ResolveAmbushConflict");

	Params::UQtnGoalManager_MainStreet_C_ResolveAmbushConflict_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoalManager_MainStreet.QtnGoalManager_MainStreet_C.ExecuteUbergraph_QtnGoalManager_MainStreet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayCutscenes_play_cutscenes                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_localOccupiedBodyPawn                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_gate                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UQtnGoalManager_MainStreet_C::ExecuteUbergraph_QtnGoalManager_MainStreet(int32 EntryPoint, bool CallFunc_ShouldPlayCutscenes_play_cutscenes, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ATravelVolume_BP_C* K2Node_CustomEvent_gate, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street, bool K2Node_DynamicCast_bSuccess_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue_3, TScriptInterface<class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetCurrentArc_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoalManager_MainStreet_C", "ExecuteUbergraph_QtnGoalManager_MainStreet");

	Params::UQtnGoalManager_MainStreet_C_ExecuteUbergraph_QtnGoalManager_MainStreet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldPlayCutscenes_play_cutscenes = CallFunc_ShouldPlayCutscenes_play_cutscenes;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1 = CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_CustomEvent_localOccupiedBodyPawn = K2Node_CustomEvent_localOccupiedBodyPawn;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_gate = K2Node_CustomEvent_gate;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10;
	Parms.K2Node_CustomEvent_from_this_volume = K2Node_CustomEvent_from_this_volume;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_MS_Act_2_Reach_End_Of_Street_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12;
	Parms.CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13 = CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue_1 = CallFunc_GetCurrentArc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


