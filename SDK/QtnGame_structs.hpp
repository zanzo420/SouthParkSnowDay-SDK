#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EQtnEventMatchingValueType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Name                           = 4,
	GameplayTag                    = 5,
	EQtnEventMatchingValueType_MAX = 6,
};

enum class EQtnEventMatchingOperatorType : uint8
{
	None                           = 0,
	EqualTo                        = 1,
	NotEqualTo                     = 2,
	LessThan                       = 3,
	LessThanOrEqualTo              = 4,
	GreaterThan                    = 5,
	GreaterThanOrEqualTo           = 6,
	EQtnEventMatchingOperatorType_MAX = 7,
};

enum class EQtnEventMatchingWriterFilter : uint8
{
	Any                            = 0,
	Listener                       = 1,
	EQtnEventMatchingWriterFilter_MAX = 2,
};

enum class EQtnSalaryTier : uint8
{
	StreetPerformer                = 0,
	MinimumWage                    = 1,
	MiddleClass                    = 2,
	Rich                           = 3,
	Count                          = 4,
	EQtnSalaryTier_MAX             = 5,
};

enum class EQtnAttributeOperation : uint8
{
	Increase                       = 0,
	Decrease                       = 1,
	Multiply                       = 2,
	Divide                         = 3,
	EQtnAttributeOperation_MAX     = 4,
};

enum class EQtnDamageTargetType : uint8
{
	Default                        = 0,
	FriendlyFire                   = 1,
	SelfOnly                       = 2,
	SelfAndFriends                 = 3,
	EQtnDamageTargetType_MAX       = 4,
};

enum class EQtnHitStopResponse : uint8
{
	NoHitStop                      = 0,
	HitStopOnVictim                = 1,
	HitStopOnBoth                  = 2,
	EQtnHitStopResponse_MAX        = 3,
};

enum class EQtnAttackMotion : uint8
{
	Algorithmic                    = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	Overhead                       = 3,
	Uppercut                       = 4,
	Thrust                         = 5,
	Pull                           = 6,
	EQtnAttackMotion_MAX           = 7,
};

enum class EQtnStopReason : uint8
{
	Finished                       = 0,
	Interrupted                    = 1,
	Canceled                       = 2,
	Count                          = 3,
	EQtnStopReason_MAX             = 4,
};

enum class EQtnBodyStance : uint8
{
	Normal                         = 0,
	Search                         = 1,
	Combat                         = 2,
	Flee                           = 3,
	Sprint                         = 4,
	Count                          = 5,
	EQtnBodyStance_MAX             = 6,
};

enum class EQtnLocoSpeedEnum : uint8
{
	Standing                       = 0,
	Walking                        = 1,
	Jogging                        = 2,
	Running                        = 3,
	Count                          = 4,
	EQtnLocoSpeedEnum_MAX          = 5,
};

enum class EQtnSensoryEvidenceCategory : uint8
{
	Vision                         = 0,
	Touch                          = 1,
	Damage                         = 2,
	Hearing                        = 3,
	Count                          = 4,
	EQtnSensoryEvidenceCategory_MAX = 5,
};

enum class EQtnAILOD : uint8
{
	Uninitialized                  = 0,
	PlayerControlled               = 1,
	ActiveCombatAI                 = 2,
	RelevantAI                     = 3,
	NeglectedAI                    = 4,
	EQtnAILOD_MAX                  = 5,
};

enum class EQtnUIBodyActionEnum : uint8
{
	None                           = 0,
	MeleeWeaponMelee               = 1,
	RangedWeaponRanged             = 2,
	RangedWeaponModal              = 3,
	Power1                         = 4,
	Power2                         = 5,
	Jump                           = 6,
	Dodge                          = 7,
	Frob                           = 8,
	CheatVerb                      = 9,
	TootFart                       = 10,
	Sprint                         = 11,
	Count                          = 12,
	EQtnUIBodyActionEnum_MAX       = 13,
};

enum class EQtnPawnLOD : uint8
{
	Uninitialized                  = 0,
	PlayerControlled               = 1,
	OnScreenNPC                    = 2,
	OffScreenNPC                   = 3,
	IrrelevantNPC                  = 4,
	OnScreenDeadNPC                = 5,
	OffScreenDeadNPC               = 6,
	IrrelevantDeadNPC              = 7,
	EQtnPawnLOD_MAX                = 8,
};

enum class EQtnTeamAttitude : uint8
{
	Neutral                        = 0,
	Friendly                       = 1,
	Hostile                        = 2,
	EQtnTeamAttitude_MAX           = 3,
};

enum class EQtnDifficulty : uint8
{
	Uninitialized                  = 0,
	Easy                           = 1,
	Normal                         = 2,
	Hard                           = 3,
	Count                          = 4,
	EQtnDifficulty_MAX             = 5,
};

enum class EQtnNoiseEnum : uint8
{
	CustomNoise                    = 0,
	FootstepNoise                  = 1,
	CollisionNoise                 = 2,
	CombatNoise                    = 3,
	AlarmNoise                     = 4,
	Silent                         = 5,
	EQtnNoiseEnum_MAX              = 6,
};

enum class EQtnItemUseIntent : uint8
{
	InstantOneShot                 = 0,
	Press                          = 1,
	Release                        = 2,
	Cancel                         = 3,
	EQtnItemUseIntent_MAX          = 4,
};

enum class EQtnItemUseAction : uint8
{
	Aim                            = 0,
	Release                        = 1,
	EQtnItemUseAction_MAX          = 2,
};

enum class EQtnBodyAliveness : uint8
{
	Alive                          = 0,
	Unconscious                    = 1,
	Dead                           = 2,
	Captured                       = 3,
	EQtnBodyAliveness_MAX          = 4,
};

enum class EQtnLocoOverridePriority : uint8
{
	CarriedObject                  = 0,
	Cinematic                      = 1,
	StatusEffect                   = 2,
	Wounded                        = 3,
	Environmental                  = 4,
	Count                          = 5,
	EQtnLocoOverridePriority_MAX   = 6,
};

enum class EQtnScreenStackEnum : uint8
{
	MainScreenStack                = 0,
	MessagingScreenStack           = 1,
	TutorialScreenStack            = 2,
	ViewportScreenStack            = 3,
	Count                          = 4,
	EQtnScreenStackEnum_MAX        = 5,
};

enum class EQtnOutputValidityEnum : uint8
{
	IsValid                        = 0,
	IsNotValid                     = 1,
	EQtnOutputValidityEnum_MAX     = 2,
};

enum class EQtnUIScreenActionEnum : uint8
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	UIOK                           = 4,
	UICancel                       = 5,
	UIBackspace                    = 6,
	UINext                         = 7,
	UIPrevious                     = 8,
	UIGamepadY                     = 9,
	UIGamepadX                     = 10,
	UIGamepadLeftBumper            = 11,
	UIGamepadRightBumper           = 12,
	UIGamepadLeftTrigger           = 13,
	UIGamepadRightTrigger          = 14,
	UIRadialGestures               = 15,
	ToggleSystemMenu               = 16,
	ToggleGameplayMenu             = 17,
	ToggleTeamInfo                 = 18,
	ToggleChat                     = 19,
	UIMouseClickLeft               = 20,
	UIMouseClickRight              = 21,
	UIWarTableMatchmaking          = 22,
	EQtnUIScreenActionEnum_MAX     = 23,
};

enum class EQtnModalDialogType : uint8
{
	OK                             = 0,
	OKCancel                       = 1,
	YesNo                          = 2,
	AcceptReject                   = 3,
	EQtnModalDialogType_MAX        = 4,
};

enum class EQtnSessionPrivacy : uint8
{
	FriendsOnly                    = 0,
	Public                         = 1,
	EQtnSessionPrivacy_MAX         = 2,
};

enum class EQtnArcEnum : uint8
{
	Uninitialized                  = 0,
	Arc1                           = 1,
	Arc2                           = 2,
	Arc3                           = 3,
	Arc4                           = 4,
	Arc5                           = 5,
	Count                          = 6,
	EQtnArcEnum_MAX                = 7,
};

enum class EQtnTutorialStatus : uint8
{
	Incomplete                     = 0,
	Active                         = 1,
	Complete                       = 2,
	EQtnTutorialStatus_MAX         = 3,
};

enum class EQtnSessionState : uint8
{
	Solo                           = 0,
	Hosting                        = 1,
	Joined                         = 2,
	EQtnSessionState_MAX           = 3,
};

enum class EQtnAcceptInviteResult : uint8
{
	Success                        = 0,
	OtherActionInProgress          = 1,
	RequirementsNoMet              = 2,
	UnknownJoinError               = 3,
	SessionIsFull                  = 4,
	SessionDoesNotExist            = 5,
	AlreadyInSession               = 6,
	ServiceUnavailable             = 7,
	LoginFailed                    = 8,
	OnlinePrivilegeNotMet          = 9,
	ContentInstallationInProgress  = 10,
	CouldNotRetrieveAddress        = 11,
	HordeModeDLCMismatch           = 12,
	UnspecifiedError               = 13,
	EQtnAcceptInviteResult_MAX     = 14,
};

enum class EQtnJoinPartyResult : uint8
{
	Success                        = 0,
	OtherActionInProgress          = 1,
	RequirementsNoMet              = 2,
	NoSessionFound                 = 3,
	BuildIdMissmatch               = 4,
	JoinFailed                     = 5,
	LoginFailed                    = 6,
	OnlinePrivilegeNotMet          = 7,
	UnspecifiedError               = 8,
	EQtnJoinPartyResult_MAX        = 9,
};

enum class EQtnHostPartyResult : uint8
{
	Success                        = 0,
	OtherActionInProgress          = 1,
	RequirementsNoMet              = 2,
	CreateSessionFailed            = 3,
	StartSessionFailed             = 4,
	LoginFailed                    = 5,
	OnlinePrivilegeNotMet          = 6,
	UnspecifiedError               = 7,
	EQtnHostPartyResult_MAX        = 8,
};

enum class EQtnDisbandPartyResult : uint8
{
	Success                        = 0,
	UnspecifiedError               = 1,
	EQtnDisbandPartyResult_MAX     = 2,
};

enum class EQtnMatchmakingResult : uint8
{
	Success                        = 0,
	TimeOut                        = 1,
	UnspecifiedError               = 2,
	EQtnMatchmakingResult_MAX      = 3,
};

enum class EOnlineMangerMatchmakingState : uint8
{
	Idle                           = 0,
	Searching                      = 1,
	WaitingForDetermineHost        = 2,
	WaitingForConnectToHost        = 3,
	WaitingForClientConnection     = 4,
	Done                           = 5,
	EOnlineMangerMatchmakingState_MAX = 6,
};

enum class EQtnNotificationType : uint8
{
	Notification                   = 0,
	Popup                          = 1,
	Hint                           = 2,
	CancelHint                     = 3,
	Count                          = 4,
	EQtnNotificationType_MAX       = 5,
};

enum class EQtnStatDescriptionNumberFormatting : uint8
{
	AsPercentage                   = 0,
	AsInteger                      = 1,
	AsNormalFloat                  = 2,
	AsMultiplier                   = 3,
	AsCustom                       = 4,
	AsGeneratedText                = 5,
	EQtnStatDescriptionNumberFormatting_MAX = 6,
};

enum class EQtnRolledChoiceTagMatchType : uint8
{
	MustHave                       = 0,
	IncreasesChance                = 1,
	DecreasesChance                = 2,
	MustNotHave                    = 3,
	EQtnRolledChoiceTagMatchType_MAX = 4,
};

enum class EQtnStatChannel : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Quaternary                     = 3,
	EQtnStatChannel_MAX            = 4,
};

enum class EQtnDoorState : uint8
{
	DoorUninitialized              = 0,
	DoorClosed                     = 1,
	DoorOpen_CW                    = 2,
	DoorOpen_CCW                   = 3,
	EQtnDoorState_MAX              = 4,
};

enum class EQtnOffScreenRotationRule : uint8
{
	Free                           = 0,
	ClosestEdge                    = 1,
	DoNotRotate                    = 2,
	EQtnOffScreenRotationRule_MAX  = 3,
};

enum class EQtnIndicator_Type : uint8
{
	Classic                        = 0,
	Circle                         = 1,
	EQtnIndicator_MAX              = 2,
};

enum class EQtnWeaponSocketLocation : uint8
{
	RightHandItem                  = 0,
	LeftHandItem                   = 1,
	BodyLocation                   = 2,
	EQtnWeaponSocketLocation_MAX   = 3,
};

enum class EQtnAttributeThresholdDirection : uint8
{
	AtOrAboveThreshold             = 0,
	AtOrBelowThreshold             = 1,
	Count                          = 2,
	EQtnAttributeThresholdDirection_MAX = 3,
};

enum class EQtnAttributeTick : uint8
{
	DoNotTick                      = 0,
	TickOnServer                   = 1,
	TickOnAll                      = 2,
	Count                          = 3,
	EQtnAttributeTick_MAX          = 4,
};

enum class EQtnAttributeReplication : uint8
{
	DoNotReplicate                 = 0,
	Replicate                      = 1,
	Count                          = 2,
	EQtnAttributeReplication_MAX   = 3,
};

enum class EQtnAttributeRounding : uint8
{
	DoNotRound                     = 0,
	RoundNearest                   = 1,
	RoundDown                      = 2,
	RoundUp                        = 3,
	Count                          = 4,
	EQtnAttributeRounding_MAX      = 5,
};

enum class EQtnAttributeModifierReplication : uint8
{
	DoNotReplicate                 = 0,
	Replicate                      = 1,
	Count                          = 2,
	EQtnAttributeModifierReplication_MAX = 3,
};

enum class EQtnAttributeModifierFunction : uint8
{
	Set                            = 0,
	Add                            = 1,
	Multiply                       = 2,
	Count                          = 3,
	EQtnAttributeModifierFunction_MAX = 4,
};

enum class EQtnAttributeModifierEventReplication : uint8
{
	DoNotReplicate                 = 0,
	Replicate                      = 1,
	Count                          = 2,
	EQtnAttributeModifierEventReplication_MAX = 3,
};

enum class EQtnCameraBlendState : uint8
{
	ZeroWeight                     = 0,
	BlendingIn                     = 1,
	FullWeight                     = 2,
	BlendingOut                    = 3,
	Count                          = 4,
	EQtnCameraBlendState_MAX       = 5,
};

enum class EQtnCameraPriority : uint8
{
	DefaultAmbient                 = 0,
	ItemEquipped                   = 1,
	ItemUsageAlt                   = 2,
	ItemUsagePrimary               = 3,
	ControlOverride                = 4,
	PawnOverride                   = 5,
	Scripted                       = 6,
	Count                          = 7,
	EQtnCameraPriority_MAX         = 8,
};

enum class EQtnContributorFormatType : uint8
{
	IndividualContributor          = 0,
	InternalDivision               = 1,
	InvisibleSpacer                = 2,
	EQtnContributorFormatType_MAX  = 3,
};

enum class EQtnAITetherResponse : uint8
{
	InsideTetherZone               = 0,
	IntermediateTetherZone         = 1,
	OutsideTetherZone              = 2,
	EQtnAITetherResponse_MAX       = 3,
};

enum class EQtnAttributeEnum : uint8
{
	None                           = 0,
	PawnGravity                    = 1,
	EQtnAttributeEnum_MAX          = 2,
};

enum class EQtnLootTableFlatType : uint8
{
	Unknown                        = 0,
	Item                           = 1,
	Or                             = 2,
	And                            = 3,
	Reference                      = 4,
	Quest                          = 5,
	Sub                            = 6,
	Root                           = 7,
	Null                           = 8,
	Culled                         = 9,
	RaritySwitch                   = 10,
	Bonus                          = 11,
	RaritySelector                 = 12,
	TagDecorator                   = 13,
	DifficultyQuantity             = 14,
	DifficultyWeight               = 15,
	EQtnLootTableFlatType_MAX      = 16,
};

enum class EQtnInputCategory : uint8
{
	Movement                       = 0,
	Actions                        = 1,
	Interface                      = 2,
	Social                         = 3,
	EQtnInputCategory_MAX          = 4,
};

enum class EQtnPlatform : uint8
{
	Windows                        = 0,
	PS4                            = 1,
	PS5                            = 2,
	XboxOne                        = 3,
	XSeries                        = 4,
	Switch                         = 5,
	Count                          = 6,
	EQtnPlatform_MAX               = 7,
};

enum class EQtnRewardReason : uint8
{
	Quest                          = 0,
	Goal                           = 1,
	Recordable                     = 2,
	RecordableDurationBegin        = 3,
	RecordableDurationEnd          = 4,
	RecordableBonus                = 5,
	EQtnRewardReason_MAX           = 6,
};

enum class EQtnSessionFilter : uint8
{
	Default                        = 0,
	Far                            = 1,
	Worldwide                      = 2,
	EQtnSessionFilter_MAX          = 3,
};

enum class EQtnCardinalDirection : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	Count                          = 4,
	EQtnCardinalDirection_MAX      = 5,
};

enum class EQtnEquipSlot : uint8
{
	MeleeWeapon                    = 0,
	RangedWeapon                   = 1,
	EQtnEquipSlot_MAX              = 2,
};

enum class EQtnItemDesignation : uint8
{
	RangedEquippable               = 0,
	MeleeEquippable                = 1,
	NonEquippable                  = 2,
	Any                            = 3,
	EQtnItemDesignation_MAX        = 4,
};

enum class EQtnScreenPriority : uint8
{
	AmbientHUD                     = 0,
	ItemUseUI                      = 1,
	DroneHUD                       = 2,
	EpocalypseHUD                  = 3,
	RedDoorSelectionHUD            = 4,
	TutorialUI                     = 5,
	SubTutorialUI                  = 6,
	MiniGameUI                     = 7,
	SubMiniGameUI                  = 8,
	SuppressionUI                  = 9,
	Menu                           = 10,
	Menu2                          = 11,
	Menu3                          = 12,
	SystemMenu                     = 13,
	SubMenu                        = 14,
	SubSubMenu                     = 15,
	Options                        = 16,
	SubOptions                     = 17,
	SubSubOptions                  = 18,
	ModalDialog                    = 19,
	Count                          = 20,
	EQtnScreenPriority_MAX         = 21,
};

enum class EQtnLocoIntentionEnum : uint8
{
	LocoUpright                    = 0,
	LocoAir                        = 1,
	EQtnLocoIntentionEnum_MAX      = 2,
};

enum class EQtnUIHotKeyEnum : uint8
{
	DPadUp                         = 0,
	DPadDown                       = 1,
	DPadLeft                       = 2,
	DPadRight                      = 3,
	Keyboard1                      = 4,
	Keyboard2                      = 5,
	Keyboard3                      = 6,
	Keyboard4                      = 7,
	Keyboard5                      = 8,
	Keyboard6                      = 9,
	Keyboard7                      = 10,
	Keyboard8                      = 11,
	Keyboard9                      = 12,
	Keyboard0                      = 13,
	Count                          = 14,
	EQtnUIHotKeyEnum_MAX           = 15,
};

enum class EQtnOutputAuthorityEnum : uint8
{
	Server                         = 0,
	Client                         = 1,
	EQtnOutputAuthorityEnum_MAX    = 2,
};

enum class EQtnOutputSuccessEnum : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	EQtnOutputSuccessEnum_MAX      = 2,
};

enum class EQtnAlwaysNeverMaybeEnum : uint8
{
	Always                         = 0,
	Never                          = 1,
	Maybe                          = 2,
	EQtnAlwaysNeverMaybeEnum_MAX   = 3,
};

enum class EQtnOutputYesNoEnum : uint8
{
	Yes                            = 0,
	No                             = 1,
	EQtnOutputYesNoEnum_MAX        = 2,
};

enum class EQtnGamepadGlyphStyle : uint8
{
	XboxOneStyle                   = 0,
	DualShockStyle                 = 1,
	NintendoSwitchStyle            = 2,
	MAX                            = 3,
};

enum class EQtnServerSetting : uint8
{
	Invalid                        = 0,
	BuildNumber                    = 1,
	MaxUnlockedArc                 = 2,
	CurrentArc                     = 3,
	EQtnServerSetting_MAX          = 4,
};

enum class EQtnItemRarity : uint8
{
	Undefined                      = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Legendary                      = 4,
	Unique                         = 5,
	EQtnItemRarity_MAX             = 6,
};

enum class EQtnAppearanceSlot : uint8
{
	None                           = 0,
	Body                           = 1,
	Hat                            = 2,
	Hair                           = 3,
	Cape                           = 4,
	Head                           = 5,
	HeadAccessory                  = 6,
	Emote                          = 7,
	EQtnAppearanceSlot_MAX         = 8,
};

enum class EQtnLogCategory : uint8
{
	Log                            = 0,
	Combat                         = 1,
	Online                         = 2,
	OnlineVerbose                  = 3,
	VO                             = 4,
	VOVerbose                      = 5,
	AIVerbose                      = 6,
	XPVerbose                      = 7,
	Mission                        = 8,
	Stats                          = 9,
	Social                         = 10,
	Events                         = 11,
	Loot                           = 12,
	EQtnLogCategory_MAX            = 13,
};

enum class EQtnDamageSourceChannel : uint8
{
	Weapon_Primary                 = 0,
	Weapon_Secondary               = 1,
	Weapon_Tertiary                = 2,
	Weapon_Quaternary              = 3,
	Power_Primary                  = 4,
	Power_Secondary                = 5,
	Power_Tertiary                 = 6,
	Power_Quaternary               = 7,
	EQtnDamageSourceChannel_MAX    = 8,
};

enum class EQtnStatNameLocationOnItem : uint8
{
	AsOwner                        = 0,
	AsPrefix                       = 1,
	AsFirstSuffix                  = 2,
	AsSecondSuffix                 = 3,
	EQtnStatNameLocationOnItem_MAX = 4,
};

enum class EQtnAxisOrientation : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EQtnAxisOrientation_MAX        = 3,
};

enum class EQtnModularWeaponPart : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	EQtnModularWeaponPart_MAX      = 2,
};

enum class EQtnMissionStatsType : uint8
{
	AllyRevivals                   = 0,
	DamageTaken                    = 1,
	StatusEffectsCaused            = 2,
	EnemyKills                     = 3,
	DamageDealt                    = 4,
	ToiletPaperCollected           = 5,
	DarkMatterCollected            = 6,
	ToiletPaperSpent               = 7,
	Revives                        = 8,
	Count                          = 9,
	EQtnMissionStatsType_MAX       = 10,
};

enum class EMantleStateEnum : uint8
{
	MantleStateEnum_LerpingIntoVerticalPosition = 0,
	MantleStateEnum_Animating      = 1,
	MantleStateEnum_LerpingIntoHorizontalPosition = 2,
	MantleStateEnum_Done           = 3,
	MantleStateEnum_MAX            = 4,
};

enum class EQtnGameModeType : uint8
{
	None                           = 0,
	SocialHub                      = 1,
	Story                          = 2,
	Danse                          = 3,
	EQtnGameModeType_MAX           = 4,
};

enum class EQtnGoalStatus : uint8
{
	Pending                        = 0,
	Active                         = 1,
	Done                           = 2,
	EQtnGoalStatus_MAX             = 3,
};

enum class EQtnJsonType : uint8
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	JsonObject                     = 6,
	EQtnJsonType_MAX               = 7,
};

enum class ESubtitleFontSize : uint8
{
	VerySmall                      = 0,
	Small                          = 1,
	Default                        = 2,
	Large                          = 3,
	VeryLarge                      = 4,
	ESubtitleFontSize_MAX          = 5,
};

enum class ESubtitleFontType : uint8
{
	Default                        = 0,
	ESubtitleFontType_MAX          = 1,
};

enum class EColorBlindMode : uint8
{
	Off                            = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorBlindMode_MAX            = 4,
};

enum class EQtnLocalPlayerMode : int32
{
	Friend                         = 0,
	EQtnLocalPlayerMode_MAX        = 1,
};

enum class EQtnLootTriggerType : uint8
{
	UI                             = 0,
	Pickup                         = 1,
	EQtnLootTriggerType_MAX        = 2,
};

enum class EQtnLootItemType : uint8
{
	Undefined                      = 0,
	RolledWeapon                   = 1,
	RolledMedia                    = 2,
	Currency                       = 3,
	Consumable                     = 4,
	EQtnLootItemType_MAX           = 5,
};

enum class EQtnInvestigateReactionEnum : uint8
{
	LookAt                         = 0,
	TurnTowards                    = 1,
	WalkTowards                    = 2,
	JogTowards                     = 3,
	Count                          = 4,
	EQtnInvestigateReactionEnum_MAX = 5,
};

enum class EQtnNarrativeUnlockIntent : uint8
{
	Sequence                       = 0,
	Random                         = 1,
	EQtnNarrativeUnlockIntent_MAX  = 2,
};

enum class EQtnNavLinkMantleTraversalType : uint8
{
	Algorithmic                    = 0,
	WalkOffLedge                   = 1,
	ExpectsMantle                  = 2,
	TooHighToMantle                = 3,
	EQtnNavLinkMantleTraversalType_MAX = 4,
};

enum class EChangeOnlineStateResult : uint8
{
	Success                        = 0,
	AlreadyInProgress              = 1,
	StartAutoLoginFailed           = 2,
	AutoLoginFailed                = 3,
	EChangeOnlineStateResult_MAX   = 4,
};

enum class EQtnOnlineState : uint8
{
	Offline                        = 0,
	Online                         = 1,
	EQtnOnlineState_MAX            = 2,
};

enum class EOnlineMangerState : uint8
{
	Idle                           = 0,
	Disband_DestroySession         = 1,
	Hosting_DestroyingOldSession   = 2,
	Hosting_ChangeOnlineState      = 3,
	Hosting_CreatingSession        = 4,
	Hosting_StartingSession        = 5,
	Joining_DestroySession         = 6,
	Joining_ChangeOnlineState      = 7,
	Joining_Searching              = 8,
	Joining_AutoMatchmake          = 9,
	Joining_DestroyAutoMatchmakeSession = 10,
	Joining_JoiningSession         = 11,
	AcceptInvite_DestroySession    = 12,
	AcceptInvite_ChangeOnlineState = 13,
	AcceptInvite_JoiningSession    = 14,
	EOnlineMangerState_MAX         = 15,
};

enum class EQtnNavLinkTraversalState : uint8
{
	BeforeAction                   = 0,
	DuringAction                   = 1,
	AfterAction                    = 2,
	Done                           = 3,
	EQtnNavLinkTraversalState_MAX  = 4,
};

enum class EQtnRouteCompatibility : uint8
{
	IsCompatible                   = 0,
	TooCrowded                     = 1,
	RejectedByFilter               = 2,
	InactiveRoute                  = 3,
	RejectedBySystemRules          = 4,
	EQtnRouteCompatibility_MAX     = 5,
};

enum class EQtnPatrolRouteType : uint8
{
	Loop                           = 0,
	PingPong                       = 1,
	Random                         = 2,
	OneWay                         = 3,
	EQtnPatrolRouteType_MAX        = 4,
};

enum class EQtnPerkMapSimulationState : uint8
{
	Unselected                     = 0,
	Active                         = 1,
	PendingDeactivation            = 2,
	EQtnPerkMapSimulationState_MAX = 3,
};

enum class EQtnUtilitiesSwitchQuality : uint8
{
	Default                        = 0,
	Switch                         = 1,
	EQtnUtilitiesSwitchQuality_MAX = 2,
};

enum class EQtnActorPoolingState : uint8
{
	None                           = 0,
	Free                           = 1,
	Created                        = 2,
	Reused                         = 3,
	EQtnActorPoolingState_MAX      = 4,
};

enum class EQtnProjectileTargetGatheringType : uint8
{
	None                           = 0,
	SingleTarget                   = 1,
	RadialTarget                   = 2,
	EQtnProjectileTargetGatheringType_MAX = 3,
};

enum class EQtnScreenState : uint8
{
	OffTheStack                    = 0,
	OnTheStackPaused               = 1,
	OnTheStackActive               = 2,
	EQtnScreenState_MAX            = 3,
};

enum class EQtnCuckooEvent : uint8
{
	Undefined                      = 0,
	OnProximity                    = 1,
	OnPairedConversation           = 2,
	OnWitnessedHit                 = 3,
	OnIdle                         = 4,
	OnLootSmashed                  = 5,
	OnManagedConversation          = 6,
	OnAltTriggerVolume             = 7,
	EQtnCuckooEvent_MAX            = 8,
};

enum class EQtnSkirmishConditionOperator : uint8
{
	AND                            = 0,
	OR                             = 1,
	EQtnSkirmishConditionOperator_MAX = 2,
};

enum class EQtnPlayerCounts : uint8
{
	OnePlayer                      = 0,
	TwoPlayers                     = 1,
	ThreePlayers                   = 2,
	FourPlayers                    = 3,
	Count                          = 4,
	EQtnPlayerCounts_MAX           = 5,
};

enum class EQtnTargetInteractionEnum : uint8
{
	Frob                           = 0,
	EQtnTargetInteractionEnum_MAX  = 1,
};

enum class EQtnTeamAttitudeFlags : uint8
{
	None                           = 0,
	Neutral                        = 1,
	Friendly                       = 2,
	Hostile                        = 4,
	EQtnTeamAttitudeFlags_MAX      = 5,
};

enum class EQtnProjectileState : uint8
{
	Inert                          = 0,
	NonHostileFlying               = 1,
	EQtnProjectileState_MAX        = 2,
};

enum class EQtnTurretBossState : uint8
{
	None                           = 0,
	ScriptedAction                 = 1,
	CombatAction                   = 2,
	Prone                          = 3,
	Dead                           = 4,
	EQtnTurretBossState_MAX        = 5,
};

enum class EQtnTurretAILOD : uint8
{
	Uninitialized                  = 0,
	ActiveCombatTurretAI           = 1,
	RelevantTurretAI               = 2,
	NeglectedTurretAI              = 3,
	EQtnTurretAILOD_MAX            = 4,
};

enum class EQtnTutorialType : uint8
{
	Popup                          = 0,
	BlockingModal                  = 1,
	CustomScreen                   = 2,
	GameStateTriggerOnly           = 3,
	GenericListBox                 = 4,
	EQtnTutorialType_MAX           = 5,
};

enum class EQtnUpgradeSessionState : uint8
{
	Inactive                       = 0,
	AwaitingSelection              = 1,
	Complete                       = 2,
	EQtnUpgradeSessionState_MAX    = 3,
};

enum class EQtnSlotType : uint8
{
	Invalid                        = 0,
	Body                           = 1,
	Verb                           = 2,
	Item                           = 3,
	EQtnSlotType_MAX               = 4,
};

enum class EQtnSlotCollisionSettings : uint8
{
	AlwaysReplace                  = 0,
	BestComparisson                = 1,
	WorstComparisson               = 2,
	NeverReplace                   = 3,
	EQtnSlotCollisionSettings_MAX  = 4,
};

enum class EQtnEquipState : uint8
{
	SimulatingUnequip              = 0,
	AnimatingUnEquipWaitingForNotify = 1,
	AnimatingUnEquipWaitingToFinish = 2,
	EquipReady                     = 3,
	SimulatingEquip                = 4,
	AnimatingEquipWaitingForNotify = 5,
	AnimatingEquipWaitingToFinish  = 6,
	WaitingForEquippedHandsReplication = 7,
	Done                           = 8,
	EQtnEquipState_MAX             = 9,
};

enum class EQtnRunGcMode : uint8
{
	Conditionally                  = 0,
	Forced                         = 1,
	EQtnRunGcMode_MAX              = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct QtnGame.QtnEventMatchingValue
struct FQtnEventMatchingValue
{
public:
	enum class EQtnEventMatchingValueType        M_type;                                            // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bool;                                            // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_276D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_int;                                             // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_float;                                           // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_name;                                            // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          M_gameplayTag;                                     // 0x14(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnEventMatchingCriterion
struct FQtnEventMatchingCriterion
{
public:
	struct FGameplayTag                          M_lhsContextTag;                                   // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnEventMatchingOperatorType     M_operatorType;                                    // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_276E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnEventMatchingValue                M_rhsValue;                                        // 0xC(0x1C)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnEventMatchingRule
struct FQtnEventMatchingRule
{
public:
	struct FGameplayTag                          M_eventTypeTag;                                    // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnEventMatchingWriterFilter     M_eventWriterFilter;                               // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_276F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnEventMatchingCriterion>    M_criteria;                                        // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnUnlockRewards
struct FQtnUnlockRewards
{
public:
	class FString                                M_cosmetic;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                M_emote;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_darkMatter;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_fitcoin;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Achievement;                                       // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct QtnGame.QtnUnlockDatabaseRow
struct FQtnUnlockDatabaseRow : public FTableRowBase
{
public:
	struct FQtnEventMatchingRule                 M_eventMatchingRule;                               // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        M_numOccurrencesRequiredToUnlock;                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2771[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  M_displayName;                                     // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  M_description;                                     // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  M_shortDescription;                                // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         M_isSecret;                                        // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2772[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             M_icon;                                            // 0x80(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          M_unlockKey;                                       // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          M_category;                                        // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnUnlockRewards                     M_unlockRewards;                                   // 0xB8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDLCInfo>               M_requiredDLC;                                     // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnRangedFloat
struct FQtnRangedFloat
{
public:
	float                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnAIJobFilter
struct FQtnAIJobFilter
{
public:
	bool                                         CheckInheritedClasses;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2773[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AQtnPawn>>        AllowedPawnArchetypes;                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class AQtnPawn>>        ExcludedPawnArchetypes;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_2774[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AQtnBodyPawn>>      AllowedPawnArchetypesReal;                         // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AQtnBodyPawn>>      ExcludedPawnArchetypesReal;                        // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnAIJobRoleDefinition
struct FQtnAIJobRoleDefinition
{
public:
	bool                                         StartRoleWithOpenEmployment;                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2775[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnAIJobRole>             JobRoleArchetype;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct QtnGame.QtnAIJobClusterDefinition
struct FQtnAIJobClusterDefinition
{
public:
	bool                                         StartClusterWithOpenEmployment;                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2776[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnAIJobCluster>          JobClusterArchetype;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnSalaryTier                    SalaryTier;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2777[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoEmploymentRange;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       AutoEmploymentCooldown;                            // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UBehaviorTree*                         JobBehavior;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnAIJobFilter                       JobFilter;                                         // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FQtnAIJobRoleDefinition> JobRoles;                                          // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnPawnMontage
struct FQtnPawnMontage
{
public:
	class UAnimMontage*                          ThirdPersonAnim;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InterruptLoopUponExit;                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2778[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnHitReactionInfo
struct FQtnHitReactionInfo
{
public:
	bool                                         ShouldIgnoreBadEffects;                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2779[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              TargetBodyRotation;                                // 0x4(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDamageReaction>        DamageReaction;                                    // 0x10(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnPawnMontage                       ReactionMontages;                                  // 0x18(0x10)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReactionDuration;                                  // 0x28(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AQtnFXActor>               VictimFX;                                          // 0x30(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KnockdownWhenFinished;                             // 0x38(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KnockdownHasIntro;                                 // 0x39(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UQtnStatusEffect>>  StatusEffects;                                     // 0x40(0x10)(BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnAttributeDamage
struct FQtnAttributeDamage
{
public:
	TSubclassOf<class UQtnAttribute>             TargetAttribute;                                   // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnAttributeOperation            OperationToPerform;                                // 0x8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct QtnGame.QtnDamageInfo
struct FQtnDamageInfo
{
public:
	bool                                         CalledOnlyOnServer;                                // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnDamageType>            DamageType;                                        // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x10(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamage;                                       // 0x14(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnPawn*                              Culprit;                                           // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnPawn*                              UnintentionalCulprit;                              // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageSource;                                      // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnVerb*                              SourceVerb;                                        // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnAttackMotion                  AttackMotion;                                      // 0x38(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnHitStopResponse               HitStopResponse;                                   // 0x39(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlwaysForceHitReaction;                            // 0x3A(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Knockback;                                         // 0x3C(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KnockbackDuration;                                 // 0x48(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CausesKnockdown;                                   // 0x4C(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_277F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KnockdownDuration;                                 // 0x50(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStrongKnockdown;                                 // 0x54(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeParried;                                      // 0x55(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeBlocked;                                      // 0x56(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAOEAttack;                                       // 0x57(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x58(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x64(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnDamageTargetType              TargetType;                                        // 0x70(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnAttributeDamage>           AttributeChanges;                                  // 0x78(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnActionIntention
struct FQtnActionIntention
{
public:
	struct FQtnPawnMontage                       BodyAction;                                        // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LerpTime;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InduceEmptyHands;                                  // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2781[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// ScriptStruct QtnGame.QtnPerceptionConfig
struct FQtnPerceptionConfig
{
public:
	float                                        WhiskerDistance;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingAwarenessCap;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingFullDrainTime;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingBumpMultiplier;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HearingDistanceMultiplier;                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchAwarenessCap;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchFullDrainTime;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAwarenessCap;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageFullDrainTime;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionFastestFillTime;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisionFullDrainTime;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       VisionConeDistance;                                // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       VisionConeYawDegrees;                              // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       VisionConePitchDegrees;                            // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct QtnGame.QtnPawnIntentions
struct FQtnPawnIntentions
{
public:
	struct FVector                               WorldMovement;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldBodyYaw;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldLookYaw;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelativeLookYaw;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldLookPitch;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnBodyStance                    Stance;                                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2783[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EQtnUIBodyActionEnum>      PressedBodyActions;                                // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         HasBeenSet;                                        // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2784[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnActionIntention                   ActionIntention;                                   // 0x38(0x28)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic)
	class AQtnItem*                              EquippedItemRanged;                                // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnItem*                              EquippedItemMelee;                                 // 0x68(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               TargetedObject;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnCosmeticFilterSettings
struct FQtnCosmeticFilterSettings
{
public:
	struct FGameplayTagContainer                 FilterTags;                                        // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         RequiresExactMatch;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideOwnedCosmetics;                                // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideUnownedCosmetics;                              // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2785[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct QtnGame.QtnCosmeticCatalogueEntry
struct FQtnCosmeticCatalogueEntry : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   ShopCurrencyPrices;                                // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UQtnCharacterBodyMesh>   BodyCosmeticClass;                                 // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnVerb>                  EmoteClass;                                        // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagDescriptions;                                   // 0xA0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsStoredInEmotesVault;                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2786[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EntryId;                                           // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDLCInfo>               RequiredDLC;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLCExistsInStore;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOwnedByPlayer;                                   // 0xE1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2788[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnVerbRequest
struct FQtnVerbRequest
{
public:
	TSubclassOf<class UQtnVerb>                  VerbClass;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               IntendedTarget;                                    // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsBeforeGivingUp;                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2789[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnHitStopRequest
struct FQtnHitStopRequest
{
public:
	float                                        DelayBeforeStart;                                  // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StopDuration;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_resumeDuration;                                  // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_timer;                                           // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.QtnCarrySettings
struct FQtnCarrySettings
{
public:
	class USceneComponent*                       CarrierComponentToAttachTo;                        // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CarrierSocket;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       CarryeeComponentToAttachFrom;                      // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CarryeeSocket;                                     // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeOffset;                                    // 0x20(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x2C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         SnapToGroundUnderCarrierUponDrop;                  // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LerpSeconds;                                       // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnTimeDilationInfo
struct FQtnTimeDilationInfo
{
public:
	float                                        M_originalDilation;                                // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_currentDilation;                                 // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_durationBeforeDecay;                             // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_decayDuration;                                   // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_elapsedTime;                                     // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnDefaultTicket
struct FQtnDefaultTicket
{
public:
	TSubclassOf<class UQtnTicketType>            TicketType;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TicketCounts[0x4];                                 // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TicketsToAddPerArc[0x6];                           // 0x18(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnPendingVerbRequest
struct FQtnPendingVerbRequest
{
public:
	class UQtnVerb*                              M_pendingVerb;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               M_pendingTarget;                                   // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_increment;                                       // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2791[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnItemData
struct FQtnItemData
{
public:
	class FString                                ItemInstanceId;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PrimaryVisual;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecondaryVisual;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WeaponSubtypeTag;                                  // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ItemTypeTag;                                       // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   PowerHandle;                                       // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsRangedWeapon;                                    // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2792[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnPickupVariation
struct FQtnPickupVariation
{
public:
	class USkeletalMesh*                         SingleSkeletalMesh;                                // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SingleStaticMesh;                                  // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         StackedSkeletalMesh;                               // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StackedStaticMesh;                                 // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnTagPresence
struct FQtnTagPresence
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Presence;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnUpgradeSlotConfiguration
struct FQtnUpgradeSlotConfiguration
{
public:
	struct FGameplayTagContainer                 SlotDesignationTags;                               // 0x0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        SlotsToCreate;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2793[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct QtnGame.QtnEntityTuningDataRow
struct FQtnEntityTuningDataRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 DescriptorTags;                                    // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Power1Scalar;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Power2Scalar;                                      // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Power3Scalar;                                      // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Power4Scalar;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSpeed;                                     // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UQtnAttribute>, float> AttributeMap;                                      // 0x40(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnAIBodyAppearance
struct FQtnAIBodyAppearance
{
public:
	class USkeletalMesh*                         M_skeletalMesh;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_voiceType;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2796[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnMantleConfig
struct FQtnMantleConfig
{
public:
	float                                        UpwardArmReach;                                    // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutwardArmReach;                                   // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       LedgeDepthRange;                                   // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        YawDegrees;                                        // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowMantlingBelowKnees;                           // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2797[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.QtnBodyRotationLockInfo
struct FQtnBodyRotationLockInfo
{
public:
	TArray<class UObject*>                       M_bodyRotationLocks;                               // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                        M_lockedBodyYaw;                                   // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_accumulatedYawCounterRotation;                   // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_lookFocus;                                       // 0x18(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_lookOffset;                                      // 0x24(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       M_pitchRange;                                      // 0x30(0x8)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        M_yawLimit;                                        // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2799[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct QtnGame.QtnAIClientInfo
struct FQtnAIClientInfo
{
public:
	bool                                         M_hasAttackTicket;                                 // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnAIDebugInfo
struct FQtnAIDebugInfo
{
public:
	TSubclassOf<class UQtnMentalState>           M_pCurrentMentalStateClass;                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                M_aiDebugString;                                   // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_currentDestination;                              // 0x18(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                M_debugColor;                                      // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnAffordanceInfo
struct FQtnAffordanceInfo
{
public:
	class UObject*                               InteractionObject;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FrobAffordance;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReticleTexture;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseWorldSpaceLabel;                                // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldSpaceLocation;                                // 0x24(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct QtnGame.QtnOnlineErrorCode
struct FQtnOnlineErrorCode
{
public:
	uint8                                        Pad_279B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct QtnGame.QtnScreenStack
struct FQtnScreenStack
{
public:
	class AQtnPlayerUI*                          M_pOwningUI;                                       // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnScreenStackEnum               M_screenStackIndex;                                // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnScreen*>                    M_screenStack;                                     // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UQtnScreen>>        M_screenClassesToUnregister;                       // 0x20(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UQtnScreen>, class UQtnScreen*> M_managedScreens;                                  // 0x30(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_279D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnScreen*                            M_pActiveScreen;                                   // 0x90(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnScreen*                            M_pLastScreenToFinish;                             // 0x98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnRolledUpgradeData
struct FQtnRolledUpgradeData
{
public:
	struct FGameplayTag                          OriginalRarityTag;                                 // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OriginalLevel;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RarityTag;                                         // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FlairTags;                                         // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<uint8>                                LoadBytes;                                         // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         TriggerDataUpdateEvent;                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TriggerLoadProgressEvent;                          // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ModifiesTargetIdentity;                            // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TargetIdentityRarityTag;                           // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIdentityLevel;                               // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct QtnGame.QtnTutorialSubAction
struct FQtnTutorialSubAction
{
public:
	class FName                                  Identity;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  DisplayDescription;                                // 0x20(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	enum class EQtnTutorialStatus                Status;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoFormatInput;                                   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDynamicSubAction;                                // 0x3A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  M_OverriddenTutorialMessage;                       // 0x40(0x18)(Transient, NativeAccessSpecifierPublic)
	class FText                                  M_OverriddenTutorialTitle;                         // 0x58(0x18)(Transient, NativeAccessSpecifierPublic)
	bool                                         M_bUseOverrideTitleText;                           // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseOverrideMessageText;                         // 0x71(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct QtnGame.QtnTutorialInstanceData
struct FQtnTutorialInstanceData
{
public:
	struct FGameplayTag                          Identity;                                          // 0x0(0x8)(Edit, BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnTutorialStatus                Status;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnTutorial>              Class;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      TutorialBoolData;                                  // 0x18(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, struct FQtnTutorialSubAction> TutorialSubgoalData;                               // 0x68(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	float                                        M_timeOfLastPresentation;                          // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  M_OverriddenTutorialMessage;                       // 0xC0(0x18)(Transient, NativeAccessSpecifierPublic)
	class FText                                  M_OverriddenTutorialTitle;                         // 0xD8(0x18)(Transient, NativeAccessSpecifierPublic)
	bool                                         M_bUseOverrideTitleText;                           // 0xF0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bUseOverrideMessageText;                         // 0xF1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnPlayerReadyInfo
struct FQtnPlayerReadyInfo
{
public:
	int32                                        M_numExpectedPlayers;                              // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_numReadyPlayers;                                 // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct QtnGame.QtnRefreshGetCanPlayCallbackProxyTickFunction
struct FQtnRefreshGetCanPlayCallbackProxyTickFunction : public FTickFunction
{
public:
	class UQtnRefreshGetCanPlayCallbackProxy*    PTarget;                                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnPlayerNameplateInfo
struct FQtnPlayerNameplateInfo
{
public:
	class UQtnPlayerNameplateWidget*             Widget;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              OwningPawn;                                        // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnVersion
struct FQtnVersion
{
public:
	int32                                        M_year;                                            // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        M_month;                                           // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        M_day;                                             // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_changelist;                                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnDataBagBytes
struct FQtnDataBagBytes
{
public:
	TArray<uint8>                                M_bytes;                                           // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnRangedInt
struct FQtnRangedInt
{
public:
	int32                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishSpawnRequest
struct FQtnSkirmishSpawnRequest
{
public:
	TSoftClassPtr<class AQtnPawn>                PawnArchetype;                                     // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedInt                         SpawnCount[0x4];                                   // 0x28(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnTrackedSkirmishPawns
struct FQtnTrackedSkirmishPawns
{
public:
	int32                                        NumPendingSpawns;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTelegraphingPawns;                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDestroyedPawns;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnPawn*>                      TrackedLivingPawns;                                // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AQtnPawn*>                      TrackedDeadPawns;                                  // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishRequestSpawnParams
struct FQtnSkirmishRequestSpawnParams
{
public:
	class FName                                  SpawnGroupName;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialSpawnDelay;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuccessiveSpawnDelay;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FavorProximity;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnorePopulationCap;                               // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipPresentation;                                  // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishResponse
struct FQtnSkirmishResponse
{
public:
	TArray<class UQtnSkirmishCondition*>         SkirmishConditions;                                // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UQtnSkirmishAction*>            SkirmishActions;                                   // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                ResponseDevComment;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAllowedRepetitions;                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipFollowingResponsesUponSuccess;                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishTriggerDef
struct FQtnSkirmishTriggerDef
{
public:
	class UQtnSkirmishTrigger*                   SkirmishTrigger;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQtnSkirmishResponse>          ResponsesToEvaluate;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishSpawnGroup
struct FQtnSkirmishSpawnGroup
{
public:
	bool                                         IsRandomMix;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRangedInt                         RandomMixSpawnTotal[0x4];                          // 0x4(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnSkirmishSpawnRequest>      SpawnRequests;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UQtnSkirmishSpawnerHeuristic*>  SpawnerSelectionHeuristics;                        // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ProximityScoreMultiplier;                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnDead;                                         // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BumpAwarenessUponSpawn;                            // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpawnGroupDevComment;                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishPlan
struct FQtnSkirmishPlan
{
public:
	int32                                        MaxAllowedAliveAtOnce;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class AQtnPawn>, int32>   PopulationCapByType;                               // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FQtnSkirmishTriggerDef>        Triggers;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, struct FQtnSkirmishSpawnGroup> SpawnGroups;                                       // 0x68(0x50)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnSkirmishSpawnerInfo
struct FQtnSkirmishSpawnerInfo
{
public:
	class AQtnSpawner*                           M_pSpawner;                                        // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_distanceFromCentroidSq;                          // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_heuristicScore;                                  // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct QtnGame.QtnPendingGroupRequest
struct FQtnPendingGroupRequest
{
public:
	float                                        M_remainingDelay;                                  // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnSkirmishSpawnGroup                M_spawnGroup;                                      // 0x8(0x60)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AQtnPawn>>          M_pawnsToSpawn;                                    // 0x68(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FQtnSkirmishRequestSpawnParams        M_requestSpawnParams;                              // 0x78(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnAttributePipInitializationParameters
struct FQtnAttributePipInitializationParameters
{
public:
	class UMaterialInstanceDynamic*              AttributePipMaterial;                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnAttribute*                         BoundAttribute;                                    // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeRadialPropertyName;                       // 0x10(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeBGColorPropertyName;                      // 0x18(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeIconFlipbookPropertyName;                 // 0x20(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeIsActivePropertyName;                     // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeIconColorPropertyName;                    // 0x30(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnReactionToTag
struct FQtnReactionToTag
{
public:
	struct FGameplayTag                          GameplayTagToReactTo;                              // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnRolledChoiceTagMatchType      TypeOfReaction;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SeverityOfReaction;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnValueFormatData
struct FQtnValueFormatData
{
public:
	enum class EQtnStatDescriptionNumberFormatting FormatAs;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          CustomFormatTextArray;                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnUpgradeValues
struct FQtnUpgradeValues
{
public:
	TArray<struct FQtnRangedFloat>               RangedFloatArray;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FQtnValueFormatData>           FormatValues;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct QtnGame.QtnUpgradeSettings
struct FQtnUpgradeSettings : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	class FText                                  DisplayDescription;                                // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	class FText                                  DisplayFlavorText;                                 // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	class FText                                  LevelUpDescription;                                // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	class FText                                  RarityUpDescription;                               // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DisplayIcon;                                       // 0x80(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CategoryIcon;                                      // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseWeight;                                        // 0xD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AllowedRarityMask;                                 // 0xD8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FQtnTagPresence>               DescriptiveTags;                                   // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SlotDesignation;                                   // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQtnTagPresence>               PresentationTags;                                  // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FQtnReactionToTag>             TagReactions;                                      // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UQtnUpgrade>             UpgradeClass;                                      // 0x130(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FQtnUpgradeValues> RarityToRangedFloatArrayMap;                       // 0x158(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	int32                                        MaximumLevelAllowed;                               // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsEnemyUpgrade;                                    // 0x1AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EnemyUpgradeRollWeight;                            // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VOContextTag;                                      // 0x1B4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VOContextSecondaryTag;                             // 0x1BC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInstantUpgrade;                                  // 0x1C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMetaCard;                                        // 0x1C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CardBehaviorDefinitions;                           // 0x1C8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDLCInfo>               RequiredDLC;                                       // 0x1E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLCExistsInStore;                                  // 0x1F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x258 (0x258 - 0x0)
// ScriptStruct QtnGame.QtnRolledUpgradeResult
struct FQtnRolledUpgradeResult
{
public:
	struct FQtnUpgradeSettings                   ItemSettings;                                      // 0x0(0x1F8)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x1F8(0x60)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.DelegateHandleBlueprint
struct FDelegateHandleBlueprint
{
public:
	uint8                                        Pad_27C5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnContactEventData
struct FQtnContactEventData
{
public:
	struct FVector                               HitLocation;                                       // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ContactDirection;                                  // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              CulpritPawn;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnVerb*                              SourceVerb;                                        // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetContactFXKey;                                // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnAttackMotion                  AttackMotion;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseDamage;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamage;                                       // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnDamageType>            DamageType;                                        // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnSurfaceData
struct FQtnSurfaceData
{
public:
	bool                                         IsValidResult;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnContactSubsystemSystemResultSelector* ResultSelector;                                    // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UQtnContactSubsystemSystemSpawnModifier*> SpawnModifiers;                                    // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UQtnContactSubsystemTargetFilter*      SurfaceTargetFilter;                               // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowConcurrentSurfaceUsage;                       // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct QtnGame.QtnContactSystemResult
struct FQtnContactSystemResult
{
public:
	bool                                         IsValidResult;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AQtnFXActor>>       FXClassArray;                                      // 0x8(0x10)(BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AQtnFXActor*>                   SpawnedFXActorArray;                               // 0x18(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FQtnSurfaceData                       SurfaceInfo;                                       // 0x28(0x30)(BlueprintVisible, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct QtnGame.QtnContactEventInfo
struct FQtnContactEventInfo
{
public:
	class AQtnPawn*                              CulpritPawn;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InteractionKey;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  SurfaceKey;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitVelocity;                                       // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnVerb*                              SourceVerb;                                        // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDamageType>            DamageType;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnCameraVerbAim
struct FQtnCameraVerbAim
{
public:
	struct FVector                               StartPosition;                                     // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct QtnGame.QtnVerbTuningDataRow
struct FQtnVerbTuningDataRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 DescriptorTags;                                    // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        PrimaryScalar;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryScalar;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TertiaryScalar;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QuaterniaryScalar;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct QtnGame.QtnAttributeContainer
struct FQtnAttributeContainer
{
public:
	class UObject*                               M_pOuter;                                          // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_hasBegunPlay;                                    // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                M_pReferenceActor;                                 // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UQtnAttribute*>                 R_replicatedAttributes;                            // 0x18(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UQtnAttribute>, class UQtnAttribute*> L_replicatedAttributes;                            // 0x28(0x50)(Transient, RepSkip, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UQtnAttribute>, class UQtnAttribute*> M_localAttributes;                                 // 0x78(0x50)(Transient, RepSkip, NativeAccessSpecifierPrivate)
	TArray<class UQtnAttribute*>                 M_tickAttributes;                                  // 0xC8(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPrivate)
	TArray<class UQtnAttribute*>                 M_pendingOnAttributeAddeds;                        // 0xD8(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPrivate)
	TArray<class UQtnAttribute*>                 M_pendingOnAttributeRemoveds;                      // 0xE8(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UQtnAttributeModifier>> R_replicatedModifiers;                             // 0xF8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UQtnAttributeModifier>> M_localModifiers;                                  // 0x108(0x10)(ZeroConstructor, Transient, RepSkip, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UQtnAttributeModifierEvent>> R_replicatedActiveModifierEvents;                  // 0x118(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UQtnAttributeModifierEvent>> M_localActiveModifierEvents;                       // 0x128(0x10)(ZeroConstructor, Transient, RepSkip, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27D3[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UQtnAttribute>>     M_defaultAttributes;                               // 0x1E8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UQtnAttribute>, float> M_defaultValueOverrides;                           // 0x1F8(0x50)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UQtnAttributeModifier>> M_defaultModifiers;                                // 0x248(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct QtnGame.QtnDistanceText
struct FQtnDistanceText
{
public:
	bool                                         bShowDistanceText;                                 // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        FontSetting;                                       // 0x8(0x58)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x60(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnOnScreenScaleFromTo
struct FQtnOnScreenScaleFromTo
{
public:
	bool                                         bUse;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             StartScale;                                        // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoOnce;                                           // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnOnScreenRotation
struct FQtnOnScreenRotation
{
public:
	bool                                         bUse;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationRate;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnOnScreenOpacityIn
struct FQtnOnScreenOpacityIn
{
public:
	bool                                         bUse;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoOnce;                                           // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnOnScreenPulse
struct FQtnOnScreenPulse
{
public:
	bool                                         bUse;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPulseScale;                                     // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct QtnGame.QtnEffects
struct FQtnEffects
{
public:
	enum class EQtnOffScreenRotationRule         OffScrRotationRule;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnDistanceText                      DistanceText;                                      // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQtnOnScreenScaleFromTo               OnScreenScaleFromTo;                               // 0x78(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnOnScreenRotation                  OnScreenRotation;                                  // 0x8C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnOnScreenOpacityIn                 OnScreenOpacityFadeIn;                             // 0x94(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnOnScreenPulse                     OnScreenPulse;                                     // 0xA0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnIndicatorType
struct FQtnIndicatorType
{
public:
	enum class EQtnIndicator_Type                IndicatorType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CircleRadius;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnOffScreen_Texture
struct FQtnOffScreen_Texture
{
public:
	class UObject*                               OffScreenTextureObject;                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IndicatorSizeOffScreen;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TintColor;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnOnScreen_Texture
struct FQtnOnScreen_Texture
{
public:
	class UObject*                               OnScreenTextureObject;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IndicatorSizeOnScreen;                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OnScreenPivot;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TintColor;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct QtnGame.QtnAchievementDataRow
struct FQtnAchievementDataRow : public FTableRowBase
{
public:
	bool                                         IsProgressive;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSecret;                                          // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ShortDescription;                                  // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnActorPool
struct FQtnActorPool
{
public:
	TArray<class AQtnPoolableActor*>             M_PooledActors;                                    // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnHeuristicRecord
struct FQtnHeuristicRecord
{
public:
	class UQtnAIJobCluster*                      M_pJobCluster;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_heuristicScore;                                  // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnAIJobClusterTicketRecord
struct FQtnAIJobClusterTicketRecord
{
public:
	int32                                        M_ticketCapacity;                                  // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnAIJobCluster*>              M_jobClusterTicketHolders;                         // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnAIJobBoard
struct FQtnAIJobBoard
{
public:
	TArray<class UQtnAIJobCluster*>              M_openJobClusters;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct QtnGame.QtnPerceptionInfo
struct FQtnPerceptionInfo
{
public:
	float                                        M_highestAwarenessRatio;                           // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EQtnSensoryEvidenceCategory       M_highestEvidenceCategory;                         // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnAIPerceptionComponent*             M_pSelfPerceptionComponent;                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27E8[0xF0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              M_pSelfPawn;                                       // 0x100(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnPawn*                              M_pTrackedPawn;                                    // 0x108(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_visionTracked;                                   // 0x110(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               M_lastSeenVelocity;                                // 0x114(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_distFromEyesToCenter;                            // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EA[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnSensoryEvidenceStruct
struct FQtnSensoryEvidenceStruct
{
public:
	class AQtnPawn*                              M_pTrackedPawn;                                    // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AQtnPawn*                              M_pOwningPawn;                                     // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_sustainedBumpTimer;                              // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_bumpInhibitionTimer;                             // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_awarenessRatio;                                  // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_perceivedLocation;                               // 0x1C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_perceivedVelocity;                               // 0x28(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27EB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnAINoiseEvent
struct FQtnAINoiseEvent
{
public:
	uint8                                        Pad_27EC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGenericTeamId                        M_teamIdentifier;                                  // 0x10(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27ED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnFormationStruct
struct FQtnFormationStruct
{
public:
	uint8                                        Pad_27EE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnDLCPakChunkArray
struct FQtnDLCPakChunkArray
{
public:
	int32                                        FirstChunkID;                                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UQtnPakChunk>>      DLCPakChunkArchetypes;                             // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnAttributeTrigger
struct FQtnAttributeTrigger
{
public:
	float                                        M_threshold;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnAttributeThresholdDirection   M_direction;                                       // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                M_comment;                                         // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnCameraContribution
struct FQtnCameraContribution
{
public:
	class UQtnCameraBehavior*                    M_pCameraBehavior;                                 // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_weight;                                          // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_targetLocation;                                  // 0xC(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              M_targetRotation;                                  // 0x18(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        M_targetFOV;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnThirdPersonCameraParams
struct FQtnThirdPersonCameraParams
{
public:
	float                                        M_cameraDistance;                                  // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_cameraHeight;                                    // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_cameraAngle;                                     // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_cameraTurnRate;                                  // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_lookAtHeight;                                    // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_traceRadius;                                     // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnCharacterDefaultAppearanceEntry
struct FQtnCharacterDefaultAppearanceEntry
{
public:
	TSubclassOf<class UQtnCharacterBodyMesh>     BodyMesh;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weighting;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnCharacterDefaultAppearance
struct FQtnCharacterDefaultAppearance
{
public:
	TArray<struct FQtnCharacterDefaultAppearanceEntry> BodyMeshArray;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQtnCharacterDefaultAppearanceEntry> CapeMeshArray;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQtnCharacterDefaultAppearanceEntry> HairMeshArray;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQtnCharacterDefaultAppearanceEntry> HatMeshArray;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQtnCharacterDefaultAppearanceEntry> HeadMeshArray;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQtnCharacterDefaultAppearanceEntry> HeadAccessoryMeshArray;                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnCharacterAppearance
struct FQtnCharacterAppearance
{
public:
	class UQtnCharacterBodyMesh*                 BodyMesh;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnCharacterBodyMesh*                 CapeMesh;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnCharacterBodyMesh*                 HairMesh;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnCharacterBodyMesh*                 HatMesh;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnCharacterBodyMesh*                 HeadMesh;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnCharacterBodyMesh*                 HeadAccessoryMesh;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnMaterialOverrideParameter
struct FQtnMaterialOverrideParameter
{
public:
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnContactTypeEntry
struct FQtnContactTypeEntry
{
public:
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DataSet;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct QtnGame.QtnContactSelectorOptionalParameters
struct FQtnContactSelectorOptionalParameters
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct QtnGame.QtnIndividualContributorCredit
struct FQtnIndividualContributorCredit : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Role;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EQtnContributorFormatType         FormatType;                                        // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnDivisionCredit
struct FQtnDivisionCredit
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FQtnIndividualContributorCredit> Contributors;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct QtnGame.QtnOrganizationCredit
struct FQtnOrganizationCredit : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FQtnDivisionCredit>            Divisions;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnCreditsWidgetInitializationParameters
struct FQtnCreditsWidgetInitializationParameters
{
public:
	class UVerticalBox*                          TimelineContentBox;                                // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            TimelineScrollBox;                                 // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnDamageNumberOptionalInfo
struct FQtnDamageNumberOptionalInfo
{
public:
	struct FGameplayTag                          Context;                                           // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x18(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x24(0xC)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       OwningComponent;                                   // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnDamageWidget
struct FQtnDamageWidget
{
public:
	class UWidgetComponent*                      M_pWidgetComponent;                                // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnDamageNumberWidget*                M_pWidget;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_vSpawnLocation;                                  // 0x10(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.HiddenActors
struct FHiddenActors
{
public:
	TArray<class AActor*>                        Entries;                                           // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnServerDiagnosticsInfo
struct FQtnServerDiagnosticsInfo
{
public:
	bool                                         M_displayServerInfo;                               // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                M_serverName;                                      // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_serverFrameTimeMs;                               // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_minServerFrameTimeMs;                            // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnMissionStats
struct FQtnMissionStats
{
public:
	struct FUniqueNetIdRepl                      M_playerId;                                        // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_statValues[0x9];                                 // 0x28(0x24)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnEventMessage
struct FQtnEventMessage
{
public:
	uint8                                        Pad_27FC[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.EyePosition
struct FEyePosition
{
public:
	struct FVector4                              EyeViewpoint;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    EyeMat;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MouthMat;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBrows;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBlink;                                       // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceBlink;                                       // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          BrowMontage;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPersistsBrowsOnClose;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27FF[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnCameraShakeDef
struct FQtnCameraShakeDef
{
public:
	TSubclassOf<class UCameraShakeBase>          CameraShakeClass;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakeAttenuation           Attenuation;                                       // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2800[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InnerAttenuationRadius;                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterAttenuationRadius;                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2801[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnForceFeedbackDef
struct FQtnForceFeedbackDef
{
public:
	class UForceFeedbackEffect*                  ForceFeedbackEffectAsset;                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackAttenuation*             OptionalAttenuationAsset;                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntensityMultiplier;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2802[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnAINoiseDef
struct FQtnAINoiseDef
{
public:
	TSubclassOf<class UQtnAINoiseFX>             AINoiseFXClass;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnOverlayDef
struct FQtnOverlayDef
{
public:
	TSubclassOf<class UQtnOverlayFX>             OverlayFXClass;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct QtnGame.QtnOutlineDef
struct FQtnOutlineDef
{
public:
	int32                                        StencilValue;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnAudioDef
struct FQtnAudioDef
{
public:
	class USoundBase*                            SoundAsset;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUISound;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyPlayForLocallyControlledTargetPawns;          // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2803[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnDecalDef
struct FQtnDecalDef
{
public:
	class UMaterialInterface*                    DecalMaterial;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeScreenSize;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeStartDelay;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDuration;                                    // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInStartDelay;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DecalSize;                                         // 0x20(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2804[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnPostProcessDef
struct FQtnPostProcessDef
{
public:
	TSubclassOf<class UQtnPostProcessFX>         PostProcessFXClass;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnParticlesDef
struct FQtnParticlesDef
{
public:
	class UParticleSystem*                       ParticleSystemTemplate;                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       LowCostParticleSystemTemplate;                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SkelMeshParamName;                                 // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BeamTargetParamName;                               // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnNiagaraDef
struct FQtnNiagaraDef
{
public:
	class UNiagaraSystem*                        NiagaraSystemTemplate;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        LowCostNiagaraSystemTemplate;                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SkelMeshParamName;                                 // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BeamTargetParamName;                               // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnFXPoolingWarmUpItem
struct FQtnFXPoolingWarmUpItem
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnCachedOverlayMesh
struct FQtnCachedOverlayMesh
{
public:
	TWeakObjectPtr<class UQtnOverlayFX>          M_OwnerOverlay;                                    // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMeshComponent>         M_OverlayMesh;                                     // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMaterialInstanceDynamic> M_OverlayMaterial;                                 // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnFXActorPool
struct FQtnFXActorPool
{
public:
	TArray<class AQtnFXActor*>                   M_PooledActors;                                    // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class AQtnFXActor*>                   M_LowCostPooledActors;                             // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnPendingKickInfo
struct FQtnPendingKickInfo
{
public:
	uint8                                        Pad_2808[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnGoalWeightPair
struct FQtnGoalWeightPair
{
public:
	TSubclassOf<class UQtnGoal>                  GoalClass;                                         // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalWeight;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnGoalMarkerBucket
struct FQtnGoalMarkerBucket
{
public:
	TArray<class UQtnGoalMarkerComponent*>       M_goalMarkers;                                     // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnHealthBarInitializationParameters
struct FQtnHealthBarInitializationParameters
{
public:
	bool                                         IsAlwaysVisible;                                   // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsBoss;                                            // 0x1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        VisibleDistance;                                   // 0x20(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VisibilitySecondsBeforeFadeOut;                    // 0x24(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             WidgetScale;                                       // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendlyColor;                                     // 0x30(0x10)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HostileColor;                                      // 0x40(0x10)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnRebindableInput
struct FQtnRebindableInput
{
public:
	class FName                                  M_ActionName;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  M_FriendlyName;                                    // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnRebindableInputCategory
struct FQtnRebindableInputCategory
{
public:
	enum class EQtnInputCategory                 M_category;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnRebindableInput>           M_RebindableInputs;                                // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.TextMapping
struct FTextMapping
{
public:
	class FString                                TextLocalizationKeyGamepad;                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputValueGamepad;                                 // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextLocalizationKeyKeyboardMouse;                  // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputValueKeyboardMouse;                           // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnItemEntry
struct FQtnItemEntry
{
public:
	TArray<class AQtnItem*>                      M_spawnedItemInstances;                            // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class AQtnItem>                  M_pItemClass;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnItem*                              M_pItemArchetype;                                  // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_itemCount;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2815[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnCurrencyEntry
struct FQtnCurrencyEntry
{
public:
	struct FGameplayTag                          CurrencyTag;                                       // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnWeaponSpawnSettings
struct FQtnWeaponSpawnSettings
{
public:
	struct FGameplayTag                          RarityTag;                                         // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WeaponTypeTag;                                     // 0x8(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnMediaSpawnSettings
struct FQtnMediaSpawnSettings
{
public:
	struct FGameplayTag                          RarityTag;                                         // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnCurrencySpawnSettings
struct FQtnCurrencySpawnSettings
{
public:
	struct FGameplayTag                          CurrencyTag;                                       // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnConsumableSpawnSettings
struct FQtnConsumableSpawnSettings
{
public:
	struct FGameplayTag                          ConsumableTag;                                     // 0x0(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnLootSpawnSettings
struct FQtnLootSpawnSettings
{
public:
	float                                        TimeLength;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StartRotation;                                     // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnLimitedLoot
struct FQtnLimitedLoot
{
public:
	int32                                        M_reservedCount;                                   // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2816[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnLootItem*>                  M_pLootItems;                                      // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnManagedLoot
struct FQtnManagedLoot
{
public:
	TArray<class AQtnLootItem*>                  M_pLootItems;                                      // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class AQtnLootManagementVolume*, struct FQtnLimitedLoot> M_limitedLootMap;                                  // 0x10(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnRolledLootItem
struct FQtnRolledLootItem
{
public:
	TSubclassOf<class AQtnItem>                  M_itemClass;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 M_addedTags;                                       // 0x8(0x20)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       M_value;                                           // 0x28(0x8)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct QtnGame.QtnPendingLoot
struct FQtnPendingLoot
{
public:
	struct FQtnRolledLootItem                    ItemData;                                          // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class AQtnBodyPawn*                          LootRecipient;                                     // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootIndex;                                         // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x3C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x48(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StartRotation;                                     // 0x54(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EndRotationUseZ;                                   // 0x60(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EndRotationUseY;                                   // 0x6C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnLootTableModifiers
struct FQtnLootTableModifiers
{
public:
	float                                        M_qualityModifier;                                 // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_quantityModifier;                                // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 M_prescribedTags;                                  // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 M_proscribedTags;                                  // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 M_filterTags;                                      // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct QtnGame.QtnLootTableFlatEntry
struct FQtnLootTableFlatEntry
{
public:
	enum class EQtnLootTableFlatType             M_type;                                            // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2819[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AQtnItem>                M_itemClass;                                       // 0x8(0x28)(Edit, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 M_addedTags;                                       // 0x30(0x20)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       M_value;                                           // 0x50(0x8)(Edit, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnLootTableContainer>    M_referenceClass;                                  // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnLootTableModifiers                M_lootTableModifiers;                              // 0x60(0x68)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  M_rarityTags;                                      // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FQtnReactionToTag>             M_tagReactions;                                    // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	float                                        M_difficultyModifiers[0x4];                        // 0xE8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_childCount;                                      // 0xF8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_childIndex;                                      // 0xFC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_weight;                                          // 0x100(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_quantityMin;                                     // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_quantityMax;                                     // 0x108(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_rerollPerQuantity;                               // 0x10C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnLootTableWeightedEntry
struct FQtnLootTableWeightedEntry
{
public:
	class UQtnLootTableEntry*                    M_entry;                                           // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_weight;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_281D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnLootTableWeightTuple
struct FQtnLootTableWeightTuple
{
public:
	float                                        M_zeroWeight;                                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_oneWeight;                                       // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_infWeight;                                       // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct QtnGame.QtnMeleeSweeper
struct FQtnMeleeSweeper
{
public:
	class AQtnPawn*                              M_pOwningPawn;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshComponent*                        M_pOwningMeshComponent;                            // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                M_pOwningActor;                                    // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_useActorSpaceMath;                               // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2821[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshSocket*                   M_BaseSocket;                                      // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshSocket*                   M_TipSocket;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQtnAnimWindowMelee*                   M_pAssociatedAnimWindow;                           // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  M_BaseSocketName;                                  // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  M_TipSocketName;                                   // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_Radius;                                          // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2823[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                M_cachedWorld;                                     // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2824[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               M_capsuleCenterFirstFrame;                         // 0x68(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_capsuleCenterLastFrame;                          // 0x74(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_VectorBaseOffset;                                // 0x80(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_VectorTipOffset;                                 // 0x8C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2827[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 M_sweepRotationFirstFrame;                         // 0xA0(0x10)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FQuat                                 M_sweepRotationLastFrame;                          // 0xB0(0x10)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        M_accumulatedDeltaSeconds;                         // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2828[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsInitialized;                                   // 0xE8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_IsSweeping;                                      // 0xE9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_282A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        M_FramesCalculated;                                // 0xEC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnInvestigationReaction
struct FQtnInvestigationReaction
{
public:
	float                                        AwarenessThreshold;                                // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionLingerDuration;                            // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       PostReactionSearchJogDuration;                     // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       PostReactionSearchWalkDuration;                    // 0x10(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       PostReactionSearchStride;                          // 0x18(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnSearchLineTracer
struct FQtnSearchLineTracer
{
public:
	uint8                                        Pad_282F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnMentalStateSearch*                 M_pOwningSearchState;                              // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               M_suggestedSearchPosition;                         // 0x18(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_lineTracePending;                                // 0x24(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2831[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnNarrativeElementInfo
struct FQtnNarrativeElementInfo
{
public:
	TSubclassOf<class UQtnNarrativeElement>      UnlockedElementArchetype;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasBeenPresented;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2833[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnNarrativeThreadInfo
struct FQtnNarrativeThreadInfo
{
public:
	TArray<struct FQtnNarrativeElementInfo>      UnlockedElementInfo;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnPlayerOutcomeResult
struct FQtnPlayerOutcomeResult
{
public:
	struct FUniqueNetIdRepl                      TargetPlayer;                                      // 0x0(0x28)(BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutcomeValue;                                      // 0x28(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDiscardResult;                               // 0x2C(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2835[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnPlayerOutcomeSummary
struct FQtnPlayerOutcomeSummary
{
public:
	int32                                        OutcomeCount;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutcomeValue;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnOutcomeHistory
struct FQtnOutcomeHistory
{
public:
	TArray<float>                                OutcomeValueArray;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        OutcomeArrayMaxLength;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutcomeSummedValue;                                // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnPlayerOutcomeLifetime
struct FQtnPlayerOutcomeLifetime
{
public:
	TMap<struct FGameplayTag, struct FQtnOutcomeHistory> OutcomeHistoryMap;                                 // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnPlayerOutcomeSession
struct FQtnPlayerOutcomeSession
{
public:
	TMap<struct FGameplayTag, struct FQtnPlayerOutcomeLifetime> OutcomeLifetimeMap;                                // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct QtnGame.QtnPerkSettings
struct FQtnPerkSettings : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	class FText                                  DisplayDescription;                                // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             DisplayIcon;                                       // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, RepSkip, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UQtnPerk>                PerkClass;                                         // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQtnValueFormatData>           FormatValues;                                      // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	int32                                        MaxInstances;                                      // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnSavedPerkLoadoutData
struct FQtnSavedPerkLoadoutData
{
public:
	TSubclassOf<class UQtnPerk>                  PerkClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceCount;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                LoadoutArray;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnPerkMapIsland
struct FQtnPerkMapIsland
{
public:
	TArray<class UUserWidget*>                   ConnectedPerks;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         IsConnectedToSource;                               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnPerkMapEntry
struct FQtnPerkMapEntry
{
public:
	TArray<class UUserWidget*>                   ConnectedPerks;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnPerk>                  PerkClass;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnPerkMapSimulationState        SimulationState;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActiveInBuild;                                   // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsConnectedToSource;                               // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_bVisitedEntry;                                   // 0x1B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct QtnGame.QtnTargetingCone
struct FQtnTargetingCone
{
public:
	uint8                                        Pad_2840[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance;                                          // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeAngleDegrees;                                  // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnTargetingSweeper
struct FQtnTargetingSweeper
{
public:
	TArray<struct FQtnTargetingCone>             M_targetingCones;                                  // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class AQtnPawn*                              M_pOwningPawn;                                     // 0x10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_maxRadius;                                       // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2842[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQtnTargetableInterface> M_pTargetedInterface;                              // 0x20(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnPlayerOptions
struct FQtnPlayerOptions
{
public:
	float                                        StickLookYawRate;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StickLookPitchRate;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnQueuedReturnToMainMenu
struct FQtnQueuedReturnToMainMenu
{
public:
	class FText                                  ReturnReason;                                      // 0x0(0x18)(Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QtnGame.QtnQueuedClientTravel
struct FQtnQueuedClientTravel
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETravelType                       TravelType;                                        // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeamless;                                         // 0x11(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2843[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 MapPackageGuid;                                    // 0x14(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2844[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.PoolingInfo
struct FPoolingInfo
{
public:
	enum class EQtnActorPoolingState             State;                                             // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2845[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReuseTransform;                                    // 0x10(0x30)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct QtnGame.QtnProjectileSweeper
struct FQtnProjectileSweeper
{
public:
	class AQtnProjectile*                        M_pOwningProjectile;                               // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AQtnPawn*                              M_pOwningPawn;                                     // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                M_pLastReflectedActor_ServerOnly;                  // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AQtnPawn*                              M_pLastReflectedCulprit_ServerOnly;                // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        M_projectileIndex;                                 // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        M_Radius;                                          // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWorld*                                M_cachedWorld;                                     // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2846[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               M_locationLastFrame;                               // 0x40(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_locationFirstFrame;                              // 0x4C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_GravityAppliedEachFrame;                         // 0x58(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               M_VectorOffset;                                    // 0x64(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_DrawDebugLines;                                  // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2847[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         M_IsInitialized;                                   // 0x98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         M_IsSweeping;                                      // 0x99(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2848[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct QtnGame.QtnRichPresenceDataRow
struct FQtnRichPresenceDataRow : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct QtnGame.QtnIndicatorData
struct FQtnIndicatorData
{
public:
	struct FQtnOnScreen_Texture                  OnScreen_Texture;                                  // 0x0(0x28)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnOffScreen_Texture                 OffScreen_Texture;                                 // 0x28(0x20)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x50(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceBasedVisibility;                           // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSpan;                                          // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBoundZOffsetforActorTarget;                    // 0x64(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2849[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalZOffset;                                 // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnIndicatorType                     IndicatorType;                                     // 0x6C(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_284A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnEffects                           Effects;                                           // 0x78(0xB0)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bHideUntilPathComfirmed;                           // 0x128(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnModalMessageInfo
struct FQtnModalMessageInfo
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x18(0x18)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class UObject*                               ConfigObject;                                      // 0x30(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQtnModalDialogType               ModalDialogType;                                   // 0x38(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DialogFinishedDelegate;                            // 0x3C(0x10)(BlueprintVisible, ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         MustScrollToBottom;                                // 0x4C(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnCuckooResponse
struct FQtnCuckooResponse
{
public:
	struct FGameplayTag                          M_scriptedVOId;                                    // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_prescribedVariantIndex;                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          M_pAnimMontage;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_playOnceOnly;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_cooldown;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_globalCooldown;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_triggerPairedConversation;                       // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2850[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_nextCanPlayTime_ServerOnly;                      // 0x28(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2851[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnCuckooResponseArray
struct FQtnCuckooResponseArray
{
public:
	TArray<struct FQtnCuckooResponse>            M_cuckooResponses;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnSourceEffectPitchShiftSettings
struct FQtnSourceEffectPitchShiftSettings
{
public:
	float                                        PitchShift;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayLength;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnPendingSkirmishGroup
struct FQtnPendingSkirmishGroup
{
public:
	class AQtnSkirmish*                          M_pSkirmish;                                       // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isTelegraphing;                                  // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2852[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class AQtnPawn>>          M_pendingPawns;                                    // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        M_successiveSpawnDelay;                            // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnSkirmishRequestSpawnParams        M_requestSpawnParams;                              // 0x24(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnArcInfo
struct FQtnArcInfo
{
public:
	class FName                                  NameKey;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapName;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArcValue;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnNameIntPair
struct FQtnNameIntPair
{
public:
	class FName                                  NameKey;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct QtnGame.QtnDangerParameters
struct FQtnDangerParameters
{
public:
	bool                                         IgnoreSelf;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreAllies;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreEnemies;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnLogRedirect
struct FQtnLogRedirect
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExcludeFromDefaultLog;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2853[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnLevelSequenceStruct
struct FQtnLevelSequenceStruct
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Levels;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct QtnGame.QtnContactDataSet
struct FQtnContactDataSet : public FTableRowBase
{
public:
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2854[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, TSubclassOf<class AQtnFXActor>> FXSet;                                             // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnItemStat
struct FQtnItemStat
{
public:
	class FString                                StatInstanceId;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShortName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StatValueA;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StatValueB;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StatValueC;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.QtnItemAttachmentData
struct FQtnItemAttachmentData
{
public:
	class FString                                ItemInstanceId;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttachmentSlotType;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQtnItemStat>                  Stats;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct QtnGame.QtnItemStatSettings
struct FQtnItemStatSettings : public FTableRowBase
{
public:
	class FText                                  FriendlyName;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ShortName;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PoolingNames;                                      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         UseDebugPrint;                                     // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2856[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            StatDataTable;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstRepresentingMedia;                            // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstRepresentingWeapon;                           // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstRepresentingWeaponAttachment;                 // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2857[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionFormatText;                             // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ModifierDescriptionName;                           // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubjectDescriptionName;                            // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyDescriptionName;                           // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CheckForDescriptionNegation;                       // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2858[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EQtnStatChannel, enum class EQtnStatDescriptionNumberFormatting> ChannelNumberFormats;                              // 0xB0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UQtnVerb>                VerbToGrant;                                       // 0x100(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            SourceDataTable;                                   // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     MapItemTypeIntToTableName;                         // 0x130(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        IndexOfTagTypedValue;                              // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndexOfLevelLerpValue;                             // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDamageType>            DamageTypeToAdd;                                   // 0x188(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct QtnGame.QtnVectorDistribution
struct FQtnVectorDistribution : public FTableRowBase
{
public:
	class UCurveVector*                          DistributionCurve;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SamplingRate;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2859[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnSourceStatCalculationData
struct FQtnSourceStatCalculationData
{
public:
	bool                                         HasRecalculated;                                   // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FQtnItemStat>     MediaBrainStatContributions;                       // 0x8(0x50)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        CachedMediaBrainValue;                             // 0x58(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedWeaponValue_Melee;                           // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedWeaponValue_Ranged;                          // 0x60(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct QtnGame.QtnStatComparissonData
struct FQtnStatComparissonData
{
public:
	float                                        CurrentStatValue;                                  // 0x0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetStatValue;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct QtnGame.QtnVerbStat
struct FQtnVerbStat : public FTableRowBase
{
public:
	class FName                                  StatCode;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StatName;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputA;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputB;                                            // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputC;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputD;                                            // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMinInclusive;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelMaxInclusive;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.QtnTagReactiveWeighting
struct FQtnTagReactiveWeighting
{
public:
	class FString                                M_Identity;                                        // 0x0(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingWeight;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnReactionToTag>             ReactionsToTags;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        AllowedLevelRangeMin;                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AllowedLevelRangeMax;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MiscNotes;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct QtnGame.QtnStatClassWithTagReactivityWeighting
struct FQtnStatClassWithTagReactivityWeighting : public FTableRowBase
{
public:
	struct FQtnTagReactiveWeighting              TagReactiveWeights;                                // 0x8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ClassThatIsReacting;                               // 0x48(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ClassWhoseWeightsToCopy;                           // 0x58(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnTagMatcher
struct FQtnTagMatcher
{
public:
	struct FQtnTagPresence                       Tag;                                               // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EQtnRolledChoiceTagMatchType      MatchType;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnStatSelectionCriteria
struct FQtnStatSelectionCriteria
{
public:
	TArray<struct FQtnTagMatcher>                TagMatchList;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SelectionWeight;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct QtnGame.QtnModularWeaponAttachment
struct FQtnModularWeaponAttachment
{
public:
	TSoftObjectPtr<class UStaticMesh>            PrimaryStaticMesh;                                 // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          PrimarySkeletalMesh;                               // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EQtnModularWeaponPart, TSoftObjectPtr<class UStaticMesh>> MeshAttachments;                                   // 0x50(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct QtnGame.QtnModularWeaponAttachmentConfiguration
struct FQtnModularWeaponAttachmentConfiguration
{
public:
	struct FQtnModularWeaponAttachment           Archetype;                                         // 0x0(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQtnTagReactiveWeighting              Tags;                                              // 0xA0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct QtnGame.QtnModularWeaponConfiguration
struct FQtnModularWeaponConfiguration : public FTableRowBase
{
public:
	TMap<class FName, struct FQtnModularWeaponAttachmentConfiguration> PrimaryConfiguration;                              // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FName, struct FQtnModularWeaponAttachmentConfiguration> SecondaryConfiguration;                            // 0x58(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FQtnTagReactiveWeighting              Tags;                                              // 0xA8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct QtnGame.QtnStatScalingRow
struct FQtnStatScalingRow : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerWeaponStat;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerAttachmentStat;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerMediaBrainStat;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct QtnGame.QtnWeaponCoreStatRow
struct FQtnWeaponCoreStatRow : public FTableRowBase
{
public:
	class FString                                WeaponCode;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeatDamageFraction;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MindDamageFraction;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthDamageFraction;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct QtnGame.QtnPowerCoreStatRow
struct FQtnPowerCoreStatRow : public FTableRowBase
{
public:
	class FString                                PowerCode;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponDamageFraction;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeatDamageFraction;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MindDamageFraction;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthDamageFraction;                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct QtnGame.QtnPowerDamageRow
struct FQtnPowerDamageRow : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrimaryDamage;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryDamage;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TertiaryDamage;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QuaterniaryDamage;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2860[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct QtnGame.QtnStatNamingRow
struct FQtnStatNamingRow : public FTableRowBase
{
public:
	class FString                                StatCode;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AsOwner;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AsPrefix;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AsSuffix;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnLootItemVisualConfiguration
struct FQtnLootItemVisualConfiguration
{
public:
	class FString                                PlayFabIdentity;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  UIDisplayName;                                     // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             UIIcon;                                            // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DropSFX;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            PickupSFX;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct QtnGame.QtnWeaponConfiguration
struct FQtnWeaponConfiguration
{
public:
	class FName                                  PlayFabIdentity;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  WeaponTypeFriendlyName;                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AQtnItem>                WeaponClass;                                       // 0x20(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsRanged;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2861[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UIDisplayName;                                     // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             UIIcon;                                            // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DropSFX;                                           // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            PickupSFX;                                         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQtnDLCInfo>               RequiredDLC;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLCExistsInStore;                                  // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2862[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 KnownVariations;                                   // 0xB8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariationOf;                                       // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnConsumableBehaviourTag
struct FQtnConsumableBehaviourTag
{
public:
	struct FGameplayTag                          BehaviourTag;                                      // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct QtnGame.QtnConsumableConfiguration
struct FQtnConsumableConfiguration
{
public:
	class FText                                  FriendlyName;                                      // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FQtnConsumableBehaviourTag>    BehaviourTags;                                     // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMesh;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DropSFX;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            PickupSFX;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AQtnFXActor>               AttachedFX;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnIndexedTag
struct FQtnIndexedTag
{
public:
	bool                                         Valid;                                             // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2863[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnThresholdVisuals
struct FQtnThresholdVisuals
{
public:
	bool                                         ShouldDisplayAsPip;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2864[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ThresholdColor;                                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ThresholdBGColor;                                  // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnTicket
struct FQtnTicket
{
public:
	class AQtnPawn*                              M_pTicketHoldingPawn;                              // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_retracted;                                       // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2865[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_nextHandoutTime;                                 // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       M_HandoutCooldown;                                 // 0x10(0x8)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       M_ReturnCooldown;                                  // 0x18(0x8)(Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnTicketOwnerInfo
struct FQtnTicketOwnerInfo
{
public:
	int32                                        M_maxTicketCount;                                  // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_availableTicketCount;                            // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQtnTicket>                    M_tickets;                                         // 0x8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2866[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct QtnGame.QtnTutorialData
struct FQtnTutorialData
{
public:
	float                                        M_timeOfLastPresentation;                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnUpgradeActivationInfo
struct FQtnUpgradeActivationInfo
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ProjectileActor;                                   // 0x8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQtnVerb*                              SourceVerb;                                        // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct QtnGame.QtnUpgradeModificationHistory
struct FQtnUpgradeModificationHistory
{
public:
	int32                                        IncreasedRarities;                                 // 0x0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IncreasedLevels;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrencySpent;                                     // 0x8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnUpgradeInfo
struct FQtnUpgradeInfo
{
public:
	class UQtnUpgrade*                           M_currentSlottedUpgrade;                           // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnRolledUpgradeData                 M_rolledUpgradeData;                               // 0x8(0x60)(Transient, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct QtnGame.QtnUpgradeRunProgressData
struct FQtnUpgradeRunProgressData
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2867[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   UpgradeIdentity;                                   // 0x8(0x10)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Rarity;                                            // 0x18(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x20(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2868[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SerializedData;                                    // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.UserWidgetPoolClassSetting
struct FUserWidgetPoolClassSetting
{
public:
	class FString                                WidgetClassName;                                   // 0x0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WarmUpPoolNum;                                     // 0x10(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2869[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnTimestampArray
struct FQtnTimestampArray
{
public:
	TArray<float>                                M_timestamps;                                      // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct QtnGame.QtnEventWindow
struct FQtnEventWindow
{
public:
	int32                                        M_threshold;                                       // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_timeWindow;                                      // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UObject*, struct FQtnTimestampArray> M_timestampsMap;                                   // 0x8(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct QtnGame.QtnPersistentPlayerState
struct FQtnPersistentPlayerState
{
public:
	bool                                         M_isPersistentPlayerStateValid;                    // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_wasBannedByHost;                                 // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnGrantedItemInfo
struct FQtnGrantedItemInfo
{
public:
	TSubclassOf<class AQtnItem>                  ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumGranted;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct QtnGame.QtnActorFilter
struct FQtnActorFilter
{
public:
	class UObject*                               M_pRelevantOwner;                                  // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AQtnSpawner*>                   SpawnerFilters;                                    // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          SpawnerRegionFilters;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ActorTagFilters;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyAllowAIs;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QtnGame.QtnAnimBarkStruct
struct FQtnAnimBarkStruct
{
public:
	class FName                                  barkTag;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnPawnMontage                       BodyAction;                                        // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FQtnRangedFloat                       AnimDuration;                                      // 0x18(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnAnimBarkResponse
struct FQtnAnimBarkResponse
{
public:
	struct FQtnActorFilter                       RequestFilter;                                     // 0x0(0x40)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FQtnAnimBarkStruct                    AnimBark;                                          // 0x40(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct QtnGame.QtnViewPoint
struct FQtnViewPoint
{
public:
	float                                        M_LocationX;                                       // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_LocationY;                                       // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_LocationZ;                                       // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_RotationPitch;                                   // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_RotationYaw;                                     // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnNoiseConfig
struct FQtnNoiseConfig
{
public:
	float                                        AwarenessBump;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AwarenessBumpCooldown;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerDistanceRatio;                                // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct QtnGame.QtnGatheredTargetInfo
struct FQtnGatheredTargetInfo
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x8(0x88)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct QtnGame.QtnRootMotionSource_ImpulseForce
struct FQtnRootMotionSource_ImpulseForce : public FRootMotionSource
{
public:
	struct FVector                               Impulse;                                           // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAppliedImpulse;                                // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286C[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct QtnGame.QtnRootMotionSource_InstantMoveToDynamicForce
struct FQtnRootMotionSource_InstantMoveToDynamicForce : public FRootMotionSource
{
public:
	struct FVector                               TargetLocation;                                    // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286D[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xC0 - 0x98)
// ScriptStruct QtnGame.QtnRootMotionSource_SmoothMoveToDynamicForce
struct FQtnRootMotionSource_SmoothMoveToDynamicForce : public FRootMotionSource
{
public:
	struct FVector                               StartLocation;                                     // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialTargetLocation;                             // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnMappedVerbInstanceArray
struct FQtnMappedVerbInstanceArray
{
public:
	enum class EQtnUIBodyActionEnum              M_bodyAction;                                      // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnVerb*>                      M_verbInstances;                                   // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnVerbClassArray
struct FQtnVerbClassArray
{
public:
	TArray<TSubclassOf<class UQtnVerb>>          VerbClasses;                                       // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnVOResponseKey
struct FQtnVOResponseKey
{
public:
	struct FGameplayTag                          M_eventType;                                       // 0x0(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          M_speakerType;                                     // 0x8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_rowName;                                         // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QtnGame.QtnPlayVOParams
struct FQtnPlayVOParams
{
public:
	struct FQtnVOResponseKey                     M_voResponseKey;                                   // 0x0(0x18)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        M_voVariant;                                       // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2872[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           M_pOriginalFacialAnimCurve;                        // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          M_pAnimMontage;                                    // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_autoClosePhone;                                  // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_forCutsceneHUD;                                  // 0x31(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_forceClientSideVO;                               // 0x32(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_viaReplication;                                  // 0x33(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isScripted;                                      // 0x34(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isExclusive;                                     // 0x35(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isCommentaryOrLeadIn;                            // 0x36(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isRobovoice;                                     // 0x37(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isLeadIn;                                        // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_needsLeadIn;                                     // 0x39(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isEmpty;                                         // 0x3A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2873[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          M_rejoinerEvent;                                   // 0x3C(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_score;                                           // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQtnBodyPawn*                          M_pVOClientPlayer;                                 // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_lineKey;                                         // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_cooldownTime;                                    // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  M_subtitleCategoryOverride;                        // 0x5C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2874[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnVOEventTypeArray
struct FQtnVOEventTypeArray
{
public:
	TArray<struct FGameplayTag>                  M_eventTypes;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnVOSpeakerSubtypeArray
struct FQtnVOSpeakerSubtypeArray
{
public:
	TArray<struct FGameplayTag>                  M_speakerSubtypes;                                 // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnVOEventTypeBucket
struct FQtnVOEventTypeBucket
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class UDataTable>> M_speakerTypeBuckets;                              // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnLocalizedCineAudioMap
struct FQtnLocalizedCineAudioMap
{
public:
	TMap<class USoundCue*, TSoftObjectPtr<class USoundCue>> M_soundCueMap;                                     // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnVOLocalizedAudioLanguageMap
struct FQtnVOLocalizedAudioLanguageMap
{
public:
	TMap<TSoftObjectPtr<class UDataTable>, TSoftObjectPtr<class UDataTable>> M_dataTableMap;                                    // 0x0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QtnGame.QtnVOActorArray
struct FQtnVOActorArray
{
public:
	TArray<class AActor*>                        M_actors;                                          // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QtnGame.QtnVOCloneAssetRedirect
struct FQtnVOCloneAssetRedirect
{
public:
	TMap<class UObject*, class UObject*>         M_assetMap;                                        // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct QtnGame.QtnVOSubtitleSpeakerNameRow
struct FQtnVOSubtitleSpeakerNameRow : public FTableRowBase
{
public:
	struct FGameplayTag                          M_speakerTypeTag;                                  // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  M_speakerNameText;                                 // 0x10(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QtnGame.QtnVOPerWriterHistory
struct FQtnVOPerWriterHistory
{
public:
	int32                                        M_numTimesMatched;                                 // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                M_matchTimestamps;                                 // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct QtnGame.QtnVOHistory
struct FQtnVOHistory
{
public:
	TMap<class UObject*, struct FQtnVOPerWriterHistory> M_perWriterHistory;                                // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
	int32                                        M_numTimesPlayed;                                  // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_lastTimePlayed;                                  // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 M_variantHasBeenUsed;                              // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        M_numVariantsUsed;                                 // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2878[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct QtnGame.QtnVODatabaseCloneRedirectRow
struct FQtnVODatabaseCloneRedirectRow : public FTableRowBase
{
public:
	struct FGameplayTag                          M_cloneRedirectTag;                                // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               M_pCloneSrc;                                       // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               M_pCloneDst;                                       // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct QtnGame.QtnVOPatternMatchingRule
struct FQtnVOPatternMatchingRule
{
public:
	int32                                        M_score;                                           // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnEventMatchingCriterion>    M_criteria;                                        // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        M_cooldownTime;                                    // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_refusePhoneSpeaker;                              // 0x1C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        M_randomChance;                                    // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        M_triggerModDivisor;                               // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        M_triggerTimeWindow;                               // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_canExhaustVariants;                              // 0x2C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_canInterruptSelf;                                // 0x2D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_canInterruptOthers;                              // 0x2E(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QtnGame.QtnVOSoundData
struct FQtnVOSoundData
{
public:
	int32                                        M_numVariants;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_287E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                M_weights;                                         // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<float>                                M_durations;                                       // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        M_maxDuration;                                     // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2880[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 M_devOnlyFlags;                                    // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<bool>                                 M_robovoiceFlags;                                  // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          M_names;                                           // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct QtnGame.QtnVOResponse
struct FQtnVOResponse
{
public:
	bool                                         M_exclusive;                                       // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_replicated;                                      // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_queueIfHitReacting;                              // 0x2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isCommentary;                                    // 0x3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isUnfilteredCommentary;                          // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isUndirectedCommentary;                          // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2883[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          M_leadInTag;                                       // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         M_isLeadIn;                                        // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          M_rejoinerEvent;                                   // 0x14(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2886[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             M_pVOSound;                                        // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQtnVOSoundData                       M_voSoundData;                                     // 0x28(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCurveFloat*>                   M_pFacialAnimCurves;                               // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  M_pAnimMontages;                                   // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  M_subtitleCategoryOverride;                        // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct QtnGame.QtnVODatabaseRow
struct FQtnVODatabaseRow : public FTableRowBase
{
public:
	int32                                        M_rowNameHash;                                     // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2888[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnVOPatternMatchingRule             M_rule;                                            // 0x10(0x30)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FQtnVOResponse                        M_response;                                        // 0x40(0xB0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}


