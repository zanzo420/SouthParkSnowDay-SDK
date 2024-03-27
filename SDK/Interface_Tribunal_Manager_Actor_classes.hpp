#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C
class IInterface_Tribunal_Manager_Actor_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_Tribunal_Manager_Actor_C* GetDefaultObj();

	void OnTribunalUpgradeChoice_Local();
	void DoEventChoiceConfirmed(int32 ChoiceIndex, class ABodyPawnPlayer_C* ChoosingPlayer);
	void DoAdvanceSequenceServer();
	void DoGetRunInEditor(bool* RunInEditor);
};

}


