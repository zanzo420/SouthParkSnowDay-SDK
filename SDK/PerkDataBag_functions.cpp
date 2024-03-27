#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PerkDataBag.PerkDataBag_C
// (None)

class UClass* UPerkDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkDataBag_C");

	return Clss;
}


// PerkDataBag_C PerkDataBag.Default__PerkDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerkDataBag_C* UPerkDataBag_C::GetDefaultObj()
{
	static class UPerkDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerkDataBag_C*>(UPerkDataBag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PerkDataBag.PerkDataBag_C.OnDebugDisplay
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnSavedPerkLoadoutData    CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UPerkDataBag_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnSavedPerkLoadoutData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkDataBag_C", "OnDebugDisplay");

	Params::UPerkDataBag_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkDataBag.PerkDataBag_C.PreSaveDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnSaveData*                SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOriginalBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkDataBag_C::PreSaveDataBP(class UQtnSaveData* SaveData, class AQtnBodyPawn* LocalOriginalBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkDataBag_C", "PreSaveDataBP");

	Params::UPerkDataBag_C_PreSaveDataBP_Params Parms{};

	Parms.SaveData = SaveData;
	Parms.LocalOriginalBody = LocalOriginalBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkDataBag.PerkDataBag_C.OnParentDataBagOccupy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkDataBag_C::OnParentDataBagOccupy(class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkDataBag_C", "OnParentDataBagOccupy");

	Params::UPerkDataBag_C_OnParentDataBagOccupy_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkDataBag.PerkDataBag_C.PostLoadDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnSaveData*                SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                LocalOriginalBody                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkDataBag_C::PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkDataBag_C", "PostLoadDataBP");

	Params::UPerkDataBag_C_PostLoadDataBP_Params Parms{};

	Parms.SaveData = SaveData;
	Parms.Success = Success;
	Parms.LocalOriginalBody = LocalOriginalBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkDataBag.PerkDataBag_C.ExecuteUbergraph_PerkDataBag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSaveData*                K2Node_Event_saveData_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_localOriginalBody_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnPerk*>            CallFunc_GetAllPerks_ReturnValue                                 (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnSavedPerkLoadoutData    CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPerk*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnSavedPerkLoadoutData    CallFunc_CreateSavedLoadoutData_ReturnValue                      (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidBagData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnSaveData*                K2Node_Event_saveData                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_localOriginalBody                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkDataBag_C::ExecuteUbergraph_PerkDataBag(int32 EntryPoint, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnSaveData* K2Node_Event_saveData_1, class AQtnBodyPawn* K2Node_Event_localOriginalBody_1, bool CallFunc_IsHero_ReturnValue, TArray<class UQtnPerk*>& CallFunc_GetAllPerks_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnSavedPerkLoadoutData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, int32 Temp_int_Array_Index_Variable_1, class UQtnPerk* CallFunc_Array_Get_Item_1, const struct FQtnSavedPerkLoadoutData& CallFunc_CreateSavedLoadoutData_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasValidBagData_ReturnValue, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_IsTradeshowDemo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PerkDataBag_C", "ExecuteUbergraph_PerkDataBag");

	Params::UPerkDataBag_C_ExecuteUbergraph_PerkDataBag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_saveData_1 = K2Node_Event_saveData_1;
	Parms.K2Node_Event_localOriginalBody_1 = K2Node_Event_localOriginalBody_1;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.CallFunc_GetAllPerks_ReturnValue = CallFunc_GetAllPerks_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateSavedLoadoutData_ReturnValue = CallFunc_CreateSavedLoadoutData_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasValidBagData_ReturnValue = CallFunc_HasValidBagData_ReturnValue;
	Parms.K2Node_Event_saveData = K2Node_Event_saveData;
	Parms.K2Node_Event_success = K2Node_Event_success;
	Parms.K2Node_Event_localOriginalBody = K2Node_Event_localOriginalBody;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


