// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "Engine/Public/Respawn/Streaming/RsStreamingDefinition.h"
#include "StructsAndEnums_RsGameTechRT.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum RsGameTechRT.ERsAttackSwingDirection
UENUM(BlueprintType) enum ERsAttackSwingDirection
{
	None = 0,
	Left = 1,
	Right = 2,
	Up = 3,
	Down = 4,
	Forward_ERsAttackSwingDirection = 5,
	Low = 6,
	High = 7,
	NumSwingDirections = 8,
	ERsAttackSwingDirection_MAX = 9
};


// Enum RsGameTechRT.ERsAttackerDirection
UENUM(BlueprintType) enum ERsAttackerDirection
{
	None_ERsAttackerDirection = 0,
	Front = 1,
	Left_ERsAttackerDirection = 2,
	Right_ERsAttackerDirection = 3,
	Back = 4,
	ERsAttackerDirection_MAX = 5
};


// Enum RsGameTechRT.ERsCharacterReaction
UENUM(BlueprintType) enum ERsCharacterReaction
{
	Unknown = 0,
	None_ERsCharacterReaction = 1,
	Default_ERsCharacterReaction = 2,
	Flinch = 3,
	Stagger = 4,
	Kneel = 5,
	Flatten = 6,
	Launch = 7,
	Flyback = 8,
	Sweep = 9,
	Spin = 10,
	Stunned = 11,
	Impale = 12,
	Block = 13,
	BlockWeakened = 14,
	AttackBlocked = 15,
	WallCollision = 16,
	Kicked = 17,
	BlockBreak = 18,
	PreStaggerDodge = 19,
	Stagger_Light = 20,
	AttackParried = 21,
	AttackCountered = 22,
	Flop = 23,
	Slide = 24,
	Crumple = 25,
	Trip = 26,
	SpiderCocoon = 27,
	Overhead = 28,
	WallSlamFlatten = 29,
	WallSlamStagger = 30,
	ForcePushDirectCollision = 31,
	Placeholder1 = 32,
	Placeholder2 = 33,
	Placeholder3 = 34,
	Placeholder4 = 35,
	Placeholder5 = 36,
	Placeholder6 = 37,
	Placeholder7 = 38,
	Placeholder8 = 39,
	Placeholder9 = 40,
	Placeholder10 = 41,
	Placeholder11 = 42,
	Placeholder12 = 43,
	Placeholder13 = 44,
	Placeholder14 = 45,
	Placeholder15 = 46,
	Placeholder16 = 47,
	ERsCharacterReaction_MAX = 48
};


// Enum RsGameTechRT.ERsHitPauseType
UENUM(BlueprintType) enum ERsHitPauseType
{
	HitPause_Both = 0,
	HitPause_Attacker = 1,
	HitPause_Victim = 2,
	HitPause_MAX = 3
};


// Enum RsGameTechRT.ERsBlockLevel
UENUM(BlueprintType) enum ERsBlockLevel
{
	BL_BLOCK = 0,
	BL_BLOCKBREAK = 1,
	BL_UNBLOCKABLE = 2,
	NUM_BLOCK_LEVEL = 3,
	ERsBlockLevel_MAX = 4
};


// Enum RsGameTechRT.ERsBlockDepleteLevel
UENUM(BlueprintType) enum ERsBlockDepleteLevel
{
	blk_Small = 0,
	blk_Medium = 1,
	blk_Large = 2,
	blk_Alt1 = 3,
	blk_Alt2 = 4,
	NumBlockDepleteLevel = 5,
	ERsBlockDepleteLevel_MAX = 6
};


// Enum RsGameTechRT.ERsDamageValueLevel
UENUM(BlueprintType) enum ERsDamageValueLevel
{
	dmg_Small = 0,
	dmg_Medium = 1,
	dmg_Large = 2,
	dmg_XLarge = 3,
	dmg_Extreme = 4,
	dmg_Alt1 = 5,
	dmg_Alt2 = 6,
	NumDamageValueLevel = 7,
	ERsDamageValueLevel_MAX = 8
};


// Enum RsGameTechRT.ERsCombatState
UENUM(BlueprintType) enum ERsCombatState
{
	Neutral = 0,
	Attacking = 1,
	Reaction = 2,
	Blocking = 3,
	Parrying = 4,
	ParrySuccess = 5,
	Evading = 6,
	Stunned_ERsCombatState = 7,
	Telekinesis = 8,
	UsingForce = 9,
	CodeCombatStateCount = 10,
	CustomCombatState1 = 11,
	CustomCombatState2 = 12,
	CustomCombatState3 = 13,
	CustomCombatState4 = 14,
	CustomCombatState5 = 15,
	CustomCombatState6 = 16,
	CustomCombatState7 = 17,
	CustomCombatState8 = 18,
	CustomCombatState9 = 19,
	CustomCombatState10 = 20,
	CustomCombatState11 = 21,
	CustomCombatState12 = 22,
	CustomCombatState13 = 23,
	CustomCombatState14 = 24,
	CustomCombatState15 = 25,
	CustomCombatState16 = 26,
	CustomCombatState17 = 27,
	CustomCombatState18 = 28,
	CustomCombatState19 = 29,
	CustomCombatState20 = 30,
	CustomCombatState21 = 31,
	CustomCombatState22 = 32,
	CustomCombatState23 = 33,
	CustomCombatState24 = 34,
	CustomCombatState25 = 35,
	CustomCombatState26 = 36,
	CustomCombatState27 = 37,
	CustomCombatState28 = 38,
	CustomCombatState29 = 39,
	CustomCombatState30 = 40,
	CustomCombatState31 = 41,
	CustomCombatState32 = 42,
	CustomCombatState_Max = 43,
	ERsCombatState_MAX = 44
};


// Enum RsGameTechRT.ERsNavState
UENUM(BlueprintType) enum ERsNavState
{
	null = 0,
	Ground = 1,
	JumpPreAscend = 2,
	JumpAscend = 3,
	JumpCancelled = 4,
	Fall = 5,
	Glide = 6,
	WallJumpAscend = 7,
	Slide_ERsNavState = 8,
	LedgeHang = 9,
	WallPress = 10,
	Rope = 11,
	Swim = 12,
	MonkeyBeam = 13,
	BalanceBeam = 14,
	BeamTransition = 15,
	WallRun = 16,
	Climb = 17,
	Zipline = 18,
	DebugFly = 19,
	Cinematic = 20,
	Death = 21,
	NavigationTransition = 22,
	SpeederBike = 23,
	Grapple = 24,
	Quicksand = 25,
	MARKDEBUGCLIMB = 26,
	VehicleATAT = 27,
	Claustrophobia = 28,
	ConstrainedControl = 29,
	ERsNavState_MAX = 30
};


// Enum RsGameTechRT.ERsAISpawnResult
UENUM(BlueprintType) enum ERsAISpawnResult
{
	Spawned = 0,
	OffNavmesh = 1,
	SpawnedMax = 2,
	PendingKill = 3,
	Failed = 4,
	ERsAISpawnResult_MAX = 5
};


// Enum RsGameTechRT.ERsAIDespawnReason
UENUM(BlueprintType) enum ERsAIDespawnReason
{
	Died = 0,
	Destroyed = 1,
	ERsAIDespawnReason_MAX = 2
};


// Enum RsGameTechRT.ERsSwimState
UENUM(BlueprintType) enum ERsSwimState
{
	None_ERsSwimState = 0,
	ShallowWater = 1,
	SwimmingOnSurface = 2,
	Diving = 3,
	ERsSwimState_MAX = 4
};


// Enum RsGameTechRT.ERsAIAwarenessState
UENUM(BlueprintType) enum ERsAIAwarenessState
{
	None_ERsAIAwarenessState = 0,
	Ambient = 1,
	Alert = 2,
	Aggro = 3,
	ERsAIAwarenessState_MAX = 4
};


// Enum RsGameTechRT.ERsAIAwarenessLevel
UENUM(BlueprintType) enum ERsAIAwarenessLevel
{
	Unaware = 0,
	PartiallyAware = 1,
	FullyAware = 2,
	ERsAIAwarenessLevel_MAX = 3
};


// Enum RsGameTechRT.ERsAIGameState
UENUM(BlueprintType) enum ERsAIGameState
{
	OutOfCombat = 0,
	PreCombat = 1,
	Combat = 2,
	PostCombat = 3,
	ERsAIGameState_MAX = 4
};


// Enum RsGameTechRT.ERsLedgeEntryType
UENUM(BlueprintType) enum ERsLedgeEntryType
{
	NO_ENTRY = 0,
	ENTRY_GRAB = 1,
	ENTRY_HALF_GRAB = 2,
	ENTRY_KNEE = 3,
	ENTRY_MANTLE = 4,
	ENTRY_FORCE_PULL = 5,
	ENTRY_TRANSITION = 6,
	ENTRY_CINEMATIC = 7,
	ERsLedgeEntryType_MAX = 8
};


// Enum RsGameTechRT.ERsClimbEntryType
UENUM(BlueprintType) enum ERsClimbEntryType
{
	NO_ENTRY_ERsClimbEntryType = 0,
	ENTRY_AUTO_ATTACH = 1,
	ENTRY_AUTO_ATTACH_UNCONFIRMED = 2,
	ENTRY_GRAB_ERsClimbEntryType = 3,
	ENTRY_FORCE_PULL_ERsClimbEntryType = 4,
	ENTRY_TRANSITION_ERsClimbEntryType = 5,
	ENTRY_SKIP = 6,
	ERsClimbEntryType_MAX = 7
};


// Enum RsGameTechRT.FRsPhysicalAnimationBlendingCustomController
UENUM(BlueprintType) enum EFRsPhysicalAnimationBlendingCustomController
{
	None_EFRsPhysicalAnimationBlendingCustomController = 0,
	HeroTurning = 1,
	HeroStop = 2,
	HeroStart = 3,
	FRsPhysicalAnimationBlendingCustomController_MAX = 4
};


// Enum RsGameTechRT.ERsWorldMapCollectableType
UENUM(BlueprintType) enum ERsWorldMapCollectableType
{
	DroidScan = 0,
	ForceEcho = 1,
	RewardChest = 2,
	HealCanister = 3,
	LifeEssence = 4,
	ForceEssence = 5,
	Workbench = 6,
	MAX = 7
};


// Enum RsGameTechRT.ERsUiInputDeviceType
UENUM(BlueprintType) enum ERsUiInputDeviceType
{
	MouseAndKeyboard = 0,
	XboxController = 1,
	DualshockController = 2,
	ERsUiInputDeviceType_MAX = 3
};


// Enum RsGameTechRT.ChoiceOptionType
UENUM(BlueprintType) enum EChoiceOptionType
{
	Choice_A = 0,
	Choice_B = 1,
	Choice_C = 2,
	Choice_D = 3,
	Choice_Ended = 4,
	Unknown_EChoiceOptionType = 5,
	ChoiceOptionType_MAX = 6
};


// Enum RsGameTechRT.ERsLedgePhysicalAnimationProfile
UENUM(BlueprintType) enum ERsLedgePhysicalAnimationProfile
{
	None_ERsLedgePhysicalAnimationProfile = 0,
	LegsFree = 1,
	LegsRigid = 2,
	ERsLedgePhysicalAnimationProfile_MAX = 3
};


// Enum RsGameTechRT.ERsLedgeReachMode
UENUM(BlueprintType) enum ERsLedgeReachMode
{
	NOT_REACHING = 0,
	LEDGE_REACH = 1,
	AIR_REACH = 2,
	ERsLedgeReachMode_MAX = 3
};


// Enum RsGameTechRT.ERsLedgeShimmyDirection
UENUM(BlueprintType) enum ERsLedgeShimmyDirection
{
	DIRECTION_NONE = 0,
	DIRECTION_LEFT = 1,
	DIRECTION_RIGHT = 2,
	DIRECTION_MAX = 3
};


// Enum RsGameTechRT.ERsLedgeInputDirection
UENUM(BlueprintType) enum ERsLedgeInputDirection
{
	DIRECTION_NONE_ERsLedgeInputDirection = 0,
	DIRECTION_LEFT_ERsLedgeInputDirection = 1,
	DIRECTION_RIGHT_ERsLedgeInputDirection = 2,
	DIRECTION_UP = 3,
	DIRECTION_DOWN = 4,
	DIRECTION_MAX_ERsLedgeInputDirection = 5
};


// Enum RsGameTechRT.ERsLedgeMode
UENUM(BlueprintType) enum ERsLedgeMode
{
	Disabled = 0,
	Entry = 1,
	FallWindow = 2,
	CinematicEntry = 3,
	Attached = 4,
	ActiveSeek = 5,
	QueuedShimmy = 6,
	Shimmy = 7,
	Pullup = 8,
	QueuedJumpOff = 9,
	ForcedRelease = 10,
	TransitioningIn = 11,
	TransitioningOut = 12,
	CinematicNavigation = 13,
	ERsLedgeMode_MAX = 14
};


// Enum RsGameTechRT.ERsLedgeSurveyType
UENUM(BlueprintType) enum ERsLedgeSurveyType
{
	SURVEY_TYPE_SHIMMY_HORIZONTAL = 0,
	SURVEY_TYPE_LEAP_HORIZONTAL = 1,
	SURVEY_TYPE_LEAP_VERTICAL = 2,
	SURVEY_TYPE_OUTSIDE_CORNER = 3,
	SURVEY_TYPE_INSIDE_CORNER = 4,
	SURVEY_TYPE_ACTIVE = 5,
	SURVEY_TYPE_MANTLE = 6,
	SURVEY_TYPE_FORCE_PULL = 7,
	SURVEY_TYPE_AUXILIARY = 8,
	SURVEY_TYPE_NAV_DETECTION = 9,
	SURVEY_TYPE_REACH = 10,
	SURVEY_TYPE_COUNT = 11,
	SURVEY_TYPE_ATTACHED = 12,
	SURVEY_TYPE_NAV_TRANSITION = 13,
	SURVEY_TYPE_MAX = 14
};


// Enum RsGameTechRT.ERsLedgeShimmyTarget
UENUM(BlueprintType) enum ERsLedgeShimmyTarget
{
	SHIMMY_HORIZONTAL = 0,
	LEAP_HORIZONTAL = 1,
	LEAP_VERTICAL = 2,
	OUTSIDE_CORNER = 3,
	INSIDE_CORNER = 4,
	UNKNOWN_ERsLedgeShimmyTarget = 5,
	ERsLedgeShimmyTarget_MAX = 6
};


// Enum RsGameTechRT.ERsAIAnimMoveTransitionOp
UENUM(BlueprintType) enum ERsAIAnimMoveTransitionOp
{
	Less = 0,
	Greater = 1,
	ERsAIAnimMoveTransitionOp_MAX = 2
};


// Enum RsGameTechRT.ERsAICurveType
UENUM(BlueprintType) enum ERsAICurveType
{
	Linear = 0,
	ERsAICurveType_MAX = 1
};


// Enum RsGameTechRT.ERsAIEncounterMemberState
UENUM(BlueprintType) enum ERsAIEncounterMemberState
{
	Alive = 0,
	Dead = 1,
	CorpseDestroyed = 2,
	ERsAIEncounterMemberState_MAX = 3
};


// Enum RsGameTechRT.ERsAINavLinkApproachMode
UENUM(BlueprintType) enum ERsAINavLinkApproachMode
{
	SyncToLocation = 0,
	ApproachByBlendSpace = 1,
	ERsAINavLinkApproachMode_MAX = 2
};


// Enum RsGameTechRT.ERsAIPOIBehaviorAction
UENUM(BlueprintType) enum ERsAIPOIBehaviorAction
{
	NoChange = 0,
	Abort = 1,
	Finish = 2,
	ERsAIPOIBehaviorAction_MAX = 3
};


// Enum RsGameTechRT.ERsAIPOIOverrideAttackTargetMode
UENUM(BlueprintType) enum ERsAIPOIOverrideAttackTargetMode
{
	None_ERsAIPOIOverrideAttackTargetMode = 0,
	AttackPlayer = 1,
	AttackActorInLevel = 2,
	ERsAIPOIOverrideAttackTargetMode_MAX = 3
};


// Enum RsGameTechRT.ERsAIPOIRequestResult
UENUM(BlueprintType) enum ERsAIPOIRequestResult
{
	Succeeded = 0,
	RequesterNotAlive = 1,
	RequesterNotInAssociatedEncounterGroups = 2,
	UndefinedRequesterType = 3,
	FilteredByType = 4,
	SpawnGroupNamesDoNotMatch = 5,
	RequesterInCooldown = 6,
	FilteredByAwareness = 7,
	SlotIsFull = 8,
	ConditionalEvaluationFailed = 9,
	RequesterHasPendingRequest = 10,
	GoalRegisitrationFailed = 11,
	PathFindingFailed = 12,
	Unspecified = 13,
	ERsAIPOIRequestResult_MAX = 14
};


// Enum RsGameTechRT.ERsAIPOICollisionOverrideMode
UENUM(BlueprintType) enum ERsAIPOICollisionOverrideMode
{
	None_ERsAIPOICollisionOverrideMode = 0,
	NoPhysicsNoCollision = 1,
	ERsAIPOICollisionOverrideMode_MAX = 2
};


// Enum RsGameTechRT.ERsAIResourceLockoutMode
UENUM(BlueprintType) enum ERsAIResourceLockoutMode
{
	LockoutOnAcquire = 0,
	LockoutOnRelease = 1,
	ERsAIResourceLockoutMode_MAX = 2
};


// Enum RsGameTechRT.ERsAISpawnAssetRequestAsyncPriority
UENUM(BlueprintType) enum ERsAISpawnAssetRequestAsyncPriority
{
	DEFAULT_ERsAISpawnAssetRequestAsyncPriority = 0,
	HIGH_ERsAISpawnAssetRequestAsyncPriority = 1,
	UNDEFINED = 2,
	ERsAISpawnAssetRequestAsyncPriority_MAX = 3
};


// Enum RsGameTechRT.ERsAIInvestigateMode
UENUM(BlueprintType) enum ERsAIInvestigateMode
{
	Idle = 0,
	Move_ERsAIInvestigateMode = 1,
	Moving = 2,
	ERsAIInvestigateMode_MAX = 3
};


// Enum RsGameTechRT.ERsAIConeScoringPolicy
UENUM(BlueprintType) enum ERsAIConeScoringPolicy
{
	Constant = 0,
	Random = 1,
	Dot_ERsAIConeScoringPolicy = 2,
	InverseDot = 3,
	ERsAIConeScoringPolicy_MAX = 4
};


// Enum RsGameTechRT.ERsAIDistancePolicy
UENUM(BlueprintType) enum ERsAIDistancePolicy
{
	Ignore = 0,
	Close = 1,
	Medium = 2,
	Far = 3,
	ERsAIDistancePolicy_MAX = 4
};


// Enum RsGameTechRT.ERsAISpatialQueryItemSelectMethod
UENUM(BlueprintType) enum ERsAISpatialQueryItemSelectMethod
{
	Best = 0,
	TopFivePercent = 1,
	TopTenPercent = 2,
	TopFifteenPercent = 3,
	ERsAISpatialQueryItemSelectMethod_MAX = 4
};


// Enum RsGameTechRT.ERsAIMoveDirection
UENUM(BlueprintType) enum ERsAIMoveDirection
{
	Towards = 0,
	Away = 1,
	Left_ERsAIMoveDirection = 2,
	Right_ERsAIMoveDirection = 3,
	Up_ERsAIMoveDirection = 4,
	Down_ERsAIMoveDirection = 5,
	None_ERsAIMoveDirection = 6,
	ERsAIMoveDirection_MAX = 7
};


// Enum RsGameTechRT.ERsAICharacterAxis
UENUM(BlueprintType) enum ERsAICharacterAxis
{
	Forward_ERsAICharacterAxis = 0,
	Left_ERsAICharacterAxis = 1,
	Right_ERsAICharacterAxis = 2,
	Backward = 3,
	None_ERsAICharacterAxis = 4,
	ERsAICharacterAxis_MAX = 5
};


// Enum RsGameTechRT.ERsAIBTComparisionOperation
UENUM(BlueprintType) enum ERsAIBTComparisionOperation
{
	Greater_ERsAIBTComparisionOperation = 0,
	Less_ERsAIBTComparisionOperation = 1,
	GreaterOrEqual = 2,
	LessOrEqual = 3,
	ERsAIBTComparisionOperation_MAX = 4
};


// Enum RsGameTechRT.ERsAIStrafeDirection
UENUM(BlueprintType) enum ERsAIStrafeDirection
{
	Left_ERsAIStrafeDirection = 0,
	Right_ERsAIStrafeDirection = 1,
	Random_ERsAIStrafeDirection = 2,
	ERsAIStrafeDirection_MAX = 3
};


// Enum RsGameTechRT.ERsAIPatrolPathUsage
UENUM(BlueprintType) enum ERsAIPatrolPathUsage
{
	OneTime = 0,
	Loop = 1,
	Oscillate = 2,
	ERsAIPatrolPathUsage_MAX = 3
};


// Enum RsGameTechRT.ERsAIPatrolSpawnPoint
UENUM(BlueprintType) enum ERsAIPatrolSpawnPoint
{
	ClosestPoint = 0,
	StartPoint = 1,
	SpawnPoint = 2,
	ERsAIPatrolSpawnPoint_MAX = 3
};


// Enum RsGameTechRT.ERsAIScriptingMode
UENUM(BlueprintType) enum ERsAIScriptingMode
{
	None_ERsAIScriptingMode = 0,
	Minimum = 1,
	ForceAggroToPlayer = 2,
	IgnorePlayer = 3,
	IgnoreAll = 4,
	Maximum = 5,
	ERsAIScriptingMode_MAX = 6
};


// Enum RsGameTechRT.ERsAISoundType
UENUM(BlueprintType) enum ERsAISoundType
{
	Tiny = 0,
	Quiet = 1,
	Moderate = 2,
	Loud = 3,
	ExtraLoud = 4,
	Extreme = 5,
	NumTypes = 6,
	ERsAISoundType_MAX = 7
};


// Enum RsGameTechRT.ERsAIRole
UENUM(BlueprintType) enum ERsAIRole
{
	Default_ERsAIRole = 0,
	Ambusher = 1,
	AmbusherWithHearing = 2,
	Guard = 3,
	ERsAIRole_MAX = 4
};


// Enum RsGameTechRT.ERsAIAwarenessReactionRole
UENUM(BlueprintType) enum ERsAIAwarenessReactionRole
{
	None_ERsAIAwarenessReactionRole = 0,
	Default_ERsAIAwarenessReactionRole = 1,
	Primary = 2,
	ERsAIAwarenessReactionRole_MAX = 3
};


// Enum RsGameTechRT.ERsAIAwarenessReactionState
UENUM(BlueprintType) enum ERsAIAwarenessReactionState
{
	None_ERsAIAwarenessReactionState = 0,
	Ambient_ERsAIAwarenessReactionState = 1,
	AmbientToAlert = 2,
	Alert_ERsAIAwarenessReactionState = 3,
	AlertToAggro = 4,
	Aggro_ERsAIAwarenessReactionState = 5,
	AggroToAlert = 6,
	AlertToAmbient = 7,
	ERsAIAwarenessReactionState_MAX = 8
};


// Enum RsGameTechRT.ERsAIAwarenessKind
UENUM(BlueprintType) enum ERsAIAwarenessKind
{
	Saw = 0,
	Heard = 1,
	DamagedBy = 2,
	Indirect = 3,
	Beacon = 4,
	ERsAIAwarenessKind_MAX = 5
};


// Enum RsGameTechRT.ERsAIResourceProvider
UENUM(BlueprintType) enum ERsAIResourceProvider
{
	AttackTarget = 0,
	BlackboardKey = 1,
	Global = 2,
	ERsAIResourceProvider_MAX = 3
};


// Enum RsGameTechRT.ERsAIBlendspaceInputSource
UENUM(BlueprintType) enum ERsAIBlendspaceInputSource
{
	Custom = 0,
	FocusYawPitch = 1,
	FocusYaw = 2,
	FocusPitch = 3,
	FocusDistance = 4,
	FocusDistance2D = 5,
	VerticalDistanceToFocusHead = 6,
	ERsAIBlendspaceInputSource_MAX = 7
};


// Enum RsGameTechRT.ERsAIClass
UENUM(BlueprintType) enum ERsAIClass
{
	Melee = 0,
	Ranged = 1,
	MaxClasses = 2,
	ERsAIClass_MAX = 3
};


// Enum RsGameTechRT.ERsAttributeTagEventType
UENUM(BlueprintType) enum ERsAttributeTagEventType
{
	NewOrRemoved = 0,
	AnyCountChange = 1,
	ERsAttributeTagEventType_MAX = 2
};


// Enum RsGameTechRT.ERsBalanceBeamPhysicalAnimationProfile
UENUM(BlueprintType) enum ERsBalanceBeamPhysicalAnimationProfile
{
	None_ERsBalanceBeamPhysicalAnimationProfile = 0,
	Walking = 1,
	Hanging = 2,
	ERsBalanceBeamPhysicalAnimationProfile_MAX = 3
};


// Enum RsGameTechRT.EBalanceBeamState
UENUM(BlueprintType) enum EBalanceBeamState
{
	NotOnBeam = 0,
	OnBalanceBeam = 1,
	OnMonkeyBeam = 2,
	ClimbingToBalanceBeam = 3,
	FallingToMonkeyBeam = 4,
	EBalanceBeamState_MAX = 5
};


// Enum RsGameTechRT.EBalanceBeamConstraintStatus
UENUM(BlueprintType) enum EBalanceBeamConstraintStatus
{
	BalanceBeamConstraint_None = 0,
	BalanceBeamConstraint_WalkingOnBeam = 1,
	BalanceBeamConstraint_HangingFromBeam = 2,
	BalanceBeamConstraint_Point = 3,
	BalanceBeamConstraint_MAX = 4
};


// Enum RsGameTechRT.ERsDistanceTriggerType
UENUM(BlueprintType) enum ERsDistanceTriggerType
{
	HeroOnly = 0,
	RsCharacters = 1,
	ERsDistanceTriggerType_MAX = 2
};


// Enum RsGameTechRT.ERsAIMultiplicandSource
UENUM(BlueprintType) enum ERsAIMultiplicandSource
{
	CharacterRadius = 0,
	BlackboardKey_ERsAIMultiplicandSource = 1,
	ERsAIMultiplicandSource_MAX = 2
};


// Enum RsGameTechRT.ERsAIBTTaskFacingMode
UENUM(BlueprintType) enum ERsAIBTTaskFacingMode
{
	NoChange_ERsAIBTTaskFacingMode = 0,
	FaceTarget = 1,
	FaceMoveDirection = 2,
	ERsAIBTTaskFacingMode_MAX = 3
};


// Enum RsGameTechRT.ERsPlayAnimationFinishMode
UENUM(BlueprintType) enum ERsPlayAnimationFinishMode
{
	End = 0,
	BlendOut = 1,
	ERsPlayAnimationFinishMode_MAX = 2
};


// Enum RsGameTechRT.ERsAIPOIAnimSection
UENUM(BlueprintType) enum ERsAIPOIAnimSection
{
	None_ERsAIPOIAnimSection = 0,
	Loop_ERsAIPOIAnimSection = 1,
	Exit = 2,
	ERsAIPOIAnimSection_MAX = 3
};


// Enum RsGameTechRT.ERsCameraBehaviorState
UENUM(BlueprintType) enum ERsCameraBehaviorState
{
	RsCameraBehaviorState_Inactive = 0,
	RsCameraBehaviorState_FirstUpdate = 1,
	RsCameraBehaviorState_Active = 2,
	RsCameraBehaviorState_MAX = 3
};


// Enum RsGameTechRT.EVTRotationUpdateMethod
UENUM(BlueprintType) enum EVTRotationUpdateMethod
{
	VTRUM_MoveInputDirection = 0,
	VTRUM_FaceCameraDirection = 1,
	VTRUM_FaceFocusLocation = 2,
	VTRUM_BlueprintControl = 3,
	VTRUM_NoUpdate = 4,
	VTRUM_FaceFocusDirection = 5,
	VTRUM_Invalid = 6,
	VTRUM_MAX = 7
};


// Enum RsGameTechRT.ERsCameraOffsetType
UENUM(BlueprintType) enum ERsCameraOffsetType
{
	RsCameraOffsetType_World = 0,
	RsCameraOffsetType_CameraSpace = 1,
	RsCameraOffsetType_CameraSpaceYaw = 2,
	RsCameraOffsetType_MAX = 3
};


// Enum RsGameTechRT.ERsCharacterNavigationComponentType
UENUM(BlueprintType) enum ERsCharacterNavigationComponentType
{
	NC_LEDGE = 0,
	NC_CLIMB = 1,
	NC_WALL_PRESS = 2,
	NC_ZIPLINE = 3,
	NC_SWIM = 4,
	NC_BEAM = 5,
	NC_SIZE = 6,
	NC_UNKNOWN = 7,
	NC_FLAG_ALL = 8,
	NC_FLAG_NONE = 9,
	NC_MAX = 10
};


// Enum RsGameTechRT.ERsCharacterType
UENUM(BlueprintType) enum ERsCharacterType
{
	CharacterType_Default = 0,
	CharacterType1 = 1,
	CharacterType2 = 2,
	CharacterType3 = 3,
	CharacterType4 = 4,
	CharacterType5 = 5,
	CharacterType6 = 6,
	CharacterType7 = 7,
	CharacterType8 = 8,
	CharacterType9 = 9,
	CharacterType10 = 10,
	CharacterType11 = 11,
	CharacterType12 = 12,
	CharacterType13 = 13,
	CharacterType14 = 14,
	CharacterType15 = 15,
	CharacterType16 = 16,
	CharacterType17 = 17,
	CharacterType18 = 18,
	CharacterType19 = 19,
	CharacterType20 = 20,
	CharacterType21 = 21,
	CharacterType22 = 22,
	CharacterType23 = 23,
	CharacterType24 = 24,
	CharacterType25 = 25,
	CharacterType26 = 26,
	CharacterType27 = 27,
	CharacterType28 = 28,
	CharacterType29 = 29,
	CharacterType30 = 30,
	CharacterType31 = 31,
	CharacterType32 = 32,
	CharacterType33 = 33,
	CharacterType34 = 34,
	CharacterType35 = 35,
	CharacterType36 = 36,
	CharacterType37 = 37,
	CharacterType38 = 38,
	CharacterType39 = 39,
	CharacterType40 = 40,
	CharacterType41 = 41,
	CharacterType42 = 42,
	CharacterType43 = 43,
	CharacterType44 = 44,
	CharacterType45 = 45,
	CharacterType46 = 46,
	CharacterType47 = 47,
	CharacterType48 = 48,
	CharacterType49 = 49,
	CharacterType50 = 50,
	CharacterType51 = 51,
	CharacterType52 = 52,
	CharacterType53 = 53,
	CharacterType54 = 54,
	CharacterType55 = 55,
	CharacterType56 = 56,
	CharacterType57 = 57,
	CharacterType58 = 58,
	CharacterType59 = 59,
	CharacterType60 = 60,
	CharacterType61 = 61,
	CharacterType62 = 62,
	CharacterType63 = 63,
	CharacterType64 = 64,
	CharacterType65 = 65,
	CharacterType66 = 66,
	CharacterType67 = 67,
	CharacterType68 = 68,
	CharacterType69 = 69,
	CharacterType70 = 70,
	CharacterType71 = 71,
	CharacterType72 = 72,
	CharacterType73 = 73,
	CharacterType74 = 74,
	CharacterType75 = 75,
	CharacterType76 = 76,
	CharacterType77 = 77,
	CharacterType78 = 78,
	CharacterType79 = 79,
	CharacterType80 = 80,
	CharacterType81 = 81,
	CharacterType82 = 82,
	CharacterType83 = 83,
	CharacterType84 = 84,
	CharacterType85 = 85,
	CharacterType86 = 86,
	CharacterType87 = 87,
	CharacterType88 = 88,
	CharacterType89 = 89,
	CharacterType90 = 90,
	CharacterType91 = 91,
	CharacterType92 = 92,
	CharacterType93 = 93,
	CharacterType94 = 94,
	CharacterType95 = 95,
	CharacterType96 = 96,
	CharacterType97 = 97,
	CharacterType98 = 98,
	CharacterType99 = 99,
	CharacterType100 = 100,
	CharacterType101 = 101,
	CharacterType102 = 102,
	CharacterType103 = 103,
	CharacterType104 = 104,
	CharacterType105 = 105,
	CharacterType106 = 106,
	CharacterType107 = 107,
	CharacterType108 = 108,
	CharacterType109 = 109,
	CharacterType110 = 110,
	CharacterType111 = 111,
	CharacterType112 = 112,
	CharacterType113 = 113,
	CharacterType114 = 114,
	CharacterType115 = 115,
	CharacterType116 = 116,
	CharacterType117 = 117,
	CharacterType118 = 118,
	CharacterType119 = 119,
	CharacterType120 = 120,
	CharacterType121 = 121,
	CharacterType122 = 122,
	CharacterType123 = 123,
	CharacterType124 = 124,
	CharacterType125 = 125,
	CharacterType126 = 126,
	CharacterType127 = 127,
	CharacterType128 = 128,
	CharacterType_Max = 129,
	ERsCharacterType_MAX = 130
};


// Enum RsGameTechRT.ERsCharacterColliders
UENUM(BlueprintType) enum ERsCharacterColliders
{
	weaponRight_Collision = 0,
	weaponLeft_Collision = 1,
	weaponOther_Collision = 2,
	weaponOtherLeft_Collision = 3,
	body_Collision = 4,
	barehandedRight_Collision = 5,
	barehandedLeft_Collision = 6,
	barehandedRightFoot_Collision = 7,
	barehandedLeftFoot_Collision = 8,
	placeholder1_Collision = 9,
	placeholder2_Collision = 10,
	placeholder3_Collision = 11,
	placeholder4_Collision = 12,
	placeholder5_Collision = 13,
	placeholder6_Collision = 14,
	placeholder7_Collision = 15,
	placeholder8_Collision = 16,
	placeholder9_Collision = 17,
	placeholder10_Collision = 18,
	placeholder11_Collision = 19,
	ERsCharacterColliders_MAX = 20
};


// Enum RsGameTechRT.ERsClimbPhysicalAnimationProfile
UENUM(BlueprintType) enum ERsClimbPhysicalAnimationProfile
{
	None_ERsClimbPhysicalAnimationProfile = 0,
	Default_ERsClimbPhysicalAnimationProfile = 1,
	ClimbHang = 2,
	ERsClimbPhysicalAnimationProfile_MAX = 3
};


// Enum RsGameTechRT.ERsClimbMovementSurveyResult
UENUM(BlueprintType) enum ERsClimbMovementSurveyResult
{
	Invalid = 0,
	SameWall = 1,
	InsideCorner = 2,
	OutsideCorner = 3,
	ERsClimbMovementSurveyResult_MAX = 4
};


// Enum RsGameTechRT.ERsClimbState
UENUM(BlueprintType) enum ERsClimbState
{
	Disabled_ERsClimbState = 0,
	UnattachedIdle = 1,
	TryGrabbing = 2,
	ActiveSeek_ERsClimbState = 3,
	Entry_ERsClimbState = 4,
	FallWindow_ERsClimbState = 5,
	Attached_ERsClimbState = 6,
	Climbing = 7,
	QueuedClimbing = 8,
	QueuedJump = 9,
	ForcedRelease_ERsClimbState = 10,
	CinematicNavigation_ERsClimbState = 11,
	TransitioningIn_ERsClimbState = 12,
	TransitioningOut_ERsClimbState = 13,
	ERsClimbState_MAX = 14
};


// Enum RsGameTechRT.EActionDescriptionEndType
UENUM(BlueprintType) enum EActionDescriptionEndType
{
	EMontageBlendedOut = 0,
	EMontageEnded = 1,
	EActionDescriptionEndType_MAX = 2
};


// Enum RsGameTechRT.ERsCombatDefenseSuccesType
UENUM(BlueprintType) enum ERsCombatDefenseSuccesType
{
	None_ERsCombatDefenseSuccesType = 0,
	Blocked = 1,
	Parried = 2,
	Evaded = 3,
	BlasterDeflected = 4,
	Countered = 5,
	CustomDefenseType1 = 6,
	CustomDefenseType2 = 7,
	CustomDefenseType3 = 8,
	CustomDefenseType4 = 9,
	CustomDefenseType5 = 10,
	CustomDefenseType6 = 11,
	CustomDefenseType7 = 12,
	CustomDefenseType8 = 13,
	CustomDefenseType9 = 14,
	CustomDefenseType10 = 15,
	CustomDefenseType11 = 16,
	CustomDefenseType12 = 17,
	CustomDefenseType13 = 18,
	CustomDefenseType14 = 19,
	CustomDefenseType15 = 20,
	CustomDefenseType16 = 21,
	CustomDefenseType17 = 22,
	CustomDefenseType18 = 23,
	CustomDefenseType19 = 24,
	CustomDefenseType20 = 25,
	CustomDefenseType21 = 26,
	CustomDefenseType22 = 27,
	CustomDefenseType23 = 28,
	CustomDefenseType24 = 29,
	CustomDefenseType25 = 30,
	CustomDefenseType26 = 31,
	CustomDefenseType27 = 32,
	CustomDefenseType28 = 33,
	CustomDefenseType29 = 34,
	CustomDefenseType30 = 35,
	CustomDefenseType31 = 36,
	CustomDefenseType32 = 37,
	CustomDefenseType_Max = 38,
	ERsCombatDefenseSuccesType_MAX = 39
};


// Enum RsGameTechRT.ERsHitImpulseType
UENUM(BlueprintType) enum ERsHitImpulseType
{
	HitImpulse_Damage = 0,
	HitImpulse_Block = 1,
	HitImpulse_ParryNeutral = 2,
	HitImpulse_MAX = 3
};


// Enum RsGameTechRT.ERsDamageEffectType
UENUM(BlueprintType) enum ERsDamageEffectType
{
	Damaged = 0,
	Blocked_ERsCombatDefenseSuccesType = 1,
	Parried_ERsDamageEffectType = 2,
	Killed = 3,
	NumDamageEffectTypes = 4,
	NoDamageEffect = 5,
	ERsDamageEffectType_MAX = 6
};


// Enum RsGameTechRT.ERsCharacterDeath
UENUM(BlueprintType) enum ERsCharacterDeath
{
	Unknown_ERsCharacterDeath = 0,
	Default_ERsCharacterDeath = 1,
	StandardProjectile = 2,
	StandardMelee = 3,
	Flatten_ERsCharacterDeath = 4,
	Launch_ERsCharacterDeath = 5,
	Flyback_ERsCharacterDeath = 6,
	Impale_ERsCharacterDeath = 7,
	Placeholder1_ERsCharacterDeath = 8,
	Placeholder2_ERsCharacterDeath = 9,
	Placeholder3_ERsCharacterDeath = 10,
	Placeholder4_ERsCharacterDeath = 11,
	Placeholder5_ERsCharacterDeath = 12,
	ERsCharacterDeath_MAX = 13
};


// Enum RsGameTechRT.ERsAnimEndPose
UENUM(BlueprintType) enum ERsAnimEndPose
{
	None_ERsAnimEndPose = 0,
	Front_ERsAnimEndPose = 1,
	Left_ERsAnimEndPose = 2,
	Right_ERsAnimEndPose = 3,
	Back_ERsAnimEndPose = 4,
	ERsAnimEndPose_MAX = 5
};


// Enum RsGameTechRT.ERsQuadrant
UENUM(BlueprintType) enum ERsQuadrant
{
	Center = 0,
	TopRight = 1,
	TopLeft = 2,
	BottomLeft = 3,
	BottomRight = 4,
	None_ERsQuadrant = 5,
	ERsQuadrant_MAX = 6
};


// Enum RsGameTechRT.ERsDifficulty
UENUM(BlueprintType) enum ERsDifficulty
{
	Difficulty_Easy = 0,
	Difficulty_Normal = 1,
	Difficulty_Hard = 2,
	Difficulty_VeryEasy = 3,
	NumDifficultyLevels = 4,
	ERsDifficulty_MAX = 5
};


// Enum RsGameTechRT.ERsGripInputOption
UENUM(BlueprintType) enum ERsGripInputOption
{
	EnableInLedge = 0,
	HoldForLedge = 1,
	LedgeUnconfirmedAfterConstrainedJump = 2,
	EnableInClimb = 3,
	HoldForClimb = 4,
	EnableInZipline = 5,
	HoldForZipline = 6,
	ClimbUnconfirmedAfterConstrainedJump = 7,
	ConstrainedJumpDisablesGrabWithoutHold = 8,
	ERsGripInputOption_MAX = 9
};


// Enum RsGameTechRT.ERsHeroUpgradeFlags
UENUM(BlueprintType) enum ERsHeroUpgradeFlags
{
	FocusAttackUnlock = 0,
	LeapUnlock = 1,
	LeapBranches = 2,
	LeapDistance = 3,
	SprintAttackUnlock = 4,
	EvadeAttackUnlock = 5,
	DelaySaberUnlock = 6,
	DelayStaffUnlock = 7,
	AirFocusUnlock = 8,
	AirFocusAoE = 9,
	FocusAttackSaberUpgrade = 10,
	FocusAttackStaffUpgrade = 11,
	TransformAttackUnlock = 12,
	ThrowUnlock = 13,
	ThrowDistance = 14,
	ThrowTwin = 15,
	MaxForce01 = 16,
	MaxForce02 = 17,
	MaxForce03 = 18,
	ForceGainIncrease = 19,
	SlowUpgrade01 = 20,
	SlowUpgrade02 = 21,
	PushUpgrade01 = 22,
	PushUpgrade02 = 23,
	PerfectPush = 24,
	PullUpgrade01 = 25,
	PullUpgrade02 = 26,
	ForceMeterHeal = 27,
	MaxHealth01 = 28,
	MaxHealth02 = 29,
	MaxHealth03 = 30,
	HealingUpgrade01 = 31,
	HealingUpgrade02 = 32,
	BlockUpgrade = 33,
	AutoDeflect = 34,
	ForceSprintUnlock = 35,
	PerfectEvade = 36,
	PerfectEvadeForce = 37,
	PerfectEvadeCombo = 38,
	BlockDamage = 39,
	ERsHeroUpgradeFlags_MAX = 40
};


// Enum RsGameTechRT.ERsHeroLoadoutFlags
UENUM(BlueprintType) enum ERsHeroLoadoutFlags
{
	WallRunUnlocked = 0,
	DoubleJumpUnlocked = 1,
	ClimbingClawsUnlocked = 2,
	GrappleUnlocked = 3,
	DivingUnlocked = 4,
	ForceSlowdownUnlocked = 5,
	ForcePushUnlocked = 6,
	ForcePullUnlocked = 7,
	ForceTelekinesisUnlocked = 8,
	DroidUnlocked = 9,
	DroidZiplineUnlocked = 10,
	DroidOverchargeUnlocked = 11,
	DroidHackUnlocked = 12,
	StaffLightsaberUnlocked = 13,
	TwinLightsaberUnlocked = 14,
	ZeffoGlyphsUnlocked = 15,
	ZeffoCompassUnlocked = 16,
	ZeffoChargedCompassUnlocked = 17,
	HolocronUnlocked = 18,
	BoganoUnlocked = 19,
	ZeffoUnlocked = 20,
	KashyyykUnlocked = 21,
	DathomirUnlocked = 22,
	IlumUnlocked = 23,
	FightClubUnlocked = 24,
	FortressUnlocked = 25,
	DroidBrawlerHackUnlocked = 26,
	DroidProbeHackUnlocked = 27,
	Skill_UnlockFocusAttack = 28,
	Skill_SprintAttack = 29,
	Skill_DamageIncrease_01 = 30,
	Skill_SaberFocusUpgrade = 31,
	Skill_RollAttack = 32,
	Skill_TransformAttack = 33,
	Skill_DamageIncrease_02 = 34,
	Skill_StaffFocusUpgrade = 35,
	Skill_BlockUpgrade = 36,
	Skill_EvadeAttack = 37,
	Skill_TwinFocusUpgrade = 38,
	Skill_DamageIncrease_03 = 39,
	Skill_MeterUpgrade_01 = 40,
	Skill_ForceSlowUpgrade_01 = 41,
	Skill_ForceGain = 42,
	Skill_MeterUpgrade_02 = 43,
	Skill_ForcePushUpgrade_01 = 44,
	Skill_ForceSlowUpgrade_02 = 45,
	Skill_MeterUpgrade_03 = 46,
	Skill_FocusHeal = 47,
	Skill_ForcePullUpgrade_01 = 48,
	Skill_ForcePushUpgrade_02 = 49,
	Skill_PerfectEvade = 50,
	Skill_ForcePullUpgrade_02 = 51,
	Skill_HealthIncrease_01 = 52,
	Skill_HealthIncrease_02 = 53,
	Skill_HealthIncrease_03 = 54,
	Skill_DelayAttack = 55,
	ERsHeroLoadoutFlags_MAX = 56
};


// Enum RsGameTechRT.ERsHeroInputFlags
UENUM(BlueprintType) enum ERsHeroInputFlags
{
	bufferAtk = 0,
	bufferAtkSpecial = 1,
	bufferBlock = 2,
	bufferEvade = 3,
	bufferForcePull = 4,
	bufferForcePush = 5,
	bufferForceSlowdown = 6,
	bufferGrab = 7,
	bufferHeal = 8,
	bufferJump = 9,
	bufferInteract = 10,
	bufferSprint = 11,
	bufferTelekinesis = 12,
	canAtk = 13,
	canAtkAir = 14,
	canAtkRelease = 15,
	canAtkSpecial = 16,
	canBalanceBeam = 17,
	canBlock = 18,
	canClimb = 19,
	canAutoClimbGrab = 20,
	canClimbRelease = 21,
	canDoubleJump = 22,
	canEvade = 23,
	canFlashlight = 24,
	canForcePull = 25,
	canForcePush = 26,
	canForceSlowdown = 27,
	canHeal = 28,
	canInput = 29,
	canInteract = 30,
	canJump = 31,
	canLedgeGrab = 32,
	canLedgeRelease = 33,
	canMantle = 34,
	canMonkeyClimb = 35,
	canNeutral = 36,
	canQuickRecover = 37,
	canRope = 38,
	canSheathe = 39,
	canShimmy = 40,
	canSlide = 41,
	canSprint = 42,
	canSwim = 43,
	canSwimBoost = 44,
	canTakeDmg = 45,
	canTakeUnblockableDmg = 46,
	canTelekinesis = 47,
	canWallJump = 48,
	canWallPerch = 49,
	canWallRun = 50,
	canZTarget = 51,
	canWallPress = 52,
	canWallPressJump = 53,
	canAutoZipline = 54,
	canZipline = 55,
	canZiplineJump = 56,
	BufferLightsaberSwitch = 57,
	CanLightsaberSwitch = 58,
	CanToggleWorldMap = 59,
	ERsHeroInputFlags_MAX = 60
};


// Enum RsGameTechRT.ERsHeroFlagSet
UENUM(BlueprintType) enum ERsHeroFlagSet
{
	air = 0,
	atk = 1,
	atkActive = 2,
	atkAir = 3,
	atkSpecialFlip = 4,
	atkWindow = 5,
	attacking_ERsHeroFlagSet = 6,
	attackingCharge = 7,
	attackSpecialWindow = 8,
	balanceBeam_ERsHeroFlagSet = 9,
	Barehanded = 10,
	block_ERsHeroFlagSet = 11,
	blockReaction = 12,
	bufferAll = 13,
	bufferAtk_ERsHeroFlagSet = 14,
	bufferAtkSpecial_ERsHeroFlagSet = 15,
	bufferBarehanded = 16,
	BufferClimbGrab = 17,
	bufferDefend = 18,
	bufferEvade_ERsHeroFlagSet = 19,
	bufferForce = 20,
	BufferSuperJumpCharge = 21,
	BufferWallPressAction = 22,
	canAtkRelease_ERsHeroFlagSet = 23,
	CinematicWalk = 24,
	clearLedgeGrab = 25,
	Climb_ERsHeroFlagSet = 26,
	combatPose = 27,
	combatWindow = 28,
	ConstrainedJump = 29,
	Death_ERsHeroFlagSet = 30,
	DebugFly_ERsHeroFlagSet = 31,
	defendWindow = 32,
	DisableAutoClimbGrab = 33,
	DisableClimbGrab = 34,
	DisableClimbRelease = 35,
	disableInput = 36,
	DisableMantle = 37,
	DisableNavMechanics = 38,
	DisableNavMechanicsExceptWallRun = 39,
	DisableSlide = 40,
	DisableWallPress = 41,
	DisableWallPressJump = 42,
	DisableZipline = 43,
	DisableZiplineJump = 44,
	DoubleJump = 45,
	DroidAttached = 46,
	DroidDetached = 47,
	evadeWindow = 48,
	evading_ERsHeroFlagSet = 49,
	EnableZiplineJump = 50,
	Flashlight = 51,
	FlashlightZone = 52,
	ForceCrush = 53,
	ForcePull = 54,
	ForcePush = 55,
	ForceSlow = 56,
	forceWindow = 57,
	Glide_ERsHeroFlagSet = 58,
	GodMode = 59,
	Ground_ERsHeroFlagSet = 60,
	holdAtkWindow = 61,
	InteractEnemy = 62,
	InteractZone = 63,
	Invulnerable = 64,
	Jump = 65,
	JumpPreAscend_ERsHeroFlagSet = 66,
	JumpWindow = 67,
	ledgeGrab = 68,
	ledgePullup = 69,
	monkeyBeam_ERsHeroFlagSet = 70,
	noExtCancel = 71,
	NoWallPerch = 72,
	parry = 73,
	parrySuccess_ERsHeroFlagSet = 74,
	parryWindow = 75,
	playerIdle = 76,
	quickRecoverWindow = 77,
	Quicksand_ERsHeroFlagSet = 78,
	rope_ERsHeroFlagSet = 79,
	ropeStrafe = 80,
	Sheathing = 81,
	Slide_ERsHeroFlagSet = 82,
	SpeederBike_ERsHeroFlagSet = 83,
	Sprint = 84,
	StumbleWalk = 85,
	SuperJumpCharge = 86,
	Swim_ERsHeroFlagSet = 87,
	SwimBoost = 88,
	telekinesis_ERsHeroFlagSet = 89,
	Unsheathing = 90,
	WallCrouch = 91,
	WallJump = 92,
	WallPerch = 93,
	WallPress_ERsHeroFlagSet = 94,
	WallPressInPlaceJump = 95,
	WallRun_ERsHeroFlagSet = 96,
	Zipline_ERsHeroFlagSet = 97,
	zTarget = 98,
	NoJump = 99,
	BufferParry = 100,
	GrabWindow = 101,
	ScanSonar = 102,
	NoSprint = 103,
	NoAttacks = 104,
	NoForce = 105,
	DoubleJumpWindow = 106,
	WallRunCanWallJump = 107,
	FreeFall = 108,
	BatGrabbed = 109,
	BatRiding = 110,
	SprintWindow = 111,
	BufferHeal_ERsHeroFlagSet = 112,
	HealWindow = 113,
	WorldMapWindow = 114,
	TutorialWalk = 115,
	BufferBasicAttack = 116,
	NoBlock = 117,
	YoungCal = 118,
	NoEvade = 119,
	NoZTarget = 120,
	InvalidateInteract = 121,
	ZiplineWindow = 122,
	ERsHeroFlagSet_MAX = 123
};


// Enum RsGameTechRT.ERsHeroMotionTweaks
UENUM(BlueprintType) enum ERsHeroMotionTweaks
{
	Default_ERsHeroMotionTweaks = 0,
	BasicGround = 1,
	SlowWalk = 2,
	Walk = 3,
	FastWalk = 4,
	HubWalk = 5,
	HubSprint = 6,
	ShipWalk = 7,
	SlowJog = 8,
	WallPress_ERsHeroMotionTweaks = 9,
	PlayerIdle_ERsHeroMotionTweaks = 10,
	PlayerIdleRootMotion = 11,
	CSMove = 12,
	Cine = 13,
	CineNoMotion = 14,
	sprint_ERsHeroMotionTweaks = 15,
	ForceSprint = 16,
	BasicAir = 17,
	FreeFall_Cinematics = 18,
	FreeFall_ERsHeroMotionTweaks = 19,
	FreeFall_Dive = 20,
	BatGrabbed_ERsHeroMotionTweaks = 21,
	JumpAscend_ERsHeroMotionTweaks = 22,
	JumpDescend = 23,
	SlideJumpDescend = 24,
	DoubleJumpAscend = 25,
	DoubleJumpDescend = 26,
	WallJumpAir = 27,
	WallJumpFall = 28,
	WallJumpRotation = 29,
	WallPerch_ERsHeroMotionTweaks = 30,
	WallPerchFacing = 31,
	WallRun_ERsHeroMotionTweaks = 32,
	WallRunExpired = 33,
	WallRunFall = 34,
	Glide_ERsHeroMotionTweaks = 35,
	BalanceBeam_ERsHeroMotionTweaks = 36,
	BalanceBeamDark = 37,
	MonkeyBeam_ERsHeroMotionTweaks = 38,
	MonkeyBeamDark = 39,
	BeamSlow = 40,
	BeamFall = 41,
	BeamTurn = 42,
	BeamStop = 43,
	Slide_ERsHeroMotionTweaks = 44,
	SlideFast = 45,
	SlideSlow = 46,
	SlideJumpAscend = 47,
	SlideUphillTumble = 48,
	SlideUphillWalkWrongWay = 49,
	BraccaWingSlide = 50,
	BraccaTrainSlide = 51,
	zTarget_ERsHeroMotionTweaks = 52,
	zTargetEvade = 53,
	evadeBackflipEnter = 54,
	evadeBackflipFall = 55,
	zTargetFace = 56,
	zTargetJump = 57,
	bLock_ERsHeroMotionTweaks = 58,
	Webbed = 59,
	Swim_ERsHeroMotionTweaks = 60,
	SwimVolumeOnSurface = 61,
	SwimVolumeDiving = 62,
	SwimBoost_ERsHeroMotionTweaks = 63,
	SwimTurn = 64,
	DiveToSwim = 65,
	Telekinesis_ERsHeroMotionTweaks = 66,
	ForceSlowAbilityGround = 67,
	ForceSlowAbilityAir = 68,
	ForceSlowAbilitySpecial = 69,
	ForcePushAbilityGround = 70,
	ForcePushAbilityAir = 71,
	ForcePushAbilitySpecial = 72,
	ForcePushCharge = 73,
	ForceTelekinesisAbility = 74,
	ForcePullAbility = 75,
	ForcePullAbilityPlanted = 76,
	ForcePullAbilityRopeGround = 77,
	ForcePullAbilityRopeAir = 78,
	JumpCancel = 79,
	CombatAim = 80,
	CombatNoAim = 81,
	ForceAttackAim = 82,
	IgnoreRootMotion = 83,
	Reflect = 84,
	LightsaberCharge = 85,
	LightsaberNormals = 86,
	LedgeGrab_ERsHeroMotionTweaks = 87,
	Climb_ERsHeroMotionTweaks = 88,
	Zipline_ERsHeroMotionTweaks = 89,
	ZiplineJump = 90,
	ConstrainedJump_ERsHeroMotionTweaks = 91,
	ConstrainedJumpClimbStickiness = 92,
	DropOff = 93,
	Flashlight_ERsHeroMotionTweaks = 94,
	RopeStrafe_ERsHeroMotionTweaks = 95,
	RopeStrafeFaceRope = 96,
	RopeShortcut = 97,
	RopeSwing = 98,
	RopeDrivenMotion = 99,
	RopeJump = 100,
	RopeJumpSlowdown = 101,
	SuperJumpCharge_ERsHeroMotionTweaks = 102,
	SuperJumpAscend = 103,
	SuperJumpDescend = 104,
	TailWind = 105,
	HeadWind = 106,
	WindAir = 107,
	Heal = 108,
	FlinchReaction = 109,
	AttackAir = 110,
	FocusAir = 111,
	DeathFromAbove = 112,
	Debug = 113,
	SyncAnim = 114,
	SyncAnimNav = 115,
	NavigationTransition_ERsHeroMotionTweaks = 116,
	AM_NoRootMotion = 117,
	AM_RootMotion = 118,
	AM_RootMotion_ReleaseRotation = 119,
	AM_DropOffEnabled = 120,
	AM_WallInterac = 121,
	SandWalk = 122,
	Quicksand_ERsHeroMotionTweaks = 123,
	QuicksandThighs = 124,
	QuicksandChest = 125,
	QuicksandStop = 126,
	ConstrainedMovement = 127,
	SpeederBike_ERsHeroMotionTweaks = 128,
	GrappleDeploy = 129,
	GrappleLaunch = 130,
	ScriptedMovement = 131,
	HardLand = 132,
	RollLand = 133,
	NoSteer = 134,
	TrampolineJump = 135,
	TrampolineJump_DrivenTrajectory = 136,
	NOFRICTION = 137,
	ERsHeroMotionTweaks_MAX = 138
};


// Enum RsGameTechRT.ERsHeroCollisionTweaks
UENUM(BlueprintType) enum ERsHeroCollisionTweaks
{
	Standard = 0,
	LedgeGrab_ERsHeroCollisionTweaks = 1,
	ConstrainedJump_ERsHeroCollisionTweaks = 2,
	Combat_IgnorePawns = 3,
	Combat_SpecialAttack = 4,
	Combat_Standard = 5,
	Slide_ERsHeroCollisionTweaks = 6,
	Swim_ERsHeroCollisionTweaks = 7,
	SpeederBike_ERsHeroCollisionTweaks = 8,
	MonkeyBeam_ERsHeroCollisionTweaks = 9,
	BeamFall_ERsHeroCollisionTweaks = 10,
	DebugFly_ERsHeroCollisionTweaks = 11,
	NoCollision = 12,
	ERsHeroCollisionTweaks_MAX = 13
};


// Enum RsGameTechRT.ERsWeaponIkActionType
UENUM(BlueprintType) enum ERsWeaponIkActionType
{
	Defending = 0,
	Locked = 1,
	ERsWeaponIkActionType_MAX = 2
};


// Enum RsGameTechRT.ERsWeaponIkWeaponType
UENUM(BlueprintType) enum ERsWeaponIkWeaponType
{
	TwoHanded = 0,
	SingleHandedLeft = 1,
	SingleHandedRight = 2,
	DoubleBladedLeft = 3,
	DoubleBladedRight = 4,
	TwoHandedBetweenHands = 5,
	ERsWeaponIkWeaponType_MAX = 6
};


// Enum RsGameTechRT.ERsIkBoneType
UENUM(BlueprintType) enum ERsIkBoneType
{
	LeftFoot = 0,
	RightFoot = 1,
	BackLeftFoot = 2,
	BackRightFoot = 3,
	LeftHand = 4,
	RightHand = 5,
	ERsIkBoneType_MAX = 6
};


// Enum RsGameTechRT.ERsIKShape
UENUM(BlueprintType) enum ERsIKShape
{
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	ERsIKShape_MAX = 4
};


// Enum RsGameTechRT.ERsLimitAxisOption
UENUM(BlueprintType) enum ERsLimitAxisOption
{
	X = 0,
	Y = 1,
	Z = 2,
	ERsLimitAxisOption_MAX = 3
};


// Enum RsGameTechRT.ERsConstrainedJumpDirection
UENUM(BlueprintType) enum ERsConstrainedJumpDirection
{
	NONE_ERsConstrainedJumpDirection = 0,
	UP_ERsConstrainedJumpDirection = 1,
	RIGHT_ERsConstrainedJumpDirection = 2,
	UP_RIGHT = 3,
	LEFT_ERsConstrainedJumpDirection = 4,
	UP_LEFT = 5,
	ERsConstrainedJumpDirection_MAX = 6
};


// Enum RsGameTechRT.ERsJumpState
UENUM(BlueprintType) enum ERsJumpState
{
	NotJumping = 0,
	Jumping = 1,
	DoubleJumping = 2,
	WallJumping = 3,
	ConstrainedJumping = 4,
	ERsJumpState_MAX = 5
};


// Enum RsGameTechRT.ENarrativeEventResultType
UENUM(BlueprintType) enum ENarrativeEventResultType
{
	Unset = 0,
	Played = 1,
	Queued = 2,
	Ignored = 3,
	RandomRollFailed = 4,
	StillOnCooldown = 5,
	NoValidFound = 6,
	ENarrativeEventResultType_MAX = 7
};


// Enum RsGameTechRT.ERsAIShotAccuracyOverrideMode
UENUM(BlueprintType) enum ERsAIShotAccuracyOverrideMode
{
	None_ERsAIShotAccuracyOverrideMode = 0,
	AlwaysMiss = 1,
	AlwaysMissExtended = 2,
	AlwaysHit = 3,
	ERsAIShotAccuracyOverrideMode_MAX = 4
};


// Enum RsGameTechRT.FRsPhysicalAnimationProfilesQueueOperation
UENUM(BlueprintType) enum EFRsPhysicalAnimationProfilesQueueOperation
{
	None_EFRsPhysicalAnimationProfilesQueueOperation = 0,
	StartProfile = 1,
	StopProfile = 2,
	FRsPhysicalAnimationProfilesQueueOperation_MAX = 3
};


// Enum RsGameTechRT.FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis
UENUM(BlueprintType) enum EFRsPhysicalAnimationMotorStrengthModifierHorizontalAxis
{
	None_EFRsPhysicalAnimationMotorStrengthModifierHorizontalAxis = 0,
	JointCurrentAngle = 1,
	JointCurrentRelativeVelocity = 2,
	FRsPhysicalAnimationMotorStrengthModifierHorizontalAxis_MAX = 3
};


// Enum RsGameTechRT.FRsPhysicalAnimationCustomBlendInPhysics
UENUM(BlueprintType) enum EFRsPhysicalAnimationCustomBlendInPhysics
{
	None_EFRsPhysicalAnimationCustomBlendInPhysics = 0,
	BuddyDroid = 1,
	FRsPhysicalAnimationCustomBlendInPhysics_MAX = 2
};


// Enum RsGameTechRT.FRsPhysicalAnimationVelocityDriveMode
UENUM(BlueprintType) enum EFRsPhysicalAnimationVelocityDriveMode
{
	None_EFRsPhysicalAnimationVelocityDriveMode = 0,
	Default_EFRsPhysicalAnimationVelocityDriveMode = 1,
	Standard_EFRsPhysicalAnimationVelocityDriveMode = 2,
	Always = 3,
	FRsPhysicalAnimationVelocityDriveMode_MAX = 4
};


// Enum RsGameTechRT.FRsPhysicalAnimationMotorDriveModel
UENUM(BlueprintType) enum EFRsPhysicalAnimationMotorDriveModel
{
	None_EFRsPhysicalAnimationMotorDriveModel = 0,
	Default_EFRsPhysicalAnimationMotorDriveModel = 1,
	Standard_EFRsPhysicalAnimationMotorDriveModel = 2,
	UseDriveProfile = 3,
	FRsPhysicalAnimationMotorDriveModel_MAX = 4
};


// Enum RsGameTechRT.FRsPhysicalAnimationDampingMode
UENUM(BlueprintType) enum EFRsPhysicalAnimationDampingMode
{
	None_EFRsPhysicalAnimationDampingMode = 0,
	Gradual = 1,
	FRsPhysicalAnimationDampingMode_MAX = 2
};


// Enum RsGameTechRT.FRsPhysicalAnimationBodyDriveMode
UENUM(BlueprintType) enum EFRsPhysicalAnimationBodyDriveMode
{
	None_EFRsPhysicalAnimationBodyDriveMode = 0,
	Motor = 1,
	Constraint = 2,
	Velocity = 3,
	LinearVelocityAngularConstraint = 4,
	FRsPhysicalAnimationBodyDriveMode_MAX = 5
};


// Enum RsGameTechRT.FRsPhysicalAnimationBodyMode
UENUM(BlueprintType) enum EFRsPhysicalAnimationBodyMode
{
	None_EFRsPhysicalAnimationBodyMode = 0,
	Kinematic = 1,
	Free = 2,
	PhysicalAnimationDrive = 3,
	FRsPhysicalAnimationBodyMode_MAX = 4
};


// Enum RsGameTechRT.ERsControllerSpaceMode
UENUM(BlueprintType) enum ERsControllerSpaceMode
{
	CS_HORIZONTAL_CAMERA_YAW = 0,
	CS_CAMERA = 1,
	CS_LOCKED_CAMERA = 2,
	CS_USER = 3,
	CS_MAX = 4
};


// Enum RsGameTechRT.ERsCharacterDefense
UENUM(BlueprintType) enum ERsCharacterDefense
{
	Unknown_ERsCharacterDefense = 0,
	Block_ERsCharacterDefense = 1,
	BlockContact = 2,
	Parry_ERsCharacterDefense = 3,
	ParryNeutral = 4,
	Evade = 5,
	EvadeForceAbility = 6,
	ProjectileDefend = 7,
	BlockStaff = 8,
	SaberStd = 9,
	StaffStd = 10,
	Heavy = 11,
	Multi = 12,
	LeapAtk = 13,
	AirFocus = 14,
	LSThrow = 15,
	ThrowProj = 16,
	NumCodeDefense = 17,
	None_ERsCharacterDefense = 18,
	Placeholder1_ERsCharacterDefense = 19,
	Placeholder2_ERsCharacterDefense = 20,
	Placeholder3_ERsCharacterDefense = 21,
	Placeholder4_ERsCharacterDefense = 22,
	Placeholder5_ERsCharacterDefense = 23,
	Placeholder6_ERsCharacterDefense = 24,
	Placeholder7_ERsCharacterDefense = 25,
	Placeholder8_ERsCharacterDefense = 26,
	ERsCharacterDefense_MAX = 27
};


// Enum RsGameTechRT.ERsRopeAttachmentAutoAlignMode
UENUM(BlueprintType) enum ERsRopeAttachmentAutoAlignMode
{
	None_ERsRopeAttachmentAutoAlignMode = 0,
	AutoAlignToSwingDirection = 1,
	AutoAlignToTargetDirection = 2,
	ERsRopeAttachmentAutoAlignMode_MAX = 3
};


// Enum RsGameTechRT.ERsRopeHandAttachmentAutoUpdateMode
UENUM(BlueprintType) enum ERsRopeHandAttachmentAutoUpdateMode
{
	None_ERsRopeHandAttachmentAutoUpdateMode = 0,
	AutoUpdateRopeHandAttachments = 1,
	AutoUpdateClosestRopeHandAttachments = 2,
	AutoUpdateLengthRopeHandAttachments = 3,
	ERsRopeHandAttachmentAutoUpdateMode_MAX = 4
};


// Enum RsGameTechRT.ERsSplineCameraInitMethod
UENUM(BlueprintType) enum ERsSplineCameraInitMethod
{
	SplineCameraInit_FromBeginning = 0,
	SplineCameraInit_FromEnd = 1,
	SplineCameraInit_CheckEntireSpline = 2,
	SplineCameraInit_MAX = 3
};


// Enum RsGameTechRT.FRsFootEffectSpeed
UENUM(BlueprintType) enum EFRsFootEffectSpeed
{
	Walk_EFRsFootEffectSpeed = 0,
	Jog = 1,
	Run = 2,
	FRsFootEffectSpeed_MAX = 3
};


// Enum RsGameTechRT.ERsSwimPhysicalAnimationProfile
UENUM(BlueprintType) enum ERsSwimPhysicalAnimationProfile
{
	None_ERsSwimPhysicalAnimationProfile = 0,
	Swimming = 1,
	ERsSwimPhysicalAnimationProfile_MAX = 2
};


// Enum RsGameTechRT.ERsLocationSyncType
UENUM(BlueprintType) enum ERsLocationSyncType
{
	FEET_LOCATION_ACTOR_ORIENTATION = 0,
	USE_TRANSFORM = 1,
	FEET_LOCATION_MASTER_TO_SLAVE_ORIENTATION = 2,
	ERsLocationSyncType_MAX = 3
};


// Enum RsGameTechRT.ERsBreakSyncType
UENUM(BlueprintType) enum ERsBreakSyncType
{
	NoBreak = 0,
	BreakInstance = 1,
	BreakAll = 2,
	ERsBreakSyncType_MAX = 3
};


// Enum RsGameTechRT.ERsUiInputActionType
UENUM(BlueprintType) enum ERsUiInputActionType
{
	Accept = 0,
	Cancel = 1,
	Navigate = 2,
	Dynamic = 3,
	ERsUiInputActionType_MAX = 4
};


// Enum RsGameTechRT.ERsUINavigationInput
UENUM(BlueprintType) enum ERsUINavigationInput
{
	Stick = 0,
	DPad = 1,
	ERsUINavigationInput_MAX = 2
};


// Enum RsGameTechRT.ERsWallPressState
UENUM(BlueprintType) enum ERsWallPressState
{
	Disabled_ERsWallPressState = 0,
	ActiveSeek_ERsWallPressState = 1,
	Attached_ERsWallPressState = 2,
	ConstrainedMovement_ERsWallPressState = 3,
	Entry_ERsWallPressState = 4,
	Exit_ERsWallPressState = 5,
	InPlaceJump = 6,
	JumpOff = 7,
	TransitioningIn_ERsWallPressState = 8,
	TransitioningOut_ERsWallPressState = 9,
	ERsWallPressState_MAX = 10
};


// Enum RsGameTechRT.ERsWallPressMovementType
UENUM(BlueprintType) enum ERsWallPressMovementType
{
	MOVEMENT_SIDLE = 0,
	MOVEMENT_WALL_JUMP = 1,
	MOVEMENT_COUNT = 2,
	MOVEMENT_MAX = 3
};


// Enum RsGameTechRT.ERsWallPressMovementDirection
UENUM(BlueprintType) enum ERsWallPressMovementDirection
{
	DIRECTION_NONE_ERsWallPressMovementDirection = 0,
	DIRECTION_LEFT_ERsWallPressMovementDirection = 1,
	DIRECTION_RIGHT_ERsWallPressMovementDirection = 2,
	DIRECTION_MAX_ERsWallPressMovementDirection = 3
};


// Enum RsGameTechRT.ERsWallPressMovementTarget
UENUM(BlueprintType) enum ERsWallPressMovementTarget
{
	Horizontal = 0,
	Count = 1,
	ERsWallPressMovementTarget_MAX = 2
};


// Enum RsGameTechRT.ERsWorldMapStreamingArea
UENUM(BlueprintType) enum ERsWorldMapStreamingArea
{
	Visual = 0,
	All = 1,
	ERsWorldMapStreamingArea_MAX = 2
};


// Enum RsGameTechRT.ERsWorldMapDoorType
UENUM(BlueprintType) enum ERsWorldMapDoorType
{
	StandardDoor = 0,
	ForceDoor = 1,
	ERsWorldMapDoorType_MAX = 2
};


// Enum RsGameTechRT.ERsHolomapMode
UENUM(BlueprintType) enum ERsHolomapMode
{
	Roaming = 0,
	HoloTable_NonInteractive = 1,
	HoloTable_Interactive = 2,
	Cinematic_ERsHolomapMode = 3,
	ERsHolomapMode_MAX = 4
};


// Enum RsGameTechRT.ERsZiplinePhysicalAnimationProfile
UENUM(BlueprintType) enum ERsZiplinePhysicalAnimationProfile
{
	None_ERsZiplinePhysicalAnimationProfile = 0,
	Default_ERsZiplinePhysicalAnimationProfile = 1,
	ERsZiplinePhysicalAnimationProfile_MAX = 2
};


// Enum RsGameTechRT.ERsZiplineAttachmentSegment
UENUM(BlueprintType) enum ERsZiplineAttachmentSegment
{
	TopSegment = 0,
	MiddleSegment = 1,
	BottomSegment = 2,
	ERsZiplineAttachmentSegment_MAX = 3
};


// Enum RsGameTechRT.ERsZiplineMovementDirection
UENUM(BlueprintType) enum ERsZiplineMovementDirection
{
	Descending = 0,
	Ascending = 1,
	NoMovement = 2,
	ERsZiplineMovementDirection_MAX = 3
};


// Enum RsGameTechRT.ERsZiplineEntryType
UENUM(BlueprintType) enum ERsZiplineEntryType
{
	NoEntry = 0,
	Air_ERsZiplineEntryType = 1,
	Ground_ERsZiplineEntryType = 2,
	ERsZiplineEntryType_MAX = 3
};


// Enum RsGameTechRT.ERsZiplineAnimationState
UENUM(BlueprintType) enum ERsZiplineAnimationState
{
	NotAttached = 0,
	Entering = 1,
	AttachedIdle = 2,
	AttachedPreJump = 3,
	ERsZiplineAnimationState_MAX = 4
};


// Enum RsGameTechRT.ERsZiplineAttachmentState
UENUM(BlueprintType) enum ERsZiplineAttachmentState
{
	Disabled_ERsZiplineAttachmentState = 0,
	ActiveSeek_ERsZiplineAttachmentState = 1,
	Entry_ERsZiplineAttachmentState = 2,
	Movement = 3,
	ERsZiplineAttachmentState_MAX = 4
};

// ScriptStruct RsGameTechRT.RsPhysicalAnimationRuntimeProfileParameters
// 0x0010
USTRUCT(BlueprintType)
struct FRsPhysicalAnimationRuntimeProfileParameters
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsPhysicalAnimationRuntimeProfileParameters")
	float                                              ActivationDelayTime;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsPhysicalAnimationRuntimeProfileParameters")
	float                                              FadeInTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsPhysicalAnimationRuntimeProfileParameters")
	float                                              FadeOutTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsPhysicalAnimationRuntimeProfileParameters")
	bool                                               StopAnyPreviousPhysicalAnimation;                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsPhysicalAnimationParameters
// 0x0160
USTRUCT(BlueprintType)
struct FRsPhysicalAnimationParameters
{
	GENERATED_BODY()
public:
	bool                                               DoNotActivate;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	FName                                       ProfileName;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	//FRsPhysicalAnimationBoneParameters          DefaultBone;                                              // 0x0010(0x0068) (Edit)
	//FRsPhysicalAnimationBoneParameters          RootBoneBody;                                             // 0x0078(0x0068) (Edit)
	//TArray<FRsPhysicalAnimationBoneParameters>  BonesOverride;                                            // 0x00E0(0x0010) (Edit, ZeroConstructor)
	//TArray<FRsPhysicalAnimationJointAngularParameters> JointsAngularOverride;                                    // 0x00F0(0x0010) (Edit, ZeroConstructor)
	//TArray<FRsPhysicalAnimationJointLinearParameters> JointsLinearOverride;                                     // 0x0100(0x0010) (Edit, ZeroConstructor)
	float                                              MaximumLinearVelocity;                                    // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumAngularVelocity;                                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumPhysicsBlendWeightFromAnimationNotifies;           // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumPhysicsBlendWeightFromAnimationNotifies;           // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideBlendTimeForPhysicsBlendWeightFromAnimationNotifies;// 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideProjectionLinearThreshold;                        // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int8_t                                             OverrideProjectionActivation;                             // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFRsPhysicalAnimationBlendingCustomController      blendingCustomController;                                 // 0x0129(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//FRsPhysicalAnimationBlendingCustomControllerParameters BlendingCustomControllerParameters;                       // 0x012A(0x0001) (Edit)
	EFRsPhysicalAnimationCustomBlendInPhysics          CustomBlendInPhysics;                                     // 0x012B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ProfilePriority;                                          // 0x012C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UpdateActorWorldPositionFromPhysics : 1;                  // 0x012D(0x0001) (Edit)
	unsigned char                                      UseRsDominanceGroupFromOwnerKineticActor : 1;             // 0x012D(0x0001) (Edit)
	unsigned char                                      EnableRagdollCollisionProfile : 1;                        // 0x012D(0x0001) (Edit)
	unsigned char                                      EnableHardcodedCollisionSettings : 1;                     // 0x012D(0x0001) (Edit)
	unsigned char                                      ApplyRootMotion : 1;                                      // 0x012D(0x0001) (Edit)
	unsigned char                                      ZeroRsPhysicsVelocity : 1;                                // 0x012D(0x0001) (Edit)
	unsigned char                                      ConfigureCollisionSettingsForCharacterWeapons : 1;        // 0x012D(0x0001) (Edit)
	unsigned char                                      ModifyPhysicsAssetCollisionsToIncludeWeapons : 1;         // 0x012D(0x0001) (Edit)
	unsigned char                                      SetupRagdollSoundEvents : 1;                              // 0x012E(0x0001) (Edit)
	unsigned char                                      DoNotForceDependentComponentsToPostPhysics : 1;           // 0x012E(0x0001) (Edit)
	unsigned char                                      UseExclusivePhysicsScene : 1;                             // 0x012E(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	//FRsPhysicalAnimationTimeUpdateSchemeParameters TimeUpdateScheme;                                         // 0x0130(0x0008) (Edit)
	float                                              OverrideDeltaTimeForSmoothVelocity;                       // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	//UPhysicalMaterial                           PhysicalMaterialOverride;                                 // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	//URsPhysicalAnimationMotorsDriveProfile*      MotorsDriveProfile;                                       // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	//TArray<FRsPhysicalAnimationMotorsStrengthModifier> MotorsStrengthModifiers;                                  // 0x0150(0x0010) (Edit, ZeroConstructor)
};

USTRUCT(BlueprintType)
struct FDismembermentConfiguration
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		FName MeshComponentName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		TWeakObjectPtr<USkinnedMeshComponent> SkinnedMeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		bool bChangeToRagdoll;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		bool bApplyRadialImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		FVector ImpulseDirection;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		float ImpulseStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FDismembermentConfiguration")
		UAnimationAsset *AnimationToPlay;
};

USTRUCT(BlueprintType)
struct FRsHitPause
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitPause")
	TEnumAsByte<ERsHitPauseType> HitPauseType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitPause")
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitPause")
	float AnimRate;
};

USTRUCT(BlueprintType)
struct FRsHitImpulse
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitImpulse")
	int HitImpulseType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitImpulse")
	float Duration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitImpulse")
	float Distance;
};

USTRUCT(BlueprintType)
struct FRsHitEvent
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	UClass* DamageTypeClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	FName AttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	float HeroDamageFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	TEnumAsByte <ERsDamageValueLevel> DamageLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	TEnumAsByte <ERsBlockDepleteLevel> BlockDepleteLevel;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	TEnumAsByte <ERsBlockLevel> BlockLevel;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	float BlockReactAngleCos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	bool Undodgeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	bool Unparryable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	bool SingleHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	bool NoDamageInSlowdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	bool DamageFriendlies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	FRsHitPause HitPause;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	FRsHitImpulse HitImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsHitEvent")
	int UniqueHitID;
};

USTRUCT(BlueprintType)
struct FRsComponentRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsComponentRecord")
	FName                                       Class;                                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsComponentRecord")
	FString                                      UniqueIdentifier;                                         // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsComponentRecord")
	TArray<UObject*>                              ComponentData;                                            // 0x0018(0x0010) (ZeroConstructor, SaveGame)
};

USTRUCT(BlueprintType)
struct FRsActorRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FName                                       Class;                                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FTransform                                  Transform;                                                // 0x0010(0x0030) (SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FString                                      UniqueIdentifier;                                         // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	TArray<UObject*>                              ActorData;                                                // 0x0050(0x0010) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	TArray<FRsComponentRecord>                  SerializedComponents;                                     // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	TMap<FName, FString>                  PropertyOverrides;                                        // 0x0070(0x0050) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	bool                                               bTransformSet;                                            // 0x00C0(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FRsPlayerStartRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FName                                       PlayerStartName;                                          // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FName                                       PlanetName;                                               // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	URsStreamingDefinition*                      RootStreamingLevelDefinition;                             // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FSoftObjectPath                             RootStreamingDefinitionPath;                              // 0x0018(0x0018) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	FTransform                                  PlayerStartTransform;                                     // 0x0030(0x0030) (SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsActorRecord")
	TArray<FRsStreamingAreaRef>                 StreamingAreas;                                           // 0x0060(0x0010) (ZeroConstructor, SaveGame)
};

USTRUCT(BlueprintType)
struct FRsSaveGameMetaData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	FString                                      PlanetRegion;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	int                                                Difficulty;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	FDateTime                                   ElapsedPlayTime;                                          // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	float                                              PercentComplete;                                          // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	bool                                               bMainStoryComplete;                                       // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameMetaData")
	bool                                               bIsNewGamePlus;                                           // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FRsSaveGameInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FString                                      SaveName;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FName                                       PlanetName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	TWeakObjectPtr<URsStreamingDefinition>       StreamingDefinition;                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FSoftObjectPath                             StreamingDefinitionPath;                                  // 0x0020(0x0018) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FName                                       StreamingPlayerStartName;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FDateTime                                   TimeSaved;                                                // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FText                                       TimeSavedText;                                            // 0x0048(0x0028) (BlueprintVisible, BlueprintReadOnly)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	/*Int I think, will test later*/ int                                     SaveSlot;                                                 // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	int                                                Changelist;                                               // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	bool                                               bCorrupt;                                                 // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsSaveGameInfo")
	FRsSaveGameMetaData                         MetaData;                                                 // 0x0070(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.RespawnInstanceDataBlueprintRef
// 0x0010
struct FRespawnInstanceDataBlueprintRef
{
	class AActor*                                      InstanceDataOwner;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InstanceDataUID;                                          // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

struct FRsAISpawnerRef : public FRespawnInstanceDataBlueprintRef
{

};

USTRUCT(BlueprintType)
struct FRsMapSectionTag
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsMapSectionTag")
	FName                                       WorldName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsMapSectionTag")
	FName                                       RegionName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FRsMapSectionTag")
	int                                      SectionIndex;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
};