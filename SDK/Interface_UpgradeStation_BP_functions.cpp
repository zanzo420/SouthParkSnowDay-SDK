#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_UpgradeStation_BP.Interface_UpgradeStation_BP_C
// (None)

class UClass* IInterface_UpgradeStation_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_UpgradeStation_BP_C");

	return Clss;
}


// Interface_UpgradeStation_BP_C Interface_UpgradeStation_BP.Default__Interface_UpgradeStation_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_UpgradeStation_BP_C* IInterface_UpgradeStation_BP_C::GetDefaultObj()
{
	static class IInterface_UpgradeStation_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_UpgradeStation_BP_C*>(IInterface_UpgradeStation_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_UpgradeStation_BP.Interface_UpgradeStation_BP_C.DoGetSpawnedUpgradeCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalActor_Trial_C*SpawnedUpgradeCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_UpgradeStation_BP_C::DoGetSpawnedUpgradeCharacter(class AScriptedSkeletalActor_Trial_C** SpawnedUpgradeCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_UpgradeStation_BP_C", "DoGetSpawnedUpgradeCharacter");

	Params::IInterface_UpgradeStation_BP_C_DoGetSpawnedUpgradeCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedUpgradeCharacter != nullptr)
		*SpawnedUpgradeCharacter = Parms.SpawnedUpgradeCharacter;

}

}


