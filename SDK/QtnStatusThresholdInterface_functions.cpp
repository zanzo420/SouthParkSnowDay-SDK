#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnStatusThresholdInterface.QtnStatusThresholdInterface_C
// (None)

class UClass* IQtnStatusThresholdInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnStatusThresholdInterface_C");

	return Clss;
}


// QtnStatusThresholdInterface_C QtnStatusThresholdInterface.Default__QtnStatusThresholdInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IQtnStatusThresholdInterface_C* IQtnStatusThresholdInterface_C::GetDefaultObj()
{
	static class IQtnStatusThresholdInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IQtnStatusThresholdInterface_C*>(IQtnStatusThresholdInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetAssociatedStatusEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      StatusEffect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnStatusThresholdInterface_C::GetAssociatedStatusEffect(class UClass** StatusEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnStatusThresholdInterface_C", "GetAssociatedStatusEffect");

	Params::IQtnStatusThresholdInterface_C_GetAssociatedStatusEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StatusEffect != nullptr)
		*StatusEffect = Parms.StatusEffect;

}


// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetBGColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BGColor                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnStatusThresholdInterface_C::GetBGColor(struct FLinearColor* BGColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnStatusThresholdInterface_C", "GetBGColor");

	Params::IQtnStatusThresholdInterface_C_GetBGColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BGColor != nullptr)
		*BGColor = std::move(Parms.BGColor);

}


// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnStatusThresholdInterface_C::GetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnStatusThresholdInterface_C", "GetColor");

	Params::IQtnStatusThresholdInterface_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Tex                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnStatusThresholdInterface_C::GetIcon(class UTexture2D** Tex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnStatusThresholdInterface_C", "GetIcon");

	Params::IQtnStatusThresholdInterface_C_GetIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tex != nullptr)
		*Tex = Parms.Tex;

}


// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetCalculatedThresholdValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnStatusThresholdInterface_C::GetCalculatedThresholdValue(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnStatusThresholdInterface_C", "GetCalculatedThresholdValue");

	Params::IQtnStatusThresholdInterface_C_GetCalculatedThresholdValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}

}


