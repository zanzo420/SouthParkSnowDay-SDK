#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrashCanSmash_FX.TrashCanSmash_FX_C
// (Actor)

class UClass* ATrashCanSmash_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrashCanSmash_FX_C");

	return Clss;
}


// TrashCanSmash_FX_C TrashCanSmash_FX.Default__TrashCanSmash_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrashCanSmash_FX_C* ATrashCanSmash_FX_C::GetDefaultObj()
{
	static class ATrashCanSmash_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrashCanSmash_FX_C*>(ATrashCanSmash_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


