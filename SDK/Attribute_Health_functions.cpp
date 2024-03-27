#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_Health.Attribute_Health_C
// (None)

class UClass* UAttribute_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_Health_C");

	return Clss;
}


// Attribute_Health_C Attribute_Health.Default__Attribute_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_Health_C* UAttribute_Health_C::GetDefaultObj()
{
	static class UAttribute_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_Health_C*>(UAttribute_Health_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_Health.Attribute_Health_C.OnMaxHPDecreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              New_Max_Health                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Decreased_Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_Health_C::OnMaxHPDecreased(float New_Max_Health, float Decreased_Amount, class UObject* CallFunc_GetOwningObject_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnMaxHPDecreased");

	Params::UAttribute_Health_C_OnMaxHPDecreased_Params Parms{};

	Parms.New_Max_Health = New_Max_Health;
	Parms.Decreased_Amount = Decreased_Amount;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnMaxHPIncreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              New_Max_Health                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Increased_Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_Health_C::OnMaxHPIncreased(float New_Max_Health, float Increased_Amount, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnMaxHPIncreased");

	Params::UAttribute_Health_C_OnMaxHPIncreased_Params Parms{};

	Parms.New_Max_Health = New_Max_Health;
	Parms.Increased_Amount = Increased_Amount;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OverrideSetCurrentValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetOwningInterface_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                              CallFunc_GetAttributeMin_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAttribute_Health_C::OverrideSetCurrentValue(float NewValue, class UObject* CallFunc_GetOwningObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetOwningInterface_ReturnValue, float CallFunc_GetAttributeMin_ReturnValue, bool CallFunc_HasAttribute_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OverrideSetCurrentValue");

	Params::UAttribute_Health_C_OverrideSetCurrentValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningInterface_ReturnValue = CallFunc_GetOwningInterface_ReturnValue;
	Parms.CallFunc_GetAttributeMin_ReturnValue = CallFunc_GetAttributeMin_ReturnValue;
	Parms.CallFunc_HasAttribute_ReturnValue = CallFunc_HasAttribute_ReturnValue;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Attribute_Health.Attribute_Health_C.OnTriggerHit
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Threshold                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAttributeThresholdDirectionDirection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::OnTriggerHit(int32 Index, float Threshold, enum class EQtnAttributeThresholdDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnTriggerHit");

	Params::UAttribute_Health_C_OnTriggerHit_Params Parms{};

	Parms.Index = Index;
	Parms.Threshold = Threshold;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnIncreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::OnIncreased(float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnIncreased");

	Params::UAttribute_Health_C_OnIncreased_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnDecreased");

	Params::UAttribute_Health_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_Health_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_Health.Attribute_Health_C.MaxHPIncreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IncreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::MaxHPIncreased(float NewMaxHealth, float IncreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "MaxHPIncreased");

	Params::UAttribute_Health_C_MaxHPIncreased_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.IncreasedAmount = IncreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.MaxHPModified
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Difference                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::MaxHPModified(float NewMaxHealth, float Difference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "MaxHPModified");

	Params::UAttribute_Health_C_MaxHPModified_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.Difference = Difference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.MaxHPDecreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DecreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::MaxHPDecreased(float NewMaxHealth, float DecreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "MaxHPDecreased");

	Params::UAttribute_Health_C_MaxHPDecreased_Params Parms{};

	Parms.NewMaxHealth = NewMaxHealth;
	Parms.DecreasedAmount = DecreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.ExecuteUbergraph_Attribute_Health
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
// int32                              K2Node_Event_index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_threshold                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAttributeThresholdDirectionK2Node_Event_direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountIncreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttribute*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_MaxHealth_C*      K2Node_DynamicCast_AsAttribute_Max_Health                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetOwningInterface_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHealth_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_IncreasedAmount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHealth_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Difference                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewMaxHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DecreasedAmount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_Health_C::ExecuteUbergraph_Attribute_Health(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, int32 K2Node_Event_index, float K2Node_Event_threshold, enum class EQtnAttributeThresholdDirection K2Node_Event_direction, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchInteger_CmpSuccess, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float K2Node_Event_amountIncreased, float K2Node_Event_amountDecreased, class UQtnAttribute* Temp_object_Variable_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UAttribute_MaxHealth_C* K2Node_DynamicCast_AsAttribute_Max_Health, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetOwningInterface_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetReferenceActor_ReturnValue, float K2Node_CustomEvent_NewMaxHealth_2, float K2Node_CustomEvent_IncreasedAmount, float K2Node_CustomEvent_NewMaxHealth_1, float K2Node_CustomEvent_Difference, float K2Node_CustomEvent_NewMaxHealth, float K2Node_CustomEvent_DecreasedAmount, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "ExecuteUbergraph_Attribute_Health");

	Params::UAttribute_Health_C_ExecuteUbergraph_Attribute_Health_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_Event_index = K2Node_Event_index;
	Parms.K2Node_Event_threshold = K2Node_Event_threshold;
	Parms.K2Node_Event_direction = K2Node_Event_direction;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.K2Node_Event_amountIncreased = K2Node_Event_amountIncreased;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsAttribute_Max_Health = K2Node_DynamicCast_AsAttribute_Max_Health;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningInterface_ReturnValue = CallFunc_GetOwningInterface_ReturnValue;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;
	Parms.K2Node_CustomEvent_NewMaxHealth_2 = K2Node_CustomEvent_NewMaxHealth_2;
	Parms.K2Node_CustomEvent_IncreasedAmount = K2Node_CustomEvent_IncreasedAmount;
	Parms.K2Node_CustomEvent_NewMaxHealth_1 = K2Node_CustomEvent_NewMaxHealth_1;
	Parms.K2Node_CustomEvent_Difference = K2Node_CustomEvent_Difference;
	Parms.K2Node_CustomEvent_NewMaxHealth = K2Node_CustomEvent_NewMaxHealth;
	Parms.K2Node_CustomEvent_DecreasedAmount = K2Node_CustomEvent_DecreasedAmount;
	Parms.CallFunc_HasAuthority_outputPin_1 = CallFunc_HasAuthority_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnHealthDecreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount_Decreased                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         Attribute_Taking_Damage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::OnHealthDecreased__DelegateSignature(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnHealthDecreased__DelegateSignature");

	Params::UAttribute_Health_C_OnHealthDecreased__DelegateSignature_Params Parms{};

	Parms.Amount_Decreased = Amount_Decreased;
	Parms.Attribute_Taking_Damage = Attribute_Taking_Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnHealthIncreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         HealthAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Health_C::OnHealthIncreased__DelegateSignature(float AmountIncreased, class UAttribute_Health_C* HealthAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnHealthIncreased__DelegateSignature");

	Params::UAttribute_Health_C_OnHealthIncreased__DelegateSignature_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;
	Parms.HealthAttribute = HealthAttribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Health.Attribute_Health_C.OnHealthDepleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttribute_Health_C::OnHealthDepleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Health_C", "OnHealthDepleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


