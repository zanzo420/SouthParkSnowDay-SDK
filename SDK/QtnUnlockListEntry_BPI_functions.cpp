#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C
// (None)

class UClass* IQtnUnlockListEntry_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnUnlockListEntry_BPI_C");

	return Clss;
}


// QtnUnlockListEntry_BPI_C QtnUnlockListEntry_BPI.Default__QtnUnlockListEntry_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IQtnUnlockListEntry_BPI_C* IQtnUnlockListEntry_BPI_C::GetDefaultObj()
{
	static class IQtnUnlockListEntry_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IQtnUnlockListEntry_BPI_C*>(IQtnUnlockListEntry_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C.OnUnlockListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnUnlockListEntry_BPI_C::OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUnlockListEntry_BPI_C", "OnUnlockListEntryPressed");

	Params::IQtnUnlockListEntry_BPI_C_OnUnlockListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C.OnUnlockListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IQtnUnlockListEntry_BPI_C::OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUnlockListEntry_BPI_C", "OnUnlockListEntryHovered");

	Params::IQtnUnlockListEntry_BPI_C_OnUnlockListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

}

}


