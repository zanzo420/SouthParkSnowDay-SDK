#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeInterface.UpgradeInterface_C
// (None)

class UClass* IUpgradeInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeInterface_C");

	return Clss;
}


// UpgradeInterface_C UpgradeInterface.Default__UpgradeInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUpgradeInterface_C* IUpgradeInterface_C::GetDefaultObj()
{
	static class IUpgradeInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUpgradeInterface_C*>(IUpgradeInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeInterface.UpgradeInterface_C.RecordUpgradeForTribunal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void IUpgradeInterface_C::RecordUpgradeForTribunal(const struct FQtnRolledUpgradeResult& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeInterface_C", "RecordUpgradeForTribunal");

	Params::IUpgradeInterface_C_RecordUpgradeForTribunal_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeInterface.UpgradeInterface_C.MakeUpgradeChoiceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUpgradeInterface_C::MakeUpgradeChoiceLocal(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeInterface_C", "MakeUpgradeChoiceLocal");

	Params::IUpgradeInterface_C_MakeUpgradeChoiceLocal_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeInterface.UpgradeInterface_C.SetCardToReplaceLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUpgradeInterface_C::SetCardToReplaceLocal(int32 CardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeInterface_C", "SetCardToReplaceLocal");

	Params::IUpgradeInterface_C_SetCardToReplaceLocal_Params Parms{};

	Parms.CardIndex = CardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeInterface.UpgradeInterface_C.ImproveCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUpgradeInterface_C::ImproveCard(int32 CardIndex, class ABodyPawnPlayer_C* PlayerBody, int32 OldCurrency, int32 UpgradeCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeInterface_C", "ImproveCard");

	Params::IUpgradeInterface_C_ImproveCard_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.PlayerBody = PlayerBody;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeInterface.UpgradeInterface_C.PlayerFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUpgradeInterface_C::PlayerFinished(class ABodyPawnPlayer_C* PlayerBody, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeInterface_C", "PlayerFinished");

	Params::IUpgradeInterface_C_PlayerFinished_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


