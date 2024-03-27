#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OptionsSelectionInterface.OptionsSelectionInterface_C
// (None)

class UClass* IOptionsSelectionInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsSelectionInterface_C");

	return Clss;
}


// OptionsSelectionInterface_C OptionsSelectionInterface.Default__OptionsSelectionInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IOptionsSelectionInterface_C* IOptionsSelectionInterface_C::GetDefaultObj()
{
	static class IOptionsSelectionInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptionsSelectionInterface_C*>(IOptionsSelectionInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsSelectionInterface.OptionsSelectionInterface_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IOptionsSelectionInterface_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsSelectionInterface_C", "SetSelected");

	Params::IOptionsSelectionInterface_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


