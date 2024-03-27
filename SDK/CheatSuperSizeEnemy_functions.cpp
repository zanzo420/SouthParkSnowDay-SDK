#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheatSuperSizeEnemy.CheatSuperSizeEnemy_C
// (None)

class UClass* UCheatSuperSizeEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatSuperSizeEnemy_C");

	return Clss;
}


// CheatSuperSizeEnemy_C CheatSuperSizeEnemy.Default__CheatSuperSizeEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatSuperSizeEnemy_C* UCheatSuperSizeEnemy_C::GetDefaultObj()
{
	static class UCheatSuperSizeEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatSuperSizeEnemy_C*>(UCheatSuperSizeEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


