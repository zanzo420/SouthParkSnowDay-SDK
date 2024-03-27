#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C
// (Actor)

class UClass* ALoot_Container_Parent_Frob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_Parent_Frob_C");

	return Clss;
}


// Loot_Container_Parent_Frob_C Loot_Container_Parent_Frob.Default__Loot_Container_Parent_Frob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_Parent_Frob_C* ALoot_Container_Parent_Frob_C::GetDefaultObj()
{
	static class ALoot_Container_Parent_Frob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_Parent_Frob_C*>(ALoot_Container_Parent_Frob_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.SetLocked_Rep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_locked_rep                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_Container_Parent_Frob_C::SetLocked_Rep(bool New_locked_rep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "SetLocked_Rep");

	Params::ALoot_Container_Parent_Frob_C_SetLocked_Rep_Params Parms{};

	Parms.New_locked_rep = New_locked_rep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.OnRep_locked_rep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoot_Container_Parent_Frob_C::OnRep_locked_rep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "OnRep_locked_rep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.Update_Visuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)

void ALoot_Container_Parent_Frob_C::Update_Visuals(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "Update_Visuals");

	Params::ALoot_Container_Parent_Frob_C_Update_Visuals_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.OnRep_opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoot_Container_Parent_Frob_C::OnRep_opened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "OnRep_opened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_Container_Parent_Frob_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "UserConstructionScript");

	Params::ALoot_Container_Parent_Frob_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_Container_Parent_Frob_C::BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::ALoot_Container_Parent_Frob_C_BndEvt__QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.OpenPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALoot_Container_Parent_Frob_C::OpenPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "OpenPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoot_Container_Parent_Frob_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.BndEvt__Loot_Container_Parent_Frob_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_Container_Parent_Frob_C::BndEvt__Loot_Container_Parent_Frob_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "BndEvt__Loot_Container_Parent_Frob_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature");

	Params::ALoot_Container_Parent_Frob_C_BndEvt__Loot_Container_Parent_Frob_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.ExecuteUbergraph_Loot_Container_Parent_Frob
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBlockRequested__ShouldBlockInteraction_               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_Container_Parent_Frob_C::ExecuteUbergraph_Loot_Container_Parent_Frob(int32 EntryPoint, bool CallFunc_IsBlockRequested__ShouldBlockInteraction_, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "ExecuteUbergraph_Loot_Container_Parent_Frob");

	Params::ALoot_Container_Parent_Frob_C_ExecuteUbergraph_Loot_Container_Parent_Frob_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsBlockRequested__ShouldBlockInteraction_ = CallFunc_IsBlockRequested__ShouldBlockInteraction_;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer_1 = K2Node_ComponentBoundEvent_isServer_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning = CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Parent_Frob.Loot_Container_Parent_Frob_C.opened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Container_Parent_Frob_C*LootContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Opener                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_Container_Parent_Frob_C::Opened__DelegateSignature(class ALoot_Container_Parent_Frob_C* LootContainer, class AQtnBodyPawn* Opener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Parent_Frob_C", "opened__DelegateSignature");

	Params::ALoot_Container_Parent_Frob_C_Opened__DelegateSignature_Params Parms{};

	Parms.LootContainer = LootContainer;
	Parms.Opener = Opener;

	UObject::ProcessEvent(Func, &Parms);

}

}


