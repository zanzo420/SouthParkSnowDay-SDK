#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C
// (None)

class UClass* UAttribute_StatusEffectThreshold_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_StatusEffectThreshold_Base_C");

	return Clss;
}


// Attribute_StatusEffectThreshold_Base_C Attribute_StatusEffectThreshold_Base.Default__Attribute_StatusEffectThreshold_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_StatusEffectThreshold_Base_C* UAttribute_StatusEffectThreshold_Base_C::GetDefaultObj()
{
	static class UAttribute_StatusEffectThreshold_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_StatusEffectThreshold_Base_C*>(UAttribute_StatusEffectThreshold_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetAssociatedStatusEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      StatusEffect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_StatusEffectThreshold_Base_C::GetAssociatedStatusEffect(class UClass** StatusEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_StatusEffectThreshold_Base_C", "GetAssociatedStatusEffect");

	Params::UAttribute_StatusEffectThreshold_Base_C_GetAssociatedStatusEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StatusEffect != nullptr)
		*StatusEffect = Parms.StatusEffect;

}


// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetCalculatedThresholdValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_StatusEffectThreshold_Base_C::GetCalculatedThresholdValue(float* Value, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_StatusEffectThreshold_Base_C", "GetCalculatedThresholdValue");

	Params::UAttribute_StatusEffectThreshold_Base_C_GetCalculatedThresholdValue_Params Parms{};

	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Tex                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_StatusEffectThreshold_Base_C::GetIcon(class UTexture2D** Tex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_StatusEffectThreshold_Base_C", "GetIcon");

	Params::UAttribute_StatusEffectThreshold_Base_C_GetIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tex != nullptr)
		*Tex = Parms.Tex;

}


// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_StatusEffectThreshold_Base_C::GetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_StatusEffectThreshold_Base_C", "GetColor");

	Params::UAttribute_StatusEffectThreshold_Base_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetBGColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BGColor                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_StatusEffectThreshold_Base_C::GetBGColor(struct FLinearColor* BGColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_StatusEffectThreshold_Base_C", "GetBGColor");

	Params::UAttribute_StatusEffectThreshold_Base_C_GetBGColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BGColor != nullptr)
		*BGColor = std::move(Parms.BGColor);

}

}


