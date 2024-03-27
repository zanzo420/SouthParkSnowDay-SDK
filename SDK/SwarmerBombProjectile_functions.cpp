#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwarmerBombProjectile.SwarmerBombProjectile_C
// (Actor)

class UClass* ASwarmerBombProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwarmerBombProjectile_C");

	return Clss;
}


// SwarmerBombProjectile_C SwarmerBombProjectile.Default__SwarmerBombProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwarmerBombProjectile_C* ASwarmerBombProjectile_C::GetDefaultObj()
{
	static class ASwarmerBombProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwarmerBombProjectile_C*>(ASwarmerBombProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SwarmerBombProjectile.SwarmerBombProjectile_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwarmerBombProjectile_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwarmerBombProjectile_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwarmerBombProjectile.SwarmerBombProjectile_C.StartRotating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwarmerBombProjectile_C::StartRotating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwarmerBombProjectile_C", "StartRotating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwarmerBombProjectile.SwarmerBombProjectile_C.ExecuteUbergraph_SwarmerBombProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwarmerBombProjectile_C::ExecuteUbergraph_SwarmerBombProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwarmerBombProjectile_C", "ExecuteUbergraph_SwarmerBombProjectile");

	Params::ASwarmerBombProjectile_C_ExecuteUbergraph_SwarmerBombProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


