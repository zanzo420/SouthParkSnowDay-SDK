#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PaperDoll_Widget.PaperDoll_Widget_C
// (None)

class UClass* UPaperDoll_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PaperDoll_Widget_C");

	return Clss;
}


// PaperDoll_Widget_C PaperDoll_Widget.Default__PaperDoll_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPaperDoll_Widget_C* UPaperDoll_Widget_C::GetDefaultObj()
{
	static class UPaperDoll_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPaperDoll_Widget_C*>(UPaperDoll_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PaperDoll_Widget.PaperDoll_Widget_C.UpdateHairBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairBrightness                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::UpdateHairBrightness(float HairBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "UpdateHairBrightness");

	Params::UPaperDoll_Widget_C_UpdateHairBrightness_Params Parms{};

	Parms.HairBrightness = HairBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.UpdateHairColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::UpdateHairColor(float HairColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "UpdateHairColor");

	Params::UPaperDoll_Widget_C_UpdateHairColor_Params Parms{};

	Parms.HairColor = HairColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.UpdateSkinTone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SkinTone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::UpdateSkinTone(float SkinTone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "UpdateSkinTone");

	Params::UPaperDoll_Widget_C_UpdateSkinTone_Params Parms{};

	Parms.SkinTone = SkinTone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.ResetAppearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPaperDoll_Widget_C::ResetAppearance(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "ResetAppearance");

	Params::UPaperDoll_Widget_C_ResetAppearance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.PreviewPaperDollCosmetic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::PreviewPaperDollCosmetic(const class FString& ID, const class FString& ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "PreviewPaperDollCosmetic");

	Params::UPaperDoll_Widget_C_PreviewPaperDollCosmetic_Params Parms{};

	Parms.ID = ID;
	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.Set Up Paper Doll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WantLights                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     LocationOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TextureRes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    Local_RenderCamera                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::Set_Up_Paper_Doll(class AQtnBodyPawn* PlayerBody, bool WantLights, const struct FVector& LocationOffset, int32 TextureRes, class USceneCaptureComponent2D* Local_RenderCamera, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "Set Up Paper Doll");

	Params::UPaperDoll_Widget_C_Set_Up_Paper_Doll_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.WantLights = WantLights;
	Parms.LocationOffset = LocationOffset;
	Parms.TextureRes = TextureRes;
	Parms.Local_RenderCamera = Local_RenderCamera;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPaperDoll_Widget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.RotatePaperDoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RotDelta                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ToggleOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPaperDoll_Widget_C::RotatePaperDoll(float RotDelta, bool ToggleOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "RotatePaperDoll");

	Params::UPaperDoll_Widget_C_RotatePaperDoll_Params Parms{};

	Parms.RotDelta = RotDelta;
	Parms.ToggleOn = ToggleOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.PlayAnimMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaperDoll_Widget_C::PlayAnimMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "PlayAnimMontage");

	Params::UPaperDoll_Widget_C_PlayAnimMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.ClearPaperDoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPaperDoll_Widget_C::ClearPaperDoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "ClearPaperDoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.StopAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPaperDoll_Widget_C::StopAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "StopAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PaperDoll_Widget.PaperDoll_Widget_C.ExecuteUbergraph_PaperDoll_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RotDelta                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_toggleOn                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPaperDoll_Widget_C::ExecuteUbergraph_PaperDoll_Widget(int32 EntryPoint, float K2Node_CustomEvent_RotDelta, bool K2Node_CustomEvent_toggleOn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_montage, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PaperDoll_Widget_C", "ExecuteUbergraph_PaperDoll_Widget");

	Params::UPaperDoll_Widget_C_ExecuteUbergraph_PaperDoll_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RotDelta = K2Node_CustomEvent_RotDelta;
	Parms.K2Node_CustomEvent_toggleOn = K2Node_CustomEvent_toggleOn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_montage = K2Node_CustomEvent_montage;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


