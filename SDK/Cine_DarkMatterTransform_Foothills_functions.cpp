#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_DarkMatterTransform_Foothills.Cine_DarkMatterTransform_Foothills_C
// (Actor)

class UClass* ACine_DarkMatterTransform_Foothills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_DarkMatterTransform_Foothills_C");

	return Clss;
}


// Cine_DarkMatterTransform_Foothills_C Cine_DarkMatterTransform_Foothills.Default__Cine_DarkMatterTransform_Foothills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_DarkMatterTransform_Foothills_C* ACine_DarkMatterTransform_Foothills_C::GetDefaultObj()
{
	static class ACine_DarkMatterTransform_Foothills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_DarkMatterTransform_Foothills_C*>(ACine_DarkMatterTransform_Foothills_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_DarkMatterTransform_Foothills.Cine_DarkMatterTransform_Foothills_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_DarkMatterTransform_Foothills_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_DarkMatterTransform_Foothills_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_DarkMatterTransform_Foothills.Cine_DarkMatterTransform_Foothills_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_DarkMatterTransform_Foothills_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_DarkMatterTransform_Foothills_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_DarkMatterTransform_Foothills.Cine_DarkMatterTransform_Foothills_C.ExecuteUbergraph_Cine_DarkMatterTransform_Foothills
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_DarkMatterTransform_Foothills_C::ExecuteUbergraph_Cine_DarkMatterTransform_Foothills(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_DarkMatterTransform_Foothills_C", "ExecuteUbergraph_Cine_DarkMatterTransform_Foothills");

	Params::ACine_DarkMatterTransform_Foothills_C_ExecuteUbergraph_Cine_DarkMatterTransform_Foothills_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


