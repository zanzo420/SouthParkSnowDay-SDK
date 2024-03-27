#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxHealth.Attribute_MaxHealth_C
// (None)

class UClass* UAttribute_MaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxHealth_C");

	return Clss;
}


// Attribute_MaxHealth_C Attribute_MaxHealth.Default__Attribute_MaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxHealth_C* UAttribute_MaxHealth_C::GetDefaultObj()
{
	static class UAttribute_MaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxHealth_C*>(UAttribute_MaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.RecalculateMaxHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OwningBodyPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEntityTuningDataRow     CallFunc_GetEntityTuningData_ReturnValue                         (ConstParm)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::RecalculateMaxHP(class AQtnBodyPawn* OwningBodyPawn, class AActor* Temp_object_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetReferenceActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "RecalculateMaxHP");

	Params::UAttribute_MaxHealth_C_RecalculateMaxHP_Params Parms{};

	Parms.OwningBodyPawn = OwningBodyPawn;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_GetEntityTuningData_ReturnValue = CallFunc_GetEntityTuningData_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput = CallFunc_GetAttributeValue_self_CastInput;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput_1 = CallFunc_GetAttributeValue_self_CastInput_1;
	Parms.CallFunc_GetAttributeValue_ReturnValue_1 = CallFunc_GetAttributeValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetOwningObject_ReturnValue_1 = CallFunc_GetOwningObject_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_MaxHealth_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnIncreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::OnIncreased(float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnIncreased");

	Params::UAttribute_MaxHealth_C_OnIncreased_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.MaxHPIncreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPScalar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::MaxHPIncreased(float NewMaxHPScalar, float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "MaxHPIncreased");

	Params::UAttribute_MaxHealth_C_MaxHPIncreased_Params Parms{};

	Parms.NewMaxHPScalar = NewMaxHPScalar;
	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.MaxHPDecreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPScalar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::MaxHPDecreased(float NewMaxHPScalar, float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "MaxHPDecreased");

	Params::UAttribute_MaxHealth_C_MaxHPDecreased_Params Parms{};

	Parms.NewMaxHPScalar = NewMaxHPScalar;
	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnDecreased");

	Params::UAttribute_MaxHealth_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.MaxHPBonusIncreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IncreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::MaxHPBonusIncreased(float NewMaxHPBonus, float IncreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "MaxHPBonusIncreased");

	Params::UAttribute_MaxHealth_C_MaxHPBonusIncreased_Params Parms{};

	Parms.NewMaxHPBonus = NewMaxHPBonus;
	Parms.IncreasedAmount = IncreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.MaxHPBonusDecreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::MaxHPBonusDecreased(float NewMaxHPBonus, float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "MaxHPBonusDecreased");

	Params::UAttribute_MaxHealth_C_MaxHPBonusDecreased_Params Parms{};

	Parms.NewMaxHPBonus = NewMaxHPBonus;
	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.ExecuteUbergraph_Attribute_MaxHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_MaxHealth_Bonus_C*K2Node_DynamicCast_AsAttribute_Max_Health_Bonus                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountIncreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_MaxHealth_Scalar_C*K2Node_DynamicCast_AsAttribute_Max_Health_Scalar                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewMaxHPScalar_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AmountIncreased                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHPScalar                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AmountDecreased_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHPBonus_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_IncreasedAmount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHPBonus                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AmountDecreased                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::ExecuteUbergraph_Attribute_MaxHealth(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, class UQtnAttribute* Temp_object_Variable_1, class UAttribute_MaxHealth_Bonus_C* K2Node_DynamicCast_AsAttribute_Max_Health_Bonus, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetReferenceActor_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, float K2Node_Event_amountIncreased, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1, class UQtnAttribute* Temp_object_Variable_2, class UAttribute_MaxHealth_Scalar_C* K2Node_DynamicCast_AsAttribute_Max_Health_Scalar, bool K2Node_DynamicCast_bSuccess_5, float K2Node_CustomEvent_NewMaxHPScalar_1, float K2Node_CustomEvent_AmountIncreased, float K2Node_CustomEvent_NewMaxHPScalar, float K2Node_CustomEvent_AmountDecreased_1, float K2Node_Event_amountDecreased, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_CustomEvent_NewMaxHPBonus_1, float K2Node_CustomEvent_IncreasedAmount, float K2Node_CustomEvent_NewMaxHPBonus, float K2Node_CustomEvent_AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "ExecuteUbergraph_Attribute_MaxHealth");

	Params::UAttribute_MaxHealth_C_ExecuteUbergraph_Attribute_MaxHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.CallFunc_GetAttribute_ReturnValue_1 = CallFunc_GetAttribute_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsAttribute_Max_Health_Bonus = K2Node_DynamicCast_AsAttribute_Max_Health_Bonus;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.K2Node_Event_amountIncreased = K2Node_Event_amountIncreased;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_GetCurrentValue_ReturnValue_1 = CallFunc_GetCurrentValue_ReturnValue_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsAttribute_Max_Health_Scalar = K2Node_DynamicCast_AsAttribute_Max_Health_Scalar;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_NewMaxHPScalar_1 = K2Node_CustomEvent_NewMaxHPScalar_1;
	Parms.K2Node_CustomEvent_AmountIncreased = K2Node_CustomEvent_AmountIncreased;
	Parms.K2Node_CustomEvent_NewMaxHPScalar = K2Node_CustomEvent_NewMaxHPScalar;
	Parms.K2Node_CustomEvent_AmountDecreased_1 = K2Node_CustomEvent_AmountDecreased_1;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NewMaxHPBonus_1 = K2Node_CustomEvent_NewMaxHPBonus_1;
	Parms.K2Node_CustomEvent_IncreasedAmount = K2Node_CustomEvent_IncreasedAmount;
	Parms.K2Node_CustomEvent_NewMaxHPBonus = K2Node_CustomEvent_NewMaxHPBonus;
	Parms.K2Node_CustomEvent_AmountDecreased = K2Node_CustomEvent_AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnMaxHealthDecreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DecreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::OnMaxHealthDecreased__DelegateSignature(float NewMaxHealth, float DecreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnMaxHealthDecreased__DelegateSignature");

	Params::UAttribute_MaxHealth_C_OnMaxHealthDecreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.DecreasedAmount = DecreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnMaxHealthIncreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IncreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::OnMaxHealthIncreased__DelegateSignature(float NewMaxHealth, float IncreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnMaxHealthIncreased__DelegateSignature");

	Params::UAttribute_MaxHealth_C_OnMaxHealthIncreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.IncreasedAmount = IncreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth.Attribute_MaxHealth_C.OnMaxHealthModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Difference                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_C::OnMaxHealthModified__DelegateSignature(float NewMaxHealth, float Difference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_C", "OnMaxHealthModified__DelegateSignature");

	Params::UAttribute_MaxHealth_C_OnMaxHealthModified__DelegateSignature_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.Difference = Difference;

	UObject::ProcessEvent(Func, &Parms);

}

}


