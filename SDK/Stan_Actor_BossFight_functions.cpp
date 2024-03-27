#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stan_Actor_BossFight.Stan_Actor_BossFight_C
// (Actor)

class UClass* AStan_Actor_BossFight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_Actor_BossFight_C");

	return Clss;
}


// Stan_Actor_BossFight_C Stan_Actor_BossFight.Default__Stan_Actor_BossFight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStan_Actor_BossFight_C* AStan_Actor_BossFight_C::GetDefaultObj()
{
	static class AStan_Actor_BossFight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStan_Actor_BossFight_C*>(AStan_Actor_BossFight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnRep_ShieldPercentage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnRep_ShieldPercentage(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnRep_ShieldPercentage");

	Params::AStan_Actor_BossFight_C_OnRep_ShieldPercentage_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.LOCAL_updateVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStan_Actor_BossFight_C::LOCAL_updateVis(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "LOCAL_updateVis");

	Params::AStan_Actor_BossFight_C_LOCAL_updateVis_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnRep_hidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::OnRep_hidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnRep_hidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.ScaleShield__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::ScaleShield__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "ScaleShield__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.ScaleShield__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::ScaleShield__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "ScaleShield__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyEnd_8D755B684E8E51B28C42D18CEB53E94A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyEnd_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyEnd_8D755B684E8E51B28C42D18CEB53E94A");

	Params::AStan_Actor_BossFight_C_OnNotifyEnd_8D755B684E8E51B28C42D18CEB53E94A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyBegin_8D755B684E8E51B28C42D18CEB53E94A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyBegin_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyBegin_8D755B684E8E51B28C42D18CEB53E94A");

	Params::AStan_Actor_BossFight_C_OnNotifyBegin_8D755B684E8E51B28C42D18CEB53E94A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnInterrupted_8D755B684E8E51B28C42D18CEB53E94A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnInterrupted_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnInterrupted_8D755B684E8E51B28C42D18CEB53E94A");

	Params::AStan_Actor_BossFight_C_OnInterrupted_8D755B684E8E51B28C42D18CEB53E94A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnBlendOut_8D755B684E8E51B28C42D18CEB53E94A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnBlendOut_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnBlendOut_8D755B684E8E51B28C42D18CEB53E94A");

	Params::AStan_Actor_BossFight_C_OnBlendOut_8D755B684E8E51B28C42D18CEB53E94A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnCompleted_8D755B684E8E51B28C42D18CEB53E94A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnCompleted_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnCompleted_8D755B684E8E51B28C42D18CEB53E94A");

	Params::AStan_Actor_BossFight_C_OnCompleted_8D755B684E8E51B28C42D18CEB53E94A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyEnd_CAB9672C444E87E7C49C5A8A1F5F32E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyEnd_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyEnd_CAB9672C444E87E7C49C5A8A1F5F32E2");

	Params::AStan_Actor_BossFight_C_OnNotifyEnd_CAB9672C444E87E7C49C5A8A1F5F32E2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyBegin_CAB9672C444E87E7C49C5A8A1F5F32E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyBegin_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyBegin_CAB9672C444E87E7C49C5A8A1F5F32E2");

	Params::AStan_Actor_BossFight_C_OnNotifyBegin_CAB9672C444E87E7C49C5A8A1F5F32E2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnInterrupted_CAB9672C444E87E7C49C5A8A1F5F32E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnInterrupted_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnInterrupted_CAB9672C444E87E7C49C5A8A1F5F32E2");

	Params::AStan_Actor_BossFight_C_OnInterrupted_CAB9672C444E87E7C49C5A8A1F5F32E2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnBlendOut_CAB9672C444E87E7C49C5A8A1F5F32E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnBlendOut_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnBlendOut_CAB9672C444E87E7C49C5A8A1F5F32E2");

	Params::AStan_Actor_BossFight_C_OnBlendOut_CAB9672C444E87E7C49C5A8A1F5F32E2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnCompleted_CAB9672C444E87E7C49C5A8A1F5F32E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnCompleted_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnCompleted_CAB9672C444E87E7C49C5A8A1F5F32E2");

	Params::AStan_Actor_BossFight_C_OnCompleted_CAB9672C444E87E7C49C5A8A1F5F32E2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyEnd_FA93B03246F496A18C6BB1AE5283B1E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyEnd_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyEnd_FA93B03246F496A18C6BB1AE5283B1E4");

	Params::AStan_Actor_BossFight_C_OnNotifyEnd_FA93B03246F496A18C6BB1AE5283B1E4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnNotifyBegin_FA93B03246F496A18C6BB1AE5283B1E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnNotifyBegin_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnNotifyBegin_FA93B03246F496A18C6BB1AE5283B1E4");

	Params::AStan_Actor_BossFight_C_OnNotifyBegin_FA93B03246F496A18C6BB1AE5283B1E4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnInterrupted_FA93B03246F496A18C6BB1AE5283B1E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnInterrupted_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnInterrupted_FA93B03246F496A18C6BB1AE5283B1E4");

	Params::AStan_Actor_BossFight_C_OnInterrupted_FA93B03246F496A18C6BB1AE5283B1E4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnBlendOut_FA93B03246F496A18C6BB1AE5283B1E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnBlendOut_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnBlendOut_FA93B03246F496A18C6BB1AE5283B1E4");

	Params::AStan_Actor_BossFight_C_OnBlendOut_FA93B03246F496A18C6BB1AE5283B1E4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnCompleted_FA93B03246F496A18C6BB1AE5283B1E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::OnCompleted_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnCompleted_FA93B03246F496A18C6BB1AE5283B1E4");

	Params::AStan_Actor_BossFight_C_OnCompleted_FA93B03246F496A18C6BB1AE5283B1E4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::DestroySelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "DestroySelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.FireAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::FireAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "FireAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.HitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::HitAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "HitAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.CannonLoopAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::CannonLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "CannonLoopAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.InvincibilityVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::InvincibilityVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "InvincibilityVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.ShieldProgressUpdate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PercentComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BossFight_C::ShieldProgressUpdate(float PercentComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "ShieldProgressUpdate");

	Params::AStan_Actor_BossFight_C_ShieldProgressUpdate_Params Parms{};

	Parms.PercentComplete = PercentComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.DestroyShield
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::DestroyShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "DestroyShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.StanTravel
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::StanTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "StanTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.OnCannonDamagedVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStan_Actor_BossFight_C::OnCannonDamagedVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "OnCannonDamagedVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BossFight.Stan_Actor_BossFight_C.ExecuteUbergraph_Stan_Actor_BossFight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_PercentComplete                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)

void AStan_Actor_BossFight_C::ExecuteUbergraph_Stan_Actor_BossFight(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, bool CallFunc_IsServer_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, float K2Node_CustomEvent_PercentComplete, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BossFight_C", "ExecuteUbergraph_Stan_Actor_BossFight");

	Params::AStan_Actor_BossFight_C_ExecuteUbergraph_Stan_Actor_BossFight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_PercentComplete = K2Node_CustomEvent_PercentComplete;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


