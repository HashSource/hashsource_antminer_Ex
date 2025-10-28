int __fastcall set_baud_dash(int a1, int a2)
{
  int v2; // r3
  int v5; // r2
  void (__fastcall *v6)(int, int, int); // r3
  int v7; // r1
  int v8; // r5
  int v9; // r0
  int v10; // r2
  int v11; // r12
  int v12; // r9
  int v13; // r3
  int (__fastcall *v14)(int, _DWORD *); // r2
  int v15; // r0
  int v16; // r8
  int v17; // r6
  int v18; // r5
  int (__fastcall *v20)(int, _DWORD *, int); // r9
  _DWORD v21[2]; // [sp+0h] [bp-14h] BYREF
  int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  LOBYTE(v2) = 0;
  v5 = *(_DWORD *)(a1 + 296) - 1;
  do
  {
    *(_BYTE *)++v5 = v2;
    v2 = (unsigned __int8)(v2 + 3);
  }
  while ( v2 != 210 );
  v6 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v7 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 3;
  v6(a1, v7, 70);
  v8 = 0;
  sub_59460(a1);
  v21[0] = -1597760975;
  v22 = 1835009;
  v21[1] = 0;
  v23 = 0;
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v21);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = v9;
  LOBYTE(v22) = 0;
  if ( v11 <= 0 )
  {
    if ( (_UNKNOWN *)a2 != &unk_16E360 )
    {
      if ( a2 <= (int)&unk_16E360 )
        goto LABEL_9;
      if ( a2 != 3125000 )
      {
        if ( a2 > 3125000 )
        {
          if ( a2 != 6250000 && a2 != 12500000 )
            goto LABEL_18;
        }
        else
        {
          if ( a2 == 1562500 )
            goto LABEL_40;
          if ( a2 != 3000000 )
            goto LABEL_18;
        }
      }
      LOBYTE(v22) = 0;
      goto LABEL_13;
    }
LABEL_40:
    v16 = -1601961679;
    v17 = -1597767375;
    goto LABEL_19;
  }
  while ( 1 )
  {
    ++v8;
    v10 = -858993459 * v8;
    if ( v8 >= v11 )
      break;
    if ( v8 % 5u == 4 )
    {
      v13 = *(_DWORD *)(a1 + 240);
      v21[0] = -1601955279;
      v14 = *(int (__fastcall **)(int, _DWORD *))(a1 + 156);
      BYTE1(v22) = v13 * v8;
      v15 = v14(a1, v21);
      v11 = *(_DWORD *)(a1 + 196);
      v12 = v15;
    }
  }
  if ( (_UNKNOWN *)a2 == &unk_16E360 )
    goto LABEL_40;
  if ( a2 > (int)&unk_16E360 )
  {
    if ( a2 != 3125000 )
    {
      if ( a2 <= 3125000 )
      {
        if ( a2 != 1562500 )
        {
          if ( a2 != 3000000 )
            goto LABEL_18;
          goto LABEL_32;
        }
        goto LABEL_40;
      }
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_18;
    }
LABEL_32:
    v16 = -1601961935;
    v17 = -1597767631;
    goto LABEL_19;
  }
LABEL_9:
  if ( a2 != 460800 )
  {
    if ( a2 <= 460800 )
    {
      if ( a2 == 38400 )
      {
        v16 = -1601941455;
        v17 = -1597747151;
        v18 = 0;
        LOBYTE(v22) = 0;
        if ( v11 <= 0 )
          goto LABEL_13;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    if ( a2 == 921600 || a2 == 1041666 )
    {
      v16 = -1601961423;
      v17 = -1597767119;
      goto LABEL_19;
    }
LABEL_18:
    v16 = -1601955279;
    v17 = -1597760975;
    goto LABEL_19;
  }
  v16 = -1601960399;
  v17 = -1597766095;
LABEL_19:
  v18 = 0;
  LOBYTE(v22) = 0;
  if ( v11 <= 0 )
    goto LABEL_13;
  do
  {
LABEL_20:
    v20 = *(int (__fastcall **)(int, _DWORD *, int))(a1 + 156);
    BYTE1(v22) = *(_DWORD *)(a1 + 240) * v18;
    if ( v18 && (v10 = -858993459 * v18, v18 % 5u == 4) )
    {
      v21[0] = v16;
      v12 = v20(a1, v21, v10);
    }
    else
    {
      v21[0] = v17;
      v12 = v20(a1, v21, v10);
    }
    ++v18;
  }
  while ( *(_DWORD *)(a1 + 196) > v18 );
LABEL_13:
  sleep(1u);
  return v12;
}
