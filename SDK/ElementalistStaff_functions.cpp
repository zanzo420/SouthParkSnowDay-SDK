#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalistStaff.ElementalistStaff_C
// (Actor)

class UClass* AElementalistStaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalistStaff_C");

	return Clss;
}


// ElementalistStaff_C ElementalistStaff.Default__ElementalistStaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElementalistStaff_C* AElementalistStaff_C::GetDefaultObj()
{
	static class AElementalistStaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElementalistStaff_C*>(AElementalistStaff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ElementalistStaff.ElementalistStaff_C.HandleUnequip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElementalistStaff_C::HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "HandleUnequip_Derived");

	Params::AElementalistStaff_C_HandleUnequip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ElementalistStaff.ElementalistStaff_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElementalistStaff_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "HandleEquip_Derived");

	Params::AElementalistStaff_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ElementalistStaff.ElementalistStaff_C.AddMeshForRender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 In_Mesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      In_Owner                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Out_Mesh                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        L_StaticMesh                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AElementalistStaff_C::AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "AddMeshForRender");

	Params::AElementalistStaff_C_AddMeshForRender_Params Parms{};

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


// Function ElementalistStaff.ElementalistStaff_C.GenerateWeaponForIcon
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

void AElementalistStaff_C::GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& MW_Secondary_LocalDO, const struct FQtnModularWeaponAttachment& MW_Primary_LocalDO, class UStaticMesh* HandleM_Local, class UStaticMesh* HeadM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "GenerateWeaponForIcon");

	Params::AElementalistStaff_C_GenerateWeaponForIcon_Params Parms{};

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


// Function ElementalistStaff.ElementalistStaff_C.CreateAimStrip
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

void AElementalistStaff_C::CreateAimStrip(const TArray<struct FLinearColor>& VertColor, const struct FLinearColor& ThresholdColor, const struct FLinearColor& BaseColor, float SplineInterval, TArray<struct FVector2D>& Temp_struct_Variable, TArray<struct FVector2D>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector>& Temp_struct_Variable_3, TArray<struct FProcMeshTangent>& Temp_struct_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "CreateAimStrip");

	Params::AElementalistStaff_C_CreateAimStrip_Params Parms{};

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


// Function ElementalistStaff.ElementalistStaff_C.ShowAimArc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TURR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetVerb_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerb_Staff_Lob_Archetype_C* K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetWorldGravity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHoldTime_OutHoldTimeSeconds                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetAimingArc_OutputVectors                              (ReferenceParm)
// int32                              CallFunc_GetAimingArc_thresholdIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AElementalistStaff_C::ShowAimArc(bool TURR, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHero_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UQtnVerb* CallFunc_GetVerb_ReturnValue, class UVerb_Staff_Lob_Archetype_C* K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, float CallFunc_MapRangeClamped_ReturnValue_1, TArray<struct FVector>& CallFunc_GetAimingArc_OutputVectors, int32 CallFunc_GetAimingArc_thresholdIndex, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "ShowAimArc");

	Params::AElementalistStaff_C_ShowAimArc_Params Parms{};

	Parms.TURR = TURR;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetVerb_ReturnValue = CallFunc_GetVerb_ReturnValue;
	Parms.K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype = K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldGravity_ReturnValue = CallFunc_GetWorldGravity_ReturnValue;
	Parms.CallFunc_GetTotalHoldTime_OutHoldTimeSeconds = CallFunc_GetTotalHoldTime_OutHoldTimeSeconds;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetAimingArc_OutputVectors = CallFunc_GetAimingArc_OutputVectors;
	Parms.CallFunc_GetAimingArc_thresholdIndex = CallFunc_GetAimingArc_thresholdIndex;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ElementalistStaff.ElementalistStaff_C.OnAttachItemData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AElementalistStaff_C::OnAttachItemData(const struct FQtnItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "OnAttachItemData");

	Params::AElementalistStaff_C_OnAttachItemData_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ElementalistStaff.ElementalistStaff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AElementalistStaff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ElementalistStaff.ElementalistStaff_C.ExecuteUbergraph_ElementalistStaff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_Event_itemData                                            (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Primary                    (None)
// struct FQtnModularWeaponAttachment CallFunc_GetWeaponReferences_Out_ModW_Secondary                  (None)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SyncLoadStaticMesh_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AElementalistStaff_C::ExecuteUbergraph_ElementalistStaff(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FQtnItemData& K2Node_Event_itemData, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ElementalistStaff_C", "ExecuteUbergraph_ElementalistStaff");

	Params::AElementalistStaff_C_ExecuteUbergraph_ElementalistStaff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_itemData = K2Node_Event_itemData;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Primary = CallFunc_GetWeaponReferences_Out_ModW_Primary;
	Parms.CallFunc_GetWeaponReferences_Out_ModW_Secondary = CallFunc_GetWeaponReferences_Out_ModW_Secondary;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue = CallFunc_SyncLoadStaticMesh_ReturnValue;
	Parms.CallFunc_SyncLoadStaticMesh_ReturnValue_1 = CallFunc_SyncLoadStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


