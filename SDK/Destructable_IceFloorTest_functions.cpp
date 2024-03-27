#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Destructable_IceFloorTest.Destructable_IceFloorTest_C
// (Actor)

class UClass* ADestructable_IceFloorTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Destructable_IceFloorTest_C");

	return Clss;
}


// Destructable_IceFloorTest_C Destructable_IceFloorTest.Default__Destructable_IceFloorTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADestructable_IceFloorTest_C* ADestructable_IceFloorTest_C::GetDefaultObj()
{
	static class ADestructable_IceFloorTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADestructable_IceFloorTest_C*>(ADestructable_IceFloorTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.OnRep_Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADestructable_IceFloorTest_C::OnRep_Destroyed(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "OnRep_Destroyed");

	Params::ADestructable_IceFloorTest_C_OnRep_Destroyed_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.HandleDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              Damage_Info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Is_Server                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADestructable_IceFloorTest_C::HandleDamage(const struct FQtnDamageInfo& Damage_Info, bool Is_Server)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "HandleDamage");

	Params::ADestructable_IceFloorTest_C_HandleDamage_Params Parms{};

	Parms.Damage_Info = Damage_Info;
	Parms.Is_Server = Is_Server;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.HandleDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Count                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADestructable_IceFloorTest_C::HandleDeath(int32 Local_Count, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "HandleDeath");

	Params::ADestructable_IceFloorTest_C_HandleDeath_Params Parms{};

	Parms.Local_Count = Local_Count;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADestructable_IceFloorTest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADestructable_IceFloorTest_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ADestructable_IceFloorTest_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.multicast_CrackAudio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Sound_location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADestructable_IceFloorTest_C::Multicast_CrackAudio(const struct FVector& Sound_location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "multicast_CrackAudio");

	Params::ADestructable_IceFloorTest_C_Multicast_CrackAudio_Params Parms{};

	Parms.Sound_location = Sound_location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.destroyFloor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADestructable_IceFloorTest_C::DestroyFloor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "destroyFloor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.multicast_IceVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADestructable_IceFloorTest_C::Multicast_IceVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "multicast_IceVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.multicastKillIceAudio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Sound_location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADestructable_IceFloorTest_C::MulticastKillIceAudio(const struct FVector& Sound_location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "multicastKillIceAudio");

	Params::ADestructable_IceFloorTest_C_MulticastKillIceAudio_Params Parms{};

	Parms.Sound_location = Sound_location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Destructable_IceFloorTest.Destructable_IceFloorTest_C.ExecuteUbergraph_Destructable_IceFloorTest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_CustomEvent_sound_location_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_sound_location                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADestructable_IceFloorTest_C::ExecuteUbergraph_Destructable_IceFloorTest(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& K2Node_CustomEvent_sound_location_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_sound_location, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructable_IceFloorTest_C", "ExecuteUbergraph_Destructable_IceFloorTest");

	Params::ADestructable_IceFloorTest_C_ExecuteUbergraph_Destructable_IceFloorTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_CustomEvent_sound_location_1 = K2Node_CustomEvent_sound_location_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_sound_location = K2Node_CustomEvent_sound_location;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


