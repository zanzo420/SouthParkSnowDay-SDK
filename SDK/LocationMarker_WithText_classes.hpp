#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x889 - 0x880)
// BlueprintGeneratedClass LocationMarker_WithText.LocationMarker_WithText_C
class ALocationMarker_WithText_C : public ALocationMarker_BP_C
{
public:
	class UQtnTextRenderComponent*               QtnTextRender;                                     // 0x880(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_text;                                         // 0x888(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ALocationMarker_WithText_C* GetDefaultObj();

	void OnRep_show_text(bool CallFunc_Not_PreBool_ReturnValue);
};

}


