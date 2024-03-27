#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C
// (None)

class UClass* UQtnCharacterMesh_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnCharacterMesh_Archetype_C");

	return Clss;
}


// QtnCharacterMesh_Archetype_C QtnCharacterMesh_Archetype.Default__QtnCharacterMesh_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnCharacterMesh_Archetype_C* UQtnCharacterMesh_Archetype_C::GetDefaultObj()
{
	static class UQtnCharacterMesh_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnCharacterMesh_Archetype_C*>(UQtnCharacterMesh_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C.OnBodyMeshAcquired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ComponentAdded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnCharacterMesh_Archetype_C::OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnCharacterMesh_Archetype_C", "OnBodyMeshAcquired");

	Params::UQtnCharacterMesh_Archetype_C_OnBodyMeshAcquired_Params Parms{};

	Parms.ComponentAdded = ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C.ExecuteUbergraph_QtnCharacterMesh_Archetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Event_ComponentAdded                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnCharacterMesh_Archetype_C::ExecuteUbergraph_QtnCharacterMesh_Archetype(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnCharacterMesh_Archetype_C", "ExecuteUbergraph_QtnCharacterMesh_Archetype");

	Params::UQtnCharacterMesh_Archetype_C_ExecuteUbergraph_QtnCharacterMesh_Archetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ComponentAdded = K2Node_Event_ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}

}


