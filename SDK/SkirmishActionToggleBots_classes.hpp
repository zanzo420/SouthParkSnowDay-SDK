#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x29 - 0x28)
// BlueprintGeneratedClass SkirmishActionToggleBots.SkirmishActionToggleBots_C
class USkirmishActionToggleBots_C : public UQtnSkirmishAction
{
public:
	bool                                         Inhibit;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USkirmishActionToggleBots_C* GetDefaultObj();

	void ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue);
};

}


