#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAICleric_Marshwalker.BodyPawnAICleric_Marshwalker_C
// (Actor, Pawn)

class UClass* ABodyPawnAICleric_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAICleric_Marshwalker_C");

	return Clss;
}


// BodyPawnAICleric_Marshwalker_C BodyPawnAICleric_Marshwalker.Default__BodyPawnAICleric_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAICleric_Marshwalker_C* ABodyPawnAICleric_Marshwalker_C::GetDefaultObj()
{
	static class ABodyPawnAICleric_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAICleric_Marshwalker_C*>(ABodyPawnAICleric_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}

}


