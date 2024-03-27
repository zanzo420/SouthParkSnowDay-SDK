#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgrade_RefillBullshit.InstantUpgrade_RefillBullshit_C
// (None)

class UClass* UInstantUpgrade_RefillBullshit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgrade_RefillBullshit_C");

	return Clss;
}


// InstantUpgrade_RefillBullshit_C InstantUpgrade_RefillBullshit.Default__InstantUpgrade_RefillBullshit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgrade_RefillBullshit_C* UInstantUpgrade_RefillBullshit_C::GetDefaultObj()
{
	static class UInstantUpgrade_RefillBullshit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgrade_RefillBullshit_C*>(UInstantUpgrade_RefillBullshit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgrade_RefillBullshit.InstantUpgrade_RefillBullshit_C.CanUpgradeBeRolled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapForHordeMode_outputPin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInstantUpgrade_RefillBullshit_C::CanUpgradeBeRolled(class AQtnBodyPawn* TargetBodyPawn, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_RefillBullshit_C", "CanUpgradeBeRolled");

	Params::UInstantUpgrade_RefillBullshit_C_CanUpgradeBeRolled_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;
	Parms.CallFunc_IsThisMapForHordeMode_outputPin = CallFunc_IsThisMapForHordeMode_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InstantUpgrade_RefillBullshit.InstantUpgrade_RefillBullshit_C.CDO_GenerateTextValueForDisplay
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQtnUpgradeSettings         InUpgradeSettings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       RolledUpgradeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ArrayIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetExpendedBullshitAmount_ExpendedBullshits             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UInstantUpgrade_RefillBullshit_C::CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtn_CheatVerb_Archetype_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetExpendedBullshitAmount_ExpendedBullshits, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgrade_RefillBullshit_C", "CDO_GenerateTextValueForDisplay");

	Params::UInstantUpgrade_RefillBullshit_C_CDO_GenerateTextValueForDisplay_Params Parms{};

	Parms.InUpgradeSettings = InUpgradeSettings;
	Parms.RolledUpgradeData = RolledUpgradeData;
	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetExpendedBullshitAmount_ExpendedBullshits = CallFunc_GetExpendedBullshitAmount_ExpendedBullshits;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


