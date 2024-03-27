#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnVerbUI_Interface.QtnVerbUI_Interface_C
// (None)

class UClass* IQtnVerbUI_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnVerbUI_Interface_C");

	return Clss;
}


// QtnVerbUI_Interface_C QtnVerbUI_Interface.Default__QtnVerbUI_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IQtnVerbUI_Interface_C* IQtnVerbUI_Interface_C::GetDefaultObj()
{
	static class IQtnVerbUI_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IQtnVerbUI_Interface_C*>(IQtnVerbUI_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.GetUnlockData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Parm, OutParm)

void IQtnVerbUI_Interface_C::GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "GetUnlockData");

	Params::IQtnVerbUI_Interface_C_GetUnlockData_Params Parms{};

	Parms.Requester = Requester;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockText != nullptr)
		*LockText = Parms.LockText;

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.ShowOnUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnVerbUI_Interface_C::ShowOnUI(bool* ShouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "ShowOnUI");

	Params::IQtnVerbUI_Interface_C_ShowOnUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.isVerbACheat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCheat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnVerbUI_Interface_C::IsVerbACheat(bool* IsCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "isVerbACheat");

	Params::IQtnVerbUI_Interface_C_IsVerbACheat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsCheat != nullptr)
		*IsCheat = Parms.IsCheat;

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.PresentCooldownWhileDormant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IQtnVerbUI_Interface_C::PresentCooldownWhileDormant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "PresentCooldownWhileDormant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.IsVerbWeaponBased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsWeaponBased                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnVerbUI_Interface_C::IsVerbWeaponBased(bool* IsWeaponBased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "IsVerbWeaponBased");

	Params::IQtnVerbUI_Interface_C_IsVerbWeaponBased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponBased != nullptr)
		*IsWeaponBased = Parms.IsWeaponBased;

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.GetCooldownWheelTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*                  CooldownWheelTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnVerbUI_Interface_C::GetCooldownWheelTexture(class UTexture2D** CooldownWheelTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "GetCooldownWheelTexture");

	Params::IQtnVerbUI_Interface_C_GetCooldownWheelTexture_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CooldownWheelTexture != nullptr)
		*CooldownWheelTexture = Parms.CooldownWheelTexture;

}


// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.IsVerbAPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPower                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnVerbUI_Interface_C::IsVerbAPower(bool* IsPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnVerbUI_Interface_C", "IsVerbAPower");

	Params::IQtnVerbUI_Interface_C_IsVerbAPower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPower != nullptr)
		*IsPower = Parms.IsPower;

}

}


