#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapCrapperSpawn_FX.TrapCrapperSpawn_FX_C
// (Actor)

class UClass* ATrapCrapperSpawn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapCrapperSpawn_FX_C");

	return Clss;
}


// TrapCrapperSpawn_FX_C TrapCrapperSpawn_FX.Default__TrapCrapperSpawn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapCrapperSpawn_FX_C* ATrapCrapperSpawn_FX_C::GetDefaultObj()
{
	static class ATrapCrapperSpawn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapCrapperSpawn_FX_C*>(ATrapCrapperSpawn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


