#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyInventoryComponent.BodyInventoryComponent_C
// (None)

class UClass* UBodyInventoryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyInventoryComponent_C");

	return Clss;
}


// BodyInventoryComponent_C BodyInventoryComponent.Default__BodyInventoryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyInventoryComponent_C* UBodyInventoryComponent_C::GetDefaultObj()
{
	static class UBodyInventoryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyInventoryComponent_C*>(UBodyInventoryComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


