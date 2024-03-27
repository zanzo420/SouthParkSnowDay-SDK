#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_PlayerDefault.Body_PlayerDefault_C
// (None)

class UClass* UBody_PlayerDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_PlayerDefault_C");

	return Clss;
}


// Body_PlayerDefault_C Body_PlayerDefault.Default__Body_PlayerDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_PlayerDefault_C* UBody_PlayerDefault_C::GetDefaultObj()
{
	static class UBody_PlayerDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_PlayerDefault_C*>(UBody_PlayerDefault_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Body_PlayerDefault.Body_PlayerDefault_C.OnBodyMeshAcquired
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ComponentAdded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBody_PlayerDefault_C::OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Body_PlayerDefault_C", "OnBodyMeshAcquired");

	Params::UBody_PlayerDefault_C_OnBodyMeshAcquired_Params Parms{};

	Parms.ComponentAdded = ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Body_PlayerDefault.Body_PlayerDefault_C.ExecuteUbergraph_Body_PlayerDefault
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Event_ComponentAdded                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBody_PlayerDefault_C::ExecuteUbergraph_Body_PlayerDefault(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Body_PlayerDefault_C", "ExecuteUbergraph_Body_PlayerDefault");

	Params::UBody_PlayerDefault_C_ExecuteUbergraph_Body_PlayerDefault_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ComponentAdded = K2Node_Event_ComponentAdded;

	UObject::ProcessEvent(Func, &Parms);

}

}


