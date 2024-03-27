#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalNavAffordance_Interface.GlobalNavAffordance_Interface_C
// (None)

class UClass* IGlobalNavAffordance_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalNavAffordance_Interface_C");

	return Clss;
}


// GlobalNavAffordance_Interface_C GlobalNavAffordance_Interface.Default__GlobalNavAffordance_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGlobalNavAffordance_Interface_C* IGlobalNavAffordance_Interface_C::GetDefaultObj()
{
	static class IGlobalNavAffordance_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGlobalNavAffordance_Interface_C*>(IGlobalNavAffordance_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalNavAffordance_Interface.GlobalNavAffordance_Interface_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGlobalNavAffordance_Interface_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNavAffordance_Interface_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalNavAffordance_Interface.GlobalNavAffordance_Interface_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGlobalNavAffordance_Interface_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalNavAffordance_Interface_C", "UpdateGlobalNavAffordances");

	Params::IGlobalNavAffordance_Interface_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}

}


