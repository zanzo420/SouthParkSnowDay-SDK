#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterMesh_Hat_Archetype.CharacterMesh_Hat_Archetype_C
// (None)

class UClass* UCharacterMesh_Hat_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterMesh_Hat_Archetype_C");

	return Clss;
}


// CharacterMesh_Hat_Archetype_C CharacterMesh_Hat_Archetype.Default__CharacterMesh_Hat_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterMesh_Hat_Archetype_C* UCharacterMesh_Hat_Archetype_C::GetDefaultObj()
{
	static class UCharacterMesh_Hat_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterMesh_Hat_Archetype_C*>(UCharacterMesh_Hat_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


