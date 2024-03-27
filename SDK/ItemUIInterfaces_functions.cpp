#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemUIInterfaces.ItemUIInterfaces_C
// (None)

class UClass* IItemUIInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemUIInterfaces_C");

	return Clss;
}


// ItemUIInterfaces_C ItemUIInterfaces.Default__ItemUIInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IItemUIInterfaces_C* IItemUIInterfaces_C::GetDefaultObj()
{
	static class IItemUIInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IItemUIInterfaces_C*>(IItemUIInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemUIInterfaces.ItemUIInterfaces_C.GetUnlockData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Parm, OutParm)

void IItemUIInterfaces_C::GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemUIInterfaces_C", "GetUnlockData");

	Params::IItemUIInterfaces_C_GetUnlockData_Params Parms{};

	Parms.Requester = Requester;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockText != nullptr)
		*LockText = Parms.LockText;

}


// Function ItemUIInterfaces.ItemUIInterfaces_C.GetItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              LootObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IItemUIInterfaces_C::GetItemDetail(class UBP_LootIcon_C* LootObject, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemUIInterfaces_C", "GetItemDetail");

	Params::IItemUIInterfaces_C_GetItemDetail_Params Parms{};

	Parms.LootObject = LootObject;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemUIInterfaces.ItemUIInterfaces_C.HandleLootHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IItemUIInterfaces_C::HandleLootHover(class UBP_LootIcon_C* ThisIcon, bool Hovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemUIInterfaces_C", "HandleLootHover");

	Params::IItemUIInterfaces_C_HandleLootHover_Params Parms{};

	Parms.ThisIcon = ThisIcon;
	Parms.Hovering = Hovering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemUIInterfaces.ItemUIInterfaces_C.HandleLootSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IItemUIInterfaces_C::HandleLootSelect(class UBP_LootIcon_C* ThisIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemUIInterfaces_C", "HandleLootSelect");

	Params::IItemUIInterfaces_C_HandleLootSelect_Params Parms{};

	Parms.ThisIcon = ThisIcon;

	UObject::ProcessEvent(Func, &Parms);

}

}


