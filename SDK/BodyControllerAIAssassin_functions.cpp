#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIAssassin.BodyControllerAIAssassin_C
// (Actor)

class UClass* ABodyControllerAIAssassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIAssassin_C");

	return Clss;
}


// BodyControllerAIAssassin_C BodyControllerAIAssassin.Default__BodyControllerAIAssassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIAssassin_C* ABodyControllerAIAssassin_C::GetDefaultObj()
{
	static class ABodyControllerAIAssassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIAssassin_C*>(ABodyControllerAIAssassin_C::StaticClass()->DefaultObject);

	return Default;
}

}


