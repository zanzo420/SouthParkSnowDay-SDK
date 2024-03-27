#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_Adult_Harpoonist.BodyPawnAI_Adult_Harpoonist_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_Adult_Harpoonist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_Adult_Harpoonist_C");

	return Clss;
}


// BodyPawnAI_Adult_Harpoonist_C BodyPawnAI_Adult_Harpoonist.Default__BodyPawnAI_Adult_Harpoonist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_Adult_Harpoonist_C* ABodyPawnAI_Adult_Harpoonist_C::GetDefaultObj()
{
	static class ABodyPawnAI_Adult_Harpoonist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_Adult_Harpoonist_C*>(ABodyPawnAI_Adult_Harpoonist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAI_Adult_Harpoonist.BodyPawnAI_Adult_Harpoonist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAI_Adult_Harpoonist_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Harpoonist_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


