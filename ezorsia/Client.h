#pragma once
class Client
{
public:
	static void UpdateGameStartup();
	static void EnableNewIGCipher();
	static void UpdateResolution();
	static void UpdateLogin();
	static void FixMouseWheel();
	static void LongQuickSlot();
	static void FixDateFormat();
	static void FixItemType();
	static void JumpCap();
	static void FixChatPosHook();
	static void CRCBypass();
	static void NoPassword();
	static void MoreHook();
	static void Skill();
	static const int m_nIGCipherHash = 0XC65053F2;
	static int m_nGameHeight;
	static int m_nGameWidth;
	static int MsgAmount;
	static bool CustomLoginFrame;
	static bool WindowedMode;
	static bool RemoveLogos;
	static int setDamageCap;
	static int setMAtkCap;
	static int setAccCap;
	static int setAvdCap;
	static double setAtkOutCap;
	static bool longEXP;
	static bool shortLevel;
	static bool useTubi;
	static bool bigLoginFrame;
	static bool SwitchChinese;
	static bool debug;
	static bool noPassword;
	static bool climbSpeedAuto;
	static float climbSpeed;
	static int speedMovementCap;
	static DWORD jumpCap;
	static std::string ServerIP_AddressFromINI;
	static bool ServerIP_Address_hook;
	static bool canInjected;
	static bool injected;
	static bool ijl15hook;
	static int serverIP_Port;
	static bool talkRepeat;
	static int talkTime;
	static bool showItemID;
	static bool showWeaponSpeed;
	static bool meleePunching;
	static int StatBackgrndWidth;
	static int StatDetailBackgrndWidth;
	static int StatDetailBackgrndWidthRect;
	static int DamageSkin;
	static bool RemoteDamageSkin;
	static bool s4221001;
	static bool s4221007;
	static bool s14101004;
};