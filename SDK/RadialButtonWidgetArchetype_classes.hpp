#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x2C1 - 0x260)
// WidgetBlueprintGeneratedClass RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C
class URadialButtonWidgetArchetype_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        IndexInCollection;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5312[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRadialButtonPressed;                             // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DisplayText;                                       // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsButtonHovered;                                   // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRadialButtonHoverStateChanged;                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URadialButtonCollection_Widget_C*      OwnerCollection;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconTexture;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsButtonSelected;                                  // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URadialButtonWidgetArchetype_C* GetDefaultObj();

	void SetSelectionState(bool WasSelected_);
	void SetHoveredState(bool IsHovered, bool CallHoverEvent);
	void BindToRadialCollection(class URadialButtonCollection_Widget_C* OwningCollection, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SetRadialButtonSelectionState(bool IsSelected_, bool CallPressedEvent_, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void InitNavWidget(class UTexture2D* Texture, class FText Text, int32 Index);
	void ExecuteUbergraph_RadialButtonWidgetArchetype(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_texture, class FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_index, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRadialButtonHoverStateChanged__DelegateSignature(bool IsHovered, int32 ButtonIndex);
	void OnRadialButtonPressed__DelegateSignature(int32 ButtonIndex);
};

}


