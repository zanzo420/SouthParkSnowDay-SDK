#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnVerb_Archetype.QtnVerb_Archetype_C
// (None)

class UClass* UQtnVerb_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnVerb_Archetype_C");

	return Clss;
}


// QtnVerb_Archetype_C QtnVerb_Archetype.Default__QtnVerb_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnVerb_Archetype_C* UQtnVerb_Archetype_C::GetDefaultObj()
{
	static class UQtnVerb_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnVerb_Archetype_C*>(UQtnVerb_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.TrainingSatisfied?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      QtnTutorial                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSatisfied                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::TrainingSatisfied_(class UClass* QtnTutorial, const class FString& Prompt, bool* IsFound, bool* IsSatisfied, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "TrainingSatisfied?");

	Params::UQtnVerb_Archetype_C_TrainingSatisfied__Params Parms{};

	Parms.QtnTutorial = QtnTutorial;
	Parms.Prompt = Prompt;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (IsSatisfied != nullptr)
		*IsSatisfied = Parms.IsSatisfied;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GetUnlockData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Parm, OutParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUnlocksComponent*        CallFunc_GetUnlocksComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UQtnVerb_Archetype_C::GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_GetRowNameFromUnlockKey_rowExists, class FName CallFunc_GetRowNameFromUnlockKey_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GetUnlockData");

	Params::UQtnVerb_Archetype_C_GetUnlockData_Params Parms{};

	Parms.Requester = Requester;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_GetUnlocksComponent_ReturnValue = CallFunc_GetUnlocksComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
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
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockText != nullptr)
		*LockText = Parms.LockText;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ShowOnUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::ShowOnUI(bool* ShouldShow, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ShowOnUI");

	Params::UQtnVerb_Archetype_C_ShowOnUI_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.isVerbACheat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCheat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::IsVerbACheat(bool* IsCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "isVerbACheat");

	Params::UQtnVerb_Archetype_C_IsVerbACheat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsCheat != nullptr)
		*IsCheat = Parms.IsCheat;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.IsVerbWeaponBased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsWeaponBased                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::IsVerbWeaponBased(bool* IsWeaponBased, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "IsVerbWeaponBased");

	Params::UQtnVerb_Archetype_C_IsVerbWeaponBased_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponBased != nullptr)
		*IsWeaponBased = Parms.IsWeaponBased;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GetCooldownWheelTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*                  CooldownWheelTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::GetCooldownWheelTexture(class UTexture2D** CooldownWheelTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GetCooldownWheelTexture");

	Params::UQtnVerb_Archetype_C_GetCooldownWheelTexture_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CooldownWheelTexture != nullptr)
		*CooldownWheelTexture = Parms.CooldownWheelTexture;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.IsVerbAPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPower                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::IsVerbAPower(bool* IsPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "IsVerbAPower");

	Params::UQtnVerb_Archetype_C_IsVerbAPower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPower != nullptr)
		*IsPower = Parms.IsPower;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GetDamageType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UQtnDamageType>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgrade*                 CallFunc_GetCurrentSlottedUpgrade_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnemyUpgrade_ChangeDamageTypeArchetype_C*K2Node_DynamicCast_AsEnemy_Upgrade_Change_Damage_Type_Archetype  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnDamageType>  CallFunc_GetDamageType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

TSubclassOf<class UQtnDamageType> UQtnVerb_Archetype_C::GetDamageType(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, class UEnemyUpgrade_ChangeDamageTypeArchetype_C* K2Node_DynamicCast_AsEnemy_Upgrade_Change_Damage_Type_Archetype, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GetDamageType");

	Params::UQtnVerb_Archetype_C_GetDamageType_Params Parms{};

	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentSlottedUpgrade_ReturnValue = CallFunc_GetCurrentSlottedUpgrade_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Upgrade_Change_Damage_Type_Archetype = K2Node_DynamicCast_AsEnemy_Upgrade_Change_Damage_Type_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ToggleGyroAimingIfAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableGyroAiming                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOccupyingLocalPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::ToggleGyroAimingIfAvailable(bool EnableGyroAiming, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ToggleGyroAimingIfAvailable");

	Params::UQtnVerb_Archetype_C_ToggleGyroAimingIfAvailable_Params Parms{};

	Parms.EnableGyroAiming = EnableGyroAiming;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetOccupyingLocalPlayerController_ReturnValue = CallFunc_GetOccupyingLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GetTutorialClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Found_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Class                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::GetTutorialClass(bool* Found_, class UClass** Class, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GetTutorialClass");

	Params::UQtnVerb_Archetype_C_GetTutorialClass_Params Parms{};

	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_ != nullptr)
		*Found_ = Parms.Found_;

	if (Class != nullptr)
		*Class = Parms.Class;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.CompleteTutorialSubGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SubGoalIdentity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialClass_Found_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetTutorialClass_Class                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAllTutorialSubGoalsComplete_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::CompleteTutorialSubGoal(class FName SubGoalIdentity, bool CallFunc_GetTutorialClass_Found_, class UClass* CallFunc_GetTutorialClass_Class, bool CallFunc_CheckAllTutorialSubGoalsComplete_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "CompleteTutorialSubGoal");

	Params::UQtnVerb_Archetype_C_CompleteTutorialSubGoal_Params Parms{};

	Parms.SubGoalIdentity = SubGoalIdentity;
	Parms.CallFunc_GetTutorialClass_Found_ = CallFunc_GetTutorialClass_Found_;
	Parms.CallFunc_GetTutorialClass_Class = CallFunc_GetTutorialClass_Class;
	Parms.CallFunc_CheckAllTutorialSubGoalsComplete_ReturnValue = CallFunc_CheckAllTutorialSubGoalsComplete_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.StartTutorialIfPossible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetTutorialClass_Found_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetTutorialClass_Class                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::StartTutorialIfPossible(bool CallFunc_GetTutorialClass_Found_, class UClass* CallFunc_GetTutorialClass_Class, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "StartTutorialIfPossible");

	Params::UQtnVerb_Archetype_C_StartTutorialIfPossible_Params Parms{};

	Parms.CallFunc_GetTutorialClass_Found_ = CallFunc_GetTutorialClass_Found_;
	Parms.CallFunc_GetTutorialClass_Class = CallFunc_GetTutorialClass_Class;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.MakeTrainingPromptsFromStringTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::MakeTrainingPromptsFromStringTable(int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "MakeTrainingPromptsFromStringTable");

	Params::UQtnVerb_Archetype_C_MakeTrainingPromptsFromStringTable_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.DecreaseCooldownValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DecreaseAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalCooldownValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::DecreaseCooldownValue(float DecreaseAmount, float CallFunc_GetLocalCooldownValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "DecreaseCooldownValue");

	Params::UQtnVerb_Archetype_C_DecreaseCooldownValue_Params Parms{};

	Parms.DecreaseAmount = DecreaseAmount;
	Parms.CallFunc_GetLocalCooldownValue_ReturnValue = CallFunc_GetLocalCooldownValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GetCooldownRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalCooldownValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::GetCooldownRatio(float* Ratio, float CallFunc_GetLocalCooldownValue_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GetCooldownRatio");

	Params::UQtnVerb_Archetype_C_GetCooldownRatio_Params Parms{};

	Parms.CallFunc_GetLocalCooldownValue_ReturnValue = CallFunc_GetLocalCooldownValue_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.IsCooldownZero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLocalCooldownValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::IsCooldownZero(bool* Yes, float CallFunc_GetLocalCooldownValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "IsCooldownZero");

	Params::UQtnVerb_Archetype_C_IsCooldownZero_Params Parms{};

	Parms.CallFunc_GetLocalCooldownValue_ReturnValue = CallFunc_GetLocalCooldownValue_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Set CooldownRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Ratio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::Set_CooldownRatio(float Ratio, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Set CooldownRatio");

	Params::UQtnVerb_Archetype_C_Set_CooldownRatio_Params Parms{};

	Parms.Ratio = Ratio;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.CalculateResourceCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Cost                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResourceCostMultiplier_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::CalculateResourceCost(float* Cost, float CallFunc_GetResourceCostMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "CalculateResourceCost");

	Params::UQtnVerb_Archetype_C_CalculateResourceCost_Params Parms{};

	Parms.CallFunc_GetResourceCostMultiplier_ReturnValue = CallFunc_GetResourceCostMultiplier_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Un Notify Ranged Threat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    PawnToNotify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ThreatActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::Un_Notify_Ranged_Threat(class AQtnPawn* PawnToNotify, class AActor* ThreatActor, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Un Notify Ranged Threat");

	Params::UQtnVerb_Archetype_C_Un_Notify_Ranged_Threat_Params Parms{};

	Parms.PawnToNotify = PawnToNotify;
	Parms.ThreatActor = ThreatActor;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Notify Ranged Threat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    PawnToNotify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ThreatActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::Notify_Ranged_Threat(class AQtnPawn* PawnToNotify, class AActor* ThreatActor, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Notify Ranged Threat");

	Params::UQtnVerb_Archetype_C_Notify_Ranged_Threat_Params Parms{};

	Parms.PawnToNotify = PawnToNotify;
	Parms.ThreatActor = ThreatActor;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.RefreshLocalUIFillRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FillRatio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    PawnToNotify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOccupyingPlayerUI_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::RefreshLocalUIFillRatio(float FillRatio, float FadeDuration, class AQtnPawn* PawnToNotify, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "RefreshLocalUIFillRatio");

	Params::UQtnVerb_Archetype_C_RefreshLocalUIFillRatio_Params Parms{};

	Parms.FillRatio = FillRatio;
	Parms.FadeDuration = FadeDuration;
	Parms.PawnToNotify = PawnToNotify;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOccupyingPlayerUI_ReturnValue = CallFunc_GetOccupyingPlayerUI_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.RefreshCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinCooldown                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxCooldown                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::RefreshCooldown(float MinCooldown, float MaxCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "RefreshCooldown");

	Params::UQtnVerb_Archetype_C_RefreshCooldown_Params Parms{};

	Parms.MinCooldown = MinCooldown;
	Parms.MaxCooldown = MaxCooldown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.RefreshRandomCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinRatio                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxRatio                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::RefreshRandomCooldown(float MinRatio, float MaxRatio, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "RefreshRandomCooldown");

	Params::UQtnVerb_Archetype_C_RefreshRandomCooldown_Params Parms{};

	Parms.MinRatio = MinRatio;
	Parms.MaxRatio = MaxRatio;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.BumpAllOtherWeaponCooldowns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    AssociatedBodyAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AlsoIncludeBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RandomAdd                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            VerbsOnThisButton                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs                                          (ReferenceParm, ContainsInstancedReference)
// class UQtnVerb*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs_1                                        (ReferenceParm, ContainsInstancedReference)

void UQtnVerb_Archetype_C::BumpAllOtherWeaponCooldowns(enum class EQtnUIBodyActionEnum AssociatedBodyAction, float Amount, bool AlsoIncludeBody, float RandomAdd, const TArray<class UQtnVerb*>& VerbsOnThisButton, int32 Temp_int_Array_Index_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UQtnVerb* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, class UQtnVerb* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "BumpAllOtherWeaponCooldowns");

	Params::UQtnVerb_Archetype_C_BumpAllOtherWeaponCooldowns_Params Parms{};

	Parms.AssociatedBodyAction = AssociatedBodyAction;
	Parms.Amount = Amount;
	Parms.AlsoIncludeBody = AlsoIncludeBody;
	Parms.RandomAdd = RandomAdd;
	Parms.VerbsOnThisButton = VerbsOnThisButton;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_GetVerbs_verbs = CallFunc_GetVerbs_verbs;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype_1 = K2Node_DynamicCast_AsQtn_Verb_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue_1 = CallFunc_GetVerbComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVerbs_verbs_1 = CallFunc_GetVerbs_verbs_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.BumpCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalCooldownValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::BumpCooldown(float Amount, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_GetLocalCooldownValue_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "BumpCooldown");

	Params::UQtnVerb_Archetype_C_BumpCooldown_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetLocalCooldownValue_ReturnValue = CallFunc_GetLocalCooldownValue_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ResetTrainingPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::ResetTrainingPrompts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ResetTrainingPrompts");

	Params::UQtnVerb_Archetype_C_ResetTrainingPrompts_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.GenerateFormattedPrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnVerb_Archetype_C::GenerateFormattedPrompts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "GenerateFormattedPrompts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.CompleteTrainingPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::CompleteTrainingPrompt(int32 Index, bool Temp_bool_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "CompleteTrainingPrompt");

	Params::UQtnVerb_Archetype_C_CompleteTrainingPrompt_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Get Intended Target Capped Velocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Velocity_Cap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Found_Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetIntendedTarget_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::Get_Intended_Target_Capped_Velocity(float Velocity_Cap, struct FVector* Found_Velocity, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Get Intended Target Capped Velocity");

	Params::UQtnVerb_Archetype_C_Get_Intended_Target_Capped_Velocity_Params Parms{};

	Parms.Velocity_Cap = Velocity_Cap;
	Parms.CallFunc_GetIntendedTarget_ReturnValue = CallFunc_GetIntendedTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_ClampVectorSize_ReturnValue = CallFunc_ClampVectorSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Velocity != nullptr)
		*Found_Velocity = std::move(Parms.Found_Velocity);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Do Standard Autoaim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HalfMinusAngle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Lock_Body_To_Auto_Aim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Check_Along_Ground                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     New_Auto_Aim_Heading                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Chosen_Target                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_Target_Found_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_Check_Along_Ground                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_Lock_Body                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LOCAL_Half_Angle                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Found_Target_To_Return                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Target_Found_Status_To_Return                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// TArray<class AQtnPawn*>            Potential_Targets                                                (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// class AQtnBodyPawn*                Owning_Body_Pawn                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LOCAL_Range                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Heading_To_Return                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Invoker_Location                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnPawn*                    CallFunc_GetBestPawnWithinViewCone_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPawnForwardVectorAlongGround_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnPawn*>            CallFunc_GatherEnemiesWithinRadius_enemyPawns                    (ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::Do_Standard_Autoaim(float Range, float HalfMinusAngle, bool Lock_Body_To_Auto_Aim, bool Check_Along_Ground, struct FVector* New_Auto_Aim_Heading, class AQtnPawn** Chosen_Target, bool* Was_Target_Found_, bool LOCAL_Check_Along_Ground, bool LOCAL_Lock_Body, float LOCAL_Half_Angle, class AQtnPawn* Found_Target_To_Return, bool Target_Found_Status_To_Return, const TArray<class AQtnPawn*>& Potential_Targets, class AQtnBodyPawn* Owning_Body_Pawn, float LOCAL_Range, const struct FVector& Heading_To_Return, const struct FVector& Invoker_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnPawn* CallFunc_GetBestPawnWithinViewCone_ReturnValue, const struct FVector& CallFunc_GetPawnForwardVectorAlongGround_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Do Standard Autoaim");

	Params::UQtnVerb_Archetype_C_Do_Standard_Autoaim_Params Parms{};

	Parms.Range = Range;
	Parms.HalfMinusAngle = HalfMinusAngle;
	Parms.Lock_Body_To_Auto_Aim = Lock_Body_To_Auto_Aim;
	Parms.Check_Along_Ground = Check_Along_Ground;
	Parms.LOCAL_Check_Along_Ground = LOCAL_Check_Along_Ground;
	Parms.LOCAL_Lock_Body = LOCAL_Lock_Body;
	Parms.LOCAL_Half_Angle = LOCAL_Half_Angle;
	Parms.Found_Target_To_Return = Found_Target_To_Return;
	Parms.Target_Found_Status_To_Return = Target_Found_Status_To_Return;
	Parms.Potential_Targets = Potential_Targets;
	Parms.Owning_Body_Pawn = Owning_Body_Pawn;
	Parms.LOCAL_Range = LOCAL_Range;
	Parms.Heading_To_Return = Heading_To_Return;
	Parms.Invoker_Location = Invoker_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_GetBestPawnWithinViewCone_ReturnValue = CallFunc_GetBestPawnWithinViewCone_ReturnValue;
	Parms.CallFunc_GetPawnForwardVectorAlongGround_ReturnValue = CallFunc_GetPawnForwardVectorAlongGround_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_GatherEnemiesWithinRadius_enemyPawns = CallFunc_GatherEnemiesWithinRadius_enemyPawns;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (New_Auto_Aim_Heading != nullptr)
		*New_Auto_Aim_Heading = std::move(Parms.New_Auto_Aim_Heading);

	if (Chosen_Target != nullptr)
		*Chosen_Target = Parms.Chosen_Target;

	if (Was_Target_Found_ != nullptr)
		*Was_Target_Found_ = Parms.Was_Target_Found_;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.Consume Resource if Applicable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateResourceCost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::Consume_Resource_if_Applicable(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_CalculateResourceCost_Cost, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "Consume Resource if Applicable");

	Params::UQtnVerb_Archetype_C_Consume_Resource_if_Applicable_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_CalculateResourceCost_Cost = CallFunc_CalculateResourceCost_Cost;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput = CallFunc_GetAttributeValue_self_CastInput;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SetAttributeValue_self_CastInput = CallFunc_SetAttributeValue_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               AbilityCanStart                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CooldownFinished                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateResourceCost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCooldownZero_yes                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHitReactingOrKnockedDown_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UQtnVerb_Archetype_C::CanVerbStart(class UObject* PotentialTarget, bool AbilityCanStart, bool CooldownFinished, float CallFunc_CalculateResourceCost_Cost, bool CallFunc_IsCooldownZero_yes, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetAttributeValue_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "CanVerbStart");

	Params::UQtnVerb_Archetype_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.AbilityCanStart = AbilityCanStart;
	Parms.CooldownFinished = CooldownFinished;
	Parms.CallFunc_CalculateResourceCost_Cost = CallFunc_CalculateResourceCost_Cost;
	Parms.CallFunc_IsCooldownZero_yes = CallFunc_IsCooldownZero_yes;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_IsHitReactingOrKnockedDown_ReturnValue = CallFunc_IsHitReactingOrKnockedDown_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_3 = CallFunc_GetOwningPawn_ReturnValue_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.RemoveUIFromHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnVerb_Archetype_C::RemoveUIFromHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "RemoveUIFromHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.PresentCooldownWhileDormant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnVerb_Archetype_C::PresentCooldownWhileDormant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "PresentCooldownWhileDormant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.AddUIToHud
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnVerb_Archetype_C::AddUIToHud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "AddUIToHud");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "OnVerbStart");

	Params::UQtnVerb_Archetype_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.OnVerbEquipChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::OnVerbEquipChange(bool IsEquipped, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "OnVerbEquipChange");

	Params::UQtnVerb_Archetype_C_OnVerbEquipChange_Params Parms{};

	Parms.IsEquipped = IsEquipped;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.OnVerbProjectileHitTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::OnVerbProjectileHitTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "OnVerbProjectileHitTarget");

	Params::UQtnVerb_Archetype_C_OnVerbProjectileHitTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ApplyMeleeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      MeleeVictim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UQtnVerb_Archetype_C::ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ApplyMeleeDamage");

	Params::UQtnVerb_Archetype_C_ApplyMeleeDamage_Params Parms{};

	Parms.MeleeVictim = MeleeVictim;
	Parms.DamageInfo = DamageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ReadyForGameplayEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    ReadyPawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnVerb_Archetype_C::ReadyForGameplayEvent_Event_0(class AQtnPawn* ReadyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ReadyForGameplayEvent_Event_0");

	Params::UQtnVerb_Archetype_C_ReadyForGameplayEvent_Event_0_Params Parms{};

	Parms.ReadyPawn = ReadyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "OnVerbStop");

	Params::UQtnVerb_Archetype_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.ExecuteUbergraph_QtnVerb_Archetype
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isEquipped                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_meleeVictim                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_Event_DamageInfo                                          (ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUpgrade_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetCurrentActiveVerb_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_CustomEvent_readyPawn                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnVerb_Archetype_C::ExecuteUbergraph_QtnVerb_Archetype(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool K2Node_Event_isEquipped, bool K2Node_Event_isServer_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, class AActor* K2Node_CustomEvent_Target, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsHero_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_5, class AQtnPawn* K2Node_CustomEvent_readyPawn, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "ExecuteUbergraph_QtnVerb_Archetype");

	Params::UQtnVerb_Archetype_C_ExecuteUbergraph_QtnVerb_Archetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI_1 = CallFunc_GetLocalPlayerUIBP_localPlayerUI_1;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin_1 = CallFunc_GetLocalPlayerUIBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.K2Node_Event_isEquipped = K2Node_Event_isEquipped;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_Event_meleeVictim = K2Node_Event_meleeVictim;
	Parms.K2Node_Event_DamageInfo = K2Node_Event_DamageInfo;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_HasUpgrade_ReturnValue = CallFunc_HasUpgrade_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentActiveVerb_ReturnValue = CallFunc_GetCurrentActiveVerb_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3 = K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_readyPawn = K2Node_CustomEvent_readyPawn;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnVerb_Archetype.QtnVerb_Archetype_C.TutorialFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnVerb_Archetype_C::TutorialFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerb_Archetype_C", "TutorialFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


