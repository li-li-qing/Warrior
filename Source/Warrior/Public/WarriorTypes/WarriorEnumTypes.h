#pragma once
// 这个文件是为了给函数创建一个执行引脚

// 关于 战士确认的类型
UENUM()
enum class EWarriorConfirmType :uint8
{
	Yes,
	No
};


// 关于 战士是否有效的类型
UENUM()
enum class EWarriorValidType :uint8
{
	Valid,
	InValid
};

// 战士 GameplayEffect
UENUM()
enum class EWarriorSuccessType :uint8
{
	Seccessful,
	Failed
};

UENUM()
enum class EWarriorCountDownActionInput : uint8
{
	Start,   // 表示开始倒计时
	Cancel   // 表示取消倒计时
};


UENUM()
enum class EWarriorCountDownActionOutput : uint8
{
	Update,     // 表示倒计时正在更新
	Completed,  // 表示倒计时已完成
	Cancelled   // 表示倒计时被取消
};



// 文件: WarriorEnumTypes.h
// 功能简述：定义游戏难度等级。
// 详细注释：游戏难度枚举，用于根据选定的难度调整游戏中敌人的行为和游戏机制。
UENUM(BlueprintType)
enum class EWarriorGameDifficulty : uint8
{
	Easy UMETA(DisplayName = "简单"),          // 简单模式：敌人攻击力低，生命值低，适合新手玩家。
	Normal UMETA(DisplayName = "普通"),        // 普通模式：平衡的敌人攻击力和生命值，适合有一定经验的玩家。
	Hard UMETA(DisplayName = "困难"),          // 困难模式：敌人攻击力和生命值较高，需要玩家有较好的操作技能。
	VeryHard UMETA(DisplayName = "非常困难")   // 非常困难模式：敌人攻击力和生命值极高，挑战极大，适合寻求极端挑战的玩家。
};


UENUM(BlueprintType)
enum class EWarriorInputMode :uint8 
{
	GameOnly,
	UIOnly
};