#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA28 - 0xA20)
// BlueprintGeneratedClass Verb_CartmanDecoy_ProjectileStream.Verb_CartmanDecoy_ProjectileStream_C
class UVerb_CartmanDecoy_ProjectileStream_C : public UCartmanBoss_StaffFlare_Verb_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA20(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UVerb_CartmanDecoy_ProjectileStream_C* GetDefaultObj();

	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_Verb_CartmanDecoy_ProjectileStream(int32 EntryPoint, bool K2Node_Event_isServer, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1);
};

}


