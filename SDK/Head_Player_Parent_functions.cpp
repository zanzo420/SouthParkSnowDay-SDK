#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Head_Player_Parent.Head_Player_Parent_C
// (None)

class UClass* UHead_Player_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Head_Player_Parent_C");

	return Clss;
}


// Head_Player_Parent_C Head_Player_Parent.Default__Head_Player_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHead_Player_Parent_C* UHead_Player_Parent_C::GetDefaultObj()
{
	static class UHead_Player_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHead_Player_Parent_C*>(UHead_Player_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Head_Player_Parent.Head_Player_Parent_C.RefreshMeshVariant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RandSeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHead_Player_Parent_C::RefreshMeshVariant(int32 RandSeed, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Head_Player_Parent_C", "RefreshMeshVariant");

	Params::UHead_Player_Parent_C_RefreshMeshVariant_Params Parms{};

	Parms.RandSeed = RandSeed;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Head_Player_Parent.Head_Player_Parent_C.OnBodyMeshAcquired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ComponentAdded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHead_Player_Parent_C::OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Head_Player_Parent_C", "OnBodyMeshAcquired");

	Params::UHead_Player_Parent_C_OnBodyMeshAcquired_Params Parms{};

	Parms.ComponentAdded = ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Head_Player_Parent.Head_Player_Parent_C.ExecuteUbergraph_Head_Player_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Event_ComponentAdded                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StoreNPC_C*              K2Node_DynamicCast_AsBP_Store_NPC                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHead_Player_Parent_C::ExecuteUbergraph_Head_Player_Parent(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_StoreNPC_C* K2Node_DynamicCast_AsBP_Store_NPC, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Head_Player_Parent_C", "ExecuteUbergraph_Head_Player_Parent");

	Params::UHead_Player_Parent_C_ExecuteUbergraph_Head_Player_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ComponentAdded = K2Node_Event_ComponentAdded;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Store_NPC = K2Node_DynamicCast_AsBP_Store_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


