int __fastcall sub_3C9C8(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r6
  int v8; // r4
  int *v9; // r5
  int v10; // r0
  int v11; // r7
  const char *v13; // r7
  const char *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  const char *v17; // r0
  _DWORD v18[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD v19[3]; // [sp+10h] [bp-18h] BYREF
  _DWORD v20[3]; // [sp+1Ch] [bp-Ch] BYREF

  v6 = sub_22F180();
  v7 = sub_92564(nullsub_39, 0);
  v8 = sub_25B2BC(a2);
  if ( getpid() == v8 )
    sub_94708("I refuse to debug myself!");
  if ( v6 )
  {
    if ( !a3 )
      goto LABEL_4;
LABEL_7:
    v13 = (const char *)sub_FA64C(0);
    if ( v13 )
    {
      sub_98F78(v19, v8);
      v14 = (const char *)sub_230984(v19[0], v19[1], v19[2]);
      v15 = sub_259880("Attaching to program: %s, %s\n", v13, v14);
    }
    else
    {
      sub_98F78(v20, v8);
      v17 = (const char *)sub_230984(v20[0], v20[1], v20[2]);
      v15 = sub_259880("Attaching to %s\n", v17);
    }
    v16 = (_DWORD *)sub_242FB4(v15);
    sub_256834(*v16);
    goto LABEL_4;
  }
  sub_231BA0(a1);
  sub_2589C0(a1);
  if ( a3 )
    goto LABEL_7;
LABEL_4:
  v9 = _errno_location();
  *v9 = 0;
  v10 = ptrace(PTRACE_ATTACH, v8, 0);
  if ( *v9 )
    sub_258B2C("ptrace");
  v11 = sub_1836B0(v10);
  sub_1839C0(v11, v8);
  *(_BYTE *)(v11 + 120) = 1;
  sub_98F78(v18, v8);
  dword_4878EC = v18[0];
  dword_4878F0 = v18[1];
  dword_4878F4 = v18[2];
  ((void (*)(void))loc_23FAB4)();
  return sub_92668(v7);
}
