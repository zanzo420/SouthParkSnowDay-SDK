#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IndicatorActorInterface.IndicatorActorInterface_C
// (None)

class UClass* IIndicatorActorInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IndicatorActorInterface_C");

	return Clss;
}


// IndicatorActorInterface_C IndicatorActorInterface.Default__IndicatorActorInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIndicatorActorInterface_C* IIndicatorActorInterface_C::GetDefaultObj()
{
	static class IIndicatorActorInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIndicatorActorInterface_C*>(IIndicatorActorInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IndicatorActorInterface.IndicatorActorInterface_C.OnIndicatorConstructed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScreenIndicator_C*          IndicatorWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIndicatorActorInterface_C::OnIndicatorConstructed(class UScreenIndicator_C* IndicatorWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IndicatorActorInterface_C", "OnIndicatorConstructed");

	Params::IIndicatorActorInterface_C_OnIndicatorConstructed_Params Parms{};

	Parms.IndicatorWidget = IndicatorWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


