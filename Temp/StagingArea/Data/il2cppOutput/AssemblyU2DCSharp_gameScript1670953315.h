#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t2241232412;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameScript
struct  gameScript_t1670953315  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject gameScript::square1
	GameObject_t1756533147 * ___square1_2;
	// UnityEngine.GameObject gameScript::square2
	GameObject_t1756533147 * ___square2_3;
	// UnityEngine.GameObject gameScript::square3
	GameObject_t1756533147 * ___square3_4;
	// UnityEngine.GameObject gameScript::square4
	GameObject_t1756533147 * ___square4_5;
	// UnityEngine.GameObject gameScript::coverer
	GameObject_t1756533147 * ___coverer_6;
	// UnityEngine.GameObject gameScript::selected
	GameObject_t1756533147 * ___selected_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> gameScript::toBeDestroyed
	List_1_t1125654279 * ___toBeDestroyed_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> gameScript::killed
	List_1_t2241232412 * ___killed_9;
	// UnityEngine.UI.Button gameScript::startScreen
	Button_t2872111280 * ___startScreen_10;
	// UnityEngine.UI.Button gameScript::screenRobberTurn
	Button_t2872111280 * ___screenRobberTurn_11;
	// UnityEngine.UI.Button gameScript::screenBankerTurn
	Button_t2872111280 * ___screenBankerTurn_12;
	// UnityEngine.UI.Button gameScript::endScreenBanker
	Button_t2872111280 * ___endScreenBanker_13;
	// UnityEngine.UI.Button gameScript::endScreenRobber
	Button_t2872111280 * ___endScreenRobber_14;
	// UnityEngine.UI.Button gameScript::endScreenTie
	Button_t2872111280 * ___endScreenTie_15;
	// UnityEngine.GameObject gameScript::cashOutSquare1
	GameObject_t1756533147 * ___cashOutSquare1_16;
	// UnityEngine.GameObject gameScript::cashOutSquare2
	GameObject_t1756533147 * ___cashOutSquare2_17;
	// UnityEngine.GameObject gameScript::cashOutSquare3
	GameObject_t1756533147 * ___cashOutSquare3_18;
	// UnityEngine.GameObject gameScript::cashOutSquare4
	GameObject_t1756533147 * ___cashOutSquare4_19;
	// UnityEngine.UI.Button gameScript::OK
	Button_t2872111280 * ___OK_20;
	// UnityEngine.UI.Button gameScript::button1
	Button_t2872111280 * ___button1_21;
	// UnityEngine.UI.Button gameScript::button2
	Button_t2872111280 * ___button2_22;
	// UnityEngine.UI.Button gameScript::button3
	Button_t2872111280 * ___button3_23;
	// UnityEngine.UI.Button gameScript::button4
	Button_t2872111280 * ___button4_24;
	// UnityEngine.UI.Text gameScript::ScoreText
	Text_t356221433 * ___ScoreText_25;
	// UnityEngine.UI.Text gameScript::turnText
	Text_t356221433 * ___turnText_26;
	// UnityEngine.UI.Text gameScript::note
	Text_t356221433 * ___note_27;
	// System.String gameScript::targetLayer
	String_t* ___targetLayer_28;
	// System.String gameScript::mode
	String_t* ___mode_29;
	// System.Int32 gameScript::prevNumItems
	int32_t ___prevNumItems_30;
	// System.Int32 gameScript::numItems
	int32_t ___numItems_31;
	// System.Int32 gameScript::itemsLeft
	int32_t ___itemsLeft_32;
	// System.Int32 gameScript::robberScore
	int32_t ___robberScore_33;
	// System.Int32 gameScript::bankerScore
	int32_t ___bankerScore_34;
	// System.Int32 gameScript::turnsLeft
	int32_t ___turnsLeft_35;
	// System.Int32 gameScript::bankerInitialScore
	int32_t ___bankerInitialScore_36;
	// System.Int32 gameScript::destroyedNumber
	int32_t ___destroyedNumber_37;
	// System.Int32 gameScript::bombScore
	int32_t ___bombScore_38;
	// System.Int32 gameScript::bombStored
	int32_t ___bombStored_39;
	// System.Int32 gameScript::cashedOut
	int32_t ___cashedOut_40;

public:
	inline static int32_t get_offset_of_square1_2() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___square1_2)); }
	inline GameObject_t1756533147 * get_square1_2() const { return ___square1_2; }
	inline GameObject_t1756533147 ** get_address_of_square1_2() { return &___square1_2; }
	inline void set_square1_2(GameObject_t1756533147 * value)
	{
		___square1_2 = value;
		Il2CppCodeGenWriteBarrier(&___square1_2, value);
	}

	inline static int32_t get_offset_of_square2_3() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___square2_3)); }
	inline GameObject_t1756533147 * get_square2_3() const { return ___square2_3; }
	inline GameObject_t1756533147 ** get_address_of_square2_3() { return &___square2_3; }
	inline void set_square2_3(GameObject_t1756533147 * value)
	{
		___square2_3 = value;
		Il2CppCodeGenWriteBarrier(&___square2_3, value);
	}

	inline static int32_t get_offset_of_square3_4() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___square3_4)); }
	inline GameObject_t1756533147 * get_square3_4() const { return ___square3_4; }
	inline GameObject_t1756533147 ** get_address_of_square3_4() { return &___square3_4; }
	inline void set_square3_4(GameObject_t1756533147 * value)
	{
		___square3_4 = value;
		Il2CppCodeGenWriteBarrier(&___square3_4, value);
	}

	inline static int32_t get_offset_of_square4_5() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___square4_5)); }
	inline GameObject_t1756533147 * get_square4_5() const { return ___square4_5; }
	inline GameObject_t1756533147 ** get_address_of_square4_5() { return &___square4_5; }
	inline void set_square4_5(GameObject_t1756533147 * value)
	{
		___square4_5 = value;
		Il2CppCodeGenWriteBarrier(&___square4_5, value);
	}

	inline static int32_t get_offset_of_coverer_6() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___coverer_6)); }
	inline GameObject_t1756533147 * get_coverer_6() const { return ___coverer_6; }
	inline GameObject_t1756533147 ** get_address_of_coverer_6() { return &___coverer_6; }
	inline void set_coverer_6(GameObject_t1756533147 * value)
	{
		___coverer_6 = value;
		Il2CppCodeGenWriteBarrier(&___coverer_6, value);
	}

	inline static int32_t get_offset_of_selected_7() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___selected_7)); }
	inline GameObject_t1756533147 * get_selected_7() const { return ___selected_7; }
	inline GameObject_t1756533147 ** get_address_of_selected_7() { return &___selected_7; }
	inline void set_selected_7(GameObject_t1756533147 * value)
	{
		___selected_7 = value;
		Il2CppCodeGenWriteBarrier(&___selected_7, value);
	}

	inline static int32_t get_offset_of_toBeDestroyed_8() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___toBeDestroyed_8)); }
	inline List_1_t1125654279 * get_toBeDestroyed_8() const { return ___toBeDestroyed_8; }
	inline List_1_t1125654279 ** get_address_of_toBeDestroyed_8() { return &___toBeDestroyed_8; }
	inline void set_toBeDestroyed_8(List_1_t1125654279 * value)
	{
		___toBeDestroyed_8 = value;
		Il2CppCodeGenWriteBarrier(&___toBeDestroyed_8, value);
	}

	inline static int32_t get_offset_of_killed_9() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___killed_9)); }
	inline List_1_t2241232412 * get_killed_9() const { return ___killed_9; }
	inline List_1_t2241232412 ** get_address_of_killed_9() { return &___killed_9; }
	inline void set_killed_9(List_1_t2241232412 * value)
	{
		___killed_9 = value;
		Il2CppCodeGenWriteBarrier(&___killed_9, value);
	}

	inline static int32_t get_offset_of_startScreen_10() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___startScreen_10)); }
	inline Button_t2872111280 * get_startScreen_10() const { return ___startScreen_10; }
	inline Button_t2872111280 ** get_address_of_startScreen_10() { return &___startScreen_10; }
	inline void set_startScreen_10(Button_t2872111280 * value)
	{
		___startScreen_10 = value;
		Il2CppCodeGenWriteBarrier(&___startScreen_10, value);
	}

	inline static int32_t get_offset_of_screenRobberTurn_11() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___screenRobberTurn_11)); }
	inline Button_t2872111280 * get_screenRobberTurn_11() const { return ___screenRobberTurn_11; }
	inline Button_t2872111280 ** get_address_of_screenRobberTurn_11() { return &___screenRobberTurn_11; }
	inline void set_screenRobberTurn_11(Button_t2872111280 * value)
	{
		___screenRobberTurn_11 = value;
		Il2CppCodeGenWriteBarrier(&___screenRobberTurn_11, value);
	}

	inline static int32_t get_offset_of_screenBankerTurn_12() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___screenBankerTurn_12)); }
	inline Button_t2872111280 * get_screenBankerTurn_12() const { return ___screenBankerTurn_12; }
	inline Button_t2872111280 ** get_address_of_screenBankerTurn_12() { return &___screenBankerTurn_12; }
	inline void set_screenBankerTurn_12(Button_t2872111280 * value)
	{
		___screenBankerTurn_12 = value;
		Il2CppCodeGenWriteBarrier(&___screenBankerTurn_12, value);
	}

	inline static int32_t get_offset_of_endScreenBanker_13() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___endScreenBanker_13)); }
	inline Button_t2872111280 * get_endScreenBanker_13() const { return ___endScreenBanker_13; }
	inline Button_t2872111280 ** get_address_of_endScreenBanker_13() { return &___endScreenBanker_13; }
	inline void set_endScreenBanker_13(Button_t2872111280 * value)
	{
		___endScreenBanker_13 = value;
		Il2CppCodeGenWriteBarrier(&___endScreenBanker_13, value);
	}

	inline static int32_t get_offset_of_endScreenRobber_14() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___endScreenRobber_14)); }
	inline Button_t2872111280 * get_endScreenRobber_14() const { return ___endScreenRobber_14; }
	inline Button_t2872111280 ** get_address_of_endScreenRobber_14() { return &___endScreenRobber_14; }
	inline void set_endScreenRobber_14(Button_t2872111280 * value)
	{
		___endScreenRobber_14 = value;
		Il2CppCodeGenWriteBarrier(&___endScreenRobber_14, value);
	}

	inline static int32_t get_offset_of_endScreenTie_15() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___endScreenTie_15)); }
	inline Button_t2872111280 * get_endScreenTie_15() const { return ___endScreenTie_15; }
	inline Button_t2872111280 ** get_address_of_endScreenTie_15() { return &___endScreenTie_15; }
	inline void set_endScreenTie_15(Button_t2872111280 * value)
	{
		___endScreenTie_15 = value;
		Il2CppCodeGenWriteBarrier(&___endScreenTie_15, value);
	}

	inline static int32_t get_offset_of_cashOutSquare1_16() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___cashOutSquare1_16)); }
	inline GameObject_t1756533147 * get_cashOutSquare1_16() const { return ___cashOutSquare1_16; }
	inline GameObject_t1756533147 ** get_address_of_cashOutSquare1_16() { return &___cashOutSquare1_16; }
	inline void set_cashOutSquare1_16(GameObject_t1756533147 * value)
	{
		___cashOutSquare1_16 = value;
		Il2CppCodeGenWriteBarrier(&___cashOutSquare1_16, value);
	}

	inline static int32_t get_offset_of_cashOutSquare2_17() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___cashOutSquare2_17)); }
	inline GameObject_t1756533147 * get_cashOutSquare2_17() const { return ___cashOutSquare2_17; }
	inline GameObject_t1756533147 ** get_address_of_cashOutSquare2_17() { return &___cashOutSquare2_17; }
	inline void set_cashOutSquare2_17(GameObject_t1756533147 * value)
	{
		___cashOutSquare2_17 = value;
		Il2CppCodeGenWriteBarrier(&___cashOutSquare2_17, value);
	}

	inline static int32_t get_offset_of_cashOutSquare3_18() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___cashOutSquare3_18)); }
	inline GameObject_t1756533147 * get_cashOutSquare3_18() const { return ___cashOutSquare3_18; }
	inline GameObject_t1756533147 ** get_address_of_cashOutSquare3_18() { return &___cashOutSquare3_18; }
	inline void set_cashOutSquare3_18(GameObject_t1756533147 * value)
	{
		___cashOutSquare3_18 = value;
		Il2CppCodeGenWriteBarrier(&___cashOutSquare3_18, value);
	}

	inline static int32_t get_offset_of_cashOutSquare4_19() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___cashOutSquare4_19)); }
	inline GameObject_t1756533147 * get_cashOutSquare4_19() const { return ___cashOutSquare4_19; }
	inline GameObject_t1756533147 ** get_address_of_cashOutSquare4_19() { return &___cashOutSquare4_19; }
	inline void set_cashOutSquare4_19(GameObject_t1756533147 * value)
	{
		___cashOutSquare4_19 = value;
		Il2CppCodeGenWriteBarrier(&___cashOutSquare4_19, value);
	}

	inline static int32_t get_offset_of_OK_20() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___OK_20)); }
	inline Button_t2872111280 * get_OK_20() const { return ___OK_20; }
	inline Button_t2872111280 ** get_address_of_OK_20() { return &___OK_20; }
	inline void set_OK_20(Button_t2872111280 * value)
	{
		___OK_20 = value;
		Il2CppCodeGenWriteBarrier(&___OK_20, value);
	}

	inline static int32_t get_offset_of_button1_21() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___button1_21)); }
	inline Button_t2872111280 * get_button1_21() const { return ___button1_21; }
	inline Button_t2872111280 ** get_address_of_button1_21() { return &___button1_21; }
	inline void set_button1_21(Button_t2872111280 * value)
	{
		___button1_21 = value;
		Il2CppCodeGenWriteBarrier(&___button1_21, value);
	}

	inline static int32_t get_offset_of_button2_22() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___button2_22)); }
	inline Button_t2872111280 * get_button2_22() const { return ___button2_22; }
	inline Button_t2872111280 ** get_address_of_button2_22() { return &___button2_22; }
	inline void set_button2_22(Button_t2872111280 * value)
	{
		___button2_22 = value;
		Il2CppCodeGenWriteBarrier(&___button2_22, value);
	}

	inline static int32_t get_offset_of_button3_23() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___button3_23)); }
	inline Button_t2872111280 * get_button3_23() const { return ___button3_23; }
	inline Button_t2872111280 ** get_address_of_button3_23() { return &___button3_23; }
	inline void set_button3_23(Button_t2872111280 * value)
	{
		___button3_23 = value;
		Il2CppCodeGenWriteBarrier(&___button3_23, value);
	}

	inline static int32_t get_offset_of_button4_24() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___button4_24)); }
	inline Button_t2872111280 * get_button4_24() const { return ___button4_24; }
	inline Button_t2872111280 ** get_address_of_button4_24() { return &___button4_24; }
	inline void set_button4_24(Button_t2872111280 * value)
	{
		___button4_24 = value;
		Il2CppCodeGenWriteBarrier(&___button4_24, value);
	}

	inline static int32_t get_offset_of_ScoreText_25() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___ScoreText_25)); }
	inline Text_t356221433 * get_ScoreText_25() const { return ___ScoreText_25; }
	inline Text_t356221433 ** get_address_of_ScoreText_25() { return &___ScoreText_25; }
	inline void set_ScoreText_25(Text_t356221433 * value)
	{
		___ScoreText_25 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreText_25, value);
	}

	inline static int32_t get_offset_of_turnText_26() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___turnText_26)); }
	inline Text_t356221433 * get_turnText_26() const { return ___turnText_26; }
	inline Text_t356221433 ** get_address_of_turnText_26() { return &___turnText_26; }
	inline void set_turnText_26(Text_t356221433 * value)
	{
		___turnText_26 = value;
		Il2CppCodeGenWriteBarrier(&___turnText_26, value);
	}

	inline static int32_t get_offset_of_note_27() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___note_27)); }
	inline Text_t356221433 * get_note_27() const { return ___note_27; }
	inline Text_t356221433 ** get_address_of_note_27() { return &___note_27; }
	inline void set_note_27(Text_t356221433 * value)
	{
		___note_27 = value;
		Il2CppCodeGenWriteBarrier(&___note_27, value);
	}

	inline static int32_t get_offset_of_targetLayer_28() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___targetLayer_28)); }
	inline String_t* get_targetLayer_28() const { return ___targetLayer_28; }
	inline String_t** get_address_of_targetLayer_28() { return &___targetLayer_28; }
	inline void set_targetLayer_28(String_t* value)
	{
		___targetLayer_28 = value;
		Il2CppCodeGenWriteBarrier(&___targetLayer_28, value);
	}

	inline static int32_t get_offset_of_mode_29() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___mode_29)); }
	inline String_t* get_mode_29() const { return ___mode_29; }
	inline String_t** get_address_of_mode_29() { return &___mode_29; }
	inline void set_mode_29(String_t* value)
	{
		___mode_29 = value;
		Il2CppCodeGenWriteBarrier(&___mode_29, value);
	}

	inline static int32_t get_offset_of_prevNumItems_30() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___prevNumItems_30)); }
	inline int32_t get_prevNumItems_30() const { return ___prevNumItems_30; }
	inline int32_t* get_address_of_prevNumItems_30() { return &___prevNumItems_30; }
	inline void set_prevNumItems_30(int32_t value)
	{
		___prevNumItems_30 = value;
	}

	inline static int32_t get_offset_of_numItems_31() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___numItems_31)); }
	inline int32_t get_numItems_31() const { return ___numItems_31; }
	inline int32_t* get_address_of_numItems_31() { return &___numItems_31; }
	inline void set_numItems_31(int32_t value)
	{
		___numItems_31 = value;
	}

	inline static int32_t get_offset_of_itemsLeft_32() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___itemsLeft_32)); }
	inline int32_t get_itemsLeft_32() const { return ___itemsLeft_32; }
	inline int32_t* get_address_of_itemsLeft_32() { return &___itemsLeft_32; }
	inline void set_itemsLeft_32(int32_t value)
	{
		___itemsLeft_32 = value;
	}

	inline static int32_t get_offset_of_robberScore_33() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___robberScore_33)); }
	inline int32_t get_robberScore_33() const { return ___robberScore_33; }
	inline int32_t* get_address_of_robberScore_33() { return &___robberScore_33; }
	inline void set_robberScore_33(int32_t value)
	{
		___robberScore_33 = value;
	}

	inline static int32_t get_offset_of_bankerScore_34() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___bankerScore_34)); }
	inline int32_t get_bankerScore_34() const { return ___bankerScore_34; }
	inline int32_t* get_address_of_bankerScore_34() { return &___bankerScore_34; }
	inline void set_bankerScore_34(int32_t value)
	{
		___bankerScore_34 = value;
	}

	inline static int32_t get_offset_of_turnsLeft_35() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___turnsLeft_35)); }
	inline int32_t get_turnsLeft_35() const { return ___turnsLeft_35; }
	inline int32_t* get_address_of_turnsLeft_35() { return &___turnsLeft_35; }
	inline void set_turnsLeft_35(int32_t value)
	{
		___turnsLeft_35 = value;
	}

	inline static int32_t get_offset_of_bankerInitialScore_36() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___bankerInitialScore_36)); }
	inline int32_t get_bankerInitialScore_36() const { return ___bankerInitialScore_36; }
	inline int32_t* get_address_of_bankerInitialScore_36() { return &___bankerInitialScore_36; }
	inline void set_bankerInitialScore_36(int32_t value)
	{
		___bankerInitialScore_36 = value;
	}

	inline static int32_t get_offset_of_destroyedNumber_37() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___destroyedNumber_37)); }
	inline int32_t get_destroyedNumber_37() const { return ___destroyedNumber_37; }
	inline int32_t* get_address_of_destroyedNumber_37() { return &___destroyedNumber_37; }
	inline void set_destroyedNumber_37(int32_t value)
	{
		___destroyedNumber_37 = value;
	}

	inline static int32_t get_offset_of_bombScore_38() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___bombScore_38)); }
	inline int32_t get_bombScore_38() const { return ___bombScore_38; }
	inline int32_t* get_address_of_bombScore_38() { return &___bombScore_38; }
	inline void set_bombScore_38(int32_t value)
	{
		___bombScore_38 = value;
	}

	inline static int32_t get_offset_of_bombStored_39() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___bombStored_39)); }
	inline int32_t get_bombStored_39() const { return ___bombStored_39; }
	inline int32_t* get_address_of_bombStored_39() { return &___bombStored_39; }
	inline void set_bombStored_39(int32_t value)
	{
		___bombStored_39 = value;
	}

	inline static int32_t get_offset_of_cashedOut_40() { return static_cast<int32_t>(offsetof(gameScript_t1670953315, ___cashedOut_40)); }
	inline int32_t get_cashedOut_40() const { return ___cashedOut_40; }
	inline int32_t* get_address_of_cashedOut_40() { return &___cashedOut_40; }
	inline void set_cashedOut_40(int32_t value)
	{
		___cashedOut_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
