#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAISwarmer_Marshwalker.BodyPawnAISwarmer_Marshwalker_C
// (Actor, Pawn)

class UClass* ABodyPawnAISwarmer_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAISwarmer_Marshwalker_C");

	return Clss;
}


// BodyPawnAISwarmer_Marshwalker_C BodyPawnAISwarmer_Marshwalker.Default__BodyPawnAISwarmer_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAISwarmer_Marshwalker_C* ABodyPawnAISwarmer_Marshwalker_C::GetDefaultObj()
{
	static class ABodyPawnAISwarmer_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAISwarmer_Marshwalker_C*>(ABodyPawnAISwarmer_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}

}


