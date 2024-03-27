#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OptionsTooltip_BPI.OptionsTooltip_BPI_C
// (None)

class UClass* IOptionsTooltip_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsTooltip_BPI_C");

	return Clss;
}


// OptionsTooltip_BPI_C OptionsTooltip_BPI.Default__OptionsTooltip_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IOptionsTooltip_BPI_C* IOptionsTooltip_BPI_C::GetDefaultObj()
{
	static class IOptionsTooltip_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptionsTooltip_BPI_C*>(IOptionsTooltip_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsTooltip_BPI.OptionsTooltip_BPI_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TooltipToShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void IOptionsTooltip_BPI_C::ShowTooltip(class FText TooltipToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsTooltip_BPI_C", "ShowTooltip");

	Params::IOptionsTooltip_BPI_C_ShowTooltip_Params Parms{};

	Parms.TooltipToShow = TooltipToShow;

	UObject::ProcessEvent(Func, &Parms);

}

}


