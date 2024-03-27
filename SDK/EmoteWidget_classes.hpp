#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x370 - 0x298)
// WidgetBlueprintGeneratedClass EmoteWidget.EmoteWidget_C
class UEmoteWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_RadialWheel;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConeHighlight;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_129;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_0;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_1;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_2;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_3;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_4;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_5;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_6;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton_7;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RadialHolderPanel;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialPointer;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_SelectEmote;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnGameInstance*                      CachedGameInstance;                                // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URadialEmoteButton_C*>          RadialEmoteButtonArray;                            // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PreviousSelectedRadialEntry;                       // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedRadialEntry;                               // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InputDegrees;                                      // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Magnitude;                                         // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentIndex;                                      // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7017[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EmoteButtonHighlighted;                            // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             MousePosAnchor;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MousePosCur;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RadialVector;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DeltaVector_Debug;                                 // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEmoteWidget_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_Vector2dToString_ReturnValue, const class FString& CallFunc_Conv_Vector2dToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void InitEmoteWheel(TArray<class URadialEmoteButton_C*>* RadialEmoteButtons, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UQtnGameInstance* K2Node_DynamicCast_AsQtn_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class URadialEmoteButton_C*>& K2Node_MakeArray_Array);
	void PlayEmote(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, class UQtnCarryComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValidClass_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest);
	void SelectCurrentIndex(class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item);
	void ExternalCmd_FireCurrentIfEmote(class URadialEmoteButton_C* CallFunc_Array_Get_Item);
	void SelectIndex(int32 IndexToSelect, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ClearRadialWheel(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulateRadialWheel(int32 Temp_int_Array_Index_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, TArray<TSubclassOf<class UQtnVerb>>& CallFunc_GetEquippedEmotes_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetInitialized();
	void OnQtnWidgetTicked(float DeltaSeconds);
	void ExecuteUbergraph_EmoteWidget(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<class URadialEmoteButton_C*>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_GetRightStickInput_ReturnValue, float CallFunc_ConvertDirectionToDegreesAndMagnitude_degrees, float CallFunc_ConvertDirectionToDegreesAndMagnitude_magnitude, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, class UQtnGameInstance* K2Node_DynamicCast_AsQtn_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, float CallFunc_ConvertDirectionToDegreesAndMagnitude_degrees_1, float CallFunc_ConvertDirectionToDegreesAndMagnitude_magnitude_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue_1, const struct FVector2D& CallFunc_GetMouseDelta_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_VSize2D_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_DotProduct2D_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void EmoteButtonHighlighted__DelegateSignature(int32 HighlightedIndex);
};

}


