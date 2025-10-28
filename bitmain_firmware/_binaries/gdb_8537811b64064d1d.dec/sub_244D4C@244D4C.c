int sub_244D4C()
{
  unsigned __int8 *v0; // r0
  const char *v1; // r6
  int *v2; // r5
  __int64 v3; // r4
  unsigned int v4; // r3
  char *v5; // r0
  bool v7; // zf
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v0 = (unsigned __int8 *)getenv("GDBHISTSIZE");
  if ( v0
    && (v1 = sub_935F8(v0),
        v2 = _errno_location(),
        *v2 = 0,
        LODWORD(v3) = strtol(v1, &endptr, 10),
        HIDWORD(v3) = *v2,
        endptr = sub_935F8((unsigned __int8 *)endptr),
        !*endptr) )
  {
    if ( *v1 )
      v4 = (unsigned int)v3 >> 31;
    else
      v4 = 1;
    v7 = v4 == 0;
    LOWORD(v4) = (unsigned __int16)&dword_46DCD8;
    if ( !v7 || v3 == 0x227FFFFFFFLL )
    {
      HIWORD(v4) = (unsigned int)&dword_46DCD8 >> 16;
      LODWORD(v3) = -1;
      *(_DWORD *)(v4 + 4) = -1;
      goto LABEL_6;
    }
    HIWORD(v4) = (unsigned int)&dword_46DCD8 >> 16;
    *(_DWORD *)(v4 + 4) = v3;
  }
  else
  {
    v4 = (unsigned int)&dword_46DCD8;
    LODWORD(v3) = dword_46DCDC;
  }
  if ( (_DWORD)v3 == -2 )
  {
    LODWORD(v3) = 256;
    *(_DWORD *)(v4 + 4) = 256;
  }
LABEL_6:
  ((void (__fastcall *)(_DWORD))loc_242EB0)(v3);
  v5 = getenv("GDBHISTFILE");
  if ( v5 )
  {
    dword_48A4F4 = sub_32727C(v5);
    return sub_29AB88();
  }
  else
  {
    if ( !dword_48A4F4 )
      dword_48A4F4 = sub_31E2A4(dword_48A4F8, "/.gdb_history", 0);
    return sub_29AB88();
  }
}
