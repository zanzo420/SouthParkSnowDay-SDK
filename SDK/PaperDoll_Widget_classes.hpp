#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass PaperDoll_Widget.PaperDoll_Widget_C
class UPaperDoll_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IMAGE_Player;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerPaperDoll_BP_C*                 MyPaperDoll;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPaperDoll_Widget_C* GetDefaultObj();

	void UpdateHairBrightness(float HairBrightness);
	void UpdateHairColor(float HairColor);
	void UpdateSkinTone(float SkinTone);
	void ResetAppearance(bool CallFunc_IsValid_ReturnValue);
	void PreviewPaperDollCosmetic(const class FString& ID, const class FString& ItemClass);
	void Set_Up_Paper_Doll(class AQtnBodyPawn* PlayerBody, bool WantLights, const struct FVector& LocationOffset, int32 TextureRes, class USceneCaptureComponent2D* Local_RenderCamera, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerPaperDoll_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Destruct();
	void RotatePaperDoll(float RotDelta, bool ToggleOn);
	void PlayAnimMontage(class UAnimMontage* Montage);
	void ClearPaperDoll();
	void StopAnims();
	void ExecuteUbergraph_PaperDoll_Widget(int32 EntryPoint, float K2Node_CustomEvent_RotDelta, bool K2Node_CustomEvent_toggleOn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_montage, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


