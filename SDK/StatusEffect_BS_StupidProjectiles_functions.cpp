#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_BS_StupidProjectiles.StatusEffect_BS_StupidProjectiles_C
// (None)

class UClass* UStatusEffect_BS_StupidProjectiles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_BS_StupidProjectiles_C");

	return Clss;
}


// StatusEffect_BS_StupidProjectiles_C StatusEffect_BS_StupidProjectiles.Default__StatusEffect_BS_StupidProjectiles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_BS_StupidProjectiles_C* UStatusEffect_BS_StupidProjectiles_C::GetDefaultObj()
{
	static class UStatusEffect_BS_StupidProjectiles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_BS_StupidProjectiles_C*>(UStatusEffect_BS_StupidProjectiles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_BS_StupidProjectiles.StatusEffect_BS_StupidProjectiles_C.OnNerfStart_SideEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFTUXDataBag_C*              CallFunc_GetLocalProgressDataBag_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnReplicatedSaveData      CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_BS_StupidProjectiles_C::OnNerfStart_SideEffects(bool CallFunc_IsServer_ReturnValue, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, const struct FQtnReplicatedSaveData& CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_BS_StupidProjectiles_C", "OnNerfStart_SideEffects");

	Params::UStatusEffect_BS_StupidProjectiles_C_OnNerfStart_SideEffects_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLocalProgressDataBag_ReturnValue = CallFunc_GetLocalProgressDataBag_ReturnValue;
	Parms.CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData = CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData;

	UObject::ProcessEvent(Func, &Parms);

}

}


