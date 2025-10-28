int __fastcall sub_19DD44(unsigned __int8 a1, int a2, int a3, int a4)
{
  int v4; // r4
  _BOOL4 v6; // r2
  bool v7; // cc
  bool v8; // zf
  int result; // r0

  v4 = a1;
  v6 = (unsigned int)a1 - 127 > 0x20;
  if ( a1 <= 0x1Fu )
    v6 = 0;
  if ( v6 )
  {
    v7 = dword_48A9B0 <= 0;
    if ( dword_48A9B0 )
      v7 = a1 <= 0x7Fu;
    if ( v7 )
    {
      v8 = a1 == 92;
      if ( a1 != 92 )
        v8 = a1 == a4;
      if ( v8 )
        sub_25A6E4(&unk_3C30FC, a3);
      return sub_25A440(a3, "%c", v4);
    }
    else
    {
      return sub_25A440(a3, "\\%.3o", a1);
    }
  }
  else
  {
    switch ( a1 )
    {
      case 7u:
        result = sub_25A6E4("\\a", a3);
        break;
      case 8u:
        result = sub_25A6E4("\\b", a3);
        break;
      case 9u:
        result = sub_25A6E4("\\t", a3);
        break;
      case 0xAu:
        result = sub_25A6E4("\\n", a3);
        break;
      case 0xCu:
        result = sub_25A6E4("\\f", a3);
        break;
      case 0xDu:
        result = sub_25A6E4("\\r", a3);
        break;
      case 0x1Bu:
        result = sub_25A6E4(&word_3C3100, a3);
        break;
      default:
        return sub_25A440(a3, "\\%.3o", a1);
    }
  }
  return result;
}
