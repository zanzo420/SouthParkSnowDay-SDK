#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KyleBossItem.KyleBossItem_C
// (Actor)

class UClass* AKyleBossItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KyleBossItem_C");

	return Clss;
}


// KyleBossItem_C KyleBossItem.Default__KyleBossItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKyleBossItem_C* AKyleBossItem_C::GetDefaultObj()
{
	static class AKyleBossItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKyleBossItem_C*>(AKyleBossItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KyleBossItem.KyleBossItem_C.Grow__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKyleBossItem_C::Grow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "Grow__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.Grow__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKyleBossItem_C::Grow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "Grow__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.Shrink__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKyleBossItem_C::Shrink__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "Shrink__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.Shrink__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKyleBossItem_C::Shrink__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "Shrink__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKyleBossItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.GrowHead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKyleBossItem_C::GrowHead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "GrowHead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.SetGrowSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              New_Play_Rate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKyleBossItem_C::SetGrowSpeed(float New_Play_Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "SetGrowSpeed");

	Params::AKyleBossItem_C_SetGrowSpeed_Params Parms{};

	Parms.New_Play_Rate = New_Play_Rate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KyleBossItem.KyleBossItem_C.ShrinkHead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKyleBossItem_C::ShrinkHead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "ShrinkHead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.SetWandHeadToDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKyleBossItem_C::SetWandHeadToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "SetWandHeadToDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossItem.KyleBossItem_C.ExecuteUbergraph_KyleBossItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_New_Play_Rate                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKyleBossItem_C::ExecuteUbergraph_KyleBossItem(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_CustomEvent_New_Play_Rate, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossItem_C", "ExecuteUbergraph_KyleBossItem");

	Params::AKyleBossItem_C_ExecuteUbergraph_KyleBossItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_CustomEvent_New_Play_Rate = K2Node_CustomEvent_New_Play_Rate;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


