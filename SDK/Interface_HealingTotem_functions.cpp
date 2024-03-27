#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_HealingTotem.Interface_HealingTotem_C
// (None)

class UClass* IInterface_HealingTotem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_HealingTotem_C");

	return Clss;
}


// Interface_HealingTotem_C Interface_HealingTotem.Default__Interface_HealingTotem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_HealingTotem_C* IInterface_HealingTotem_C::GetDefaultObj()
{
	static class IInterface_HealingTotem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_HealingTotem_C*>(IInterface_HealingTotem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_HealingTotem.Interface_HealingTotem_C.ToggleReviveProxyFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_HealingTotem_C::ToggleReviveProxyFeedback(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_HealingTotem_C", "ToggleReviveProxyFeedback");

	Params::IInterface_HealingTotem_C_ToggleReviveProxyFeedback_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_HealingTotem.Interface_HealingTotem_C.GetReviveProxyFeedbackOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReviveProxyFeedbackOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_HealingTotem_C::GetReviveProxyFeedbackOn(bool* ReviveProxyFeedbackOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_HealingTotem_C", "GetReviveProxyFeedbackOn");

	Params::IInterface_HealingTotem_C_GetReviveProxyFeedbackOn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReviveProxyFeedbackOn != nullptr)
		*ReviveProxyFeedbackOn = Parms.ReviveProxyFeedbackOn;

}


// Function Interface_HealingTotem.Interface_HealingTotem_C.GetUpgradeRevivalProxyMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              UpgradeRevivalProxyMultiplier                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_HealingTotem_C::GetUpgradeRevivalProxyMultiplier(float* UpgradeRevivalProxyMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_HealingTotem_C", "GetUpgradeRevivalProxyMultiplier");

	Params::IInterface_HealingTotem_C_GetUpgradeRevivalProxyMultiplier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeRevivalProxyMultiplier != nullptr)
		*UpgradeRevivalProxyMultiplier = Parms.UpgradeRevivalProxyMultiplier;

}


// Function Interface_HealingTotem.Interface_HealingTotem_C.GetUpgradeRevivalProxy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpgradeRevivalProxy                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_HealingTotem_C::GetUpgradeRevivalProxy(bool* UpgradeRevivalProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_HealingTotem_C", "GetUpgradeRevivalProxy");

	Params::IInterface_HealingTotem_C_GetUpgradeRevivalProxy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeRevivalProxy != nullptr)
		*UpgradeRevivalProxy = Parms.UpgradeRevivalProxy;

}

}


