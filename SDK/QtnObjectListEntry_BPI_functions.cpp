#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C
// (None)

class UClass* IQtnObjectListEntry_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnObjectListEntry_BPI_C");

	return Clss;
}


// QtnObjectListEntry_BPI_C QtnObjectListEntry_BPI.Default__QtnObjectListEntry_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IQtnObjectListEntry_BPI_C* IQtnObjectListEntry_BPI_C::GetDefaultObj()
{
	static class IQtnObjectListEntry_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IQtnObjectListEntry_BPI_C*>(IQtnObjectListEntry_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C.OnListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IQtnObjectListEntry_BPI_C::OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnObjectListEntry_BPI_C", "OnListEntryPressed");

	Params::IQtnObjectListEntry_BPI_C_OnListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C.OnListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IQtnObjectListEntry_BPI_C::OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnObjectListEntry_BPI_C", "OnListEntryHovered");

	Params::IQtnObjectListEntry_BPI_C_OnListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;

	UObject::ProcessEvent(Func, &Parms);

}

}


