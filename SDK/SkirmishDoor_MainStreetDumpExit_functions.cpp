#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishDoor_MainStreetDumpExit.SkirmishDoor_MainStreetDumpExit_C
// (Actor)

class UClass* ASkirmishDoor_MainStreetDumpExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishDoor_MainStreetDumpExit_C");

	return Clss;
}


// SkirmishDoor_MainStreetDumpExit_C SkirmishDoor_MainStreetDumpExit.Default__SkirmishDoor_MainStreetDumpExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASkirmishDoor_MainStreetDumpExit_C* ASkirmishDoor_MainStreetDumpExit_C::GetDefaultObj()
{
	static class ASkirmishDoor_MainStreetDumpExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASkirmishDoor_MainStreetDumpExit_C*>(ASkirmishDoor_MainStreetDumpExit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishDoor_MainStreetDumpExit.SkirmishDoor_MainStreetDumpExit_C.BndEvt__SkirmishDoor_MainStreetDumpExit_SkirmishFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_MainStreetDumpExit_C::BndEvt__SkirmishDoor_MainStreetDumpExit_SkirmishFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_MainStreetDumpExit_C", "BndEvt__SkirmishDoor_MainStreetDumpExit_SkirmishFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::ASkirmishDoor_MainStreetDumpExit_C_BndEvt__SkirmishDoor_MainStreetDumpExit_SkirmishFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor_MainStreetDumpExit.SkirmishDoor_MainStreetDumpExit_C.multicast_serverFrobDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_MainStreetDumpExit_C::Multicast_serverFrobDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_MainStreetDumpExit_C", "multicast_serverFrobDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor_MainStreetDumpExit.SkirmishDoor_MainStreetDumpExit_C.ExecuteUbergraph_SkirmishDoor_MainStreetDumpExit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_MainStreetDumpExit_C::ExecuteUbergraph_SkirmishDoor_MainStreetDumpExit(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_MainStreetDumpExit_C", "ExecuteUbergraph_SkirmishDoor_MainStreetDumpExit");

	Params::ASkirmishDoor_MainStreetDumpExit_C_ExecuteUbergraph_SkirmishDoor_MainStreetDumpExit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor_MainStreetDumpExit.SkirmishDoor_MainStreetDumpExit_C.doorFrobbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_MainStreetDumpExit_C::DoorFrobbed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_MainStreetDumpExit_C", "doorFrobbed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


