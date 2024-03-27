#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_Cartman_ChurchChase.BodyPawn_Cartman_ChurchChase_C
// (Actor, Pawn)

class UClass* ABodyPawn_Cartman_ChurchChase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_Cartman_ChurchChase_C");

	return Clss;
}


// BodyPawn_Cartman_ChurchChase_C BodyPawn_Cartman_ChurchChase.Default__BodyPawn_Cartman_ChurchChase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_Cartman_ChurchChase_C* ABodyPawn_Cartman_ChurchChase_C::GetDefaultObj()
{
	static class ABodyPawn_Cartman_ChurchChase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_Cartman_ChurchChase_C*>(ABodyPawn_Cartman_ChurchChase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawn_Cartman_ChurchChase.BodyPawn_Cartman_ChurchChase_C.TogglePhone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_Cartman_ChurchChase_C::TogglePhone(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_Cartman_ChurchChase_C", "TogglePhone");

	Params::ABodyPawn_Cartman_ChurchChase_C_TogglePhone_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_Cartman_ChurchChase.BodyPawn_Cartman_ChurchChase_C.ExecuteUbergraph_BodyPawn_Cartman_ChurchChase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_Cartman_ChurchChase_C::ExecuteUbergraph_BodyPawn_Cartman_ChurchChase(int32 EntryPoint, bool K2Node_CustomEvent_On, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_Cartman_ChurchChase_C", "ExecuteUbergraph_BodyPawn_Cartman_ChurchChase");

	Params::ABodyPawn_Cartman_ChurchChase_C_ExecuteUbergraph_BodyPawn_Cartman_ChurchChase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


