#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x920 - 0x914)
// BlueprintGeneratedClass CartmanBossBubbleShieldActivationVerb.CartmanBossBubbleShieldActivationVerb_C
class UCartmanBossBubbleShieldActivationVerb_C : public UEnemyCheatActivationVerbBase_C
{
public:
	uint8                                        Pad_4F55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCartmanBossBubbleShieldActivationVerb_C* GetDefaultObj();

	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_CartmanBossBubbleShieldActivationVerb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
};

}


