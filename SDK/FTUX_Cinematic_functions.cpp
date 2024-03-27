#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Cinematic.FTUX_Cinematic_C
// (Actor)

class UClass* AFTUX_Cinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Cinematic_C");

	return Clss;
}


// FTUX_Cinematic_C FTUX_Cinematic.Default__FTUX_Cinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUX_Cinematic_C* AFTUX_Cinematic_C::GetDefaultObj()
{
	static class AFTUX_Cinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUX_Cinematic_C*>(AFTUX_Cinematic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Cinematic.FTUX_Cinematic_C.FTUXIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUX_Cinematic_C::FTUXIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Cinematic_C", "FTUXIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Cinematic.FTUX_Cinematic_C.ElfAmbush
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUX_Cinematic_C::ElfAmbush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Cinematic_C", "ElfAmbush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Cinematic.FTUX_Cinematic_C.ExecuteUbergraph_FTUX_Cinematic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFTUX_Cinematic_C::ExecuteUbergraph_FTUX_Cinematic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Cinematic_C", "ExecuteUbergraph_FTUX_Cinematic");

	Params::AFTUX_Cinematic_C_ExecuteUbergraph_FTUX_Cinematic_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


