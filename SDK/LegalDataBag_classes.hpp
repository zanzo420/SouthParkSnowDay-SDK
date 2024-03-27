#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x123 - 0x120)
// BlueprintGeneratedClass LegalDataBag.LegalDataBag_C
class ULegalDataBag_C : public UQtnDataBag
{
public:
	bool                                         ApprovedVoiceRecording;                            // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         HasDecided;                                        // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         InitialApprovalSetting;                            // 0x122(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ULegalDataBag_C* GetDefaultObj();

	void SetVoiceRecordingDenied();
	void ResetVoiceApproval(bool* DoesApprove);
	void SetVoiceRecordingApproved();
};

}


