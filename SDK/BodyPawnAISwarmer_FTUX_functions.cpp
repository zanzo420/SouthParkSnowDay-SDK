#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAISwarmer_FTUX.BodyPawnAISwarmer_FTUX_C
// (Actor, Pawn)

class UClass* ABodyPawnAISwarmer_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAISwarmer_FTUX_C");

	return Clss;
}


// BodyPawnAISwarmer_FTUX_C BodyPawnAISwarmer_FTUX.Default__BodyPawnAISwarmer_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAISwarmer_FTUX_C* ABodyPawnAISwarmer_FTUX_C::GetDefaultObj()
{
	static class ABodyPawnAISwarmer_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAISwarmer_FTUX_C*>(ABodyPawnAISwarmer_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


