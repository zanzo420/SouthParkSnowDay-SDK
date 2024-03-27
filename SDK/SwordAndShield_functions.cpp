#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwordAndShield.SwordAndShield_C
// (Actor)

class UClass* ASwordAndShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwordAndShield_C");

	return Clss;
}


// SwordAndShield_C SwordAndShield.Default__SwordAndShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwordAndShield_C* ASwordAndShield_C::GetDefaultObj()
{
	static class ASwordAndShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwordAndShield_C*>(ASwordAndShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SwordAndShield.SwordAndShield_C.GenerateWeaponForIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             BaseForWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBoxSphereBounds            Bounds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 ShieldM_Local                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 BladeM_Local                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnModularWeaponAttachment ModSecondary_Local_DO                                            (Edit, BlueprintVisible)
// struct FQtnModularWeaponAttachment ModPrim_Local_DO                                                 (Edit, BlueprintVisible)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_outMesh                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_outMesh_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASwordAndShield_C::GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, class UStaticMesh* ShieldM_Local, class UStaticMesh* BladeM_Local, const struct FQtnModularWeaponAttachment& ModSecondary_Local_DO, const struct FQtnModularWeaponAttachment& ModPrim_Local_DO, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_outMesh, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_outMesh_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "GenerateWeaponForIcon");

	Params::ASwordAndShield_C_GenerateWeaponForIcon_Params Parms{};

	Parms.BaseForWeapon = BaseForWeapon;
	Parms.ItemData = ItemData;
	Parms.ShieldM_Local = ShieldM_Local;
	Parms.BladeM_Local = BladeM_Local;
	Parms.ModSecondary_Local_DO = ModSecondary_Local_DO;
	Parms.ModPrim_Local_DO = ModPrim_Local_DO;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddMeshForRender_outMesh = CallFunc_AddMeshForRender_outMesh;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.CallFunc_AddMeshForRender_outMesh_1 = CallFunc_AddMeshForRender_outMesh_1;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult_1 = CallFunc_K2_AddRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_1 = CallFunc_K2_AddRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bounds != nullptr)
		*Bounds = std::move(Parms.Bounds);

}


// Function SwordAndShield.SwordAndShield_C.AddMeshForRender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 In_Mesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        OutMesh                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        L_StaticMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASwordAndShield_C::AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* Owner, class UStaticMeshComponent** OutMesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "AddMeshForRender");

	Params::ASwordAndShield_C_AddMeshForRender_Params Parms{};

	Parms.In_Mesh = In_Mesh;
	Parms.Owner = Owner;
	Parms.L_StaticMesh = L_StaticMesh;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMesh != nullptr)
		*OutMesh = Parms.OutMesh;

}


// Function SwordAndShield.SwordAndShield_C.HandleUnequip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwordAndShield_C::HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "HandleUnequip_Derived");

	Params::ASwordAndShield_C_HandleUnequip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwordAndShield.SwordAndShield_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASwordAndShield_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "HandleEquip_Derived");

	Params::ASwordAndShield_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwordAndShield.SwordAndShield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASwordAndShield_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwordAndShield.SwordAndShield_C.ExecuteUbergraph_SwordAndShield
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwordAndShield_C::ExecuteUbergraph_SwordAndShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordAndShield_C", "ExecuteUbergraph_SwordAndShield");

	Params::ASwordAndShield_C_ExecuteUbergraph_SwordAndShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


