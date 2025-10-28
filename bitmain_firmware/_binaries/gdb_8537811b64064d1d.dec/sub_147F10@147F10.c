int __fastcall sub_147F10(int a1, int a2, char *a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // [sp+Ch] [bp-20h] BYREF
  int v16; // [sp+10h] [bp-1Ch] BYREF
  char v17; // [sp+14h] [bp-18h]
  int v18; // [sp+18h] [bp-14h]
  int v19; // [sp+1Ch] [bp-10h]
  int v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]

  ((void (*)(void))loc_11EB44)();
  v7 = *(_DWORD *)(dword_4872D8 + 424);
  if ( !v7 )
    return 0;
  v8 = 0;
  v17 = 1;
  v16 = v7;
  v18 = a2;
  v19 = a4;
  v20 = 3;
  v21 = sub_12B4B8(v7, a3);
  while ( 1 )
  {
    v9 = sub_12B754(&v16);
    if ( !v9 )
      break;
    v15 = 0;
    v10 = sub_1473C0(v9);
    v11 = sub_C2F28(
            *(_DWORD **)(*(_DWORD *)(v10 + 32) + 4 * (a2 + 2)),
            a3,
            a4,
            (int (__fastcall *)(int, int))sub_C3254,
            (int)&v15);
    if ( v11 )
    {
      v12 = sub_21B804(v11);
      if ( !sub_25BD54(v12, a3) )
        return v10;
    }
    if ( v15 )
    {
      v13 = sub_21B804(v15);
      if ( !sub_25BD54(v13, a3) )
        v8 = v10;
    }
  }
  return v8;
}
