#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Dodge_Screen1.FTUX_Dodge_Screen1_C
// (None)

class UClass* UFTUX_Dodge_Screen1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Dodge_Screen1_C");

	return Clss;
}


// FTUX_Dodge_Screen1_C FTUX_Dodge_Screen1.Default__FTUX_Dodge_Screen1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Dodge_Screen1_C* UFTUX_Dodge_Screen1_C::GetDefaultObj()
{
	static class UFTUX_Dodge_Screen1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Dodge_Screen1_C*>(UFTUX_Dodge_Screen1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Dodge_Screen1.FTUX_Dodge_Screen1_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_Dodge_Screen1_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class AQtnPlayerPawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Dodge_Screen1_C", "OnDebugDisplay");

	Params::UFTUX_Dodge_Screen1_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


