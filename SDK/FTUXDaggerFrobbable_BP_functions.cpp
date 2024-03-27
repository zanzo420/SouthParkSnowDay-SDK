#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C
// (Actor)

class UClass* AFTUXDaggerFrobbable_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXDaggerFrobbable_BP_C");

	return Clss;
}


// FTUXDaggerFrobbable_BP_C FTUXDaggerFrobbable_BP.Default__FTUXDaggerFrobbable_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUXDaggerFrobbable_BP_C* AFTUXDaggerFrobbable_BP_C::GetDefaultObj()
{
	static class AFTUXDaggerFrobbable_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUXDaggerFrobbable_BP_C*>(AFTUXDaggerFrobbable_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void AFTUXDaggerFrobbable_BP_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXDaggerFrobbable_BP_C", "GetIndicatorData");

	Params::AFTUXDaggerFrobbable_BP_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}


// Function FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C.MakeIndicatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUXDaggerFrobbable_BP_C::MakeIndicatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXDaggerFrobbable_BP_C", "MakeIndicatorData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C.BndEvt__FTUXDaggerFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFTUXDaggerFrobbable_BP_C::BndEvt__FTUXDaggerFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXDaggerFrobbable_BP_C", "BndEvt__FTUXDaggerFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::AFTUXDaggerFrobbable_BP_C_BndEvt__FTUXDaggerFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C.ExecuteUbergraph_FTUXDaggerFrobbable_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFTUXDaggerFrobbable_BP_C::ExecuteUbergraph_FTUXDaggerFrobbable_BP(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXDaggerFrobbable_BP_C", "ExecuteUbergraph_FTUXDaggerFrobbable_BP");

	Params::AFTUXDaggerFrobbable_BP_C_ExecuteUbergraph_FTUXDaggerFrobbable_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FTUXDaggerFrobbable_BP.FTUXDaggerFrobbable_BP_C.FTUX_Frobbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUXDaggerFrobbable_BP_C::FTUX_Frobbed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXDaggerFrobbable_BP_C", "FTUX_Frobbed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


