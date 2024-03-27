#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoubleDaggers.DoubleDaggers_C
// (Actor)

class UClass* ADoubleDaggers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleDaggers_C");

	return Clss;
}


// DoubleDaggers_C DoubleDaggers.Default__DoubleDaggers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADoubleDaggers_C* ADoubleDaggers_C::GetDefaultObj()
{
	static class ADoubleDaggers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADoubleDaggers_C*>(ADoubleDaggers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DoubleDaggers.DoubleDaggers_C.HandleUnequip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoubleDaggers_C::HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "HandleUnequip_Derived");

	Params::ADoubleDaggers_C_HandleUnequip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DoubleDaggers.DoubleDaggers_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoubleDaggers_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "HandleEquip_Derived");

	Params::ADoubleDaggers_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DoubleDaggers.DoubleDaggers_C.AddMeshForRender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 In_Mesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      In_Owner                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Out_Mesh                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        L_StaticMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoubleDaggers_C::AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "AddMeshForRender");

	Params::ADoubleDaggers_C_AddMeshForRender_Params Parms{};

	Parms.In_Mesh = In_Mesh;
	Parms.In_Owner = In_Owner;
	Parms.L_StaticMesh = L_StaticMesh;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Mesh != nullptr)
		*Out_Mesh = Parms.Out_Mesh;

}


// Function DoubleDaggers.DoubleDaggers_C.GenerateWeaponForIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             BaseForWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBoxSphereBounds            Bounds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnModularWeaponAttachment ModSecondary_Local_DO                                            (Edit, BlueprintVisible)
// struct FQtnModularWeaponAttachment ModPrim_Local_DO                                                 (Edit, BlueprintVisible)
// class UStaticMesh*                 HandleM_Local                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 BladeM_Local                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Primary                    (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Secondary                  (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_Out_Mesh                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_Out_Mesh_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoubleDaggers_C::GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& ModSecondary_Local_DO, const struct FQtnModularWeaponAttachment& ModPrim_Local_DO, class UStaticMesh* HandleM_Local, class UStaticMesh* BladeM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "GenerateWeaponForIcon");

	Params::ADoubleDaggers_C_GenerateWeaponForIcon_Params Parms{};

	Parms.BaseForWeapon = BaseForWeapon;
	Parms.ItemData = ItemData;
	Parms.ModSecondary_Local_DO = ModSecondary_Local_DO;
	Parms.ModPrim_Local_DO = ModPrim_Local_DO;
	Parms.HandleM_Local = HandleM_Local;
	Parms.BladeM_Local = BladeM_Local;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Primary = CallFunc_GetWeaponReferences_Out_ModW_Primary;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Secondary = CallFunc_GetWeaponReferences_Out_ModW_Secondary;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddMeshForRender_Out_Mesh = CallFunc_AddMeshForRender_Out_Mesh;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.CallFunc_AddMeshForRender_Out_Mesh_1 = CallFunc_AddMeshForRender_Out_Mesh_1;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue = CallFunc_SyncLoadStaticMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue_1 = CallFunc_SyncLoadStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Bounds != nullptr)
		*Bounds = std::move(Parms.Bounds);

}


// Function DoubleDaggers.DoubleDaggers_C.OnAttachItemData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ADoubleDaggers_C::OnAttachItemData(const struct FQtnItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "OnAttachItemData");

	Params::ADoubleDaggers_C_OnAttachItemData_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DoubleDaggers.DoubleDaggers_C.ExecuteUbergraph_DoubleDaggers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_Event_itemData                                            (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Primary                    (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Secondary                  (None)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoubleDaggers_C::ExecuteUbergraph_DoubleDaggers(int32 EntryPoint, const struct FQtnItemData& K2Node_Event_itemData, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DoubleDaggers_C", "ExecuteUbergraph_DoubleDaggers");

	Params::ADoubleDaggers_C_ExecuteUbergraph_DoubleDaggers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_itemData = K2Node_Event_itemData;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Primary = CallFunc_GetWeaponReferences_Out_ModW_Primary;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Secondary = CallFunc_GetWeaponReferences_Out_ModW_Secondary;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue = CallFunc_SyncLoadStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


