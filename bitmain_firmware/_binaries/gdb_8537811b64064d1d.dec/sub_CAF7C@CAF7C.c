int __fastcall sub_CAF7C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int result; // r0
  int v4; // r3
  const char *v5; // r0

  v2 = (_DWORD *)sub_243004(a1);
  result = sub_257418(*v2);
  if ( !result )
  {
    switch ( a1[3] )
    {
      case 1:
      case 0x20:
        v4 = a1[5];
        if ( v4 )
          LOWORD(v5) = 8484;
        else
          LOWORD(v5) = 20;
        if ( v4 )
          HIWORD(v5) = 55;
        else
          HIWORD(v5) = 56;
        sub_259F38(v5);
        sub_259F38(" %d", a1[6]);
        if ( a1[3] == 32 )
          sub_259F38(" at gnu-indirect-function resolver");
        goto LABEL_4;
      case 2:
        sub_259F38("Hardware assisted breakpoint %d", a1[6]);
        return sub_C89DC((int)a1);
      case 0x1E:
        sub_259F38("Dprintf %d", a1[6]);
        goto LABEL_4;
      default:
LABEL_4:
        result = sub_C89DC((int)a1);
        break;
    }
  }
  return result;
}
