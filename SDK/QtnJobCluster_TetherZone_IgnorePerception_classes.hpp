#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass QtnJobCluster_TetherZone_IgnorePerception.QtnJobCluster_TetherZone_IgnorePerception_C
class UQtnJobCluster_TetherZone_IgnorePerception_C : public UQtnAIJobCluster
{
public:

	static class UClass* StaticClass();
	static class UQtnJobCluster_TetherZone_IgnorePerception_C* GetDefaultObj();

	bool IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption);
	float GetAIJobClusterHeuristic(class AQtnPawn* UnemployedPawn, float CallFunc_GetAIJobClusterHeuristic_ReturnValue, class UQtnAIJobComponent_TetherZone_C* K2Node_DynamicCast_AsQtn_AIJob_Component_Tether_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


