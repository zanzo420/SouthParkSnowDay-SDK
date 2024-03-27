#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIIke.BodyControllerAIIke_C
// (Actor)

class UClass* ABodyControllerAIIke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIIke_C");

	return Clss;
}


// BodyControllerAIIke_C BodyControllerAIIke.Default__BodyControllerAIIke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIIke_C* ABodyControllerAIIke_C::GetDefaultObj()
{
	static class ABodyControllerAIIke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIIke_C*>(ABodyControllerAIIke_C::StaticClass()->DefaultObject);

	return Default;
}

}


