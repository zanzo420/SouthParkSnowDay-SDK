#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EntDestructionMesh_BP.EntDestructionMesh_BP_C
// (Actor)

class UClass* AEntDestructionMesh_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntDestructionMesh_BP_C");

	return Clss;
}


// EntDestructionMesh_BP_C EntDestructionMesh_BP.Default__EntDestructionMesh_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEntDestructionMesh_BP_C* AEntDestructionMesh_BP_C::GetDefaultObj()
{
	static class AEntDestructionMesh_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEntDestructionMesh_BP_C*>(AEntDestructionMesh_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EntDestructionMesh_BP.EntDestructionMesh_BP_C.EntDissolve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEntDestructionMesh_BP_C::EntDissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntDestructionMesh_BP_C", "EntDissolve__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EntDestructionMesh_BP.EntDestructionMesh_BP_C.EntDissolve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEntDestructionMesh_BP_C::EntDissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntDestructionMesh_BP_C", "EntDissolve__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EntDestructionMesh_BP.EntDestructionMesh_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEntDestructionMesh_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntDestructionMesh_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EntDestructionMesh_BP.EntDestructionMesh_BP_C.ExecuteUbergraph_EntDestructionMesh_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEntDestructionMesh_BP_C::ExecuteUbergraph_EntDestructionMesh_BP(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntDestructionMesh_BP_C", "ExecuteUbergraph_EntDestructionMesh_BP");

	Params::AEntDestructionMesh_BP_C_ExecuteUbergraph_EntDestructionMesh_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


