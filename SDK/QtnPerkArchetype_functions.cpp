#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnPerkArchetype.QtnPerkArchetype_C
// (None)

class UClass* UQtnPerkArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnPerkArchetype_C");

	return Clss;
}


// QtnPerkArchetype_C QtnPerkArchetype.Default__QtnPerkArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnPerkArchetype_C* UQtnPerkArchetype_C::GetDefaultObj()
{
	static class UQtnPerkArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnPerkArchetype_C*>(UQtnPerkArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnPerkArchetype.QtnPerkArchetype_C.GetPerkUnlockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockCondition                                                    (Parm, OutParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUnlocksComponent*        CallFunc_GetUnlocksComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRowNameFromUnlockKey_rowExists                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRowNameFromUnlockKey_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetUnlockInfo_displayName                               (None)
// class FText                        CallFunc_GetUnlockInfo_description                               (None)
// bool                               CallFunc_GetUnlockInfo_isSecret                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetUnlockInfo_icon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockKey                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockCategory                            (NoDestructor, HasGetValueTypeHash)
// struct FQtnUnlockRewards           CallFunc_GetUnlockInfo_unlockRewards                             (None)
// class FText                        CallFunc_GetUnlockInfo_rewardName                                (None)
// TSubclassOf<class UQtnDLCInfo>     CallFunc_GetUnlockInfo_requiredDLC                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetUnlockProgress_ClientOnly_isUnlocked                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUnlockProgress_ClientOnly_numOccurrences             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UQtnPerkArchetype_C::GetPerkUnlockData(bool* Unlocked, class FText* LockCondition, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetRowNameFromUnlockKey_rowExists, class FName CallFunc_GetRowNameFromUnlockKey_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_GetUnlockProgress_ClientOnly_isUnlocked, int32 CallFunc_GetUnlockProgress_ClientOnly_numOccurrences, int32 CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPerkArchetype_C", "GetPerkUnlockData");

	Params::UQtnPerkArchetype_C_GetPerkUnlockData_Params Parms{};

	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_GetUnlocksComponent_ReturnValue = CallFunc_GetUnlocksComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRowNameFromUnlockKey_rowExists = CallFunc_GetRowNameFromUnlockKey_rowExists;
	Parms.CallFunc_GetRowNameFromUnlockKey_ReturnValue = CallFunc_GetRowNameFromUnlockKey_ReturnValue;
	Parms.CallFunc_GetUnlockInfo_displayName = CallFunc_GetUnlockInfo_displayName;
	Parms.CallFunc_GetUnlockInfo_description = CallFunc_GetUnlockInfo_description;
	Parms.CallFunc_GetUnlockInfo_isSecret = CallFunc_GetUnlockInfo_isSecret;
	Parms.CallFunc_GetUnlockInfo_icon = CallFunc_GetUnlockInfo_icon;
	Parms.CallFunc_GetUnlockInfo_unlockKey = CallFunc_GetUnlockInfo_unlockKey;
	Parms.CallFunc_GetUnlockInfo_unlockCategory = CallFunc_GetUnlockInfo_unlockCategory;
	Parms.CallFunc_GetUnlockInfo_unlockRewards = CallFunc_GetUnlockInfo_unlockRewards;
	Parms.CallFunc_GetUnlockInfo_rewardName = CallFunc_GetUnlockInfo_rewardName;
	Parms.CallFunc_GetUnlockInfo_requiredDLC = CallFunc_GetUnlockInfo_requiredDLC;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_isUnlocked = CallFunc_GetUnlockProgress_ClientOnly_isUnlocked;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_numOccurrences = CallFunc_GetUnlockProgress_ClientOnly_numOccurrences;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences = CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

	if (LockCondition != nullptr)
		*LockCondition = Parms.LockCondition;

}


// Function QtnPerkArchetype.QtnPerkArchetype_C.OnPerkStackChangeEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnPerkArchetype_C::OnPerkStackChangeEvent(class AQtnBodyPawn* TargetBodyPawn, int32 PreviousLevel, int32 NewLevel, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPerkArchetype_C", "OnPerkStackChangeEvent");

	Params::UQtnPerkArchetype_C_OnPerkStackChangeEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;
	Parms.PreviousLevel = PreviousLevel;
	Parms.NewLevel = NewLevel;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPerkArchetype.QtnPerkArchetype_C.ExecuteUbergraph_QtnPerkArchetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PreviousLevel                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewLevel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnPerkArchetype_C::ExecuteUbergraph_QtnPerkArchetype(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, int32 K2Node_Event_PreviousLevel, int32 K2Node_Event_NewLevel, bool K2Node_Event_isServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPerkArchetype_C", "ExecuteUbergraph_QtnPerkArchetype");

	Params::UQtnPerkArchetype_C_ExecuteUbergraph_QtnPerkArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;
	Parms.K2Node_Event_PreviousLevel = K2Node_Event_PreviousLevel;
	Parms.K2Node_Event_NewLevel = K2Node_Event_NewLevel;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;

	UObject::ProcessEvent(Func, &Parms);

}

}


