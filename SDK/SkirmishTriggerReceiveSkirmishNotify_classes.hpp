#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x58 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerReceiveSkirmishNotify.SkirmishTriggerReceiveSkirmishNotify_C
class USkirmishTriggerReceiveSkirmishNotify_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Tag;                                               // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishTriggerReceiveSkirmishNotify_C* GetDefaultObj();

	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void RecieveEventFromAnotherSkirmish(class ASkirmishBase_C* Skirmish_Sending_Event, class FName Tag);
	void ExecuteUbergraph_SkirmishTriggerReceiveSkirmishNotify(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, class ASkirmishBase_C* K2Node_CustomEvent_Skirmish_Sending_Event, class FName K2Node_CustomEvent_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


