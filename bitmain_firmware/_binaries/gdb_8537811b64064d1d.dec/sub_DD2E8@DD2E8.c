void __fastcall sub_DD2E8(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r5
  unsigned __int8 *v7; // r8
  int v8; // r4
  int v9; // [sp+10h] [bp-60h] BYREF
  void *ptr[3]; // [sp+14h] [bp-5Ch] BYREF
  _DWORD v11[5]; // [sp+20h] [bp-50h] BYREF
  int v12; // [sp+34h] [bp-3Ch]
  int v13; // [sp+38h] [bp-38h]
  int v14; // [sp+3Ch] [bp-34h]
  int v15; // [sp+40h] [bp-30h]
  int v16; // [sp+44h] [bp-2Ch]
  int v17; // [sp+48h] [bp-28h] BYREF
  int v18; // [sp+4Ch] [bp-24h]
  int v19; // [sp+50h] [bp-20h]
  int v20; // [sp+54h] [bp-1Ch]
  int v21; // [sp+58h] [bp-18h]
  int v22; // [sp+5Ch] [bp-14h]
  int v23; // [sp+60h] [bp-10h]
  int v24; // [sp+64h] [bp-Ch]
  int v25; // [sp+68h] [bp-8h]
  int v26; // [sp+6Ch] [bp-4h]
  char vars0; // [sp+70h] [bp+0h] BYREF

  if ( ((int (*)(void))sub_19CC98)() || (v4 = sub_19CD30(a1), *(_DWORD *)(v4 + 4)) )
  {
    v5 = sub_203238(&v17);
    v6 = v18;
    if ( sub_20DB9C(v5) )
    {
      if ( sub_19CC98(a1) )
      {
        if ( v6 )
          goto LABEL_6;
      }
      else
      {
        v7 = *(unsigned __int8 **)(sub_19CD30(a1) + 4);
        if ( v6 && (!v7 || !strchr("+-", *v7) || v7[1] == 91) )
          goto LABEL_6;
      }
      sub_20DBDC();
      sub_20DBF4();
    }
LABEL_6:
    ((void (__fastcall *)(int, int))loc_19BE18)(a1, 1);
    return;
  }
  if ( !sub_20DB9C(v4) )
    sub_94708("No default breakpoint address now.");
  sub_20DC0C(v11);
  v8 = v12;
  sub_21DED4(v11, v12);
  v12 = v8;
  LOBYTE(v14) = 1;
  memset(ptr, 0, sizeof(ptr));
  v17 = v11[0];
  v18 = v11[1];
  v19 = v11[2];
  v20 = v11[3];
  v21 = v11[4];
  v22 = v8;
  v23 = v13;
  v24 = v14;
  v25 = v15;
  v26 = v16;
  sub_DFA5C(ptr, &v17, &vars0, 0);
  v9 = 0;
  sub_E0408(a2 + 8, &v9);
  if ( ptr[0] )
    sub_339E8C(ptr[0]);
}
