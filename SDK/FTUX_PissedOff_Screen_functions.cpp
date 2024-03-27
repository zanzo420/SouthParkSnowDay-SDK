#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_PissedOff_Screen.FTUX_PissedOff_Screen_C
// (None)

class UClass* UFTUX_PissedOff_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_PissedOff_Screen_C");

	return Clss;
}


// FTUX_PissedOff_Screen_C FTUX_PissedOff_Screen.Default__FTUX_PissedOff_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_PissedOff_Screen_C* UFTUX_PissedOff_Screen_C::GetDefaultObj()
{
	static class UFTUX_PissedOff_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_PissedOff_Screen_C*>(UFTUX_PissedOff_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_PissedOff_Screen.FTUX_PissedOff_Screen_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFTUX_PissedOff_Screen_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class AQtnPlayerPawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_PissedOff_Screen_C", "OnDebugDisplay");

	Params::UFTUX_PissedOff_Screen_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


