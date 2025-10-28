_DWORD *__fastcall sub_580A4(_DWORD *a1, int a2, int a3, int a4, void (__fastcall *a5)(_DWORD, int), int a6)
{
  int v9; // r5
  int v11; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // [sp+Ch] [bp-Ch] BYREF
  int v16; // [sp+10h] [bp-8h] BYREF
  int v17; // [sp+14h] [bp-4h] BYREF

  if ( a3 && sub_244AD4(dword_487668) )
  {
    if ( off_48A578 )
    {
      off_48A578("%s  %s\n", a2, "End with a line saying just \"end\".");
    }
    else
    {
      v13 = sub_259880("%s\n%s\n", a2, "End with a line saying just \"end\".");
      v14 = (_DWORD *)sub_242FB4(v13);
      sub_256834(*v14);
    }
  }
  if ( sub_191768("console") )
  {
    sub_57F54(&v15, (int (__fastcall *)(int))sub_5710C, a4, a5, a6);
    v9 = v15;
    if ( !a3 )
    {
LABEL_4:
      *a1 = v9;
      return a1;
    }
  }
  else
  {
    v17 = sub_19172C(&v17, "console");
    sub_57F54(&v16, (int (__fastcall *)(int))sub_5710C, a4, a5, a6);
    v9 = v16;
    v11 = sub_191760(v17);
    sub_19172C(&v17, v11);
    if ( !a3 )
      goto LABEL_4;
  }
  if ( !sub_244AD4(dword_487668) || !off_48A574 )
    goto LABEL_4;
  off_48A574();
  *a1 = v9;
  return a1;
}
