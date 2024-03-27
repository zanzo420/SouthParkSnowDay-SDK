#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GhostDiscard.GhostDiscard_C
// (Actor)

class UClass* AGhostDiscard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GhostDiscard_C");

	return Clss;
}


// GhostDiscard_C GhostDiscard.Default__GhostDiscard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGhostDiscard_C* AGhostDiscard_C::GetDefaultObj()
{
	static class AGhostDiscard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGhostDiscard_C*>(AGhostDiscard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GhostDiscard.GhostDiscard_C.Flyaway__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGhostDiscard_C::Flyaway__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhostDiscard_C", "Flyaway__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GhostDiscard.GhostDiscard_C.Flyaway__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGhostDiscard_C::Flyaway__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhostDiscard_C", "Flyaway__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GhostDiscard.GhostDiscard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGhostDiscard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhostDiscard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GhostDiscard.GhostDiscard_C.ExecuteUbergraph_GhostDiscard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGhostDiscard_C::ExecuteUbergraph_GhostDiscard(int32 EntryPoint, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhostDiscard_C", "ExecuteUbergraph_GhostDiscard");

	Params::AGhostDiscard_C_ExecuteUbergraph_GhostDiscard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


