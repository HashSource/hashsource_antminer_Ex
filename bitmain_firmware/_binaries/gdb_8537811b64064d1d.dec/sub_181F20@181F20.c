void __fastcall sub_181F20(const char *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  void *v8; // r7
  int v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r8
  _DWORD *v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // [sp+4h] [bp-14h] BYREF
  void *ptr; // [sp+8h] [bp-10h] BYREF
  _DWORD v22[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = sub_1836B0(a1);
  v5 = sub_243C5C(v4);
  v6 = sub_16F67C(v5);
  if ( !((int (__fastcall *)(int))loc_16D8AC)(v6) && sub_22EBE4(0) )
  {
    v19 = sub_25A40C("A program is being debugged already.  Kill it? ");
    if ( !v19 )
      sub_94708("Not killed.");
    sub_22EF3C(v19);
  }
  sub_23082C(a2);
  v7 = sub_17EBFC(&ptr, a1, &v20);
  v8 = ptr;
  v9 = sub_230F24(v7);
  sub_18012C(v9, v20);
  if ( dword_487950 && !(*(int (__fastcall **)(int))(v9 + 360))(v9) )
    sub_94708("Cannot attach to this target in non-stop mode");
  v10 = (*(int (__fastcall **)(int, void *, int))(v9 + 32))(v9, v8, a2);
  v11 = sub_22EF7C(v10);
  v12 = sub_22EFA4(v11);
  sub_187ED8(v12);
  v13 = sub_187D98(0);
  *(_BYTE *)(v4 + 140) = 1;
  v14 = sub_232978(v13);
  v15 = v20;
  if ( v14 )
  {
    if ( v20 )
    {
      sub_231EDC(dword_4878EC, dword_4878F0, dword_4878F4);
    }
    else
    {
      v18 = ps_getpid_0((int)&dword_4878EC);
      sub_98F78(v22, v18);
      sub_231EDC(v22[0], v22[1], v22[2]);
    }
    v15 = v20;
  }
  if ( v15 )
    v16 = 1;
  else
    v16 = 2;
  if ( dword_489AF4 )
  {
    sub_181D58(a2, v16);
  }
  else
  {
    *(_DWORD *)(v4 + 24) = 3;
    v17 = sub_93050(0xCu);
    *v17 = sub_32727C(v8);
    v17[1] = a2;
    v17[2] = v16;
    sub_F850C((int)sub_181F10, (int)v17, (int)sub_17E86C);
    if ( !off_489AFC(&dword_4899A0) )
      sub_187A48();
  }
  if ( ptr )
    free(ptr);
}
