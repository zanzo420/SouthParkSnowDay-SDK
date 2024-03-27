#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condom_BP.Condom_BP_C
// (Actor)

class UClass* ACondom_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condom_BP_C");

	return Clss;
}


// Condom_BP_C Condom_BP.Default__Condom_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACondom_BP_C* ACondom_BP_C::GetDefaultObj()
{
	static class ACondom_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACondom_BP_C*>(ACondom_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condom_BP.Condom_BP_C.frobToCarry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      This_frobbable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Frobbing_pawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACondom_BP_C::FrobToCarry(class UQtnFrobbableComponent* This_frobbable, class AQtnBodyPawn* Frobbing_pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "frobToCarry");

	Params::ACondom_BP_C_FrobToCarry_Params Parms{};

	Parms.This_frobbable = This_frobbable;
	Parms.Frobbing_pawn = Frobbing_pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Condom_BP.Condom_BP_C.replicatedCarryEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACondom_BP_C::ReplicatedCarryEvents(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "replicatedCarryEvents");

	Params::ACondom_BP_C_ReplicatedCarryEvents_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Condom_BP.Condom_BP_C.LOCAL_updateVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACondom_BP_C::LOCAL_updateVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "LOCAL_updateVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Condom_BP.Condom_BP_C.OnRep_frobbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACondom_BP_C::OnRep_frobbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "OnRep_frobbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Condom_BP.Condom_BP_C.multicast_serverSuccessfulFrob
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACondom_BP_C::Multicast_serverSuccessfulFrob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "multicast_serverSuccessfulFrob");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Condom_BP.Condom_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACondom_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Condom_BP.Condom_BP_C.ExecuteUbergraph_Condom_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACondom_BP_C::ExecuteUbergraph_Condom_BP(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "ExecuteUbergraph_Condom_BP");

	Params::ACondom_BP_C_ExecuteUbergraph_Condom_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Condom_BP.Condom_BP_C.CatapultPiecePickup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACondom_BP_C*                Piece                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Carrier                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACondom_BP_C::CatapultPiecePickup__DelegateSignature(class ACondom_BP_C* Piece, class AActor* Carrier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condom_BP_C", "CatapultPiecePickup__DelegateSignature");

	Params::ACondom_BP_C_CatapultPiecePickup__DelegateSignature_Params Parms{};

	Parms.Piece = Piece;
	Parms.Carrier = Carrier;

	UObject::ProcessEvent(Func, &Parms);

}

}


