#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C
// (Actor)

class UClass* ALoot_DarkMatter_Parent_Frob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_DarkMatter_Parent_Frob_C");

	return Clss;
}


// Loot_DarkMatter_Parent_Frob_C Loot_DarkMatter_Parent_Frob.Default__Loot_DarkMatter_Parent_Frob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_DarkMatter_Parent_Frob_C* ALoot_DarkMatter_Parent_Frob_C::GetDefaultObj()
{
	static class ALoot_DarkMatter_Parent_Frob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_DarkMatter_Parent_Frob_C*>(ALoot_DarkMatter_Parent_Frob_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.OnRep_opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoot_DarkMatter_Parent_Frob_C::OnRep_opened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "OnRep_opened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetDecalMaterial_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_DarkMatter_Parent_Frob_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "UserConstructionScript");

	Params::ALoot_DarkMatter_Parent_Frob_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetDecalMaterial_ReturnValue = CallFunc_GetDecalMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.GatherAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ALoot_DarkMatter_Parent_Frob_C::GatherAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "GatherAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.GatherAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ALoot_DarkMatter_Parent_Frob_C::GatherAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "GatherAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_DarkMatter_Parent_Frob_C::BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::ALoot_DarkMatter_Parent_Frob_C_BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.OpenPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoot_DarkMatter_Parent_Frob_C::OpenPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "OpenPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoot_DarkMatter_Parent_Frob_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_DarkMatter_Parent_Frob.Loot_DarkMatter_Parent_Frob_C.ExecuteUbergraph_Loot_DarkMatter_Parent_Frob
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_DarkMatter_Parent_Frob_C::ExecuteUbergraph_Loot_DarkMatter_Parent_Frob(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_DarkMatter_Parent_Frob_C", "ExecuteUbergraph_Loot_DarkMatter_Parent_Frob");

	Params::ALoot_DarkMatter_Parent_Frob_C_ExecuteUbergraph_Loot_DarkMatter_Parent_Frob_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning = CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning;

	UObject::ProcessEvent(Func, &Parms);

}

}


