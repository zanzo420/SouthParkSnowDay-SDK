#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPaperDoll_BP.PlayerPaperDoll_BP_C
// (Actor)

class UClass* APlayerPaperDoll_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPaperDoll_BP_C");

	return Clss;
}


// PlayerPaperDoll_BP_C PlayerPaperDoll_BP.Default__PlayerPaperDoll_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPaperDoll_BP_C* APlayerPaperDoll_BP_C::GetDefaultObj()
{
	static class APlayerPaperDoll_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPaperDoll_BP_C*>(APlayerPaperDoll_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.Get Cosmetic Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsEmote                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       OutBodyMesh                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>OutEmoteVerb                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPaperDoll_BP_C::Get_Cosmetic_Item(const class FString& ItemId, bool IsEmote, class UQtnCharacterBodyMesh** OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C>* OutEmoteVerb, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2, bool K2Node_ClassDynamicCast_bSuccess_3, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "Get Cosmetic Item");

	Params::APlayerPaperDoll_BP_C_Get_Cosmetic_Item_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEmote = IsEmote;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBodyMesh != nullptr)
		*OutBodyMesh = Parms.OutBodyMesh;

	if (OutEmoteVerb != nullptr)
		*OutEmoteVerb = Parms.OutEmoteVerb;

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.UpdateLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPaperDoll_BP_C::UpdateLighting(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "UpdateLighting");

	Params::APlayerPaperDoll_BP_C_UpdateLighting_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPaperDoll_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.OnNotifyEnd_2AFA2ADD408F2BF178B8ACA5311661AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::OnNotifyEnd_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "OnNotifyEnd_2AFA2ADD408F2BF178B8ACA5311661AE");

	Params::APlayerPaperDoll_BP_C_OnNotifyEnd_2AFA2ADD408F2BF178B8ACA5311661AE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.OnNotifyBegin_2AFA2ADD408F2BF178B8ACA5311661AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::OnNotifyBegin_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "OnNotifyBegin_2AFA2ADD408F2BF178B8ACA5311661AE");

	Params::APlayerPaperDoll_BP_C_OnNotifyBegin_2AFA2ADD408F2BF178B8ACA5311661AE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.OnInterrupted_2AFA2ADD408F2BF178B8ACA5311661AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::OnInterrupted_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "OnInterrupted_2AFA2ADD408F2BF178B8ACA5311661AE");

	Params::APlayerPaperDoll_BP_C_OnInterrupted_2AFA2ADD408F2BF178B8ACA5311661AE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.OnBlendOut_2AFA2ADD408F2BF178B8ACA5311661AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::OnBlendOut_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "OnBlendOut_2AFA2ADD408F2BF178B8ACA5311661AE");

	Params::APlayerPaperDoll_BP_C_OnBlendOut_2AFA2ADD408F2BF178B8ACA5311661AE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.OnCompleted_2AFA2ADD408F2BF178B8ACA5311661AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::OnCompleted_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "OnCompleted_2AFA2ADD408F2BF178B8ACA5311661AE");

	Params::APlayerPaperDoll_BP_C_OnCompleted_2AFA2ADD408F2BF178B8ACA5311661AE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPaperDoll_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "ReceiveTick");

	Params::APlayerPaperDoll_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.SetBaseAppearance
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnCharacterAppearanceComponent*PlayerAppearance                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SkinTone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HairSettings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::SetBaseAppearance(class UQtnCharacterAppearanceComponent*& PlayerAppearance, float SkinTone, const struct FVector& HairSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "SetBaseAppearance");

	Params::APlayerPaperDoll_BP_C_SetBaseAppearance_Params Parms{};

	Parms.PlayerAppearance = PlayerAppearance;
	Parms.SkinTone = SkinTone;
	Parms.HairSettings = HairSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.PreviewAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::PreviewAppearance(const class FString& Class, const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "PreviewAppearance");

	Params::APlayerPaperDoll_BP_C_PreviewAppearance_Params Parms{};

	Parms.Class = Class;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.ResetAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPaperDoll_BP_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.RotatePaperDoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RotDelta                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ToggleOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPaperDoll_BP_C::RotatePaperDoll(float RotDelta, bool ToggleOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "RotatePaperDoll");

	Params::APlayerPaperDoll_BP_C_RotatePaperDoll_Params Parms{};

	Parms.RotDelta = RotDelta;
	Parms.ToggleOn = ToggleOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.PlayAnimationMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RandomStartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::PlayAnimationMontage(class UAnimMontage* Montage, float RandomStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "PlayAnimationMontage");

	Params::APlayerPaperDoll_BP_C_PlayAnimationMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.RandomStartTime = RandomStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.BndEvt__PlayerPaperDoll_BP_QtnCharacterAppearance_K2Node_ComponentBoundEvent_0_QtnAppearanceChangeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void APlayerPaperDoll_BP_C::BndEvt__PlayerPaperDoll_BP_QtnCharacterAppearance_K2Node_ComponentBoundEvent_0_QtnAppearanceChangeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "BndEvt__PlayerPaperDoll_BP_QtnCharacterAppearance_K2Node_ComponentBoundEvent_0_QtnAppearanceChangeEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.UpdateSkinTone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SkinTone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::UpdateSkinTone(float SkinTone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "UpdateSkinTone");

	Params::APlayerPaperDoll_BP_C_UpdateSkinTone_Params Parms{};

	Parms.SkinTone = SkinTone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.AppearanceUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPaperDoll_BP_C::AppearanceUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "AppearanceUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.UpdateHairColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::UpdateHairColor(float HairColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "UpdateHairColor");

	Params::APlayerPaperDoll_BP_C_UpdateHairColor_Params Parms{};

	Parms.HairColor = HairColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.StopAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendOutTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::StopAnims(float BlendOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "StopAnims");

	Params::APlayerPaperDoll_BP_C_StopAnims_Params Parms{};

	Parms.BlendOutTime = BlendOutTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.SetIdleAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*           NewIdle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::SetIdleAnim(class UAnimSequenceBase* NewIdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "SetIdleAnim");

	Params::APlayerPaperDoll_BP_C_SetIdleAnim_Params Parms{};

	Parms.NewIdle = NewIdle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.ForceStreamTextures
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkelComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::ForceStreamTextures(class USkeletalMeshComponent* SkelComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "ForceStreamTextures");

	Params::APlayerPaperDoll_BP_C_ForceStreamTextures_Params Parms{};

	Parms.SkelComponent = SkelComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.UpdateHairBrightness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairBrightness                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPaperDoll_BP_C::UpdateHairBrightness(float HairBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "UpdateHairBrightness");

	Params::APlayerPaperDoll_BP_C_UpdateHairBrightness_Params Parms{};

	Parms.HairBrightness = HairBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPaperDoll_BP.PlayerPaperDoll_BP_C.ExecuteUbergraph_PlayerPaperDoll_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*K2Node_CustomEvent_PlayerAppearance                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_skinTone_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HairSettings                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_class                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_Get_Cosmetic_Item_OutBodyMesh                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_Get_Cosmetic_Item_OutEmoteVerb                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_LocalFindCosmeticIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_RotDelta                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_toggleOn                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RandomStartTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetBodyComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_skinTone                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHeadComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCharacterAppearance     CallFunc_GetCharacterAppearanceData_ReturnValue                  (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHead_Player_Parent_C*       K2Node_DynamicCast_AsHead_Player_Parent                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HairColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTrialActor_AnimBP_C*        K2Node_DynamicCast_AsTrial_Actor_Anim_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendOutTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHairComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*           K2Node_CustomEvent_newIdle                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTrialActor_AnimBP_C*        K2Node_DynamicCast_AsTrial_Actor_Anim_BP_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCharacterAppearance     CallFunc_GetCharacterAppearanceData_ReturnValue_1                (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UHead_Player_Parent_C*       K2Node_DynamicCast_AsHead_Player_Parent_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetHeadComponent_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_CustomEvent_SkelComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetCapeComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetHatComponent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_HairBrightness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHeadAccessoryComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPaperDoll_BP_C::ExecuteUbergraph_PlayerPaperDoll_BP(int32 EntryPoint, class FName Temp_name_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, class UQtnCharacterAppearanceComponent* K2Node_CustomEvent_PlayerAppearance, float K2Node_CustomEvent_skinTone_1, const struct FVector& K2Node_CustomEvent_HairSettings, const class FString& K2Node_CustomEvent_class, const class FString& K2Node_CustomEvent_Item, class UQtnCharacterBodyMesh* CallFunc_Get_Cosmetic_Item_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_Get_Cosmetic_Item_OutEmoteVerb, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_CustomEvent_RotDelta, bool K2Node_CustomEvent_toggleOn, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAnimMontage* K2Node_CustomEvent_montage, float K2Node_CustomEvent_RandomStartTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_skinTone, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_CustomEvent_HairColor, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float K2Node_CustomEvent_BlendOutTime, class USkeletalMeshComponent* CallFunc_GetHairComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_4, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class UAnimSequenceBase* K2Node_CustomEvent_newIdle, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent_1, bool K2Node_DynamicCast_bSuccess_3, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMeshComponent* K2Node_CustomEvent_SkelComponent, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class USkeletalMeshComponent* CallFunc_GetCapeComponent_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, float K2Node_CustomEvent_HairBrightness, class USkeletalMeshComponent* CallFunc_GetHeadAccessoryComponent_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPaperDoll_BP_C", "ExecuteUbergraph_PlayerPaperDoll_BP");

	Params::APlayerPaperDoll_BP_C_ExecuteUbergraph_PlayerPaperDoll_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_PlayerAppearance = K2Node_CustomEvent_PlayerAppearance;
	Parms.K2Node_CustomEvent_skinTone_1 = K2Node_CustomEvent_skinTone_1;
	Parms.K2Node_CustomEvent_HairSettings = K2Node_CustomEvent_HairSettings;
	Parms.K2Node_CustomEvent_class = K2Node_CustomEvent_class;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_Get_Cosmetic_Item_OutBodyMesh = CallFunc_Get_Cosmetic_Item_OutBodyMesh;
	Parms.CallFunc_Get_Cosmetic_Item_OutEmoteVerb = CallFunc_Get_Cosmetic_Item_OutEmoteVerb;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LocalFindCosmeticIndex_ReturnValue = CallFunc_LocalFindCosmeticIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_RotDelta = K2Node_CustomEvent_RotDelta;
	Parms.K2Node_CustomEvent_toggleOn = K2Node_CustomEvent_toggleOn;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_CustomEvent_montage = K2Node_CustomEvent_montage;
	Parms.K2Node_CustomEvent_RandomStartTime = K2Node_CustomEvent_RandomStartTime;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBodyComponent_ReturnValue = CallFunc_GetBodyComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_skinTone = K2Node_CustomEvent_skinTone;
	Parms.CallFunc_GetHeadComponent_ReturnValue = CallFunc_GetHeadComponent_ReturnValue;
	Parms.CallFunc_GetCharacterAppearanceData_ReturnValue = CallFunc_GetCharacterAppearanceData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsHead_Player_Parent = K2Node_DynamicCast_AsHead_Player_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CustomEvent_HairColor = K2Node_CustomEvent_HairColor;
	Parms.K2Node_DynamicCast_AsTrial_Actor_Anim_BP = K2Node_DynamicCast_AsTrial_Actor_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.K2Node_CustomEvent_BlendOutTime = K2Node_CustomEvent_BlendOutTime;
	Parms.CallFunc_GetHairComponent_ReturnValue = CallFunc_GetHairComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_newIdle = K2Node_CustomEvent_newIdle;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsTrial_Actor_Anim_BP_1 = K2Node_DynamicCast_AsTrial_Actor_Anim_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_GetCharacterAppearanceData_ReturnValue_1 = CallFunc_GetCharacterAppearanceData_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_DynamicCast_AsHead_Player_Parent_1 = K2Node_DynamicCast_AsHead_Player_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetHeadComponent_ReturnValue_1 = CallFunc_GetHeadComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_SkelComponent = K2Node_CustomEvent_SkelComponent;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetCapeComponent_ReturnValue = CallFunc_GetCapeComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetHatComponent_ReturnValue = CallFunc_GetHatComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_HairBrightness = K2Node_CustomEvent_HairBrightness;
	Parms.CallFunc_GetHeadAccessoryComponent_ReturnValue = CallFunc_GetHeadAccessoryComponent_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}

}


