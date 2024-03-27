#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAnimNotify_Movement.QtnAnimNotify_Movement_C
// (None)

class UClass* UQtnAnimNotify_Movement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAnimNotify_Movement_C");

	return Clss;
}


// QtnAnimNotify_Movement_C QtnAnimNotify_Movement.Default__QtnAnimNotify_Movement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAnimNotify_Movement_C* UQtnAnimNotify_Movement_C::GetDefaultObj()
{
	static class UQtnAnimNotify_Movement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAnimNotify_Movement_C*>(UQtnAnimNotify_Movement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnAnimNotify_Movement.QtnAnimNotify_Movement_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UQtnAnimNotify_Movement_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAnimNotify_Movement_C", "Received_Notify");

	Params::UQtnAnimNotify_Movement_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnAnimNotify_Movement.QtnAnimNotify_Movement_C.Set Movement
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UQtnAnimNotify_Movement_C::Set_Movement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAnimNotify_Movement_C", "Set Movement");



	UObject::ProcessEvent(Func, nullptr);

}

}


