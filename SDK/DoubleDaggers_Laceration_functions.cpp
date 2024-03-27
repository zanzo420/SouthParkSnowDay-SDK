#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoubleDaggers_Laceration.DoubleDaggers_Laceration_C
// (None)

class UClass* UDoubleDaggers_Laceration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleDaggers_Laceration_C");

	return Clss;
}


// DoubleDaggers_Laceration_C DoubleDaggers_Laceration.Default__DoubleDaggers_Laceration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoubleDaggers_Laceration_C* UDoubleDaggers_Laceration_C::GetDefaultObj()
{
	static class UDoubleDaggers_Laceration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoubleDaggers_Laceration_C*>(UDoubleDaggers_Laceration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DoubleDaggers_Laceration.DoubleDaggers_Laceration_C.CalculateDamageValues
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    SourceVerb                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InBaseDamage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnDamageType>  DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              OutDamageScalar                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutBonusDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeleeVerbDoubleDaggerAirDive_C*K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeleeVerbDaggerCombo_C*     K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDoubleDaggers_Laceration_C::CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbDoubleDaggerAirDive_C* K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasStatusEffect_ReturnValue, class UMeleeVerbDaggerCombo_C* K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueOfUpgrade_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_Laceration_C", "CalculateDamageValues");

	Params::UDoubleDaggers_Laceration_C_CalculateDamageValues_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.SourceVerb = SourceVerb;
	Parms.TargetActor = TargetActor;
	Parms.InBaseDamage = InBaseDamage;
	Parms.DamageType = DamageType;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive = K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo = K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamageScalar != nullptr)
		*OutDamageScalar = Parms.OutDamageScalar;

	if (OutBonusDamage != nullptr)
		*OutBonusDamage = Parms.OutBonusDamage;

}

}


