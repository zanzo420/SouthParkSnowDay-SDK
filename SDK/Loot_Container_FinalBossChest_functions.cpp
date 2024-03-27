#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_FinalBossChest.Loot_Container_FinalBossChest_C
// (Actor)

class UClass* ALoot_Container_FinalBossChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_FinalBossChest_C");

	return Clss;
}


// Loot_Container_FinalBossChest_C Loot_Container_FinalBossChest.Default__Loot_Container_FinalBossChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_FinalBossChest_C* ALoot_Container_FinalBossChest_C::GetDefaultObj()
{
	static class ALoot_Container_FinalBossChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_FinalBossChest_C*>(ALoot_Container_FinalBossChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Loot_Container_FinalBossChest.Loot_Container_FinalBossChest_C.ExecuteUbergraph_Loot_Container_FinalBossChest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_Container_FinalBossChest_C::ExecuteUbergraph_Loot_Container_FinalBossChest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_FinalBossChest_C", "ExecuteUbergraph_Loot_Container_FinalBossChest");

	Params::ALoot_Container_FinalBossChest_C_ExecuteUbergraph_Loot_Container_FinalBossChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


