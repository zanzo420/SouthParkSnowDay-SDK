#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheeseCat.CheeseCat_C
// (Actor)

class UClass* ACheeseCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheeseCat_C");

	return Clss;
}


// CheeseCat_C CheeseCat.Default__CheeseCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheeseCat_C* ACheeseCat_C::GetDefaultObj()
{
	static class ACheeseCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheeseCat_C*>(ACheeseCat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheeseCat.CheeseCat_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACheeseCat_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheeseCat.CheeseCat_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACheeseCat_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheeseCat.CheeseCat_C.SprayOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheeseCat_C::SprayOn(bool On, float Angle, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "SprayOn");

	Params::ACheeseCat_C_SprayOn_Params Parms{};

	Parms.On = On;
	Parms.Angle = Angle;
	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheeseCat.CheeseCat_C.RandomizeMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheeseCat_C::RandomizeMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "RandomizeMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheeseCat.CheeseCat_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheeseCat_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheeseCat.CheeseCat_C.ExecuteUbergraph_CheeseCat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Angle                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Distance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegTan_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheeseCat_C::ExecuteUbergraph_CheeseCat(int32 EntryPoint, bool K2Node_CustomEvent_On, float K2Node_CustomEvent_Angle, float K2Node_CustomEvent_Distance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_DegTan_ReturnValue, class UMaterialInterface* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheeseCat_C", "ExecuteUbergraph_CheeseCat");

	Params::ACheeseCat_C_ExecuteUbergraph_CheeseCat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.K2Node_CustomEvent_Angle = K2Node_CustomEvent_Angle;
	Parms.K2Node_CustomEvent_Distance = K2Node_CustomEvent_Distance;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_DegTan_ReturnValue = CallFunc_DegTan_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


