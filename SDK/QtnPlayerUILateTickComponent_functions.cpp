#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnPlayerUILateTickComponent.QtnPlayerUILateTickComponent_C
// (None)

class UClass* UQtnPlayerUILateTickComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnPlayerUILateTickComponent_C");

	return Clss;
}


// QtnPlayerUILateTickComponent_C QtnPlayerUILateTickComponent.Default__QtnPlayerUILateTickComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnPlayerUILateTickComponent_C* UQtnPlayerUILateTickComponent_C::GetDefaultObj()
{
	static class UQtnPlayerUILateTickComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnPlayerUILateTickComponent_C*>(UQtnPlayerUILateTickComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnPlayerUILateTickComponent.QtnPlayerUILateTickComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnPlayerUILateTickComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUILateTickComponent_C", "ReceiveTick");

	Params::UQtnPlayerUILateTickComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUILateTickComponent.QtnPlayerUILateTickComponent_C.ExecuteUbergraph_QtnPlayerUILateTickComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnPlayerUILateTickComponent_C::ExecuteUbergraph_QtnPlayerUILateTickComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUILateTickComponent_C", "ExecuteUbergraph_QtnPlayerUILateTickComponent");

	Params::UQtnPlayerUILateTickComponent_C_ExecuteUbergraph_QtnPlayerUILateTickComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerUILateTickComponent.QtnPlayerUILateTickComponent_C.OnLateTick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnPlayerUILateTickComponent_C::OnLateTick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerUILateTickComponent_C", "OnLateTick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


