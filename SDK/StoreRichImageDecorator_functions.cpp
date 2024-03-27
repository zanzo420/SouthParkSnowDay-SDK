#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoreRichImageDecorator.StoreRichImageDecorator_C
// (None)

class UClass* UStoreRichImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreRichImageDecorator_C");

	return Clss;
}


// StoreRichImageDecorator_C StoreRichImageDecorator.Default__StoreRichImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreRichImageDecorator_C* UStoreRichImageDecorator_C::GetDefaultObj()
{
	static class UStoreRichImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreRichImageDecorator_C*>(UStoreRichImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


