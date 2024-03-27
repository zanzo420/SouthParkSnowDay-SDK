#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RichTextUpgradesDecorator.RichTextUpgradesDecorator_C
// (None)

class UClass* URichTextUpgradesDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextUpgradesDecorator_C");

	return Clss;
}


// RichTextUpgradesDecorator_C RichTextUpgradesDecorator.Default__RichTextUpgradesDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URichTextUpgradesDecorator_C* URichTextUpgradesDecorator_C::GetDefaultObj()
{
	static class URichTextUpgradesDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextUpgradesDecorator_C*>(URichTextUpgradesDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


