#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_Choice_Card.Upgrade_Choice_Card_C
// (Actor)

class UClass* AUpgrade_Choice_Card_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_Choice_Card_C");

	return Clss;
}


// Upgrade_Choice_Card_C Upgrade_Choice_Card.Default__Upgrade_Choice_Card_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgrade_Choice_Card_C* AUpgrade_Choice_Card_C::GetDefaultObj()
{
	static class AUpgrade_Choice_Card_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgrade_Choice_Card_C*>(AUpgrade_Choice_Card_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Upgrade_Choice_Card.Upgrade_Choice_Card_C.ExecuteUbergraph_Upgrade_Choice_Card
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgrade_Choice_Card_C::ExecuteUbergraph_Upgrade_Choice_Card(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Upgrade_Choice_Card_C", "ExecuteUbergraph_Upgrade_Choice_Card");

	Params::AUpgrade_Choice_Card_C_ExecuteUbergraph_Upgrade_Choice_Card_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


