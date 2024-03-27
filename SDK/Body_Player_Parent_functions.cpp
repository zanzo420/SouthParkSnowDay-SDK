#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Player_Parent.Body_Player_Parent_C
// (None)

class UClass* UBody_Player_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Player_Parent_C");

	return Clss;
}


// Body_Player_Parent_C Body_Player_Parent.Default__Body_Player_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Player_Parent_C* UBody_Player_Parent_C::GetDefaultObj()
{
	static class UBody_Player_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Player_Parent_C*>(UBody_Player_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Body_Player_Parent.Body_Player_Parent_C.RefreshMeshVariant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RandSeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBody_Player_Parent_C::RefreshMeshVariant(int32 RandSeed, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Body_Player_Parent_C", "RefreshMeshVariant");

	Params::UBody_Player_Parent_C_RefreshMeshVariant_Params Parms{};

	Parms.RandSeed = RandSeed;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Body_Player_Parent.Body_Player_Parent_C.OnBodyMeshAcquired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ComponentAdded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBody_Player_Parent_C::OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Body_Player_Parent_C", "OnBodyMeshAcquired");

	Params::UBody_Player_Parent_C_OnBodyMeshAcquired_Params Parms{};

	Parms.ComponentAdded = ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Body_Player_Parent.Body_Player_Parent_C.ExecuteUbergraph_Body_Player_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Event_ComponentAdded                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StoreNPC_C*              K2Node_DynamicCast_AsBP_Store_NPC                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBody_Player_Parent_C::ExecuteUbergraph_Body_Player_Parent(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_StoreNPC_C* K2Node_DynamicCast_AsBP_Store_NPC, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Body_Player_Parent_C", "ExecuteUbergraph_Body_Player_Parent");

	Params::UBody_Player_Parent_C_ExecuteUbergraph_Body_Player_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ComponentAdded = K2Node_Event_ComponentAdded;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Store_NPC = K2Node_DynamicCast_AsBP_Store_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


