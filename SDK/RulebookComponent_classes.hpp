#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE8 - 0xE0)
// BlueprintGeneratedClass RulebookComponent.RulebookComponent_C
class URulebookComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URulebookComponent_C* GetDefaultObj();

	void LocalAcceptPlayerVote(class ALoot_Rulebook_Parent_Frob_C* Rulebook, class AQtnPlayerState* VotingPlayer, bool IsYesVote);
	void ServerAcceptPlayerVote(class ALoot_Rulebook_Parent_Frob_C* Rulebook, class AQtnPlayerState* VotingPlayer, bool IsYesVote);
	void ExecuteUbergraph_RulebookComponent(int32 EntryPoint, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook, class AQtnPlayerState* K2Node_CustomEvent_votingPlayer, bool K2Node_CustomEvent_isYesVote);
};

}


