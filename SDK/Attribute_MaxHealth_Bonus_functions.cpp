#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C
// (None)

class UClass* UAttribute_MaxHealth_Bonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxHealth_Bonus_C");

	return Clss;
}


// Attribute_MaxHealth_Bonus_C Attribute_MaxHealth_Bonus.Default__Attribute_MaxHealth_Bonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxHealth_Bonus_C* UAttribute_MaxHealth_Bonus_C::GetDefaultObj()
{
	static class UAttribute_MaxHealth_Bonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxHealth_Bonus_C*>(UAttribute_MaxHealth_Bonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnIncreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::OnIncreased(float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "OnIncreased");

	Params::UAttribute_MaxHealth_Bonus_C_OnIncreased_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "OnDecreased");

	Params::UAttribute_MaxHealth_Bonus_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.ExecuteUbergraph_Attribute_MaxHealth_Bonus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountIncreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::ExecuteUbergraph_Attribute_MaxHealth_Bonus(int32 EntryPoint, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1, float K2Node_Event_amountDecreased, float K2Node_Event_amountIncreased, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "ExecuteUbergraph_Attribute_MaxHealth_Bonus");

	Params::UAttribute_MaxHealth_Bonus_C_ExecuteUbergraph_Attribute_MaxHealth_Bonus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_GetCurrentValue_ReturnValue_1 = CallFunc_GetCurrentValue_ReturnValue_1;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.K2Node_Event_amountIncreased = K2Node_Event_amountIncreased;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnMaxHPBonusModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Difference                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::OnMaxHPBonusModified__DelegateSignature(float NewMaxHPBonus, float Difference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "OnMaxHPBonusModified__DelegateSignature");

	Params::UAttribute_MaxHealth_Bonus_C_OnMaxHPBonusModified__DelegateSignature_Params Parms{};

	Parms.NewMaxHPBonus = NewMaxHPBonus;
	Parms.Difference = Difference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.ONMaxHPBonusDecreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::ONMaxHPBonusDecreased__DelegateSignature(float NewMaxHPBonus, float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "ONMaxHPBonusDecreased__DelegateSignature");

	Params::UAttribute_MaxHealth_Bonus_C_ONMaxHPBonusDecreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHPBonus = NewMaxHPBonus;
	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnMaxHPBonusIncreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMaxHPBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IncreasedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxHealth_Bonus_C::OnMaxHPBonusIncreased__DelegateSignature(float NewMaxHPBonus, float IncreasedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxHealth_Bonus_C", "OnMaxHPBonusIncreased__DelegateSignature");

	Params::UAttribute_MaxHealth_Bonus_C_OnMaxHPBonusIncreased__DelegateSignature_Params Parms{};

	Parms.NewMaxHPBonus = NewMaxHPBonus;
	Parms.IncreasedAmount = IncreasedAmount;

	UObject::ProcessEvent(Func, &Parms);

}

}


