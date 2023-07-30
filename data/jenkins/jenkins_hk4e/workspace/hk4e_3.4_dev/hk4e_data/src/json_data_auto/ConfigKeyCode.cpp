// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigKeyCode.cpp

// Line 19: range 0000000011F3471B-0000000011F35878
const char *__cdecl data::enumValToStr(data::ConfigKeyCode e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  switch ( e )
  {
    case None_64:
      result = "None";
      break;
    case Backspace:
      result = "Backspace";
      break;
    case Tab:
      result = off_1A8B34E0;
      break;
    case Clear:
      result = "Clear";
      break;
    case Return_0:
      result = "Return";
      break;
    case Pause:
      result = "Pause";
      break;
    case Escape:
      result = "Escape";
      break;
    case Space_0:
      result = "Space";
      break;
    case Exclaim:
      result = "Exclaim";
      break;
    case DoubleQuote:
      result = "DoubleQuote";
      break;
    case Hash:
      result = "Hash";
      break;
    case Dollar:
      result = "Dollar";
      break;
    case Ampersand:
      result = "Ampersand";
      break;
    case Quote:
      result = "Quote";
      break;
    case LeftParen:
      result = "LeftParen";
      break;
    case RightParen:
      result = "RightParen";
      break;
    case Asterisk:
      result = "Asterisk";
      break;
    case Plus:
      result = "Plus";
      break;
    case Comma:
      result = "Comma";
      break;
    case Minus:
      result = "Minus";
      break;
    case Period:
      result = "Period";
      break;
    case Slash_0:
      result = "Slash";
      break;
    case Alpha0:
      result = "Alpha0";
      break;
    case Alpha1:
      result = "Alpha1";
      break;
    case Alpha2:
      result = "Alpha2";
      break;
    case Alpha3:
      result = "Alpha3";
      break;
    case Alpha4:
      result = "Alpha4";
      break;
    case Alpha5:
      result = "Alpha5";
      break;
    case Alpha6:
      result = "Alpha6";
      break;
    case Alpha7:
      result = "Alpha7";
      break;
    case Alpha8:
      result = "Alpha8";
      break;
    case Alpha9:
      result = "Alpha9";
      break;
    case Colon:
      result = "Colon";
      break;
    case Semicolon:
      result = "Semicolon";
      break;
    case Less_2:
      result = "Less";
      break;
    case Equals:
      result = "Equals";
      break;
    case Greater_4:
      result = "Greater";
      break;
    case Question:
      result = "Question";
      break;
    case At:
      result = "At";
      break;
    case LeftBracket:
      result = "LeftBracket";
      break;
    case Backslash:
      result = "Backslash";
      break;
    case RightBracket:
      result = "RightBracket";
      break;
    case Caret:
      result = "Caret";
      break;
    case Underscore:
      result = "Underscore";
      break;
    case BackQuote:
      result = "BackQuote";
      break;
    case A_0:
      result = "A";
      break;
    case B_0:
      result = "B";
      break;
    case C:
      result = "C";
      break;
    case D:
      result = "D";
      break;
    case E_0:
      result = "E";
      break;
    case F:
      result = "F";
      break;
    case G:
      result = "G";
      break;
    case H:
      result = "H";
      break;
    case I:
      result = "I";
      break;
    case J:
      result = "J";
      break;
    case K:
      result = "K";
      break;
    case L_0:
      result = "L";
      break;
    case M:
      result = "M";
      break;
    case N_0:
      result = "N";
      break;
    case O:
      result = "O";
      break;
    case P:
      result = "P";
      break;
    case Q_0:
      result = "Q";
      break;
    case R_0:
      result = "R";
      break;
    case S:
      result = "S";
      break;
    case T_0:
      result = "T";
      break;
    case U:
      result = "U";
      break;
    case V:
      result = "V";
      break;
    case W:
      result = "W";
      break;
    case X_0:
      result = "X";
      break;
    case Y_1:
      result = "Y";
      break;
    case Z_0:
      result = "Z";
      break;
    case Delete:
      result = "Delete";
      break;
    case Keypad0:
      result = "Keypad0";
      break;
    case Keypad1:
      result = "Keypad1";
      break;
    case Keypad2:
      result = "Keypad2";
      break;
    case Keypad3:
      result = "Keypad3";
      break;
    case Keypad4:
      result = "Keypad4";
      break;
    case Keypad5:
      result = "Keypad5";
      break;
    case Keypad6:
      result = "Keypad6";
      break;
    case Keypad7:
      result = "Keypad7";
      break;
    case Keypad8:
      result = "Keypad8";
      break;
    case Keypad9:
      result = "Keypad9";
      break;
    case KeypadPeriod:
      result = "KeypadPeriod";
      break;
    case KeypadDivide:
      result = "KeypadDivide";
      break;
    case KeypadMultiply:
      result = "KeypadMultiply";
      break;
    case KeypadMinus:
      result = "KeypadMinus";
      break;
    case KeypadPlus:
      result = "KeypadPlus";
      break;
    case KeypadEnter:
      result = "KeypadEnter";
      break;
    case KeypadEquals:
      result = "KeypadEquals";
      break;
    case UpArrow:
      result = "UpArrow";
      break;
    case DownArrow:
      result = "DownArrow";
      break;
    case RightArrow:
      result = "RightArrow";
      break;
    case LeftArrow:
      result = "LeftArrow";
      break;
    case Insert:
      result = "Insert";
      break;
    case Home:
      result = "Home";
      break;
    case End_0:
      result = off_1A8B4C20;
      break;
    case PageUp:
      result = "PageUp";
      break;
    case PageDown:
      result = "PageDown";
      break;
    case F1_0:
      result = "F1";
      break;
    case F2_0:
      result = "F2";
      break;
    case F3_0:
      result = "F3";
      break;
    case F4:
      result = "F4";
      break;
    case F5:
      result = "F5";
      break;
    case F6:
      result = "F6";
      break;
    case F7:
      result = "F7";
      break;
    case F8:
      result = "F8";
      break;
    case F9:
      result = "F9";
      break;
    case F10:
      result = "F10";
      break;
    case F11:
      result = "F11";
      break;
    case F12:
      result = "F12";
      break;
    case F13:
      result = "F13";
      break;
    case F14:
      result = "F14";
      break;
    case F15:
      result = "F15";
      break;
    case Numlock:
      result = "Numlock";
      break;
    case CapsLock:
      result = "CapsLock";
      break;
    case ScrollLock:
      result = "ScrollLock";
      break;
    case RightShift:
      result = "RightShift";
      break;
    case LeftShift:
      result = "LeftShift";
      break;
    case RightControl:
      result = "RightControl";
      break;
    case LeftControl_0:
      result = "LeftControl";
      break;
    case RightAlt:
      result = "RightAlt";
      break;
    case LeftAlt:
      result = "LeftAlt";
      break;
    case RightCommand:
      result = "RightCommand";
      break;
    case LeftCommand:
      result = "LeftCommand";
      break;
    case LeftWindows:
      result = "LeftWindows";
      break;
    case RightWindows:
      result = "RightWindows";
      break;
    case AltGr:
      result = "AltGr";
      break;
    case Help_0:
      result = "Help";
      break;
    case Print:
      result = "Print";
      break;
    case SysReq:
      result = "SysReq";
      break;
    case Break:
      result = "Break";
      break;
    case Menu:
      result = "Menu";
      break;
    case Mouse0:
      result = "Mouse0";
      break;
    case Mouse1:
      result = "Mouse1";
      break;
    case Mouse2:
      result = "Mouse2";
      break;
    case Mouse3:
      result = "Mouse3";
      break;
    case Mouse4:
      result = "Mouse4";
      break;
    case Mouse5:
      result = "Mouse5";
      break;
    case Mouse6:
      result = "Mouse6";
      break;
    case JoystickButton0:
      result = "JoystickButton0";
      break;
    case JoystickButton1:
      result = "JoystickButton1";
      break;
    case JoystickButton2:
      result = "JoystickButton2";
      break;
    case JoystickButton3:
      result = "JoystickButton3";
      break;
    case JoystickButton4:
      result = "JoystickButton4";
      break;
    case JoystickButton5:
      result = "JoystickButton5";
      break;
    case JoystickButton6:
      result = "JoystickButton6";
      break;
    case JoystickButton7:
      result = "JoystickButton7";
      break;
    case JoystickButton8:
      result = "JoystickButton8";
      break;
    case JoystickButton9:
      result = "JoystickButton9";
      break;
    case JoystickButton10:
      result = "JoystickButton10";
      break;
    case JoystickButton11:
      result = "JoystickButton11";
      break;
    case JoystickButton12:
      result = "JoystickButton12";
      break;
    case JoystickButton13:
      result = "JoystickButton13";
      break;
    case JoystickButton14:
      result = "JoystickButton14";
      break;
    case JoystickButton15:
      result = "JoystickButton15";
      break;
    case JoystickButton16:
      result = "JoystickButton16";
      break;
    case JoystickButton17:
      result = "JoystickButton17";
      break;
    case JoystickButton18:
      result = "JoystickButton18";
      break;
    case JoystickButton19:
      result = "JoystickButton19";
      break;
    case Joystick1Button0:
      result = "Joystick1Button0";
      break;
    case Joystick1Button1:
      result = "Joystick1Button1";
      break;
    case Joystick1Button2:
      result = "Joystick1Button2";
      break;
    case Joystick1Button3:
      result = "Joystick1Button3";
      break;
    case Joystick1Button4:
      result = "Joystick1Button4";
      break;
    case Joystick1Button5:
      result = "Joystick1Button5";
      break;
    case Joystick1Button6:
      result = "Joystick1Button6";
      break;
    case Joystick1Button7:
      result = "Joystick1Button7";
      break;
    case Joystick1Button8:
      result = "Joystick1Button8";
      break;
    case Joystick1Button9:
      result = "Joystick1Button9";
      break;
    case Joystick1Button10:
      result = "Joystick1Button10";
      break;
    case Joystick1Button11:
      result = "Joystick1Button11";
      break;
    case Joystick1Button12:
      result = "Joystick1Button12";
      break;
    case Joystick1Button13:
      result = "Joystick1Button13";
      break;
    case Joystick1Button14:
      result = "Joystick1Button14";
      break;
    case Joystick1Button15:
      result = "Joystick1Button15";
      break;
    case Joystick1Button16:
      result = "Joystick1Button16";
      break;
    case Joystick1Button17:
      result = "Joystick1Button17";
      break;
    case Joystick1Button18:
      result = "Joystick1Button18";
      break;
    case Joystick1Button19:
      result = "Joystick1Button19";
      break;
    case Joystick2Button0:
      result = "Joystick2Button0";
      break;
    case Joystick2Button1:
      result = "Joystick2Button1";
      break;
    case Joystick2Button2:
      result = "Joystick2Button2";
      break;
    case Joystick2Button3:
      result = "Joystick2Button3";
      break;
    case Joystick2Button4:
      result = "Joystick2Button4";
      break;
    case Joystick2Button5:
      result = "Joystick2Button5";
      break;
    case Joystick2Button6:
      result = "Joystick2Button6";
      break;
    case Joystick2Button7:
      result = "Joystick2Button7";
      break;
    case Joystick2Button8:
      result = "Joystick2Button8";
      break;
    case Joystick2Button9:
      result = "Joystick2Button9";
      break;
    case Joystick2Button10:
      result = "Joystick2Button10";
      break;
    case Joystick2Button11:
      result = "Joystick2Button11";
      break;
    case Joystick2Button12:
      result = "Joystick2Button12";
      break;
    case Joystick2Button13:
      result = "Joystick2Button13";
      break;
    case Joystick2Button14:
      result = "Joystick2Button14";
      break;
    case Joystick2Button15:
      result = "Joystick2Button15";
      break;
    case Joystick2Button16:
      result = "Joystick2Button16";
      break;
    case Joystick2Button17:
      result = "Joystick2Button17";
      break;
    case Joystick2Button18:
      result = "Joystick2Button18";
      break;
    case Joystick2Button19:
      result = "Joystick2Button19";
      break;
    case Joystick3Button0:
      result = "Joystick3Button0";
      break;
    case Joystick3Button1:
      result = "Joystick3Button1";
      break;
    case Joystick3Button2:
      result = "Joystick3Button2";
      break;
    case Joystick3Button3:
      result = "Joystick3Button3";
      break;
    case Joystick3Button4:
      result = "Joystick3Button4";
      break;
    case Joystick3Button5:
      result = "Joystick3Button5";
      break;
    case Joystick3Button6:
      result = "Joystick3Button6";
      break;
    case Joystick3Button7:
      result = "Joystick3Button7";
      break;
    case Joystick3Button8:
      result = "Joystick3Button8";
      break;
    case Joystick3Button9:
      result = "Joystick3Button9";
      break;
    case Joystick3Button10:
      result = "Joystick3Button10";
      break;
    case Joystick3Button11:
      result = "Joystick3Button11";
      break;
    case Joystick3Button12:
      result = "Joystick3Button12";
      break;
    case Joystick3Button13:
      result = "Joystick3Button13";
      break;
    case Joystick3Button14:
      result = "Joystick3Button14";
      break;
    case Joystick3Button15:
      result = "Joystick3Button15";
      break;
    case Joystick3Button16:
      result = "Joystick3Button16";
      break;
    case Joystick3Button17:
      result = "Joystick3Button17";
      break;
    case Joystick3Button18:
      result = "Joystick3Button18";
      break;
    case Joystick3Button19:
      result = "Joystick3Button19";
      break;
    case Joystick4Button0:
      result = "Joystick4Button0";
      break;
    case Joystick4Button1:
      result = "Joystick4Button1";
      break;
    case Joystick4Button2:
      result = "Joystick4Button2";
      break;
    case Joystick4Button3:
      result = "Joystick4Button3";
      break;
    case Joystick4Button4:
      result = "Joystick4Button4";
      break;
    case Joystick4Button5:
      result = "Joystick4Button5";
      break;
    case Joystick4Button6:
      result = "Joystick4Button6";
      break;
    case Joystick4Button7:
      result = "Joystick4Button7";
      break;
    case Joystick4Button8:
      result = "Joystick4Button8";
      break;
    case Joystick4Button9:
      result = "Joystick4Button9";
      break;
    case Joystick4Button10:
      result = "Joystick4Button10";
      break;
    case Joystick4Button11:
      result = "Joystick4Button11";
      break;
    case Joystick4Button12:
      result = "Joystick4Button12";
      break;
    case Joystick4Button13:
      result = "Joystick4Button13";
      break;
    case Joystick4Button14:
      result = "Joystick4Button14";
      break;
    case Joystick4Button15:
      result = "Joystick4Button15";
      break;
    case Joystick4Button16:
      result = "Joystick4Button16";
      break;
    case Joystick4Button17:
      result = "Joystick4Button17";
      break;
    case Joystick4Button18:
      result = "Joystick4Button18";
      break;
    case Joystick4Button19:
      result = "Joystick4Button19";
      break;
    case Joystick5Button0:
      result = "Joystick5Button0";
      break;
    case Joystick5Button1:
      result = "Joystick5Button1";
      break;
    case Joystick5Button2:
      result = "Joystick5Button2";
      break;
    case Joystick5Button3:
      result = "Joystick5Button3";
      break;
    case Joystick5Button4:
      result = "Joystick5Button4";
      break;
    case Joystick5Button5:
      result = "Joystick5Button5";
      break;
    case Joystick5Button6:
      result = "Joystick5Button6";
      break;
    case Joystick5Button7:
      result = "Joystick5Button7";
      break;
    case Joystick5Button8:
      result = "Joystick5Button8";
      break;
    case Joystick5Button9:
      result = "Joystick5Button9";
      break;
    case Joystick5Button10:
      result = "Joystick5Button10";
      break;
    case Joystick5Button11:
      result = "Joystick5Button11";
      break;
    case Joystick5Button12:
      result = "Joystick5Button12";
      break;
    case Joystick5Button13:
      result = "Joystick5Button13";
      break;
    case Joystick5Button14:
      result = "Joystick5Button14";
      break;
    case Joystick5Button15:
      result = "Joystick5Button15";
      break;
    case Joystick5Button16:
      result = "Joystick5Button16";
      break;
    case Joystick5Button17:
      result = "Joystick5Button17";
      break;
    case Joystick5Button18:
      result = "Joystick5Button18";
      break;
    case Joystick5Button19:
      result = "Joystick5Button19";
      break;
    case Joystick6Button0:
      result = "Joystick6Button0";
      break;
    case Joystick6Button1:
      result = "Joystick6Button1";
      break;
    case Joystick6Button2:
      result = "Joystick6Button2";
      break;
    case Joystick6Button3:
      result = "Joystick6Button3";
      break;
    case Joystick6Button4:
      result = "Joystick6Button4";
      break;
    case Joystick6Button5:
      result = "Joystick6Button5";
      break;
    case Joystick6Button6:
      result = "Joystick6Button6";
      break;
    case Joystick6Button7:
      result = "Joystick6Button7";
      break;
    case Joystick6Button8:
      result = "Joystick6Button8";
      break;
    case Joystick6Button9:
      result = "Joystick6Button9";
      break;
    case Joystick6Button10:
      result = "Joystick6Button10";
      break;
    case Joystick6Button11:
      result = "Joystick6Button11";
      break;
    case Joystick6Button12:
      result = "Joystick6Button12";
      break;
    case Joystick6Button13:
      result = "Joystick6Button13";
      break;
    case Joystick6Button14:
      result = "Joystick6Button14";
      break;
    case Joystick6Button15:
      result = "Joystick6Button15";
      break;
    case Joystick6Button16:
      result = "Joystick6Button16";
      break;
    case Joystick6Button17:
      result = "Joystick6Button17";
      break;
    case Joystick6Button18:
      result = "Joystick6Button18";
      break;
    case Joystick6Button19:
      result = "Joystick6Button19";
      break;
    case Joystick7Button0:
      result = "Joystick7Button0";
      break;
    case Joystick7Button1:
      result = "Joystick7Button1";
      break;
    case Joystick7Button2:
      result = "Joystick7Button2";
      break;
    case Joystick7Button3:
      result = "Joystick7Button3";
      break;
    case Joystick7Button4:
      result = "Joystick7Button4";
      break;
    case Joystick7Button5:
      result = "Joystick7Button5";
      break;
    case Joystick7Button6:
      result = "Joystick7Button6";
      break;
    case Joystick7Button7:
      result = "Joystick7Button7";
      break;
    case Joystick7Button8:
      result = "Joystick7Button8";
      break;
    case Joystick7Button9:
      result = "Joystick7Button9";
      break;
    case Joystick7Button10:
      result = "Joystick7Button10";
      break;
    case Joystick7Button11:
      result = "Joystick7Button11";
      break;
    case Joystick7Button12:
      result = "Joystick7Button12";
      break;
    case Joystick7Button13:
      result = "Joystick7Button13";
      break;
    case Joystick7Button14:
      result = "Joystick7Button14";
      break;
    case Joystick7Button15:
      result = "Joystick7Button15";
      break;
    case Joystick7Button16:
      result = "Joystick7Button16";
      break;
    case Joystick7Button17:
      result = "Joystick7Button17";
      break;
    case Joystick7Button18:
      result = "Joystick7Button18";
      break;
    case Joystick7Button19:
      result = "Joystick7Button19";
      break;
    case Joystick8Button0:
      result = "Joystick8Button0";
      break;
    case Joystick8Button1:
      result = "Joystick8Button1";
      break;
    case Joystick8Button2:
      result = "Joystick8Button2";
      break;
    case Joystick8Button3:
      result = "Joystick8Button3";
      break;
    case Joystick8Button4:
      result = "Joystick8Button4";
      break;
    case Joystick8Button5:
      result = "Joystick8Button5";
      break;
    case Joystick8Button6:
      result = "Joystick8Button6";
      break;
    case Joystick8Button7:
      result = "Joystick8Button7";
      break;
    case Joystick8Button8:
      result = "Joystick8Button8";
      break;
    case Joystick8Button9:
      result = "Joystick8Button9";
      break;
    case Joystick8Button10:
      result = "Joystick8Button10";
      break;
    case Joystick8Button11:
      result = "Joystick8Button11";
      break;
    case Joystick8Button12:
      result = "Joystick8Button12";
      break;
    case Joystick8Button13:
      result = "Joystick8Button13";
      break;
    case Joystick8Button14:
      result = "Joystick8Button14";
      break;
    case Joystick8Button15:
      result = "Joystick8Button15";
      break;
    case Joystick8Button16:
      result = "Joystick8Button16";
      break;
    case Joystick8Button17:
      result = "Joystick8Button17";
      break;
    case Joystick8Button18:
      result = "Joystick8Button18";
      break;
    case Joystick8Button19:
      result = "Joystick8Button19";
      break;
    default:
      if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigKeyCode.cpp",
        "enumValToStr",
        661);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = e;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 667: range 0000000011F35879-0000000011F41826
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigKeyCode *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::ConfigKeyCode> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigKeyCode> >::pointer v10; // rax
  data::ConfigKeyCode second; // ecx
  char v12; // dl
  bool v13; // bl
  data::ConfigKeyCode *ea; // [rsp+10h] [rbp-4820h]
  char v16[18448]; // [rsp+20h] [rbp-4810h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_9(18400LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = a3264819Unknown;
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -234556924;
  v4[536862761] = -234556924;
  v4[536862762] = -234556924;
  v4[536862763] = -234556924;
  v4[536862764] = -234556924;
  v4[536862765] = -234556924;
  v4[536862766] = -234556924;
  v4[536862767] = -234556924;
  v4[536862768] = -234556924;
  v4[536862769] = -234556924;
  v4[536862770] = -234556924;
  v4[536862771] = -234556924;
  v4[536862772] = -234556924;
  v4[536862773] = -234556924;
  v4[536862774] = -234556924;
  v4[536862775] = -234556924;
  v4[536862776] = -234556924;
  v4[536862777] = -234556924;
  v4[536862778] = -234556924;
  v4[536862779] = -234556924;
  v4[536862780] = -234556924;
  v4[536862781] = -234556924;
  v4[536862782] = -234556924;
  v4[536862783] = -234556924;
  v4[536862784] = -234556924;
  v4[536862785] = -234556924;
  v4[536862786] = -234556924;
  v4[536862787] = -234556924;
  v4[536862788] = -234556924;
  v4[536862789] = -234556924;
  v4[536862790] = -234556924;
  v4[536862791] = -234556924;
  v4[536862792] = -234556924;
  v4[536862793] = -234556924;
  v4[536862794] = -234556924;
  v4[536862795] = -234556924;
  v4[536862796] = -234556924;
  v4[536862797] = -234556924;
  v4[536862798] = -234556924;
  v4[536862799] = -234556924;
  v4[536862800] = -234556924;
  v4[536862801] = -234556924;
  v4[536862802] = -234556924;
  v4[536862803] = -234556924;
  v4[536862804] = -234556924;
  v4[536862805] = -234556924;
  v4[536862806] = -234556924;
  v4[536862807] = -234556924;
  v4[536862808] = -234556924;
  v4[536862809] = -234556924;
  v4[536862810] = -234556924;
  v4[536862811] = -234556924;
  v4[536862812] = -234556924;
  v4[536862813] = -234556924;
  v4[536862814] = -234556924;
  v4[536862815] = -234556924;
  v4[536862816] = -234556924;
  v4[536862817] = -234556924;
  v4[536862818] = -234556924;
  v4[536862819] = -234556924;
  v4[536862820] = -234556924;
  v4[536862821] = -234556924;
  v4[536862822] = -234556924;
  v4[536862823] = -234556924;
  v4[536862824] = -234556924;
  v4[536862825] = -234556924;
  v4[536862826] = -234556924;
  v4[536862827] = -234556924;
  v4[536862828] = -234556924;
  v4[536862829] = -234556924;
  v4[536862830] = -234556924;
  v4[536862831] = -234556924;
  v4[536862832] = -234556924;
  v4[536862833] = -234556924;
  v4[536862834] = -234556924;
  v4[536862835] = -234556924;
  v4[536862836] = -234556924;
  v4[536862837] = -234556924;
  v4[536862838] = -234556924;
  v4[536862839] = -234556924;
  v4[536862840] = -234556924;
  v4[536862841] = -234556924;
  v4[536862842] = -234556924;
  v4[536862843] = -234556924;
  v4[536862844] = -234556924;
  v4[536862845] = -234556924;
  v4[536862846] = -234556924;
  v4[536862847] = -234556924;
  v4[536862848] = -234556924;
  v4[536862849] = -234556924;
  v4[536862850] = -234556924;
  v4[536862851] = -234556924;
  v4[536862852] = -234556924;
  v4[536862853] = -234556924;
  v4[536862854] = -234556924;
  v4[536862855] = -234556924;
  v4[536862856] = -234556924;
  v4[536862857] = -234556924;
  v4[536862858] = -234556924;
  v4[536862859] = -234556924;
  v4[536862860] = -234556924;
  v4[536862861] = -234556924;
  v4[536862862] = -234556924;
  v4[536862863] = -234556924;
  v4[536862864] = -234556924;
  v4[536862865] = -234556924;
  v4[536862866] = -234556924;
  v4[536862867] = -234556924;
  v4[536862868] = -234556924;
  v4[536862869] = -234556924;
  v4[536862870] = -234556924;
  v4[536862871] = -234556924;
  v4[536862872] = -234556924;
  v4[536862873] = -234556924;
  v4[536862874] = -234556924;
  v4[536862875] = -234556924;
  v4[536862876] = -234556924;
  v4[536862877] = -234556924;
  v4[536862878] = -234556924;
  v4[536862879] = -234556924;
  v4[536862880] = -234556924;
  v4[536862881] = -234556924;
  v4[536862882] = -218959360;
  v4[536862883] = -218959360;
  v4[536862885] = -218959118;
  v4[536862887] = -218959118;
  v4[536863286] = -218103808;
  v4[536863287] = -202116109;
  v4[536863288] = -202116109;
  v4[536863289] = -202116109;
  v4[536863290] = -202116109;
  v4[536863291] = -202116109;
  v4[536863292] = -202116109;
  v4[536863293] = -202116109;
  v4[536863294] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 5248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 5279) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5279) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 5248, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 5248),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigKeyCode.cpp",
      "enumStrToVal",
      670);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 5248),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5248));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5376),
        (const char (*)[5])"None",
        (data::ConfigKeyCode *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 8;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5416),
        (const char (*)[10])"Backspace",
        (data::ConfigKeyCode *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Backspace");
      *(_DWORD *)(v2 + 112) = 9;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5456),
        (const char (*)[4])off_1A8B34E0,
        (data::ConfigKeyCode *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1A8B34E0);
      *(_DWORD *)(v2 + 128) = 12;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5496),
        (const char (*)[6])"Clear",
        (data::ConfigKeyCode *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Clear");
      *(_DWORD *)(v2 + 144) = 13;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5536),
        (const char (*)[7])"Return",
        (data::ConfigKeyCode *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Return");
      *(_DWORD *)(v2 + 160) = 19;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5576),
        (const char (*)[6])"Pause",
        (data::ConfigKeyCode *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Pause");
      *(_DWORD *)(v2 + 176) = 27;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5616),
        (const char (*)[7])"Escape",
        (data::ConfigKeyCode *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Escape");
      *(_DWORD *)(v2 + 192) = 32;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5656),
        (const char (*)[6])"Space",
        (data::ConfigKeyCode *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Space");
      *(_DWORD *)(v2 + 208) = 33;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5696),
        (const char (*)[8])"Exclaim",
        (data::ConfigKeyCode *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Exclaim");
      *(_DWORD *)(v2 + 224) = 34;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5736),
        (const char (*)[12])"DoubleQuote",
        (data::ConfigKeyCode *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "DoubleQuote");
      *(_DWORD *)(v2 + 240) = 35;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5776),
        (const char (*)[5])"Hash",
        (data::ConfigKeyCode *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Hash");
      *(_DWORD *)(v2 + 256) = 36;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5816),
        (const char (*)[7])"Dollar",
        (data::ConfigKeyCode *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "Dollar");
      *(_DWORD *)(v2 + 272) = 38;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5856),
        (const char (*)[10])"Ampersand",
        (data::ConfigKeyCode *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "Ampersand");
      *(_DWORD *)(v2 + 288) = 39;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5896),
        (const char (*)[6])"Quote",
        (data::ConfigKeyCode *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Quote");
      *(_DWORD *)(v2 + 304) = 40;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5936),
        (const char (*)[10])"LeftParen",
        (data::ConfigKeyCode *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "LeftParen");
      *(_DWORD *)(v2 + 320) = 41;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 5976),
        (const char (*)[11])"RightParen",
        (data::ConfigKeyCode *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "RightParen");
      *(_DWORD *)(v2 + 336) = 42;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[9],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6016),
        (const char (*)[9])"Asterisk",
        (data::ConfigKeyCode *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Asterisk");
      *(_DWORD *)(v2 + 352) = 43;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6056),
        (const char (*)[5])"Plus",
        (data::ConfigKeyCode *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "Plus");
      *(_DWORD *)(v2 + 368) = 44;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6096),
        (const char (*)[6])"Comma",
        (data::ConfigKeyCode *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "Comma");
      *(_DWORD *)(v2 + 384) = 45;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6136),
        (const char (*)[6])"Minus",
        (data::ConfigKeyCode *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "Minus");
      *(_DWORD *)(v2 + 400) = 46;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6176),
        (const char (*)[7])"Period",
        (data::ConfigKeyCode *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "Period");
      *(_DWORD *)(v2 + 416) = 47;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6216),
        (const char (*)[6])"Slash",
        (data::ConfigKeyCode *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "Slash");
      *(_DWORD *)(v2 + 432) = 48;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6256),
        (const char (*)[7])"Alpha0",
        (data::ConfigKeyCode *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "Alpha0");
      *(_DWORD *)(v2 + 448) = 49;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6296),
        (const char (*)[7])"Alpha1",
        (data::ConfigKeyCode *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "Alpha1");
      *(_DWORD *)(v2 + 464) = 50;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6336),
        (const char (*)[7])"Alpha2",
        (data::ConfigKeyCode *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "Alpha2");
      *(_DWORD *)(v2 + 480) = 51;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6376),
        (const char (*)[7])"Alpha3",
        (data::ConfigKeyCode *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "Alpha3");
      *(_DWORD *)(v2 + 496) = 52;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6416),
        (const char (*)[7])"Alpha4",
        (data::ConfigKeyCode *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "Alpha4");
      *(_DWORD *)(v2 + 512) = 53;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6456),
        (const char (*)[7])"Alpha5",
        (data::ConfigKeyCode *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "Alpha5");
      *(_DWORD *)(v2 + 528) = 54;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6496),
        (const char (*)[7])"Alpha6",
        (data::ConfigKeyCode *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "Alpha6");
      *(_DWORD *)(v2 + 544) = 55;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6536),
        (const char (*)[7])"Alpha7",
        (data::ConfigKeyCode *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "Alpha7");
      *(_DWORD *)(v2 + 560) = 56;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6576),
        (const char (*)[7])"Alpha8",
        (data::ConfigKeyCode *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "Alpha8");
      *(_DWORD *)(v2 + 576) = 57;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6616),
        (const char (*)[7])"Alpha9",
        (data::ConfigKeyCode *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "Alpha9");
      *(_DWORD *)(v2 + 592) = 58;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6656),
        (const char (*)[6])"Colon",
        (data::ConfigKeyCode *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "Colon");
      *(_DWORD *)(v2 + 608) = 59;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6696),
        (const char (*)[10])"Semicolon",
        (data::ConfigKeyCode *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "Semicolon");
      *(_DWORD *)(v2 + 624) = 60;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6736),
        (const char (*)[5])"Less",
        (data::ConfigKeyCode *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "Less");
      *(_DWORD *)(v2 + 640) = 61;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6776),
        (const char (*)[7])"Equals",
        (data::ConfigKeyCode *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "Equals");
      *(_DWORD *)(v2 + 656) = 62;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6816),
        (const char (*)[8])"Greater",
        (data::ConfigKeyCode *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "Greater");
      *(_DWORD *)(v2 + 672) = 63;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[9],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6856),
        (const char (*)[9])"Question",
        (data::ConfigKeyCode *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "Question");
      *(_DWORD *)(v2 + 688) = 64;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6896),
        (const char (*)[3])"At",
        (data::ConfigKeyCode *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "At");
      *(_DWORD *)(v2 + 704) = 91;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6936),
        (const char (*)[12])"LeftBracket",
        (data::ConfigKeyCode *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "LeftBracket");
      *(_DWORD *)(v2 + 720) = 92;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 6976),
        (const char (*)[10])"Backslash",
        (data::ConfigKeyCode *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "Backslash");
      *(_DWORD *)(v2 + 736) = 93;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7016),
        (const char (*)[13])"RightBracket",
        (data::ConfigKeyCode *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "RightBracket");
      *(_DWORD *)(v2 + 752) = 94;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7056),
        (const char (*)[6])"Caret",
        (data::ConfigKeyCode *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, "Caret");
      *(_DWORD *)(v2 + 768) = 95;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7096),
        (const char (*)[11])"Underscore",
        (data::ConfigKeyCode *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, "Underscore");
      *(_DWORD *)(v2 + 784) = 96;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7136),
        (const char (*)[10])"BackQuote",
        (data::ConfigKeyCode *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, "BackQuote");
      *(_DWORD *)(v2 + 800) = 97;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7176),
        (const char (*)[2])"A",
        (data::ConfigKeyCode *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, "A");
      *(_DWORD *)(v2 + 816) = 98;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7216),
        (const char (*)[2])"B",
        (data::ConfigKeyCode *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, "B");
      *(_DWORD *)(v2 + 832) = 99;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7256),
        (const char (*)[2])"C",
        (data::ConfigKeyCode *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, "C");
      *(_DWORD *)(v2 + 848) = 100;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7296),
        (const char (*)[2])"D",
        (data::ConfigKeyCode *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, "D");
      *(_DWORD *)(v2 + 864) = 101;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7336),
        (const char (*)[2])"E",
        (data::ConfigKeyCode *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, "E");
      *(_DWORD *)(v2 + 880) = 102;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7376),
        (const char (*)[2])"F",
        (data::ConfigKeyCode *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, "F");
      *(_DWORD *)(v2 + 896) = 103;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7416),
        (const char (*)[2])"G",
        (data::ConfigKeyCode *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, "G");
      *(_DWORD *)(v2 + 912) = 104;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7456),
        (const char (*)[2])"H",
        (data::ConfigKeyCode *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, "H");
      *(_DWORD *)(v2 + 928) = 105;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7496),
        (const char (*)[2])"I",
        (data::ConfigKeyCode *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, "I");
      *(_DWORD *)(v2 + 944) = 106;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7536),
        (const char (*)[2])"J",
        (data::ConfigKeyCode *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, "J");
      *(_DWORD *)(v2 + 960) = 107;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7576),
        (const char (*)[2])"K",
        (data::ConfigKeyCode *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, "K");
      *(_DWORD *)(v2 + 976) = 108;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7616),
        (const char (*)[2])"L",
        (data::ConfigKeyCode *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, "L");
      *(_DWORD *)(v2 + 992) = 109;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7656),
        (const char (*)[2])"M",
        (data::ConfigKeyCode *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, "M");
      *(_DWORD *)(v2 + 1008) = 110;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7696),
        (const char (*)[2])"N",
        (data::ConfigKeyCode *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, "N");
      *(_DWORD *)(v2 + 1024) = 111;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7736),
        (const char (*)[2])"O",
        (data::ConfigKeyCode *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, "O");
      *(_DWORD *)(v2 + 1040) = 112;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7776),
        (const char (*)[2])"P",
        (data::ConfigKeyCode *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, "P");
      *(_DWORD *)(v2 + 1056) = 113;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7816),
        (const char (*)[2])"Q",
        (data::ConfigKeyCode *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, "Q");
      *(_DWORD *)(v2 + 1072) = 114;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7856),
        (const char (*)[2])"R",
        (data::ConfigKeyCode *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, "R");
      *(_DWORD *)(v2 + 1088) = 115;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7896),
        (const char (*)[2])"S",
        (data::ConfigKeyCode *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, "S");
      *(_DWORD *)(v2 + 1104) = 116;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7936),
        (const char (*)[2])"T",
        (data::ConfigKeyCode *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, "T");
      *(_DWORD *)(v2 + 1120) = 117;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 7976),
        (const char (*)[2])"U",
        (data::ConfigKeyCode *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, "U");
      *(_DWORD *)(v2 + 1136) = 118;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8016),
        (const char (*)[2])"V",
        (data::ConfigKeyCode *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, "V");
      *(_DWORD *)(v2 + 1152) = 119;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8056),
        (const char (*)[2])"W",
        (data::ConfigKeyCode *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, "W");
      *(_DWORD *)(v2 + 1168) = 120;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8096),
        (const char (*)[2])"X",
        (data::ConfigKeyCode *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, "X");
      *(_DWORD *)(v2 + 1184) = 121;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8136),
        (const char (*)[2])"Y",
        (data::ConfigKeyCode *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, "Y");
      *(_DWORD *)(v2 + 1200) = 122;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[2],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8176),
        (const char (*)[2])"Z",
        (data::ConfigKeyCode *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, "Z");
      *(_DWORD *)(v2 + 1216) = 127;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8216),
        (const char (*)[7])"Delete",
        (data::ConfigKeyCode *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, "Delete");
      *(_DWORD *)(v2 + 1232) = 256;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8256),
        (const char (*)[8])"Keypad0",
        (data::ConfigKeyCode *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, "Keypad0");
      *(_DWORD *)(v2 + 1248) = 257;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8296),
        (const char (*)[8])"Keypad1",
        (data::ConfigKeyCode *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, "Keypad1");
      *(_DWORD *)(v2 + 1264) = 258;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8336),
        (const char (*)[8])"Keypad2",
        (data::ConfigKeyCode *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, "Keypad2");
      *(_DWORD *)(v2 + 1280) = 259;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8376),
        (const char (*)[8])"Keypad3",
        (data::ConfigKeyCode *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, "Keypad3");
      *(_DWORD *)(v2 + 1296) = 260;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8416),
        (const char (*)[8])"Keypad4",
        (data::ConfigKeyCode *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, "Keypad4");
      *(_DWORD *)(v2 + 1312) = 261;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8456),
        (const char (*)[8])"Keypad5",
        (data::ConfigKeyCode *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, "Keypad5");
      *(_DWORD *)(v2 + 1328) = 262;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8496),
        (const char (*)[8])"Keypad6",
        (data::ConfigKeyCode *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, "Keypad6");
      *(_DWORD *)(v2 + 1344) = 263;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8536),
        (const char (*)[8])"Keypad7",
        (data::ConfigKeyCode *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, "Keypad7");
      *(_DWORD *)(v2 + 1360) = 264;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8576),
        (const char (*)[8])"Keypad8",
        (data::ConfigKeyCode *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, "Keypad8");
      *(_DWORD *)(v2 + 1376) = 265;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8616),
        (const char (*)[8])"Keypad9",
        (data::ConfigKeyCode *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, "Keypad9");
      *(_DWORD *)(v2 + 1392) = 266;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8656),
        (const char (*)[13])"KeypadPeriod",
        (data::ConfigKeyCode *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, "KeypadPeriod");
      *(_DWORD *)(v2 + 1408) = 267;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8696),
        (const char (*)[13])"KeypadDivide",
        (data::ConfigKeyCode *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, "KeypadDivide");
      *(_DWORD *)(v2 + 1424) = 268;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[15],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8736),
        (const char (*)[15])"KeypadMultiply",
        (data::ConfigKeyCode *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, "KeypadMultiply");
      *(_DWORD *)(v2 + 1440) = 269;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8776),
        (const char (*)[12])"KeypadMinus",
        (data::ConfigKeyCode *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, "KeypadMinus");
      *(_DWORD *)(v2 + 1456) = 270;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8816),
        (const char (*)[11])"KeypadPlus",
        (data::ConfigKeyCode *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, "KeypadPlus");
      *(_DWORD *)(v2 + 1472) = 271;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8856),
        (const char (*)[12])"KeypadEnter",
        (data::ConfigKeyCode *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, "KeypadEnter");
      *(_DWORD *)(v2 + 1488) = 272;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8896),
        (const char (*)[13])"KeypadEquals",
        (data::ConfigKeyCode *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, "KeypadEquals");
      *(_DWORD *)(v2 + 1504) = 273;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8936),
        (const char (*)[8])"UpArrow",
        (data::ConfigKeyCode *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, "UpArrow");
      *(_DWORD *)(v2 + 1520) = 274;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 8976),
        (const char (*)[10])"DownArrow",
        (data::ConfigKeyCode *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, "DownArrow");
      *(_DWORD *)(v2 + 1536) = 275;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9016),
        (const char (*)[11])"RightArrow",
        (data::ConfigKeyCode *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, "RightArrow");
      *(_DWORD *)(v2 + 1552) = 276;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9056),
        (const char (*)[10])"LeftArrow",
        (data::ConfigKeyCode *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, "LeftArrow");
      *(_DWORD *)(v2 + 1568) = 277;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9096),
        (const char (*)[7])"Insert",
        (data::ConfigKeyCode *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, "Insert");
      *(_DWORD *)(v2 + 1584) = 278;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9136),
        (const char (*)[5])"Home",
        (data::ConfigKeyCode *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, "Home");
      *(_DWORD *)(v2 + 1600) = 279;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9176),
        (const char (*)[4])off_1A8B4C20,
        (data::ConfigKeyCode *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, off_1A8B4C20);
      *(_DWORD *)(v2 + 1616) = 280;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9216),
        (const char (*)[7])"PageUp",
        (data::ConfigKeyCode *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, "PageUp");
      *(_DWORD *)(v2 + 1632) = 281;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[9],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9256),
        (const char (*)[9])"PageDown",
        (data::ConfigKeyCode *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, "PageDown");
      *(_DWORD *)(v2 + 1648) = 282;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9296),
        (const char (*)[3])"F1",
        (data::ConfigKeyCode *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, "F1");
      *(_DWORD *)(v2 + 1664) = 283;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9336),
        (const char (*)[3])"F2",
        (data::ConfigKeyCode *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, "F2");
      *(_DWORD *)(v2 + 1680) = 284;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9376),
        (const char (*)[3])"F3",
        (data::ConfigKeyCode *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, "F3");
      *(_DWORD *)(v2 + 1696) = 285;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9416),
        (const char (*)[3])"F4",
        (data::ConfigKeyCode *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, "F4");
      *(_DWORD *)(v2 + 1712) = 286;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9456),
        (const char (*)[3])"F5",
        (data::ConfigKeyCode *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, "F5");
      *(_DWORD *)(v2 + 1728) = 287;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9496),
        (const char (*)[3])"F6",
        (data::ConfigKeyCode *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, "F6");
      *(_DWORD *)(v2 + 1744) = 288;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9536),
        (const char (*)[3])"F7",
        (data::ConfigKeyCode *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, "F7");
      *(_DWORD *)(v2 + 1760) = 289;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9576),
        (const char (*)[3])"F8",
        (data::ConfigKeyCode *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, "F8");
      *(_DWORD *)(v2 + 1776) = 290;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[3],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9616),
        (const char (*)[3])"F9",
        (data::ConfigKeyCode *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, "F9");
      *(_DWORD *)(v2 + 1792) = 291;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9656),
        (const char (*)[4])"F10",
        (data::ConfigKeyCode *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, "F10");
      *(_DWORD *)(v2 + 1808) = 292;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9696),
        (const char (*)[4])"F11",
        (data::ConfigKeyCode *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, "F11");
      *(_DWORD *)(v2 + 1824) = 293;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9736),
        (const char (*)[4])"F12",
        (data::ConfigKeyCode *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, "F12");
      *(_DWORD *)(v2 + 1840) = 294;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9776),
        (const char (*)[4])"F13",
        (data::ConfigKeyCode *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, "F13");
      *(_DWORD *)(v2 + 1856) = 295;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9816),
        (const char (*)[4])"F14",
        (data::ConfigKeyCode *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, "F14");
      *(_DWORD *)(v2 + 1872) = 296;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[4],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9856),
        (const char (*)[4])"F15",
        (data::ConfigKeyCode *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, "F15");
      *(_DWORD *)(v2 + 1888) = 300;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9896),
        (const char (*)[8])"Numlock",
        (data::ConfigKeyCode *)(v2 + 1888));
      if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1904, "Numlock");
      *(_DWORD *)(v2 + 1904) = 301;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[9],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9936),
        (const char (*)[9])"CapsLock",
        (data::ConfigKeyCode *)(v2 + 1904));
      if ( *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1920, "CapsLock");
      *(_DWORD *)(v2 + 1920) = 302;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 9976),
        (const char (*)[11])"ScrollLock",
        (data::ConfigKeyCode *)(v2 + 1920));
      if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1936, "ScrollLock");
      *(_DWORD *)(v2 + 1936) = 303;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[11],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10016),
        (const char (*)[11])"RightShift",
        (data::ConfigKeyCode *)(v2 + 1936));
      if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1952, "RightShift");
      *(_DWORD *)(v2 + 1952) = 304;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[10],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10056),
        (const char (*)[10])"LeftShift",
        (data::ConfigKeyCode *)(v2 + 1952));
      if ( *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1968, "LeftShift");
      *(_DWORD *)(v2 + 1968) = 305;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10096),
        (const char (*)[13])"RightControl",
        (data::ConfigKeyCode *)(v2 + 1968));
      if ( *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1984, "RightControl");
      *(_DWORD *)(v2 + 1984) = 306;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10136),
        (const char (*)[12])"LeftControl",
        (data::ConfigKeyCode *)(v2 + 1984));
      if ( *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2000, "LeftControl");
      *(_DWORD *)(v2 + 2000) = 307;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[9],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10176),
        (const char (*)[9])"RightAlt",
        (data::ConfigKeyCode *)(v2 + 2000));
      if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2016, "RightAlt");
      *(_DWORD *)(v2 + 2016) = 308;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[8],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10216),
        (const char (*)[8])"LeftAlt",
        (data::ConfigKeyCode *)(v2 + 2016));
      if ( *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2032, "LeftAlt");
      *(_DWORD *)(v2 + 2032) = 309;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10256),
        (const char (*)[13])"RightCommand",
        (data::ConfigKeyCode *)(v2 + 2032));
      if ( *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2048, "RightCommand");
      *(_DWORD *)(v2 + 2048) = 310;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10296),
        (const char (*)[12])"LeftCommand",
        (data::ConfigKeyCode *)(v2 + 2048));
      if ( *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2064, "LeftCommand");
      *(_DWORD *)(v2 + 2064) = 311;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[12],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10336),
        (const char (*)[12])"LeftWindows",
        (data::ConfigKeyCode *)(v2 + 2064));
      if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2080, "LeftWindows");
      *(_DWORD *)(v2 + 2080) = 312;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[13],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10376),
        (const char (*)[13])"RightWindows",
        (data::ConfigKeyCode *)(v2 + 2080));
      if ( *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2096, "RightWindows");
      *(_DWORD *)(v2 + 2096) = 313;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10416),
        (const char (*)[6])"AltGr",
        (data::ConfigKeyCode *)(v2 + 2096));
      if ( *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2112, "AltGr");
      *(_DWORD *)(v2 + 2112) = 315;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10456),
        (const char (*)[5])"Help",
        (data::ConfigKeyCode *)(v2 + 2112));
      if ( *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2128, "Help");
      *(_DWORD *)(v2 + 2128) = 316;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10496),
        (const char (*)[6])"Print",
        (data::ConfigKeyCode *)(v2 + 2128));
      if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2144, "Print");
      *(_DWORD *)(v2 + 2144) = 317;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10536),
        (const char (*)[7])"SysReq",
        (data::ConfigKeyCode *)(v2 + 2144));
      if ( *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2160, "SysReq");
      *(_DWORD *)(v2 + 2160) = 318;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[6],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10576),
        (const char (*)[6])"Break",
        (data::ConfigKeyCode *)(v2 + 2160));
      if ( *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2176, "Break");
      *(_DWORD *)(v2 + 2176) = 319;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[5],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10616),
        (const char (*)[5])"Menu",
        (data::ConfigKeyCode *)(v2 + 2176));
      if ( *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2192, "Menu");
      *(_DWORD *)(v2 + 2192) = 323;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10656),
        (const char (*)[7])"Mouse0",
        (data::ConfigKeyCode *)(v2 + 2192));
      if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2208, "Mouse0");
      *(_DWORD *)(v2 + 2208) = 324;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10696),
        (const char (*)[7])"Mouse1",
        (data::ConfigKeyCode *)(v2 + 2208));
      if ( *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2224, "Mouse1");
      *(_DWORD *)(v2 + 2224) = 325;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10736),
        (const char (*)[7])"Mouse2",
        (data::ConfigKeyCode *)(v2 + 2224));
      if ( *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2240, "Mouse2");
      *(_DWORD *)(v2 + 2240) = 326;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10776),
        (const char (*)[7])"Mouse3",
        (data::ConfigKeyCode *)(v2 + 2240));
      if ( *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2256, "Mouse3");
      *(_DWORD *)(v2 + 2256) = 327;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10816),
        (const char (*)[7])"Mouse4",
        (data::ConfigKeyCode *)(v2 + 2256));
      if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2272, "Mouse4");
      *(_DWORD *)(v2 + 2272) = 328;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10856),
        (const char (*)[7])"Mouse5",
        (data::ConfigKeyCode *)(v2 + 2272));
      if ( *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2288, "Mouse5");
      *(_DWORD *)(v2 + 2288) = 329;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[7],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10896),
        (const char (*)[7])"Mouse6",
        (data::ConfigKeyCode *)(v2 + 2288));
      if ( *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2304, "Mouse6");
      *(_DWORD *)(v2 + 2304) = 330;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10936),
        (const char (*)[16])"JoystickButton0",
        (data::ConfigKeyCode *)(v2 + 2304));
      if ( *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2320, "JoystickButton0");
      *(_DWORD *)(v2 + 2320) = 331;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 10976),
        (const char (*)[16])"JoystickButton1",
        (data::ConfigKeyCode *)(v2 + 2320));
      if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2336, "JoystickButton1");
      *(_DWORD *)(v2 + 2336) = 332;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11016),
        (const char (*)[16])"JoystickButton2",
        (data::ConfigKeyCode *)(v2 + 2336));
      if ( *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2352, "JoystickButton2");
      *(_DWORD *)(v2 + 2352) = 333;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11056),
        (const char (*)[16])"JoystickButton3",
        (data::ConfigKeyCode *)(v2 + 2352));
      if ( *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2368, "JoystickButton3");
      *(_DWORD *)(v2 + 2368) = 334;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11096),
        (const char (*)[16])"JoystickButton4",
        (data::ConfigKeyCode *)(v2 + 2368));
      if ( *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2384, "JoystickButton4");
      *(_DWORD *)(v2 + 2384) = 335;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11136),
        (const char (*)[16])"JoystickButton5",
        (data::ConfigKeyCode *)(v2 + 2384));
      if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2400, "JoystickButton5");
      *(_DWORD *)(v2 + 2400) = 336;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11176),
        (const char (*)[16])"JoystickButton6",
        (data::ConfigKeyCode *)(v2 + 2400));
      if ( *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2416, "JoystickButton6");
      *(_DWORD *)(v2 + 2416) = 337;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11216),
        (const char (*)[16])"JoystickButton7",
        (data::ConfigKeyCode *)(v2 + 2416));
      if ( *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2432, "JoystickButton7");
      *(_DWORD *)(v2 + 2432) = 338;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11256),
        (const char (*)[16])"JoystickButton8",
        (data::ConfigKeyCode *)(v2 + 2432));
      if ( *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2448, "JoystickButton8");
      *(_DWORD *)(v2 + 2448) = 339;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[16],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11296),
        (const char (*)[16])"JoystickButton9",
        (data::ConfigKeyCode *)(v2 + 2448));
      if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2464, "JoystickButton9");
      *(_DWORD *)(v2 + 2464) = 340;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11336),
        (const char (*)[17])"JoystickButton10",
        (data::ConfigKeyCode *)(v2 + 2464));
      if ( *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2480, "JoystickButton10");
      *(_DWORD *)(v2 + 2480) = 341;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11376),
        (const char (*)[17])"JoystickButton11",
        (data::ConfigKeyCode *)(v2 + 2480));
      if ( *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2496, "JoystickButton11");
      *(_DWORD *)(v2 + 2496) = 342;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11416),
        (const char (*)[17])"JoystickButton12",
        (data::ConfigKeyCode *)(v2 + 2496));
      if ( *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2512, "JoystickButton12");
      *(_DWORD *)(v2 + 2512) = 343;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11456),
        (const char (*)[17])"JoystickButton13",
        (data::ConfigKeyCode *)(v2 + 2512));
      if ( *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2528, "JoystickButton13");
      *(_DWORD *)(v2 + 2528) = 344;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11496),
        (const char (*)[17])"JoystickButton14",
        (data::ConfigKeyCode *)(v2 + 2528));
      if ( *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2544, "JoystickButton14");
      *(_DWORD *)(v2 + 2544) = 345;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11536),
        (const char (*)[17])"JoystickButton15",
        (data::ConfigKeyCode *)(v2 + 2544));
      if ( *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2560, "JoystickButton15");
      *(_DWORD *)(v2 + 2560) = 346;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11576),
        (const char (*)[17])"JoystickButton16",
        (data::ConfigKeyCode *)(v2 + 2560));
      if ( *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2576, "JoystickButton16");
      *(_DWORD *)(v2 + 2576) = 347;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11616),
        (const char (*)[17])"JoystickButton17",
        (data::ConfigKeyCode *)(v2 + 2576));
      if ( *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2592, "JoystickButton17");
      *(_DWORD *)(v2 + 2592) = 348;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11656),
        (const char (*)[17])"JoystickButton18",
        (data::ConfigKeyCode *)(v2 + 2592));
      if ( *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2608, "JoystickButton18");
      *(_DWORD *)(v2 + 2608) = 349;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11696),
        (const char (*)[17])"JoystickButton19",
        (data::ConfigKeyCode *)(v2 + 2608));
      if ( *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2624, "JoystickButton19");
      *(_DWORD *)(v2 + 2624) = 350;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11736),
        (const char (*)[17])"Joystick1Button0",
        (data::ConfigKeyCode *)(v2 + 2624));
      if ( *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2640, "Joystick1Button0");
      *(_DWORD *)(v2 + 2640) = 351;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11776),
        (const char (*)[17])"Joystick1Button1",
        (data::ConfigKeyCode *)(v2 + 2640));
      if ( *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2656, "Joystick1Button1");
      *(_DWORD *)(v2 + 2656) = 352;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11816),
        (const char (*)[17])"Joystick1Button2",
        (data::ConfigKeyCode *)(v2 + 2656));
      if ( *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2672, "Joystick1Button2");
      *(_DWORD *)(v2 + 2672) = 353;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11856),
        (const char (*)[17])"Joystick1Button3",
        (data::ConfigKeyCode *)(v2 + 2672));
      if ( *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2688, "Joystick1Button3");
      *(_DWORD *)(v2 + 2688) = 354;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11896),
        (const char (*)[17])"Joystick1Button4",
        (data::ConfigKeyCode *)(v2 + 2688));
      if ( *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2704, "Joystick1Button4");
      *(_DWORD *)(v2 + 2704) = 355;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11936),
        (const char (*)[17])"Joystick1Button5",
        (data::ConfigKeyCode *)(v2 + 2704));
      if ( *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2720, "Joystick1Button5");
      *(_DWORD *)(v2 + 2720) = 356;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 11976),
        (const char (*)[17])"Joystick1Button6",
        (data::ConfigKeyCode *)(v2 + 2720));
      if ( *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2736, "Joystick1Button6");
      *(_DWORD *)(v2 + 2736) = 357;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12016),
        (const char (*)[17])"Joystick1Button7",
        (data::ConfigKeyCode *)(v2 + 2736));
      if ( *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2752, "Joystick1Button7");
      *(_DWORD *)(v2 + 2752) = 358;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12056),
        (const char (*)[17])"Joystick1Button8",
        (data::ConfigKeyCode *)(v2 + 2752));
      if ( *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2768, "Joystick1Button8");
      *(_DWORD *)(v2 + 2768) = 359;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12096),
        (const char (*)[17])"Joystick1Button9",
        (data::ConfigKeyCode *)(v2 + 2768));
      if ( *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2784, "Joystick1Button9");
      *(_DWORD *)(v2 + 2784) = 360;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12136),
        (const char (*)[18])"Joystick1Button10",
        (data::ConfigKeyCode *)(v2 + 2784));
      if ( *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2800, "Joystick1Button10");
      *(_DWORD *)(v2 + 2800) = 361;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12176),
        (const char (*)[18])"Joystick1Button11",
        (data::ConfigKeyCode *)(v2 + 2800));
      if ( *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2816, "Joystick1Button11");
      *(_DWORD *)(v2 + 2816) = 362;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12216),
        (const char (*)[18])"Joystick1Button12",
        (data::ConfigKeyCode *)(v2 + 2816));
      if ( *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2832, "Joystick1Button12");
      *(_DWORD *)(v2 + 2832) = 363;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12256),
        (const char (*)[18])"Joystick1Button13",
        (data::ConfigKeyCode *)(v2 + 2832));
      if ( *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2848, "Joystick1Button13");
      *(_DWORD *)(v2 + 2848) = 364;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12296),
        (const char (*)[18])"Joystick1Button14",
        (data::ConfigKeyCode *)(v2 + 2848));
      if ( *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2864, "Joystick1Button14");
      *(_DWORD *)(v2 + 2864) = 365;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12336),
        (const char (*)[18])"Joystick1Button15",
        (data::ConfigKeyCode *)(v2 + 2864));
      if ( *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2880, "Joystick1Button15");
      *(_DWORD *)(v2 + 2880) = 366;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12376),
        (const char (*)[18])"Joystick1Button16",
        (data::ConfigKeyCode *)(v2 + 2880));
      if ( *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2896, "Joystick1Button16");
      *(_DWORD *)(v2 + 2896) = 367;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12416),
        (const char (*)[18])"Joystick1Button17",
        (data::ConfigKeyCode *)(v2 + 2896));
      if ( *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2912, "Joystick1Button17");
      *(_DWORD *)(v2 + 2912) = 368;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12456),
        (const char (*)[18])"Joystick1Button18",
        (data::ConfigKeyCode *)(v2 + 2912));
      if ( *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2928, "Joystick1Button18");
      *(_DWORD *)(v2 + 2928) = 369;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12496),
        (const char (*)[18])"Joystick1Button19",
        (data::ConfigKeyCode *)(v2 + 2928));
      if ( *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2944, "Joystick1Button19");
      *(_DWORD *)(v2 + 2944) = 370;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12536),
        (const char (*)[17])"Joystick2Button0",
        (data::ConfigKeyCode *)(v2 + 2944));
      if ( *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2960, "Joystick2Button0");
      *(_DWORD *)(v2 + 2960) = 371;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12576),
        (const char (*)[17])"Joystick2Button1",
        (data::ConfigKeyCode *)(v2 + 2960));
      if ( *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2976, "Joystick2Button1");
      *(_DWORD *)(v2 + 2976) = 372;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12616),
        (const char (*)[17])"Joystick2Button2",
        (data::ConfigKeyCode *)(v2 + 2976));
      if ( *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 2992, "Joystick2Button2");
      *(_DWORD *)(v2 + 2992) = 373;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12656),
        (const char (*)[17])"Joystick2Button3",
        (data::ConfigKeyCode *)(v2 + 2992));
      if ( *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3008, "Joystick2Button3");
      *(_DWORD *)(v2 + 3008) = 374;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12696),
        (const char (*)[17])"Joystick2Button4",
        (data::ConfigKeyCode *)(v2 + 3008));
      if ( *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3024, "Joystick2Button4");
      *(_DWORD *)(v2 + 3024) = 375;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12736),
        (const char (*)[17])"Joystick2Button5",
        (data::ConfigKeyCode *)(v2 + 3024));
      if ( *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3040, "Joystick2Button5");
      *(_DWORD *)(v2 + 3040) = 376;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12776),
        (const char (*)[17])"Joystick2Button6",
        (data::ConfigKeyCode *)(v2 + 3040));
      if ( *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3056, "Joystick2Button6");
      *(_DWORD *)(v2 + 3056) = 377;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12816),
        (const char (*)[17])"Joystick2Button7",
        (data::ConfigKeyCode *)(v2 + 3056));
      if ( *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3072, "Joystick2Button7");
      *(_DWORD *)(v2 + 3072) = 378;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12856),
        (const char (*)[17])"Joystick2Button8",
        (data::ConfigKeyCode *)(v2 + 3072));
      if ( *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3088, "Joystick2Button8");
      *(_DWORD *)(v2 + 3088) = 379;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12896),
        (const char (*)[17])"Joystick2Button9",
        (data::ConfigKeyCode *)(v2 + 3088));
      if ( *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3104, "Joystick2Button9");
      *(_DWORD *)(v2 + 3104) = 380;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12936),
        (const char (*)[18])"Joystick2Button10",
        (data::ConfigKeyCode *)(v2 + 3104));
      if ( *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3120, "Joystick2Button10");
      *(_DWORD *)(v2 + 3120) = 381;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 12976),
        (const char (*)[18])"Joystick2Button11",
        (data::ConfigKeyCode *)(v2 + 3120));
      if ( *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3136, "Joystick2Button11");
      *(_DWORD *)(v2 + 3136) = 382;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13016),
        (const char (*)[18])"Joystick2Button12",
        (data::ConfigKeyCode *)(v2 + 3136));
      if ( *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3152, "Joystick2Button12");
      *(_DWORD *)(v2 + 3152) = 383;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13056),
        (const char (*)[18])"Joystick2Button13",
        (data::ConfigKeyCode *)(v2 + 3152));
      if ( *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3168, "Joystick2Button13");
      *(_DWORD *)(v2 + 3168) = 384;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13096),
        (const char (*)[18])"Joystick2Button14",
        (data::ConfigKeyCode *)(v2 + 3168));
      if ( *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3184, "Joystick2Button14");
      *(_DWORD *)(v2 + 3184) = 385;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13136),
        (const char (*)[18])"Joystick2Button15",
        (data::ConfigKeyCode *)(v2 + 3184));
      if ( *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3200, "Joystick2Button15");
      *(_DWORD *)(v2 + 3200) = 386;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13176),
        (const char (*)[18])"Joystick2Button16",
        (data::ConfigKeyCode *)(v2 + 3200));
      if ( *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3216, "Joystick2Button16");
      *(_DWORD *)(v2 + 3216) = 387;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13216),
        (const char (*)[18])"Joystick2Button17",
        (data::ConfigKeyCode *)(v2 + 3216));
      if ( *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3232, "Joystick2Button17");
      *(_DWORD *)(v2 + 3232) = 388;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13256),
        (const char (*)[18])"Joystick2Button18",
        (data::ConfigKeyCode *)(v2 + 3232));
      if ( *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3248, "Joystick2Button18");
      *(_DWORD *)(v2 + 3248) = 389;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13296),
        (const char (*)[18])"Joystick2Button19",
        (data::ConfigKeyCode *)(v2 + 3248));
      if ( *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3264, "Joystick2Button19");
      *(_DWORD *)(v2 + 3264) = 390;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13336),
        (const char (*)[17])"Joystick3Button0",
        (data::ConfigKeyCode *)(v2 + 3264));
      if ( *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3280, "Joystick3Button0");
      *(_DWORD *)(v2 + 3280) = 391;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13376),
        (const char (*)[17])"Joystick3Button1",
        (data::ConfigKeyCode *)(v2 + 3280));
      if ( *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3296, "Joystick3Button1");
      *(_DWORD *)(v2 + 3296) = 392;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13416),
        (const char (*)[17])"Joystick3Button2",
        (data::ConfigKeyCode *)(v2 + 3296));
      if ( *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3312, "Joystick3Button2");
      *(_DWORD *)(v2 + 3312) = 393;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13456),
        (const char (*)[17])"Joystick3Button3",
        (data::ConfigKeyCode *)(v2 + 3312));
      if ( *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3328, "Joystick3Button3");
      *(_DWORD *)(v2 + 3328) = 394;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13496),
        (const char (*)[17])"Joystick3Button4",
        (data::ConfigKeyCode *)(v2 + 3328));
      if ( *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3344, "Joystick3Button4");
      *(_DWORD *)(v2 + 3344) = 395;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13536),
        (const char (*)[17])"Joystick3Button5",
        (data::ConfigKeyCode *)(v2 + 3344));
      if ( *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3360, "Joystick3Button5");
      *(_DWORD *)(v2 + 3360) = 396;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13576),
        (const char (*)[17])"Joystick3Button6",
        (data::ConfigKeyCode *)(v2 + 3360));
      if ( *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3376, "Joystick3Button6");
      *(_DWORD *)(v2 + 3376) = 397;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13616),
        (const char (*)[17])"Joystick3Button7",
        (data::ConfigKeyCode *)(v2 + 3376));
      if ( *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3392, "Joystick3Button7");
      *(_DWORD *)(v2 + 3392) = 398;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13656),
        (const char (*)[17])"Joystick3Button8",
        (data::ConfigKeyCode *)(v2 + 3392));
      if ( *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3408, "Joystick3Button8");
      *(_DWORD *)(v2 + 3408) = 399;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13696),
        (const char (*)[17])"Joystick3Button9",
        (data::ConfigKeyCode *)(v2 + 3408));
      if ( *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3424, "Joystick3Button9");
      *(_DWORD *)(v2 + 3424) = 400;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13736),
        (const char (*)[18])"Joystick3Button10",
        (data::ConfigKeyCode *)(v2 + 3424));
      if ( *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3440, "Joystick3Button10");
      *(_DWORD *)(v2 + 3440) = 401;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13776),
        (const char (*)[18])"Joystick3Button11",
        (data::ConfigKeyCode *)(v2 + 3440));
      if ( *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3456, "Joystick3Button11");
      *(_DWORD *)(v2 + 3456) = 402;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13816),
        (const char (*)[18])"Joystick3Button12",
        (data::ConfigKeyCode *)(v2 + 3456));
      if ( *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3472, "Joystick3Button12");
      *(_DWORD *)(v2 + 3472) = 403;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13856),
        (const char (*)[18])"Joystick3Button13",
        (data::ConfigKeyCode *)(v2 + 3472));
      if ( *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3488, "Joystick3Button13");
      *(_DWORD *)(v2 + 3488) = 404;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13896),
        (const char (*)[18])"Joystick3Button14",
        (data::ConfigKeyCode *)(v2 + 3488));
      if ( *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3504, "Joystick3Button14");
      *(_DWORD *)(v2 + 3504) = 405;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13936),
        (const char (*)[18])"Joystick3Button15",
        (data::ConfigKeyCode *)(v2 + 3504));
      if ( *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3520, "Joystick3Button15");
      *(_DWORD *)(v2 + 3520) = 406;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 13976),
        (const char (*)[18])"Joystick3Button16",
        (data::ConfigKeyCode *)(v2 + 3520));
      if ( *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3536, "Joystick3Button16");
      *(_DWORD *)(v2 + 3536) = 407;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14016),
        (const char (*)[18])"Joystick3Button17",
        (data::ConfigKeyCode *)(v2 + 3536));
      if ( *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3552, "Joystick3Button17");
      *(_DWORD *)(v2 + 3552) = 408;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14056),
        (const char (*)[18])"Joystick3Button18",
        (data::ConfigKeyCode *)(v2 + 3552));
      if ( *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3568, "Joystick3Button18");
      *(_DWORD *)(v2 + 3568) = 409;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14096),
        (const char (*)[18])"Joystick3Button19",
        (data::ConfigKeyCode *)(v2 + 3568));
      if ( *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3584, "Joystick3Button19");
      *(_DWORD *)(v2 + 3584) = 410;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14136),
        (const char (*)[17])"Joystick4Button0",
        (data::ConfigKeyCode *)(v2 + 3584));
      if ( *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3600, "Joystick4Button0");
      *(_DWORD *)(v2 + 3600) = 411;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14176),
        (const char (*)[17])"Joystick4Button1",
        (data::ConfigKeyCode *)(v2 + 3600));
      if ( *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3616, "Joystick4Button1");
      *(_DWORD *)(v2 + 3616) = 412;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14216),
        (const char (*)[17])"Joystick4Button2",
        (data::ConfigKeyCode *)(v2 + 3616));
      if ( *(_BYTE *)(((v2 + 3632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3632, "Joystick4Button2");
      *(_DWORD *)(v2 + 3632) = 413;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14256),
        (const char (*)[17])"Joystick4Button3",
        (data::ConfigKeyCode *)(v2 + 3632));
      if ( *(_BYTE *)(((v2 + 3648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3648, "Joystick4Button3");
      *(_DWORD *)(v2 + 3648) = 414;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14296),
        (const char (*)[17])"Joystick4Button4",
        (data::ConfigKeyCode *)(v2 + 3648));
      if ( *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3664, "Joystick4Button4");
      *(_DWORD *)(v2 + 3664) = 415;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14336),
        (const char (*)[17])"Joystick4Button5",
        (data::ConfigKeyCode *)(v2 + 3664));
      if ( *(_BYTE *)(((v2 + 3680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3680, "Joystick4Button5");
      *(_DWORD *)(v2 + 3680) = 416;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14376),
        (const char (*)[17])"Joystick4Button6",
        (data::ConfigKeyCode *)(v2 + 3680));
      if ( *(_BYTE *)(((v2 + 3696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3696, "Joystick4Button6");
      *(_DWORD *)(v2 + 3696) = 417;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14416),
        (const char (*)[17])"Joystick4Button7",
        (data::ConfigKeyCode *)(v2 + 3696));
      if ( *(_BYTE *)(((v2 + 3712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3712, "Joystick4Button7");
      *(_DWORD *)(v2 + 3712) = 418;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14456),
        (const char (*)[17])"Joystick4Button8",
        (data::ConfigKeyCode *)(v2 + 3712));
      if ( *(_BYTE *)(((v2 + 3728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3728, "Joystick4Button8");
      *(_DWORD *)(v2 + 3728) = 419;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14496),
        (const char (*)[17])"Joystick4Button9",
        (data::ConfigKeyCode *)(v2 + 3728));
      if ( *(_BYTE *)(((v2 + 3744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3744, "Joystick4Button9");
      *(_DWORD *)(v2 + 3744) = 420;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14536),
        (const char (*)[18])"Joystick4Button10",
        (data::ConfigKeyCode *)(v2 + 3744));
      if ( *(_BYTE *)(((v2 + 3760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3760, "Joystick4Button10");
      *(_DWORD *)(v2 + 3760) = 421;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14576),
        (const char (*)[18])"Joystick4Button11",
        (data::ConfigKeyCode *)(v2 + 3760));
      if ( *(_BYTE *)(((v2 + 3776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3776, "Joystick4Button11");
      *(_DWORD *)(v2 + 3776) = 422;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14616),
        (const char (*)[18])"Joystick4Button12",
        (data::ConfigKeyCode *)(v2 + 3776));
      if ( *(_BYTE *)(((v2 + 3792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3792, "Joystick4Button12");
      *(_DWORD *)(v2 + 3792) = 423;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14656),
        (const char (*)[18])"Joystick4Button13",
        (data::ConfigKeyCode *)(v2 + 3792));
      if ( *(_BYTE *)(((v2 + 3808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3808, "Joystick4Button13");
      *(_DWORD *)(v2 + 3808) = 424;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14696),
        (const char (*)[18])"Joystick4Button14",
        (data::ConfigKeyCode *)(v2 + 3808));
      if ( *(_BYTE *)(((v2 + 3824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3824, "Joystick4Button14");
      *(_DWORD *)(v2 + 3824) = 425;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14736),
        (const char (*)[18])"Joystick4Button15",
        (data::ConfigKeyCode *)(v2 + 3824));
      if ( *(_BYTE *)(((v2 + 3840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3840, "Joystick4Button15");
      *(_DWORD *)(v2 + 3840) = 426;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14776),
        (const char (*)[18])"Joystick4Button16",
        (data::ConfigKeyCode *)(v2 + 3840));
      if ( *(_BYTE *)(((v2 + 3856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3856, "Joystick4Button16");
      *(_DWORD *)(v2 + 3856) = 427;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14816),
        (const char (*)[18])"Joystick4Button17",
        (data::ConfigKeyCode *)(v2 + 3856));
      if ( *(_BYTE *)(((v2 + 3872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3872, "Joystick4Button17");
      *(_DWORD *)(v2 + 3872) = 428;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14856),
        (const char (*)[18])"Joystick4Button18",
        (data::ConfigKeyCode *)(v2 + 3872));
      if ( *(_BYTE *)(((v2 + 3888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3888, "Joystick4Button18");
      *(_DWORD *)(v2 + 3888) = 429;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14896),
        (const char (*)[18])"Joystick4Button19",
        (data::ConfigKeyCode *)(v2 + 3888));
      if ( *(_BYTE *)(((v2 + 3904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3904) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3904, "Joystick4Button19");
      *(_DWORD *)(v2 + 3904) = 430;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14936),
        (const char (*)[17])"Joystick5Button0",
        (data::ConfigKeyCode *)(v2 + 3904));
      if ( *(_BYTE *)(((v2 + 3920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3920) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3920, "Joystick5Button0");
      *(_DWORD *)(v2 + 3920) = 431;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 14976),
        (const char (*)[17])"Joystick5Button1",
        (data::ConfigKeyCode *)(v2 + 3920));
      if ( *(_BYTE *)(((v2 + 3936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3936) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3936, "Joystick5Button1");
      *(_DWORD *)(v2 + 3936) = 432;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15016),
        (const char (*)[17])"Joystick5Button2",
        (data::ConfigKeyCode *)(v2 + 3936));
      if ( *(_BYTE *)(((v2 + 3952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3952) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3952, "Joystick5Button2");
      *(_DWORD *)(v2 + 3952) = 433;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15056),
        (const char (*)[17])"Joystick5Button3",
        (data::ConfigKeyCode *)(v2 + 3952));
      if ( *(_BYTE *)(((v2 + 3968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3968) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3968, "Joystick5Button3");
      *(_DWORD *)(v2 + 3968) = 434;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15096),
        (const char (*)[17])"Joystick5Button4",
        (data::ConfigKeyCode *)(v2 + 3968));
      if ( *(_BYTE *)(((v2 + 3984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 3984) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 3984, "Joystick5Button4");
      *(_DWORD *)(v2 + 3984) = 435;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15136),
        (const char (*)[17])"Joystick5Button5",
        (data::ConfigKeyCode *)(v2 + 3984));
      if ( *(_BYTE *)(((v2 + 4000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4000) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4000, "Joystick5Button5");
      *(_DWORD *)(v2 + 4000) = 436;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15176),
        (const char (*)[17])"Joystick5Button6",
        (data::ConfigKeyCode *)(v2 + 4000));
      if ( *(_BYTE *)(((v2 + 4016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4016) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4016, "Joystick5Button6");
      *(_DWORD *)(v2 + 4016) = 437;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15216),
        (const char (*)[17])"Joystick5Button7",
        (data::ConfigKeyCode *)(v2 + 4016));
      if ( *(_BYTE *)(((v2 + 4032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4032) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4032, "Joystick5Button7");
      *(_DWORD *)(v2 + 4032) = 438;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15256),
        (const char (*)[17])"Joystick5Button8",
        (data::ConfigKeyCode *)(v2 + 4032));
      if ( *(_BYTE *)(((v2 + 4048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4048) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4048, "Joystick5Button8");
      *(_DWORD *)(v2 + 4048) = 439;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15296),
        (const char (*)[17])"Joystick5Button9",
        (data::ConfigKeyCode *)(v2 + 4048));
      if ( *(_BYTE *)(((v2 + 4064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4064) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4064, "Joystick5Button9");
      *(_DWORD *)(v2 + 4064) = 440;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15336),
        (const char (*)[18])"Joystick5Button10",
        (data::ConfigKeyCode *)(v2 + 4064));
      if ( *(_BYTE *)(((v2 + 4080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4080) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4080, "Joystick5Button10");
      *(_DWORD *)(v2 + 4080) = 441;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15376),
        (const char (*)[18])"Joystick5Button11",
        (data::ConfigKeyCode *)(v2 + 4080));
      if ( *(_BYTE *)(((v2 + 4096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4096) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4096, "Joystick5Button11");
      *(_DWORD *)(v2 + 4096) = 442;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15416),
        (const char (*)[18])"Joystick5Button12",
        (data::ConfigKeyCode *)(v2 + 4096));
      if ( *(_BYTE *)(((v2 + 4112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4112, "Joystick5Button12");
      *(_DWORD *)(v2 + 4112) = 443;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15456),
        (const char (*)[18])"Joystick5Button13",
        (data::ConfigKeyCode *)(v2 + 4112));
      if ( *(_BYTE *)(((v2 + 4128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4128, "Joystick5Button13");
      *(_DWORD *)(v2 + 4128) = 444;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15496),
        (const char (*)[18])"Joystick5Button14",
        (data::ConfigKeyCode *)(v2 + 4128));
      if ( *(_BYTE *)(((v2 + 4144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4144, "Joystick5Button14");
      *(_DWORD *)(v2 + 4144) = 445;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15536),
        (const char (*)[18])"Joystick5Button15",
        (data::ConfigKeyCode *)(v2 + 4144));
      if ( *(_BYTE *)(((v2 + 4160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4160, "Joystick5Button15");
      *(_DWORD *)(v2 + 4160) = 446;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15576),
        (const char (*)[18])"Joystick5Button16",
        (data::ConfigKeyCode *)(v2 + 4160));
      if ( *(_BYTE *)(((v2 + 4176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4176, "Joystick5Button16");
      *(_DWORD *)(v2 + 4176) = 447;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15616),
        (const char (*)[18])"Joystick5Button17",
        (data::ConfigKeyCode *)(v2 + 4176));
      if ( *(_BYTE *)(((v2 + 4192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4192, "Joystick5Button17");
      *(_DWORD *)(v2 + 4192) = 448;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15656),
        (const char (*)[18])"Joystick5Button18",
        (data::ConfigKeyCode *)(v2 + 4192));
      if ( *(_BYTE *)(((v2 + 4208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4208, "Joystick5Button18");
      *(_DWORD *)(v2 + 4208) = 449;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15696),
        (const char (*)[18])"Joystick5Button19",
        (data::ConfigKeyCode *)(v2 + 4208));
      if ( *(_BYTE *)(((v2 + 4224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4224, "Joystick5Button19");
      *(_DWORD *)(v2 + 4224) = 450;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15736),
        (const char (*)[17])"Joystick6Button0",
        (data::ConfigKeyCode *)(v2 + 4224));
      if ( *(_BYTE *)(((v2 + 4240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4240, "Joystick6Button0");
      *(_DWORD *)(v2 + 4240) = 451;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15776),
        (const char (*)[17])"Joystick6Button1",
        (data::ConfigKeyCode *)(v2 + 4240));
      if ( *(_BYTE *)(((v2 + 4256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4256, "Joystick6Button1");
      *(_DWORD *)(v2 + 4256) = 452;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15816),
        (const char (*)[17])"Joystick6Button2",
        (data::ConfigKeyCode *)(v2 + 4256));
      if ( *(_BYTE *)(((v2 + 4272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4272, "Joystick6Button2");
      *(_DWORD *)(v2 + 4272) = 453;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15856),
        (const char (*)[17])"Joystick6Button3",
        (data::ConfigKeyCode *)(v2 + 4272));
      if ( *(_BYTE *)(((v2 + 4288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4288, "Joystick6Button3");
      *(_DWORD *)(v2 + 4288) = 454;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15896),
        (const char (*)[17])"Joystick6Button4",
        (data::ConfigKeyCode *)(v2 + 4288));
      if ( *(_BYTE *)(((v2 + 4304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4304, "Joystick6Button4");
      *(_DWORD *)(v2 + 4304) = 455;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15936),
        (const char (*)[17])"Joystick6Button5",
        (data::ConfigKeyCode *)(v2 + 4304));
      if ( *(_BYTE *)(((v2 + 4320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4320, "Joystick6Button5");
      *(_DWORD *)(v2 + 4320) = 456;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 15976),
        (const char (*)[17])"Joystick6Button6",
        (data::ConfigKeyCode *)(v2 + 4320));
      if ( *(_BYTE *)(((v2 + 4336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4336, "Joystick6Button6");
      *(_DWORD *)(v2 + 4336) = 457;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16016),
        (const char (*)[17])"Joystick6Button7",
        (data::ConfigKeyCode *)(v2 + 4336));
      if ( *(_BYTE *)(((v2 + 4352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4352, "Joystick6Button7");
      *(_DWORD *)(v2 + 4352) = 458;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16056),
        (const char (*)[17])"Joystick6Button8",
        (data::ConfigKeyCode *)(v2 + 4352));
      if ( *(_BYTE *)(((v2 + 4368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4368, "Joystick6Button8");
      *(_DWORD *)(v2 + 4368) = 459;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16096),
        (const char (*)[17])"Joystick6Button9",
        (data::ConfigKeyCode *)(v2 + 4368));
      if ( *(_BYTE *)(((v2 + 4384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4384, "Joystick6Button9");
      *(_DWORD *)(v2 + 4384) = 460;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16136),
        (const char (*)[18])"Joystick6Button10",
        (data::ConfigKeyCode *)(v2 + 4384));
      if ( *(_BYTE *)(((v2 + 4400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4400, "Joystick6Button10");
      *(_DWORD *)(v2 + 4400) = 461;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16176),
        (const char (*)[18])"Joystick6Button11",
        (data::ConfigKeyCode *)(v2 + 4400));
      if ( *(_BYTE *)(((v2 + 4416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4416, "Joystick6Button11");
      *(_DWORD *)(v2 + 4416) = 462;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16216),
        (const char (*)[18])"Joystick6Button12",
        (data::ConfigKeyCode *)(v2 + 4416));
      if ( *(_BYTE *)(((v2 + 4432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4432, "Joystick6Button12");
      *(_DWORD *)(v2 + 4432) = 463;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16256),
        (const char (*)[18])"Joystick6Button13",
        (data::ConfigKeyCode *)(v2 + 4432));
      if ( *(_BYTE *)(((v2 + 4448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4448, "Joystick6Button13");
      *(_DWORD *)(v2 + 4448) = 464;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16296),
        (const char (*)[18])"Joystick6Button14",
        (data::ConfigKeyCode *)(v2 + 4448));
      if ( *(_BYTE *)(((v2 + 4464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4464, "Joystick6Button14");
      *(_DWORD *)(v2 + 4464) = 465;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16336),
        (const char (*)[18])"Joystick6Button15",
        (data::ConfigKeyCode *)(v2 + 4464));
      if ( *(_BYTE *)(((v2 + 4480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4480, "Joystick6Button15");
      *(_DWORD *)(v2 + 4480) = 466;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16376),
        (const char (*)[18])"Joystick6Button16",
        (data::ConfigKeyCode *)(v2 + 4480));
      if ( *(_BYTE *)(((v2 + 4496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4496, "Joystick6Button16");
      *(_DWORD *)(v2 + 4496) = 467;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16416),
        (const char (*)[18])"Joystick6Button17",
        (data::ConfigKeyCode *)(v2 + 4496));
      if ( *(_BYTE *)(((v2 + 4512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4512, "Joystick6Button17");
      *(_DWORD *)(v2 + 4512) = 468;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16456),
        (const char (*)[18])"Joystick6Button18",
        (data::ConfigKeyCode *)(v2 + 4512));
      if ( *(_BYTE *)(((v2 + 4528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4528, "Joystick6Button18");
      *(_DWORD *)(v2 + 4528) = 469;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16496),
        (const char (*)[18])"Joystick6Button19",
        (data::ConfigKeyCode *)(v2 + 4528));
      if ( *(_BYTE *)(((v2 + 4544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4544, "Joystick6Button19");
      *(_DWORD *)(v2 + 4544) = 470;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16536),
        (const char (*)[17])"Joystick7Button0",
        (data::ConfigKeyCode *)(v2 + 4544));
      if ( *(_BYTE *)(((v2 + 4560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4560, "Joystick7Button0");
      *(_DWORD *)(v2 + 4560) = 471;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16576),
        (const char (*)[17])"Joystick7Button1",
        (data::ConfigKeyCode *)(v2 + 4560));
      if ( *(_BYTE *)(((v2 + 4576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4576, "Joystick7Button1");
      *(_DWORD *)(v2 + 4576) = 472;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16616),
        (const char (*)[17])"Joystick7Button2",
        (data::ConfigKeyCode *)(v2 + 4576));
      if ( *(_BYTE *)(((v2 + 4592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4592, "Joystick7Button2");
      *(_DWORD *)(v2 + 4592) = 473;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16656),
        (const char (*)[17])"Joystick7Button3",
        (data::ConfigKeyCode *)(v2 + 4592));
      if ( *(_BYTE *)(((v2 + 4608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4608, "Joystick7Button3");
      *(_DWORD *)(v2 + 4608) = 474;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16696),
        (const char (*)[17])"Joystick7Button4",
        (data::ConfigKeyCode *)(v2 + 4608));
      if ( *(_BYTE *)(((v2 + 4624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4624, "Joystick7Button4");
      *(_DWORD *)(v2 + 4624) = 475;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16736),
        (const char (*)[17])"Joystick7Button5",
        (data::ConfigKeyCode *)(v2 + 4624));
      if ( *(_BYTE *)(((v2 + 4640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4640, "Joystick7Button5");
      *(_DWORD *)(v2 + 4640) = 476;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16776),
        (const char (*)[17])"Joystick7Button6",
        (data::ConfigKeyCode *)(v2 + 4640));
      if ( *(_BYTE *)(((v2 + 4656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4656, "Joystick7Button6");
      *(_DWORD *)(v2 + 4656) = 477;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16816),
        (const char (*)[17])"Joystick7Button7",
        (data::ConfigKeyCode *)(v2 + 4656));
      if ( *(_BYTE *)(((v2 + 4672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4672, "Joystick7Button7");
      *(_DWORD *)(v2 + 4672) = 478;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16856),
        (const char (*)[17])"Joystick7Button8",
        (data::ConfigKeyCode *)(v2 + 4672));
      if ( *(_BYTE *)(((v2 + 4688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4688, "Joystick7Button8");
      *(_DWORD *)(v2 + 4688) = 479;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16896),
        (const char (*)[17])"Joystick7Button9",
        (data::ConfigKeyCode *)(v2 + 4688));
      if ( *(_BYTE *)(((v2 + 4704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4704, "Joystick7Button9");
      *(_DWORD *)(v2 + 4704) = 480;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16936),
        (const char (*)[18])"Joystick7Button10",
        (data::ConfigKeyCode *)(v2 + 4704));
      if ( *(_BYTE *)(((v2 + 4720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4720, "Joystick7Button10");
      *(_DWORD *)(v2 + 4720) = 481;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 16976),
        (const char (*)[18])"Joystick7Button11",
        (data::ConfigKeyCode *)(v2 + 4720));
      if ( *(_BYTE *)(((v2 + 4736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4736, "Joystick7Button11");
      *(_DWORD *)(v2 + 4736) = 482;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17016),
        (const char (*)[18])"Joystick7Button12",
        (data::ConfigKeyCode *)(v2 + 4736));
      if ( *(_BYTE *)(((v2 + 4752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4752, "Joystick7Button12");
      *(_DWORD *)(v2 + 4752) = 483;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17056),
        (const char (*)[18])"Joystick7Button13",
        (data::ConfigKeyCode *)(v2 + 4752));
      if ( *(_BYTE *)(((v2 + 4768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4768, "Joystick7Button13");
      *(_DWORD *)(v2 + 4768) = 484;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17096),
        (const char (*)[18])"Joystick7Button14",
        (data::ConfigKeyCode *)(v2 + 4768));
      if ( *(_BYTE *)(((v2 + 4784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4784, "Joystick7Button14");
      *(_DWORD *)(v2 + 4784) = 485;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17136),
        (const char (*)[18])"Joystick7Button15",
        (data::ConfigKeyCode *)(v2 + 4784));
      if ( *(_BYTE *)(((v2 + 4800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4800, "Joystick7Button15");
      *(_DWORD *)(v2 + 4800) = 486;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17176),
        (const char (*)[18])"Joystick7Button16",
        (data::ConfigKeyCode *)(v2 + 4800));
      if ( *(_BYTE *)(((v2 + 4816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4816, "Joystick7Button16");
      *(_DWORD *)(v2 + 4816) = 487;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17216),
        (const char (*)[18])"Joystick7Button17",
        (data::ConfigKeyCode *)(v2 + 4816));
      if ( *(_BYTE *)(((v2 + 4832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4832, "Joystick7Button17");
      *(_DWORD *)(v2 + 4832) = 488;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17256),
        (const char (*)[18])"Joystick7Button18",
        (data::ConfigKeyCode *)(v2 + 4832));
      if ( *(_BYTE *)(((v2 + 4848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4848, "Joystick7Button18");
      *(_DWORD *)(v2 + 4848) = 489;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17296),
        (const char (*)[18])"Joystick7Button19",
        (data::ConfigKeyCode *)(v2 + 4848));
      if ( *(_BYTE *)(((v2 + 4864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4864, "Joystick7Button19");
      *(_DWORD *)(v2 + 4864) = 490;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17336),
        (const char (*)[17])"Joystick8Button0",
        (data::ConfigKeyCode *)(v2 + 4864));
      if ( *(_BYTE *)(((v2 + 4880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4880, "Joystick8Button0");
      *(_DWORD *)(v2 + 4880) = 491;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17376),
        (const char (*)[17])"Joystick8Button1",
        (data::ConfigKeyCode *)(v2 + 4880));
      if ( *(_BYTE *)(((v2 + 4896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4896, "Joystick8Button1");
      *(_DWORD *)(v2 + 4896) = 492;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17416),
        (const char (*)[17])"Joystick8Button2",
        (data::ConfigKeyCode *)(v2 + 4896));
      if ( *(_BYTE *)(((v2 + 4912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4912, "Joystick8Button2");
      *(_DWORD *)(v2 + 4912) = 493;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17456),
        (const char (*)[17])"Joystick8Button3",
        (data::ConfigKeyCode *)(v2 + 4912));
      if ( *(_BYTE *)(((v2 + 4928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4928, "Joystick8Button3");
      *(_DWORD *)(v2 + 4928) = 494;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17496),
        (const char (*)[17])"Joystick8Button4",
        (data::ConfigKeyCode *)(v2 + 4928));
      if ( *(_BYTE *)(((v2 + 4944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4944, "Joystick8Button4");
      *(_DWORD *)(v2 + 4944) = 495;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17536),
        (const char (*)[17])"Joystick8Button5",
        (data::ConfigKeyCode *)(v2 + 4944));
      if ( *(_BYTE *)(((v2 + 4960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4960, "Joystick8Button5");
      *(_DWORD *)(v2 + 4960) = 496;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17576),
        (const char (*)[17])"Joystick8Button6",
        (data::ConfigKeyCode *)(v2 + 4960));
      if ( *(_BYTE *)(((v2 + 4976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4976, "Joystick8Button6");
      *(_DWORD *)(v2 + 4976) = 497;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17616),
        (const char (*)[17])"Joystick8Button7",
        (data::ConfigKeyCode *)(v2 + 4976));
      if ( *(_BYTE *)(((v2 + 4992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 4992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 4992, "Joystick8Button7");
      *(_DWORD *)(v2 + 4992) = 498;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17656),
        (const char (*)[17])"Joystick8Button8",
        (data::ConfigKeyCode *)(v2 + 4992));
      if ( *(_BYTE *)(((v2 + 5008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5008, "Joystick8Button8");
      *(_DWORD *)(v2 + 5008) = 499;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[17],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17696),
        (const char (*)[17])"Joystick8Button9",
        (data::ConfigKeyCode *)(v2 + 5008));
      if ( *(_BYTE *)(((v2 + 5024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5024, "Joystick8Button9");
      *(_DWORD *)(v2 + 5024) = 500;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17736),
        (const char (*)[18])"Joystick8Button10",
        (data::ConfigKeyCode *)(v2 + 5024));
      if ( *(_BYTE *)(((v2 + 5040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5040, "Joystick8Button10");
      *(_DWORD *)(v2 + 5040) = 501;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17776),
        (const char (*)[18])"Joystick8Button11",
        (data::ConfigKeyCode *)(v2 + 5040));
      if ( *(_BYTE *)(((v2 + 5056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5056, "Joystick8Button11");
      *(_DWORD *)(v2 + 5056) = 502;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17816),
        (const char (*)[18])"Joystick8Button12",
        (data::ConfigKeyCode *)(v2 + 5056));
      if ( *(_BYTE *)(((v2 + 5072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5072, "Joystick8Button12");
      *(_DWORD *)(v2 + 5072) = 503;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17856),
        (const char (*)[18])"Joystick8Button13",
        (data::ConfigKeyCode *)(v2 + 5072));
      if ( *(_BYTE *)(((v2 + 5088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5088, "Joystick8Button13");
      *(_DWORD *)(v2 + 5088) = 504;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17896),
        (const char (*)[18])"Joystick8Button14",
        (data::ConfigKeyCode *)(v2 + 5088));
      if ( *(_BYTE *)(((v2 + 5104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5104, "Joystick8Button14");
      *(_DWORD *)(v2 + 5104) = 505;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17936),
        (const char (*)[18])"Joystick8Button15",
        (data::ConfigKeyCode *)(v2 + 5104));
      if ( *(_BYTE *)(((v2 + 5120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5120, "Joystick8Button15");
      *(_DWORD *)(v2 + 5120) = 506;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 17976),
        (const char (*)[18])"Joystick8Button16",
        (data::ConfigKeyCode *)(v2 + 5120));
      if ( *(_BYTE *)(((v2 + 5136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5136, "Joystick8Button16");
      *(_DWORD *)(v2 + 5136) = 507;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 18016),
        (const char (*)[18])"Joystick8Button17",
        (data::ConfigKeyCode *)(v2 + 5136));
      if ( *(_BYTE *)(((v2 + 5152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5152, "Joystick8Button17");
      *(_DWORD *)(v2 + 5152) = 508;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 18056),
        (const char (*)[18])"Joystick8Button18",
        (data::ConfigKeyCode *)(v2 + 5152));
      if ( *(_BYTE *)(((v2 + 5168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 5168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 5168, "Joystick8Button18");
      *(_DWORD *)(v2 + 5168) = 509;
      std::pair<std::string const,data::ConfigKeyCode>::pair<char const(&)[18],data::ConfigKeyCode,true>(
        (std::pair<const std::string,data::ConfigKeyCode> *const)(v2 + 18096),
        (const char (*)[18])"Joystick8Button19",
        (data::ConfigKeyCode *)(v2 + 5168));
      std::allocator<std::pair<std::string const,data::ConfigKeyCode>>::allocator((std::allocator<std::pair<const std::string,data::ConfigKeyCode> > *const)(v2 + 64));
      std::map<std::string,data::ConfigKeyCode>::map(
        &data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigKeyCode> >)__PAIR128__(319LL, v2 + 5376),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ConfigKeyCode>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigKeyCode>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigKeyCode>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigKeyCode> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigKeyCode> *)(v2 + 18136);
            i != (std::pair<const std::string,data::ConfigKeyCode> *)(v2 + 5376);
            std::pair<std::string const,data::ConfigKeyCode>::~pair(i) )
      {
        --i;
      }
      e = (data::ConfigKeyCode *)12760;
      __asan_poison_stack_memory(v2 + 5376, 12760LL);
      *(_BYTE *)(((v2 + 5168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 5008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4080) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4048) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4016) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3984) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3952) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3920) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3888) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3856) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3824) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3792) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3760) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3728) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3696) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3664) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3632) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2096) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2064) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2032) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 2000) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1968) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 5184) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 5184) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 5184, e);
    *(std::map<std::string,data::ConfigKeyCode>::iterator *)(v2 + 5184) = std::map<std::string,data::ConfigKeyCode>::find(
                                                                            &data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 5216) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 5216, s);
    *(std::map<std::string,data::ConfigKeyCode>::iterator *)(v2 + 5216) = std::map<std::string,data::ConfigKeyCode>::end(&data::enumStrToVal(std::string const&,data::ConfigKeyCode &)::m);
    v7 = (char *)(v2 + 5216);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigKeyCode> >::_Self *)(v2 + 5184),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigKeyCode> >::_Self *)(v2 + 5216));
    *(_BYTE *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 5312) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 5343) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 5343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 5312, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 5312),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigKeyCode.cpp",
        "enumStrToVal",
        998);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 5312),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5312));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigKeyCode>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigKeyCode> > *const)(v2 + 5184));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(ea, v7);
      }
      *ea = second;
      v5 = 1;
    }
  }
  v13 = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8288) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 656) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8294) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF829C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF88F4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862889) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451548 - (((_DWORD)v4 + 2147451556) & 0xFFFFFFF8) + 1632) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_9(v2, 18400LL, v16);
  }
  return v13;
};

// Line 1006: range 0000000011F41827-0000000011F42730
const char *__cdecl data::getDescription(data::ConfigKeyCode e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_64:
      result = (const char *)&unk_1A891C40;
      break;
    case Backspace:
      result = (const char *)&unk_1A891C40;
      break;
    case Tab:
      result = (const char *)&unk_1A891C40;
      break;
    case Clear:
      result = (const char *)&unk_1A891C40;
      break;
    case Return_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Pause:
      result = (const char *)&unk_1A891C40;
      break;
    case Escape:
      result = (const char *)&unk_1A891C40;
      break;
    case Space_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Exclaim:
      result = (const char *)&unk_1A891C40;
      break;
    case DoubleQuote:
      result = (const char *)&unk_1A891C40;
      break;
    case Hash:
      result = (const char *)&unk_1A891C40;
      break;
    case Dollar:
      result = (const char *)&unk_1A891C40;
      break;
    case Ampersand:
      result = (const char *)&unk_1A891C40;
      break;
    case Quote:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftParen:
      result = (const char *)&unk_1A891C40;
      break;
    case RightParen:
      result = (const char *)&unk_1A891C40;
      break;
    case Asterisk:
      result = (const char *)&unk_1A891C40;
      break;
    case Plus:
      result = (const char *)&unk_1A891C40;
      break;
    case Comma:
      result = (const char *)&unk_1A891C40;
      break;
    case Minus:
      result = (const char *)&unk_1A891C40;
      break;
    case Period:
      result = (const char *)&unk_1A891C40;
      break;
    case Slash_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha0:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha1:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha2:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha3:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha4:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha5:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha6:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha7:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha8:
      result = (const char *)&unk_1A891C40;
      break;
    case Alpha9:
      result = (const char *)&unk_1A891C40;
      break;
    case Colon:
      result = (const char *)&unk_1A891C40;
      break;
    case Semicolon:
      result = (const char *)&unk_1A891C40;
      break;
    case Less_2:
      result = (const char *)&unk_1A891C40;
      break;
    case Equals:
      result = (const char *)&unk_1A891C40;
      break;
    case Greater_4:
      result = (const char *)&unk_1A891C40;
      break;
    case Question:
      result = (const char *)&unk_1A891C40;
      break;
    case At:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftBracket:
      result = (const char *)&unk_1A891C40;
      break;
    case Backslash:
      result = (const char *)&unk_1A891C40;
      break;
    case RightBracket:
      result = (const char *)&unk_1A891C40;
      break;
    case Caret:
      result = (const char *)&unk_1A891C40;
      break;
    case Underscore:
      result = (const char *)&unk_1A891C40;
      break;
    case BackQuote:
      result = (const char *)&unk_1A891C40;
      break;
    case A_0:
      result = (const char *)&unk_1A891C40;
      break;
    case B_0:
      result = (const char *)&unk_1A891C40;
      break;
    case C:
      result = (const char *)&unk_1A891C40;
      break;
    case D:
      result = (const char *)&unk_1A891C40;
      break;
    case E_0:
      result = (const char *)&unk_1A891C40;
      break;
    case F:
      result = (const char *)&unk_1A891C40;
      break;
    case G:
      result = (const char *)&unk_1A891C40;
      break;
    case H:
      result = (const char *)&unk_1A891C40;
      break;
    case I:
      result = (const char *)&unk_1A891C40;
      break;
    case J:
      result = (const char *)&unk_1A891C40;
      break;
    case K:
      result = (const char *)&unk_1A891C40;
      break;
    case L_0:
      result = (const char *)&unk_1A891C40;
      break;
    case M:
      result = (const char *)&unk_1A891C40;
      break;
    case N_0:
      result = (const char *)&unk_1A891C40;
      break;
    case O:
      result = (const char *)&unk_1A891C40;
      break;
    case P:
      result = (const char *)&unk_1A891C40;
      break;
    case Q_0:
      result = (const char *)&unk_1A891C40;
      break;
    case R_0:
      result = (const char *)&unk_1A891C40;
      break;
    case S:
      result = (const char *)&unk_1A891C40;
      break;
    case T_0:
      result = (const char *)&unk_1A891C40;
      break;
    case U:
      result = (const char *)&unk_1A891C40;
      break;
    case V:
      result = (const char *)&unk_1A891C40;
      break;
    case W:
      result = (const char *)&unk_1A891C40;
      break;
    case X_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Y_1:
      result = (const char *)&unk_1A891C40;
      break;
    case Z_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Delete:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad0:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad1:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad2:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad3:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad4:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad5:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad6:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad7:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad8:
      result = (const char *)&unk_1A891C40;
      break;
    case Keypad9:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadPeriod:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadDivide:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadMultiply:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadMinus:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadPlus:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadEnter:
      result = (const char *)&unk_1A891C40;
      break;
    case KeypadEquals:
      result = (const char *)&unk_1A891C40;
      break;
    case UpArrow:
      result = (const char *)&unk_1A891C40;
      break;
    case DownArrow:
      result = (const char *)&unk_1A891C40;
      break;
    case RightArrow:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftArrow:
      result = (const char *)&unk_1A891C40;
      break;
    case Insert:
      result = (const char *)&unk_1A891C40;
      break;
    case Home:
      result = (const char *)&unk_1A891C40;
      break;
    case End_0:
      result = (const char *)&unk_1A891C40;
      break;
    case PageUp:
      result = (const char *)&unk_1A891C40;
      break;
    case PageDown:
      result = (const char *)&unk_1A891C40;
      break;
    case F1_0:
      result = (const char *)&unk_1A891C40;
      break;
    case F2_0:
      result = (const char *)&unk_1A891C40;
      break;
    case F3_0:
      result = (const char *)&unk_1A891C40;
      break;
    case F4:
      result = (const char *)&unk_1A891C40;
      break;
    case F5:
      result = (const char *)&unk_1A891C40;
      break;
    case F6:
      result = (const char *)&unk_1A891C40;
      break;
    case F7:
      result = (const char *)&unk_1A891C40;
      break;
    case F8:
      result = (const char *)&unk_1A891C40;
      break;
    case F9:
      result = (const char *)&unk_1A891C40;
      break;
    case F10:
      result = (const char *)&unk_1A891C40;
      break;
    case F11:
      result = (const char *)&unk_1A891C40;
      break;
    case F12:
      result = (const char *)&unk_1A891C40;
      break;
    case F13:
      result = (const char *)&unk_1A891C40;
      break;
    case F14:
      result = (const char *)&unk_1A891C40;
      break;
    case F15:
      result = (const char *)&unk_1A891C40;
      break;
    case Numlock:
      result = (const char *)&unk_1A891C40;
      break;
    case CapsLock:
      result = (const char *)&unk_1A891C40;
      break;
    case ScrollLock:
      result = (const char *)&unk_1A891C40;
      break;
    case RightShift:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftShift:
      result = (const char *)&unk_1A891C40;
      break;
    case RightControl:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftControl_0:
      result = (const char *)&unk_1A891C40;
      break;
    case RightAlt:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftAlt:
      result = (const char *)&unk_1A891C40;
      break;
    case RightCommand:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftCommand:
      result = (const char *)&unk_1A891C40;
      break;
    case LeftWindows:
      result = (const char *)&unk_1A891C40;
      break;
    case RightWindows:
      result = (const char *)&unk_1A891C40;
      break;
    case AltGr:
      result = (const char *)&unk_1A891C40;
      break;
    case Help_0:
      result = (const char *)&unk_1A891C40;
      break;
    case Print:
      result = (const char *)&unk_1A891C40;
      break;
    case SysReq:
      result = (const char *)&unk_1A891C40;
      break;
    case Break:
      result = (const char *)&unk_1A891C40;
      break;
    case Menu:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse0:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse1:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse2:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse3:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse4:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse5:
      result = (const char *)&unk_1A891C40;
      break;
    case Mouse6:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton0:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton1:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton2:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton3:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton4:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton5:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton6:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton7:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton8:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton9:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton10:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton11:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton12:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton13:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton14:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton15:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton16:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton17:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton18:
      result = (const char *)&unk_1A891C40;
      break;
    case JoystickButton19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick1Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick2Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick3Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick4Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick5Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick6Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick7Button19:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button0:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button1:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button2:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button3:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button4:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button5:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button6:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button7:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button8:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button9:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button10:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button11:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button12:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button13:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button14:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button15:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button16:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button17:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button18:
      result = (const char *)&unk_1A891C40;
      break;
    case Joystick8Button19:
      result = (const char *)&unk_1A891C40;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};
