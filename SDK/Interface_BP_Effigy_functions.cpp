#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_BP_Effigy.Interface_BP_Effigy_C
// (None)

class UClass* IInterface_BP_Effigy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_BP_Effigy_C");

	return Clss;
}


// Interface_BP_Effigy_C Interface_BP_Effigy.Default__Interface_BP_Effigy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_BP_Effigy_C* IInterface_BP_Effigy_C::GetDefaultObj()
{
	static class IInterface_BP_Effigy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_BP_Effigy_C*>(IInterface_BP_Effigy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_BP_Effigy.Interface_BP_Effigy_C.SetLevelFeatureSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelFeatureSpawner_C*      LevelFeatureSpawner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_BP_Effigy_C::SetLevelFeatureSpawner(class ALevelFeatureSpawner_C* LevelFeatureSpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_BP_Effigy_C", "SetLevelFeatureSpawner");

	Params::IInterface_BP_Effigy_C_SetLevelFeatureSpawner_Params Parms{};

	Parms.LevelFeatureSpawner = LevelFeatureSpawner;

	UObject::ProcessEvent(Func, &Parms);

}

}


