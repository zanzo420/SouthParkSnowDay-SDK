#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenadier.Grenadier_C
// (Actor)

class UClass* AGrenadier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenadier_C");

	return Clss;
}


// Grenadier_C Grenadier.Default__Grenadier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenadier_C* AGrenadier_C::GetDefaultObj()
{
	static class AGrenadier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenadier_C*>(AGrenadier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grenadier.Grenadier_C.HandleUnequip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenadier_C::HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "HandleUnequip_Derived");

	Params::AGrenadier_C_HandleUnequip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenadier_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "HandleEquip_Derived");

	Params::AGrenadier_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.AddMeshForRender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 In_Mesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      In_Owner                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Out_Mesh                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        L_StaticMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGrenadier_C::AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "AddMeshForRender");

	Params::AGrenadier_C_AddMeshForRender_Params Parms{};

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


// Function Grenadier.Grenadier_C.GenerateWeaponForIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             BaseForWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBoxSphereBounds            Bounds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnModularWeaponAttachment MW_Secondary_LocalDO                                             (Edit, BlueprintVisible)
// struct FQtnModularWeaponAttachment MW_Primary_LocalDO                                               (Edit, BlueprintVisible)
// class UStaticMesh*                 HandleM_Local                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 HeadM_Local                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Primary                    (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Secondary                  (None)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_Out_Mesh                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_AddMeshForRender_Out_Mesh_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGrenadier_C::GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& MW_Secondary_LocalDO, const struct FQtnModularWeaponAttachment& MW_Primary_LocalDO, class UStaticMesh* HandleM_Local, class UStaticMesh* HeadM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "GenerateWeaponForIcon");

	Params::AGrenadier_C_GenerateWeaponForIcon_Params Parms{};

	Parms.BaseForWeapon = BaseForWeapon;
	Parms.ItemData = ItemData;
	Parms.MW_Secondary_LocalDO = MW_Secondary_LocalDO;
	Parms.MW_Primary_LocalDO = MW_Primary_LocalDO;
	Parms.HandleM_Local = HandleM_Local;
	Parms.HeadM_Local = HeadM_Local;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Primary = CallFunc_GetWeaponReferences_Out_ModW_Primary;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Secondary = CallFunc_GetWeaponReferences_Out_ModW_Secondary;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue = CallFunc_SyncLoadStaticMesh_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddMeshForRender_Out_Mesh = CallFunc_AddMeshForRender_Out_Mesh;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue_1 = CallFunc_SyncLoadStaticMesh_ReturnValue_1;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_1 = CallFunc_K2_AddRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_AddMeshForRender_Out_Mesh_1 = CallFunc_AddMeshForRender_Out_Mesh_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bounds != nullptr)
		*Bounds = std::move(Parms.Bounds);

}


// Function Grenadier.Grenadier_C.CreateAimStrip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>        VertColor                                                        (Edit, BlueprintVisible)
// struct FLinearColor                ThresholdColor                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColor                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SplineInterval                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// TArray<struct FVector>             Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// TArray<struct FProcMeshTangent>    Temp_struct_Variable_4                                           (ConstParm, ReferenceParm)

void AGrenadier_C::CreateAimStrip(const TArray<struct FLinearColor>& VertColor, const struct FLinearColor& ThresholdColor, const struct FLinearColor& BaseColor, float SplineInterval, TArray<struct FVector2D>& Temp_struct_Variable, TArray<struct FVector2D>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector>& Temp_struct_Variable_3, TArray<struct FProcMeshTangent>& Temp_struct_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "CreateAimStrip");

	Params::AGrenadier_C_CreateAimStrip_Params Parms{};

	Parms.VertColor = VertColor;
	Parms.ThresholdColor = ThresholdColor;
	Parms.BaseColor = BaseColor;
	Parms.SplineInterval = SplineInterval;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.ShowAimArc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetVerb_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWorldGravity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Grenade_C*             K2Node_DynamicCast_AsVerb_Grenade                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetAimingArc_OutputVectors                              (ReferenceParm)
// int32                              CallFunc_GetAimingArc_thresholdIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenadier_C::ShowAimArc(bool Show, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsHero_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UQtnVerb* CallFunc_GetVerb_ReturnValue, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, TArray<struct FVector>& CallFunc_GetAimingArc_OutputVectors, int32 CallFunc_GetAimingArc_thresholdIndex, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "ShowAimArc");

	Params::AGrenadier_C_ShowAimArc_Params Parms{};

	Parms.Show = Show;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetVerb_ReturnValue = CallFunc_GetVerb_ReturnValue;
	Parms.CallFunc_GetWorldGravity_ReturnValue = CallFunc_GetWorldGravity_ReturnValue;
	Parms.K2Node_DynamicCast_AsVerb_Grenade = K2Node_DynamicCast_AsVerb_Grenade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_GetAimingArc_OutputVectors = CallFunc_GetAimingArc_OutputVectors;
	Parms.CallFunc_GetAimingArc_thresholdIndex = CallFunc_GetAimingArc_thresholdIndex;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.OnAttachItemData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AGrenadier_C::OnAttachItemData(const struct FQtnItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "OnAttachItemData");

	Params::AGrenadier_C_OnAttachItemData_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.RemoveAndRecharge
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrenadier_C::RemoveAndRecharge(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "RemoveAndRecharge");

	Params::AGrenadier_C_RemoveAndRecharge_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grenadier.Grenadier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGrenadier_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenadier.Grenadier_C.Recharge
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGrenadier_C::Recharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "Recharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grenadier.Grenadier_C.ExecuteUbergraph_Grenadier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_Event_itemData                                            (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Primary                    (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Secondary                  (None)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGrenadier_C::ExecuteUbergraph_Grenadier(int32 EntryPoint, const struct FQtnItemData& K2Node_Event_itemData, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_Delay, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grenadier_C", "ExecuteUbergraph_Grenadier");

	Params::AGrenadier_C_ExecuteUbergraph_Grenadier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_itemData = K2Node_Event_itemData;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Primary = CallFunc_GetWeaponReferences_Out_ModW_Primary;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Secondary = CallFunc_GetWeaponReferences_Out_ModW_Secondary;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue = CallFunc_SyncLoadStaticMesh_ReturnValue;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue_1 = CallFunc_SyncLoadStaticMesh_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


