#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x570 - 0x538)
// BlueprintGeneratedClass CinematicScene_Bink.CinematicScene_Bink_C
class ACinematicScene_Bink_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBinkMediaPlayer*                      BinkMovie;                                         // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MovieStarted;                                      // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EndEarlyRequest;                                   // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7463[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             VOTrack;                                           // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             MusicSFXTrack;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VO;                                                // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SFXMus;                                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACinematicScene_Bink_C* GetDefaultObj();

	void PlayNextShot();
	void CheckCurrentShot(float DSeconds);
	void EndEarly();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StartScene();
	void EndScene();
	void OnBinkHasBegunPlayback();
	void ExecuteUbergraph_CinematicScene_Bink(int32 EntryPoint, float CallFunc_GetVOVolumeMultiplier_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Play_ReturnValue, const struct FTimespan& CallFunc_GetDuration_ReturnValue, bool CallFunc_Rewind_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, float K2Node_Event_dSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundCue* CallFunc_GetLocalizedCineAudio_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable);
};

}


