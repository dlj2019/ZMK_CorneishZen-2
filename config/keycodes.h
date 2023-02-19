
#define _________ &none
#define X_______X &trans
#define ___TEMP__ &none

#define ____A____ &kp A
#define ____B____ &kp B
#define ____C____ &kp C
#define ____D____ &kp D
#define ____E____ &kp E
#define ____F____ &kp F
#define ____G____ &kp G
#define ____H____ &kp H
#define ____I____ &kp I
#define ____J____ &kp J
#define ____K____ &kp K
#define ____L____ &kp L
#define ____M____ &kp M
#define ____N____ &kp N
#define ____O____ &kp O
#define ____P____ &kp P
#define ____Q____ &kp Q
#define ____R____ &kp R
#define ____S____ &kp S
#define ____T____ &kp T
#define ____U____ &kp U
#define ____V____ &kp V
#define ____W____ &kp W
#define ____X____ &kp X
#define ____Y____ &kp Y
#define ____Z____ &kp Z
#define ____1____ &kp NUMBER_1
#define ____2____ &kp NUMBER_2
#define ____3____ &kp NUMBER_3
#define ____4____ &kp NUMBER_4
#define ____5____ &kp NUMBER_5
#define ____6____ &kp NUMBER_6
#define ____7____ &kp NUMBER_7
#define ____8____ &kp NUMBER_8
#define ____9____ &kp NUMBER_9
#define ____0____ &kp NUMBER_0

#define KC_PERCENT   LS(NUMBER_5)            // %
#define _PERCENT_    &kp KC_PERCENT          // %
#define KC_SLASH     LS(NUMBER_7)            //  /
#define __SLASH__    &kp KC_SLASH            //  /
#define KC_BSLASH    RA(GRAVE)               //  
#define __BSLASH_    &kp KC_BSLASH           //  
#define KC_ASTRSK    LS(RIGHT_BRACKET)       // *
#define _ASTRSK__    &kp KC_ASTRSK           // *
//#define _MULTDIV_ &kp 
#define KC_EXCLAM    LS(NUMBER_1)            // !
#define _EXCLAM__    &kp KC_EXCLAM           // !
#define KC_OEXCLAM   EQUAL                   // ¡
#define _OEXCLAM_    &kp KC_OEXCLAM          // ¡
#define KC_PLUS      RIGHT_BRACKET           // +
#define ___PLUS__    &kp KC_PLUS             // +
#define KC_MINUS     SLASH                   // -
#define __MINUS__    &kp KC_MINUS            // -
#define KC_EQUAL     LS(NUMBER_0)            // =
#define __EQUAL__    &kp KC_EQUAL            // =
#define KC_EUR       RA(NUMBER_5)            // €
#define ___EUR___    &kp KC_EUR              // €
//#define _APPROX__ &kp                      // ~ ±
#define KC_UNDSC     &kp LS(SLASH)           // __
#define __UNDSC__    &kp KC_UNDSC            // __
//#define _LSSEQUL_ &kp 




#define ___TAB___    &kp TAB
#define __LSHFT__    &kp LSHIFT
#define __RSHFT__    &kp RSHIFT
#define __LCTRL__    &kp LCTRL
#define __RCTRL__    &kp RCTRL
#define ___LALT__    &kp LALT
#define ___RALT__    &kp RALT
#define __BKSPC__    &kp BACKSPACE
#define ___DEL___    &kp DELETE
#define __ENTER__    &kp ENTER
#define __LWIN___    &kp LEFT_WIN
#define __RWIN___    &kp RIGHT_WIN
#define __MENU___    &kp K_CONTEXT_MENU
#define ___ESC___    &kp ESC
#define __COMMA__    &kp COMMA
#define ___DOT___    &kp DOT
#define ___SPC___    &kp SPACE
#define ___RPT___    &key_repeat
#define _CAPSLCK_    &kp CAPSLOCK

#define KC_QUEST     LS(MINUS)             //  ?
#define __QUEST__    &kp KC_QUEST          //  ?
#define KC_OQUEST    LS(PLUS)              //  ¿
#define _OQUEST__    &kp KC_OQUEST         //  ¿
#define KC_QUOT      MINUS                 //  '
#define __QUOT___    KC_QUOT               //  ' `
#define KC_DQUOT     LS(NUMBER_2)          //  "
#define __DQUOT__    &kp KC_DQUOT          //  "
#define KC_ACCENT    LEFT_BRACKET          //  ^ → SPC   macro is needed
#define KC_ACUTE     LS(LEFT_BRACKET)      //  ^ → SPC   macro is needed
#define __ACUTE__    &kp KC_ACUTE          //  ^ → SPC   macro is needed
#define KC_ORDINAL    GRAVE                //  º
#define _ORDINAL_    &kp KC_ORDINAL        //  º
#define KC_ACCLTR    APOSTROPHE            //  ´


#define __LEFT___    &kp LEFT_ARROW
#define __DOWN___    &kp DOWN_ARROW
#define ___UP____    &kp UP_ARROW
#define __RIGHT__    &kp RIGHT_ARROW
#define __INSRT__    &kp INSERT
#define ___INI___    &kp HOME
#define ___END___    &kp END
#define __PGUP___    &kp PAGE_UP
#define __PGDN___    &kp PAGE_DOWN
#define __BOOTL__    &bootloader
#define __RESET__    &reset

#define __REDO___    &kp LC(Y)
#define __UNDO___    &kp LC(Z)
#define ___CUT___    &kp LC(X)
#define __COPY___    &kp LC(C)
#define __PASTE__    &kp LC(V)
#define _SLCTALL_    &kp LC(A)

// LAYER TAPS
#define _NAVREP__    &td_nav_rep_npad_togglenpad      // NAV-REP + NPADoREP + TOGGLENPAD
#define _NUMSPC__    &lt NUM SPACE

// MOD TAPS
//#define _RCTLACC_    &lt NUM SPACE


// MOD TAPS
#define __ALTAB__ &mt LALT TAB
#define _RCTLACC_ &ht_custom_mod_toggle RCTRL ACCENTS     // RCTRL → TOGGLE LANGUAGE LAYER


// ACCENTS
//#define __ACC_A__ &ht_accent_a mm_accent_a A
#define __ACC_A__ &ht_accent_a 0 A
#define __ACC_E__ &ht_accent_e 0 E
#define __ACC_I__ &ht_accent_i 0 I
#define __ACC_O__ &ht_accent_o 0 O
#define __ACC_U__ &td_accent_dier_u
#define KC_ENE    SEMICOLON
#define _ACC_ENE_ &ht_custom_tap_tap KC_ENE N // &kp KC_ENE



// HOLD TO TAP
#define _QUOTACC_ &ht_quotes_accent 0 0     //  ' ` " ^
#define _SLSHCOM_ &ht_slash_comments 0 0    // SLASH + open/close comments macro
#define _QUSTCLM_ &ht_quest_exclam 0 0      //  ? ¿ ! ¡
//#define _CPYSLAL_ &ht_hold_to_tap LC(A) LC(C)   //  COPY → SELECTALL
//#define _PASTEF2_ &ht_hold_to_tap F2 LC(V)   //  PASTE → F2
//#define _SRCHENT_ &ht_hold_to_tap LC(F) ENTER    //  ENTER → SEARCH
//#define _ESCMENU_ &ht_hold_to_tap K_CONTEXT_MENU ESC   //  MENU → ESC
#define _CPYSLAL_ &ht_custom_tap_tap LC(A) LC(C)   //  COPY → SELECTALL
#define _PASTEF2_ &ht_custom_tap_tap F2 LC(V)   //  PASTE → F2
#define _SRCHENT_ &ht_custom_tap_tap LC(F) ENTER    //  ENTER → SEARCH
#define _ESCMENU_ &ht_custom_tap_tap K_CONTEXT_MENU ESC   //  MENU → ESC



//#define __TEST1__ &ht_rctl_accents RCTRL ACCENTS
#define __TEST1__ &mm_accent_u
//#define __TEST2__ &ht_nav_rep A NUM
//#define __TEST2__ &ht_nav_rep NUM K
#define __TEST2__ &mm_dier_u
#define __TEST3__ &ht_accent_u 0 U
#define __TEST4__ &td_accent_dier_u //&ht_accent_u

