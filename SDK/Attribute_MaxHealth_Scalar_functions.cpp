#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C
// (None)

class UClass* UAttribute_MaxHealth_Scalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxHealth_Scalar_C");

	return Clss;
}


// Attribute_MaxHealth_Scalar_C Attribute_MaxHealth_Scalar.Default__Attribute_MaxHealth_Scalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxHealth_Scalar_C* UAttribute_MaxHealth_Scalar_C::GetDefaultObj()
{
	static class UAttribute_MaxHealth_Scalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxHealth_Scalar_C*>(UAttribute_MaxHealth_Scalar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.Recalculate Max Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::Recalculate_Max_Health(class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentValue_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, class AActor* CallFunc_GetReferenceActor_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "Recalculate Max Health");

	Params::UAttribute_MaxHealth_Scalar_C_Recalculate_Max_Health_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAttributeValue_self_CastInput = CallFunc_GetAttributeValue_self_CastInput;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.OnIncreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::OnIncreased(float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "OnIncreased");

	Params::UAttribute_MaxHealth_Scalar_C_OnIncreased_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "OnDecreased");

	Params::UAttribute_MaxHealth_Scalar_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_MaxHealth_Scalar_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.Save Out Default Max HP
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttribute_MaxHealth_Scalar_C::Save_Out_Default_Max_HP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "Save Out Default Max HP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.ExecuteUbergraph_Attribute_MaxHealth_Scalar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_amountIncreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEntityTuningDataRow     CallFunc_GetEntityTuningData_ReturnValue                         (ConstParm)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::ExecuteUbergraph_Attribute_MaxHealth_Scalar(int32 EntryPoint, float CallFunc_GetCurrentValue_ReturnValue, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_amountIncreased, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, float K2Node_Event_amountDecreased, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetReferenceActor_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "ExecuteUbergraph_Attribute_MaxHealth_Scalar");

	Params::UAttribute_MaxHealth_Scalar_C_ExecuteUbergraph_Attribute_MaxHealth_Scalar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_amountIncreased = K2Node_Event_amountIncreased;
	Parms.CallFunc_GetEntityTuningData_ReturnValue = CallFunc_GetEntityTuningData_ReturnValue;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;
	Parms.CallFunc_GetCurrentValue_ReturnValue_1 = CallFunc_GetCurrentValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.OnMaxHPScalarDecreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPScalar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::OnMaxHPScalarDecreased__DelegateSignature(float NewMaxHPScalar, float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "OnMaxHPScalarDecreased__DelegateSignature");

	Params::UAttribute_MaxHealth_Scalar_C_OnMaxHPScalarDecreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHPScalar = NewMaxHPScalar;
	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C.OnMaxHPScalarIncreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPScalar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Scalar_C::OnMaxHPScalarIncreased__DelegateSignature(float NewMaxHPScalar, float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Scalar_C", "OnMaxHPScalarIncreased__DelegateSignature");

	Params::UAttribute_MaxHealth_Scalar_C_OnMaxHPScalarIncreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHPScalar = NewMaxHPScalar;
	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}

}


