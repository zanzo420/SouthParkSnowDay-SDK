#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x588 - 0x580)
// BlueprintGeneratedClass TrapCrapperMine.TrapCrapperMine_C
class ATrapCrapperMine_C : public AExplosiveMineBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATrapCrapperMine_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void LocalCutsceneEvent_Event(bool IsCutsceneActive, bool DoWorldCleanup);
	void CombatInhibitedEvent_Event(bool IsInhibited, bool IsServer);
	void ExecuteUbergraph_TrapCrapperMine(int32 EntryPoint, bool K2Node_CustomEvent_isInhibited, bool K2Node_CustomEvent_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue);
};

}


