#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTower_Interface.RangedTower_Interface_C
// (None)

class UClass* IRangedTower_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTower_Interface_C");

	return Clss;
}


// RangedTower_Interface_C RangedTower_Interface.Default__RangedTower_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IRangedTower_Interface_C* IRangedTower_Interface_C::GetDefaultObj()
{
	static class IRangedTower_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IRangedTower_Interface_C*>(IRangedTower_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedTower_Interface.RangedTower_Interface_C.DoRangedTowerDeathVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IRangedTower_Interface_C::DoRangedTowerDeathVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedTower_Interface_C", "DoRangedTowerDeathVisuals");



	UObject::ProcessEvent(Func, nullptr);

}

}


