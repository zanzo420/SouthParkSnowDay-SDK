#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C
// (Actor)

class UClass* ARandyBossFight_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandyBossFight_Actor_BP_C");

	return Clss;
}


// RandyBossFight_Actor_BP_C RandyBossFight_Actor_BP.Default__RandyBossFight_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARandyBossFight_Actor_BP_C* ARandyBossFight_Actor_BP_C::GetDefaultObj()
{
	static class ARandyBossFight_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARandyBossFight_Actor_BP_C*>(ARandyBossFight_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyEnd_6F95306F4E2813828C732690A8662C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyEnd_6F95306F4E2813828C732690A8662C2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyEnd_6F95306F4E2813828C732690A8662C2A");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyEnd_6F95306F4E2813828C732690A8662C2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyBegin_6F95306F4E2813828C732690A8662C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyBegin_6F95306F4E2813828C732690A8662C2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyBegin_6F95306F4E2813828C732690A8662C2A");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyBegin_6F95306F4E2813828C732690A8662C2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnInterrupted_6F95306F4E2813828C732690A8662C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnInterrupted_6F95306F4E2813828C732690A8662C2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnInterrupted_6F95306F4E2813828C732690A8662C2A");

	Params::ARandyBossFight_Actor_BP_C_OnInterrupted_6F95306F4E2813828C732690A8662C2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnBlendOut_6F95306F4E2813828C732690A8662C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnBlendOut_6F95306F4E2813828C732690A8662C2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnBlendOut_6F95306F4E2813828C732690A8662C2A");

	Params::ARandyBossFight_Actor_BP_C_OnBlendOut_6F95306F4E2813828C732690A8662C2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnCompleted_6F95306F4E2813828C732690A8662C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnCompleted_6F95306F4E2813828C732690A8662C2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnCompleted_6F95306F4E2813828C732690A8662C2A");

	Params::ARandyBossFight_Actor_BP_C_OnCompleted_6F95306F4E2813828C732690A8662C2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyEnd_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyEnd_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyEnd_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyEnd_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyBegin_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyBegin_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyBegin_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyBegin_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnInterrupted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnInterrupted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnInterrupted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0");

	Params::ARandyBossFight_Actor_BP_C_OnInterrupted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnBlendOut_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnBlendOut_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnBlendOut_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0");

	Params::ARandyBossFight_Actor_BP_C_OnBlendOut_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnCompleted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnCompleted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnCompleted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0");

	Params::ARandyBossFight_Actor_BP_C_OnCompleted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyEnd_E697244340B895D9DD60ED93B33793DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyEnd_E697244340B895D9DD60ED93B33793DD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyEnd_E697244340B895D9DD60ED93B33793DD");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyEnd_E697244340B895D9DD60ED93B33793DD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnNotifyBegin_E697244340B895D9DD60ED93B33793DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnNotifyBegin_E697244340B895D9DD60ED93B33793DD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnNotifyBegin_E697244340B895D9DD60ED93B33793DD");

	Params::ARandyBossFight_Actor_BP_C_OnNotifyBegin_E697244340B895D9DD60ED93B33793DD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnInterrupted_E697244340B895D9DD60ED93B33793DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnInterrupted_E697244340B895D9DD60ED93B33793DD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnInterrupted_E697244340B895D9DD60ED93B33793DD");

	Params::ARandyBossFight_Actor_BP_C_OnInterrupted_E697244340B895D9DD60ED93B33793DD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnBlendOut_E697244340B895D9DD60ED93B33793DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnBlendOut_E697244340B895D9DD60ED93B33793DD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnBlendOut_E697244340B895D9DD60ED93B33793DD");

	Params::ARandyBossFight_Actor_BP_C_OnBlendOut_E697244340B895D9DD60ED93B33793DD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.OnCompleted_E697244340B895D9DD60ED93B33793DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::OnCompleted_E697244340B895D9DD60ED93B33793DD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "OnCompleted_E697244340B895D9DD60ED93B33793DD");

	Params::ARandyBossFight_Actor_BP_C_OnCompleted_E697244340B895D9DD60ED93B33793DD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARandyBossFight_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.FireAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARandyBossFight_Actor_BP_C::FireAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "FireAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.HitAnimation_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARandyBossFight_Actor_BP_C::HitAnimation_MULTI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "HitAnimation_MULTI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.CannonLoopAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARandyBossFight_Actor_BP_C::CannonLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "CannonLoopAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "ReceiveEndPlay");

	Params::ARandyBossFight_Actor_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.CancelStun_MULTI
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARandyBossFight_Actor_BP_C::CancelStun_MULTI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "CancelStun_MULTI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C.ExecuteUbergraph_RandyBossFight_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandyBossFight_Actor_BP_C::ExecuteUbergraph_RandyBossFight_Actor_BP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBossFight_Actor_BP_C", "ExecuteUbergraph_RandyBossFight_Actor_BP");

	Params::ARandyBossFight_Actor_BP_C_ExecuteUbergraph_RandyBossFight_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


