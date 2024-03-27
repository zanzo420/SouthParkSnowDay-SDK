#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF8 - 0xE0)
// BlueprintGeneratedClass QtnPlayerUILateTickComponent.QtnPlayerUILateTickComponent_C
class UQtnPlayerUILateTickComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnLateTick;                                        // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UQtnPlayerUILateTickComponent_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_QtnPlayerUILateTickComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
	void OnLateTick__DelegateSignature();
};

}


