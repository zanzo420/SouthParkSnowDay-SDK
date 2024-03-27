#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Design.FTUX_Design_C
// (Actor)

class UClass* AFTUX_Design_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Design_C");

	return Clss;
}


// FTUX_Design_C FTUX_Design.Default__FTUX_Design_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUX_Design_C* AFTUX_Design_C::GetDefaultObj()
{
	static class AFTUX_Design_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUX_Design_C*>(AFTUX_Design_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Design.FTUX_Design_C.Boxes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUX_Design_C::Boxes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Design_C", "Boxes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Design.FTUX_Design_C.ElvesVHumansScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUX_Design_C::ElvesVHumansScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Design_C", "ElvesVHumansScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Design.FTUX_Design_C.ExecuteUbergraph_FTUX_Design
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFTUX_Design_C::ExecuteUbergraph_FTUX_Design(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Design_C", "ExecuteUbergraph_FTUX_Design");

	Params::AFTUX_Design_C_ExecuteUbergraph_FTUX_Design_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


