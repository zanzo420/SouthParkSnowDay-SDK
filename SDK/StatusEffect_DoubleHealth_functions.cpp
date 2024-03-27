#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_DoubleHealth.StatusEffect_DoubleHealth_C
// (None)

class UClass* UStatusEffect_DoubleHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_DoubleHealth_C");

	return Clss;
}


// StatusEffect_DoubleHealth_C StatusEffect_DoubleHealth.Default__StatusEffect_DoubleHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_DoubleHealth_C* UStatusEffect_DoubleHealth_C::GetDefaultObj()
{
	static class UStatusEffect_DoubleHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_DoubleHealth_C*>(UStatusEffect_DoubleHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_DoubleHealth.StatusEffect_DoubleHealth_C.OnStatusEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActorBeingDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_DoubleHealth_C::OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DoubleHealth_C", "OnStatusEffectEnd");

	Params::UStatusEffect_DoubleHealth_C_OnStatusEffectEnd_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;
	Parms.IsActorBeingDestroyed = IsActorBeingDestroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_DoubleHealth.StatusEffect_DoubleHealth_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_DoubleHealth_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DoubleHealth_C", "OnStatusEffectBegin");

	Params::UStatusEffect_DoubleHealth_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_DoubleHealth.StatusEffect_DoubleHealth_C.AlivenessChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_DoubleHealth_C::AlivenessChange(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DoubleHealth_C", "AlivenessChange");

	Params::UStatusEffect_DoubleHealth_C_AlivenessChange_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_DoubleHealth.StatusEffect_DoubleHealth_C.ExecuteUbergraph_StatusEffect_DoubleHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActorBeingDestroyed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_DoubleHealth_C::ExecuteUbergraph_StatusEffect_DoubleHealth(int32 EntryPoint, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_GetAttributeValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, float Temp_float_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_DoubleHealth_C", "ExecuteUbergraph_StatusEffect_DoubleHealth");

	Params::UStatusEffect_DoubleHealth_C_ExecuteUbergraph_StatusEffect_DoubleHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_1 = CallFunc_GetAffectedBody_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_Event_affectedActor_1 = K2Node_Event_affectedActor_1;
	Parms.K2Node_Event_instigator_1 = K2Node_Event_instigator_1;
	Parms.K2Node_Event_isActorBeingDestroyed = K2Node_Event_isActorBeingDestroyed;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_1 = K2Node_DynamicCast_AsBody_Pawn_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetAttributeValue_ReturnValue_1 = CallFunc_GetAttributeValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_2 = CallFunc_GetAffectedBody_ReturnValue_2;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


