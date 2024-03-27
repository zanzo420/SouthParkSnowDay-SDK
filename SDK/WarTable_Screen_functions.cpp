#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WarTable_Screen.WarTable_Screen_C
// (None)

class UClass* UWarTable_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarTable_Screen_C");

	return Clss;
}


// WarTable_Screen_C WarTable_Screen.Default__WarTable_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarTable_Screen_C* UWarTable_Screen_C::GetDefaultObj()
{
	static class UWarTable_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarTable_Screen_C*>(UWarTable_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WarTable_Screen.WarTable_Screen_C.OnScreenStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWarTable_Screen_C::OnScreenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarTable_Screen_C", "OnScreenStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WarTable_Screen.WarTable_Screen_C.OnScreenStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWarTable_Screen_C::OnScreenStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarTable_Screen_C", "OnScreenStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WarTable_Screen.WarTable_Screen_C.ExecuteUbergraph_WarTable_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWarTable_Screen_C::ExecuteUbergraph_WarTable_Screen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WarTable_Screen_C", "ExecuteUbergraph_WarTable_Screen");

	Params::UWarTable_Screen_C_ExecuteUbergraph_WarTable_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


