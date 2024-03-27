#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x15E8 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIBombardier.BodyPawnAIBombardier_C
class ABodyPawnAIBombardier_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            StringPlucked;                                     // 0x15D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABodyPawnAIBombardier_C* GetDefaultObj();

	void OnRep_StreamSeed_0();
	void ExecuteUbergraph_BodyPawnAIBombardier(int32 EntryPoint);
	void StringPlucked__DelegateSignature();
};

}


