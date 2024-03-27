#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoubleDaggers_BladesOfFury.DoubleDaggers_BladesOfFury_C
// (None)

class UClass* UDoubleDaggers_BladesOfFury_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleDaggers_BladesOfFury_C");

	return Clss;
}


// DoubleDaggers_BladesOfFury_C DoubleDaggers_BladesOfFury.Default__DoubleDaggers_BladesOfFury_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoubleDaggers_BladesOfFury_C* UDoubleDaggers_BladesOfFury_C::GetDefaultObj()
{
	static class UDoubleDaggers_BladesOfFury_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoubleDaggers_BladesOfFury_C*>(UDoubleDaggers_BladesOfFury_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DoubleDaggers_BladesOfFury.DoubleDaggers_BladesOfFury_C.CalculateDamageValues
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    SourceVerb                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InBaseDamage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnDamageType>  DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              OutDamageScalar                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutBonusDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RageGenScalarAgainstTarget                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeleeVerbDoubleDaggerAirDive_C*K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetResourceMultiplier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbDaggerCombo_C*     K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResourceMultiplier_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Rage_Generation_Scalar_Against_Target_Scalar01      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDoubleDaggers_BladesOfFury_C::CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, float RageGenScalarAgainstTarget, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbDoubleDaggerAirDive_C* K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasStatusEffect_ReturnValue, float CallFunc_GetResourceMultiplier_ReturnValue, class UMeleeVerbDaggerCombo_C* K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetResourceMultiplier_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_4, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Get_Rage_Generation_Scalar_Against_Target_Scalar01, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_BladesOfFury_C", "CalculateDamageValues");

	Params::UDoubleDaggers_BladesOfFury_C_CalculateDamageValues_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.SourceVerb = SourceVerb;
	Parms.TargetActor = TargetActor;
	Parms.InBaseDamage = InBaseDamage;
	Parms.DamageType = DamageType;
	Parms.RageGenScalarAgainstTarget = RageGenScalarAgainstTarget;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive = K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_GetResourceMultiplier_ReturnValue = CallFunc_GetResourceMultiplier_ReturnValue;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo = K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetResourceMultiplier_ReturnValue_1 = CallFunc_GetResourceMultiplier_ReturnValue_1;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Get_Rage_Generation_Scalar_Against_Target_Scalar01 = CallFunc_Get_Rage_Generation_Scalar_Against_Target_Scalar01;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamageScalar != nullptr)
		*OutDamageScalar = Parms.OutDamageScalar;

	if (OutBonusDamage != nullptr)
		*OutBonusDamage = Parms.OutBonusDamage;

}

}


